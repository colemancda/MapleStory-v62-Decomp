/* FUN_00641e75 - 0x00641e75 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00641e75(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  iStack_2c = unaff_EBP + -0x10;
  uStack_30 = 0x641e93;
  FUN_0045cdbc();
  iStack_2c = 0x69c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_30 = 0x641ea7;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    iStack_2c = 0;
  }
  else {
    iStack_2c = 0x641eb9;
    iStack_2c = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_30 = 0x641ecb;
  iVar1 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar1 + 4);
  iStack_2c = 0x641ed9;
  FUN_004c26c4();
  iStack_2c = 0;
  uStack_30 = 0;
  *(undefined4 **)(unaff_EBP + 0x10) = &uStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450368(unaff_EBP + -0x10);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar3 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004c2677(4,uVar2);
  FUN_007eddac(uVar3,uVar2);
  iStack_2c = 0x641f0e;
  FUN_007ee0f6();
  iStack_2c = 0x641f16;
  FUN_007e6e3c();
  iStack_2c = 0x641f1e;
  uVar2 = FUN_004bc6a2();
  iStack_2c = 0;
  *(undefined4 *)(unaff_EBP + 0x10) = uVar2;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xd8);
  uStack_30 = 0;
  uStack_34 = 0x38;
  FUN_0060142b();
  iStack_2c = 4;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_30 = 0x641f44;
  FUN_00457cda();
  if (*(int *)(unaff_EBP + 0x10) == 1) {
    iStack_2c = 1;
    uStack_30 = 0x641f54;
    FUN_00457cda();
    uStack_30 = 0x641f5d;
    iStack_2c = iVar1;
    FUN_00457d37();
  }
  else {
    iStack_2c = 0;
    uStack_30 = 0x641f68;
    FUN_00457cda();
  }
  iStack_2c = unaff_EBP + -0x28;
  uStack_30 = 0x641f77;
  FUN_004751b2();
  if ((*(int *)(unaff_EBP + 0x10) == 1) && (iVar1 == -2)) {
    iStack_2c = 0;
    uStack_30 = 0x641f8e;
    FUN_008319e8();
  }
  iStack_2c = 0x641f95;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_2c = 0x641fa1;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_2c = 0x641fac;
  FUN_004c26e1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_2c = 0x641fb8;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


