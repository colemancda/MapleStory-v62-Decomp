/* FUN_50c090b0 - 0x50c090b0 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c090b0(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50c135c8;
  puVar1 = (undefined4 *)extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(extraout_ECX);
  }
  *extraout_ECX = &PTR_FUN_50c13658;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_50c09456();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50c13634;
  return;
}


