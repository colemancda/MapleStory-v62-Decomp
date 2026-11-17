/* FUN_00776136 - 0x00776136 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00776136(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00879bb8();
  local_28 = 0x69c;
  iStack_2c = 0x776153;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_28 = 0x776166;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
  local_28 = 0x77618d;
  FUN_004c26c4();
  local_28 = 0;
  iStack_2c = 1;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_30;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22(&uStack_30,0x1121);
  uVar4 = 0;
  uVar3 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677(3,0);
  FUN_007eddac(uVar3,uVar4);
  local_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0xe;
  FUN_007edfe1(&DAT_00978474,4);
  local_28 = 0x7761de;
  FUN_007e6e3c();
  local_28 = 0x7761e6;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    local_28 = unaff_EBP + -0x10;
    iStack_2c = 0x7761f7;
    FUN_00641b6c();
    local_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0x83;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0060142b();
    local_28 = 3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_2c = 0x776218;
    FUN_00457cda();
    iStack_2c = unaff_EBP + -0x10;
    *(int **)(unaff_EBP + -0x14) = &local_28;
    local_28 = 0;
    uStack_30 = 0x776229;
    FUN_00414f8b();
    iStack_2c = 0x776231;
    FUN_00459cb5();
    local_28 = unaff_EBP + -0x2c;
    iStack_2c = 0x776240;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_28 = 0x77624c;
    FUN_0045ebca();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_28 = 0x776258;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_28 = 0x776264;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


