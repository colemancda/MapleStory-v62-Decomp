/* FUN_5000cbb3 - 0x5000cbb3 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000cbb3(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  extraout_ECX[-1] = &PTR_LAB_5001554c;
  *extraout_ECX = &PTR_FUN_50015548;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = &PTR_ptr_5000ca12_50015544;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 1;
  (**(code **)(extraout_ECX[-1] + 0xc))();
  InterlockedDecrement(&DAT_5001da54);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5000cc0d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


