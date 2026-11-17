#!/usr/bin/env python3
"""Tag classes with roles from the Win32 imports their methods reach.

usage: class_roles.py PE PROGRESS.csv MODULE VTABLES.csv OUT.csv
A class's seeds are its vtable slot functions and its installers (constructors/destructors).
Direct calls are followed up to 3 levels; calls and jumps through import-table slots name the
imports reached. Imports are grouped into roles. A role is reported only when the imports behind it
are distinctive (reached by under a third of all classes), so ubiquitous helpers do not tag everything.
This is a navigation aid, NOT a name: the role says what a class touches, not what it is.
Imports resolved at run time with GetProcAddress are not visible here.
"""
import csv, collections, re, sys
import capstone, pefile
csv.field_size_limit(1 << 30)

ROLES = [
    ("network", r"^(ws2_32|wsock32|wininet)\."),
    ("window", r"^user32\.(CreateWindow|RegisterClass|DefWindowProc|ShowWindow|SetWindowPos|MoveWindow|DispatchMessage|PeekMessage|GetMessage|PostMessage|SendMessage|DestroyWindow|UpdateWindow|MessageBox|SetCursor|ShowCursor|GetCursorPos|ClipCursor|SetCapture|GetClientRect|GetWindowRect|AdjustWindowRect)"),
    ("input", r"^(user32\.(GetAsyncKeyState|GetKeyState|GetKeyboardState|GetKeyboardLayout|MapVirtualKey|ToAscii)|imm32\.|dinput8?\.)"),
    ("gdi-text", r"^gdi32\.(CreateFont|TextOut|GetTextExtent|GetTextMetrics|SetTextColor|CreateDIBSection|CreateCompatibleDC|SelectObject|SetBkMode|ExtTextOut)"),
    ("file-io", r"^kernel32\.(CreateFile|ReadFile|WriteFile|FindFirstFile|FindNextFile|GetFileAttributes|DeleteFile|GetFileSize|SetFilePointer|CreateFileMapping|MapViewOfFile|GetFullPathName|GetTempPath)"),
    ("registry", r"^advapi32\.Reg"),
    ("threads-sync", r"^kernel32\.(CreateThread|ResumeThread|WaitForSingleObject|WaitForMultipleObjects|CreateEvent|SetEvent|ResetEvent|CreateMutex|ReleaseMutex|CreateSemaphore|TlsAlloc)"),
    ("crypto", r"^advapi32\.Crypt|^crypt32\."),
    ("anti-tamper", r"^(kernel32\.(CreateToolhelp32Snapshot|Process32|Module32|Thread32|OpenProcess|IsDebuggerPresent|VirtualProtect|VirtualQuery|GetModuleFileName)|advapi32\.(LookupPrivilegeValue|AdjustTokenPrivileges|OpenProcessToken)|netapi32\.)"),
    ("audio", r"^(winmm\.(waveOut|waveIn|mixer|mci|midi)|dsound\.)"),
    ("com-ole", r"^(ole32|oleaut32)\."),
    ("shell-system", r"^(shell32|shlwapi|version)\.|^kernel32\.(GetVersion|GetSystemInfo|GetVolumeInformation|GetComputerName|GetWindowsDirectory|GetSystemDirectory)|^user32\.(SystemParametersInfo|EnumDisplay|GetSystemMetrics)"),
]
ROLE_RE = [(n, re.compile(p, re.I)) for n, p in ROLES]

def main(pe_path, progress, module, vt_csv, out):
    pe = pefile.PE(pe_path); base = pe.OPTIONAL_HEADER.ImageBase; img = pe.get_memory_mapped_image()
    iat = {}
    for ent in pe.DIRECTORY_ENTRY_IMPORT:
        dll = ent.dll.decode().lower().rsplit(".", 1)[0]
        for imp in ent.imports:
            nm = imp.name.decode() if imp.name else "ord%d" % imp.ordinal
            iat[imp.address] = "%s.%s" % (dll, nm)
    rows = [r for r in csv.DictReader(open(progress)) if r["module"] == module and not r["status"].startswith("EXCLUDED")]
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    calls, imps = {}, {}
    mem = re.compile(r"dword ptr \[(0x[0-9a-f]+)\]$")
    for r in rows:
        f = int(r["addr"], 16); n = int(r["size"])
        cs, im = set(), set()
        for ins in md.disasm(img[f - base:f - base + n], f):
            if ins.mnemonic in ("call", "jmp"):
                if ins.op_str.startswith("0x"):
                    cs.add(int(ins.op_str, 16))
                elif (m := mem.search(ins.op_str)) and int(m.group(1), 16) in iat:
                    im.add(iat[int(m.group(1), 16)])
        calls[f], imps[f] = cs, im
    vts = {int(r["vtable"], 16): r for r in csv.DictReader(open(vt_csv))}
    memo = {}
    def reach(f, d):
        key = (f, d)
        if key in memo: return memo[key]
        s = set(imps.get(f, ()))
        if d > 0:
            for c in calls.get(f, ()):
                if c in calls: s |= reach(c, d - 1)
        memo[key] = s
        return s
    per = {}
    for v, r in vts.items():
        seeds = [int(x, 16) for x in r["slot_addrs"].split()] + [int(x, 16) for x in r["installers"].split()[:40]]
        s = set()
        for f in seeds:
            if f in calls: s |= reach(f, 3)
        per[v] = s
    roles_of = {}
    for v, s in per.items():
        roles_of[v] = {n for n, rx in ROLE_RE if any(rx.search(i) for i in s)}
    freq = collections.Counter(r for rs in roles_of.values() for r in rs)
    total = len(vts)
    common = {r for r, c in freq.items() if c > total / 3}
    with open(out, "w", newline="") as fo:
        w = csv.writer(fo); w.writerow(["vtable", "roles", "imports_sample"])
        for v in sorted(vts):
            rs = sorted(roles_of[v] - common)
            if rs:
                ex = sorted(i for i in per[v] if any(rx.search(i) for n, rx in ROLE_RE if n in rs))[:6]
                w.writerow(["%08x" % v, " ".join(rs), " ".join(ex)])
    print("%d classes; roles reached by over a third of classes (not reported): %s" % (total, sorted(common)))
    print("role frequency:", dict(freq.most_common()))
    print("classes with a distinctive role:", sum(1 for v in roles_of if roles_of[v] - common))

if __name__ == "__main__":
    main(*sys.argv[1:6])
