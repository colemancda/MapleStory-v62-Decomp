/* FUN_0050febd - 0x0050febd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050febd(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x414);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00698cca(*(undefined4 *)(unaff_EBP + 8),extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_0051022c();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc6a2();
  FUN_00510249();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00510249();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


