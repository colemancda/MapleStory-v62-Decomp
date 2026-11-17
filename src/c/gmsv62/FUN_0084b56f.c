/* FUN_0084b56f - 0x0084b56f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084b56f(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x90);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0084b5ed(*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_0084ecb5();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc6a2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0084ecd2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


