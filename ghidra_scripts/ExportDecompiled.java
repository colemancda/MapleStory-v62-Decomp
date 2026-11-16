// Decompiles the functions listed in a file (hex address and optional name per line) and writes one
// C file per function into an output directory.
// Usage (headless post-script): -postScript ExportDecompiled.java ADDRS.txt OUTDIR
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class ExportDecompiled extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        List<String> lines = Files.readAllLines(Paths.get(args[0]));
        File outDir = new File(args[1]);
        outDir.mkdirs();
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        long base = currentProgram.getImageBase().getOffset();
        int ok = 0, fail = 0;
        for (String l : lines) {
            l = l.trim();
            if (l.isEmpty()) continue;
            String[] parts = l.split("\\s+");
            Address a = toAddr(Long.parseLong(parts[0], 16));
            Function f = getFunctionAt(a);
            if (f == null) {
                // vtable-only methods are found by the project's code-pointer scan, not by Ghidra
                disassemble(a);
                f = createFunction(a, parts.length > 1 ? parts[1] : null);
            }
            if (f == null) { println("no function at " + l); fail++; continue; }
            DecompileResults r = di.decompileFunction(f, 60, monitor);
            String name = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
            File out = new File(outDir, name + ".c");
            try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
                pw.printf("/* %s - 0x%08x in %s (image base 0x%08x).%n * Raw Ghidra decompiler output, not yet reviewed. */%n",
                    f.getName(), a.getOffset(), currentProgram.getName(), base);
                pw.println("#include \"ghidra_types.h\"");
                pw.println();
                if (r.decompileCompleted()) { pw.println(r.getDecompiledFunction().getC()); ok++; }
                else { pw.println("/* decompile failed: " + r.getErrorMessage() + " */"); fail++; }
            }
        }
        println("ExportDecompiled: " + ok + " ok, " + fail + " failed -> " + outDir);
    }
}
