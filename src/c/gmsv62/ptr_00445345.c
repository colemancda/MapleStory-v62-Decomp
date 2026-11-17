/* ptr_00445345 - 0x00445345 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00445345(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_004113e5();
  iVar1 = unaff_EBP + -0x3c;
  uVar3 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar4 = uVar3;
  FUN_00424df4(uVar3,uVar3,iVar1);
  FUN_00424f2f(uVar3,uVar4,iVar1);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_00424e27();
  uVar2 = FUN_0042503d();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  FUN_00424e27();
  FUN_00444e05();
  FUN_00424aee();
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  FUN_00424e27();
  iVar1 = FUN_0042a378();
  FUN_004295f1(iVar1 + *(int *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00424e27();
  FUN_004113e5();
  iVar1 = unaff_EBP + -0x3c;
  uVar3 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar4 = uVar3;
  FUN_00424df4(uVar3,uVar3,iVar1);
  FUN_00424f2f(uVar3,uVar4,iVar1);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_00424e27();
  uVar2 = FUN_0042503d();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  FUN_00424e27();
  FUN_00444e05();
  FUN_00424aee();
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  FUN_00424e27();
  iVar1 = FUN_0042a378();
  FUN_004295f1(iVar1 + *(int *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424e27();
  FUN_004113e5();
  iVar1 = unaff_EBP + -0x4c;
  uVar3 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uVar4 = uVar3;
  FUN_00424df4(uVar3,uVar3,iVar1);
  FUN_00424f2f(uVar3,uVar4,iVar1);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


