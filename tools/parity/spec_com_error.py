"""Parity spec for _com_error: constructor (0x403880), copy constructor (0x4038d2), destructor (0x4038ff)."""
import os, struct
from collections import namedtuple

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
ORIG_EXE = os.environ.get("GMS_EXE", "/home/coleman/Developer/Recomps/MapleStory/orig/GMSv62.exe")
NEW_DLL = os.path.join(REPO, "build_cxx", "com_error.dll")
NEW_MAP = os.path.join(REPO, "build_cxx", "com_error.map")
ORIG_VTABLE = 0x8F3E88
NEW_VTABLE_SYMBOL = "??_7_com_error@@6B@"

Fn = namedtuple("Fn", "label orig new_symbol make_case coverage")
u32 = lambda rng: rng.getrandbits(32)

def ctor_case(rng):
    return {"this": rng.randbytes(16), "hr": u32(rng), "perr": rng.random() < 0.6,
            "addref": rng.choice([0, 1, 2, 0x100, 0xFFFFFF00, 0xFFFFFFFF, u32(rng)])}
def ctor_cov(c):
    flag = (c["addref"] & 0xFF) != 0
    return ["perr=%s,addref=%s" % ("set" if c["perr"] else "null", "on" if flag else "off")]

def copy_case(rng):
    return {"this": rng.randbytes(16), "that": [u32(rng), u32(rng), None, u32(rng)], "perr": rng.random() < 0.6}
def copy_cov(c): return ["perr=" + ("set" if c["perr"] else "null")]

def dtor_case(rng):
    return {"this": rng.randbytes(16), "perr": rng.random() < 0.6, "msg": rng.choice([0, u32(rng) | 1])}
def dtor_cov(c): return ["perr=%s,msg=%s" % ("set" if c["perr"] else "null", "set" if c["msg"] else "null")]

FUNCTIONS = [
    Fn("_com_error(hr, perrinfo, fAddRef)", 0x403880, "??0_com_error@@QAE@JPAUIErrorInfo@@_N@Z", ctor_case, ctor_cov),
    Fn("_com_error(const _com_error &)", 0x4038D2, "??0_com_error@@QAE@ABV0@@Z", copy_case, copy_cov),
    Fn("~_com_error()", 0x4038FF, "??1_com_error@@UAE@XZ", dtor_case, dtor_cov),
]

def _install(h):
    """Hooks for the external calls both images make: LocalFree and IErrorInfo::{QueryInterface,AddRef,Release}."""
    from parity import read_map
    h.h_localfree = h.add_hook("LocalFree", 1)
    h.h_qi = h.add_hook("IErrorInfo::QueryInterface", 3)
    h.h_addref = h.add_hook("IErrorInfo::AddRef", 1, lambda this: 2)
    h.h_release = h.add_hook("IErrorInfo::Release", 1, lambda this: 1)
    for key in ("orig", "new"):
        slot = h.images[key].import_slot("LocalFree")
        if slot is not None:                                      # a variant that never calls it has no slot
            h.uc.mem_write(slot, struct.pack("<I", h.h_localfree))
    h.new_vtable = read_map(h.new_map)[NEW_VTABLE_SYMBOL]
    h.ready = True

def setup(h, which, case):
    if not getattr(h, "ready", False): _install(h)
    vt = h.alloc(struct.pack("<3I", h.h_qi, h.h_addref, h.h_release))
    fake = h.alloc(struct.pack("<I", vt) + b"\0" * 12)          # an IErrorInfo-like COM object
    pairs = {h.new_vtable: ORIG_VTABLE}
    this = h.alloc(case["this"])
    if "hr" in case:                                              # constructor
        return {"ecx": this, "args": [case["hr"], fake if case["perr"] else 0, case["addref"]],
                "observe": [(this, 16), (fake, 16)], "pairs": pairs}
    if "that" in case:                                            # copy constructor
        v, hr, _, msg = case["that"]
        that = h.alloc(struct.pack("<IIII", v, hr, fake if case["perr"] else 0, msg))
        return {"ecx": this, "args": [that], "observe": [(this, 16), (that, 16), (fake, 16)], "pairs": pairs}
    b = bytearray(case["this"])                                   # destructor
    struct.pack_into("<I", b, 8, fake if case["perr"] else 0); struct.pack_into("<I", b, 12, case["msg"])
    h.uc.mem_write(this, bytes(b))
    return {"ecx": this, "args": [], "observe": [(this, 16), (fake, 16)], "pairs": pairs}
