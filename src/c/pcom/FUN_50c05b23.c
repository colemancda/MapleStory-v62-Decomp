/* FUN_50c05b23 - 0x50c05b23 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c05b23(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_50c1084c((int)(extraout_ECX + 3));
    extraout_ECX[4] = 0;
  }
  if ((int *)extraout_ECX[2] != (int *)0x0) {
    FUN_50c02a85((int *)extraout_ECX[2]);
    extraout_ECX[2] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50c134e8;
  return;
}


