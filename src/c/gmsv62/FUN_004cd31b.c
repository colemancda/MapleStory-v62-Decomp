/* FUN_004cd31b - 0x004cd31b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004cd31b(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 < iVar2) {
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(int *)(unaff_EBP + -0x14) = iVar2;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(int *)(unaff_EBP + -0x14) = iVar1;
  }
  iVar1 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  if (iVar1 < iVar2) {
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(int *)(unaff_EBP + -0x10) = iVar2;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(int *)(unaff_EBP + -0x10) = iVar1;
  }
  FUN_004cd508(*(undefined4 *)(extraout_ECX + 0x1c),unaff_EBP + -0x1c,
               *(undefined4 *)(unaff_EBP + 0x18));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


