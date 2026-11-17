/* FUN_0053fc39 - 0x0053fc39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053fc39(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar3;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint local_2c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0x3ec) goto LAB_0053fe5e;
  uVar1 = *(int *)(*(int *)(extraout_ECX + 0x8c) + 0x60) + 1;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(extraout_ECX + 0x94) + 0x60);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(extraout_ECX + 0x9c) + 0x60);
  local_2c = unaff_EBP + 8;
  iStack_30 = 0x53fc8b;
  FUN_0045b90e();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_38 = uVar1;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iStack_30 = unaff_EBP + 8;
    local_2c = 0;
    uStack_34 = 0x53fca3;
    iVar2 = FUN_007d1e11();
    if (iVar2 != 0) {
      iStack_30 = unaff_EBP + 8;
      *(uint **)(unaff_EBP + -0x14) = &local_2c;
      local_2c = 0;
      uStack_34 = 0x53fcbe;
      FUN_00414f8b();
      iStack_30 = 0;
      uStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_3c = 1;
      FUN_0052b501();
      local_2c = 0;
      iStack_30 = 0;
      uStack_34 = 0xd9;
      uStack_38 = 0x53fcdf;
      FUN_0060142b();
      local_2c = 6;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_30 = 0x53fced;
      FUN_00457cda();
      iStack_30 = 0x53fcf6;
      local_2c = uVar1;
      FUN_00457d37();
      local_2c = *(uint *)(unaff_EBP + -0x10);
      iStack_30 = 0x53fd01;
      FUN_00457d37();
      local_2c = 0;
      iStack_30 = 0x53fd0a;
      FUN_00457d37();
      local_2c = 0;
      iStack_30 = 0x53fd13;
      FUN_00457d37();
      iStack_30 = unaff_EBP + 8;
      *(uint **)(unaff_EBP + -0x14) = &local_2c;
      local_2c = 0;
      uStack_34 = 0x53fd24;
      FUN_00414f8b();
      iStack_30 = 0x53fd2c;
      FUN_00459cb5();
      local_2c = unaff_EBP - 0x28;
      iStack_30 = 0x53fd3b;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0053fd41;
    }
    uStack_3c = local_2c;
    *(uint **)(unaff_EBP + -0x14) = &uStack_3c;
    uVar3 = 0x325;
LAB_0053fe22:
    local_2c = 0;
    iStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    FUN_00679d22(&uStack_3c,uVar3);
    FUN_007db3ad();
    local_2c = -(uint)(*(int *)(extraout_ECX + 0xa4) != 0) & *(int *)(extraout_ECX + 0xa4) + 4U;
    iStack_30 = 0x53fe52;
    FUN_00817f6e();
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
    }
    if (iVar2 < 2) {
      *(uint **)(unaff_EBP + -0x18) = &uStack_3c;
      uVar3 = 0x11b0;
      uStack_3c = extraout_ECX_00;
      goto LAB_0053fe22;
    }
    iStack_30 = unaff_EBP + 8;
    *(uint **)(unaff_EBP + -0x18) = &local_2c;
    local_2c = 0;
    uStack_34 = 0x53fd87;
    FUN_00414f8b();
    iStack_30 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_3c = 1;
    FUN_0052b501();
    local_2c = 0;
    iStack_30 = 0;
    uStack_34 = 0xd9;
    uStack_38 = 0x53fdaa;
    FUN_0060142b();
    local_2c = 6;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_30 = 0x53fdb8;
    FUN_00457cda();
    iStack_30 = 0x53fdc1;
    local_2c = uVar1;
    FUN_00457d37();
    local_2c = *(uint *)(unaff_EBP + -0x10);
    iStack_30 = 0x53fdcc;
    FUN_00457d37();
    local_2c = 0;
    iStack_30 = 0x53fdd5;
    FUN_00457d37();
    local_2c = *(uint *)(unaff_EBP + -0x14);
    iStack_30 = 0x53fde0;
    FUN_00457d37();
    iStack_30 = unaff_EBP + 8;
    *(uint **)(unaff_EBP + -0x18) = &local_2c;
    local_2c = 0;
    uStack_34 = 0x53fdf1;
    FUN_00414f8b();
    iStack_30 = 0x53fdf9;
    FUN_00459cb5();
    local_2c = unaff_EBP - 0x28;
    iStack_30 = 0x53fe08;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0053fd41:
    local_2c = 0x53fd46;
    FUN_0045ebca();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_2c = 0x53fe5e;
  FUN_00414ebb();
LAB_0053fe5e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


