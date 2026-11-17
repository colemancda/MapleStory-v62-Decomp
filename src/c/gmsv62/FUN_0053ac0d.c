/* FUN_0053ac0d - 0x0053ac0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053ac0d(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = FUN_00455c59(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  uVar2 = FUN_00458d57(5,*(undefined4 *)(iVar1 + 0x1b),*(undefined4 *)(iVar1 + 0x1f));
  iVar1 = FUN_00458c4f(unaff_EBP + -0x18,5,uVar2);
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00449913(0);
  }
  if (iVar1 == 0) {
    FUN_0048b92c(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = FUN_0045e2eb(0,0);
  FUN_0053ad93(uVar2,uVar3,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x1c) != 0)) {
    FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


