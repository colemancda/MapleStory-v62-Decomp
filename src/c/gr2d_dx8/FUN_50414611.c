/* FUN_50414611 - 0x50414611 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50414611(undefined4 param_1)

{
  HMODULE pHVar1;
  
  if (DAT_50438fd4 == (FARPROC)0x0) {
    if (DAT_50438fd0 != (FARPROC)0x0) goto LAB_5041469a;
    pHVar1 = GetModuleHandleA("d3d8.dll");
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = LoadLibraryA("d3d8.dll");
      if (pHVar1 != (HMODULE)0x0) {
        DAT_50438fd4 = GetProcAddress(pHVar1,"DebugSetMute");
      }
    }
    pHVar1 = GetModuleHandleA("d3d8d.dll");
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = LoadLibraryA("d3d8d.dll");
      if (pHVar1 != (HMODULE)0x0) {
        DAT_50438fd0 = GetProcAddress(pHVar1,"DebugSetMute");
      }
    }
    if (DAT_50438fd4 != (FARPROC)0x0) goto LAB_50414686;
  }
  else {
LAB_50414686:
    (*DAT_50438fd4)(param_1);
  }
  if (DAT_50438fd0 == (FARPROC)0x0) {
    return;
  }
LAB_5041469a:
                    /* WARNING: Could not recover jumptable at 0x5041469a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_50438fd0)();
  return;
}


