/* FUN_005c0f14 - 0x005c0f14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0f14(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  undefined *puStack_30;
  undefined *local_2c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_2c = (undefined *)0x5c0f40;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\a') {
    local_2c = (undefined *)0x5c0f50;
    uVar2 = FUN_0042452b();
    local_2c = (undefined *)(unaff_EBP + 8);
    puStack_30 = (undefined *)0x5c0f5f;
    local_2c = (undefined *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_30 = (undefined *)0x5c0f6c;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 8) != 0) {
      local_2c = (undefined *)(*(int *)(unaff_EBP + 8) + -0xc);
      puStack_30 = (undefined *)0x5c0f80;
      FUN_00434e38();
    }
    puStack_30 = (undefined *)(unaff_EBP + -0x18);
    *(undefined ***)(unaff_EBP + 8) = &local_2c;
    local_2c = (undefined *)0x0;
    FUN_00414f8b();
    puStack_30 = (undefined *)(uVar2 & 0xff);
    FUN_005c179f(unaff_EBP + -0x10);
    *(undefined ***)(unaff_EBP + 8) = &puStack_30;
    puStack_30 = extraout_ECX_00;
    local_2c = (undefined *)((((undefined *)(uVar2 & 0xff) < (undefined *)0x65) - 1 & 3) + 3);
  }
  else {
    local_2c = (undefined *)0x5c0fbe;
    uVar2 = FUN_0042452b();
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
    }
    else if (uVar2 == 1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0xb;
    }
    else if (uVar2 == 2) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0xc;
    }
    else if (uVar2 == 3) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0xd;
    }
    iVar5 = *(int *)(extraout_ECX + 0xd0);
    if (0 < iVar5) {
      if (iVar5 < 3) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else if (iVar5 == 3) {
        *(uint *)(unaff_EBP + -0x14) = ((*(uint *)(extraout_ECX + 0xc0) != uVar2) - 1 & 10) + 1;
      }
    }
    local_2c = (undefined *)(unaff_EBP + 8);
    puStack_30 = (undefined *)0x5c102c;
    local_2c = (undefined *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_30 = (undefined *)0x5c1039;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_2c = (undefined *)0x5c1045;
    FUN_00414ebb();
    local_2c = extraout_ECX_01;
    if (*(uint *)(extraout_ECX + 0xc0) != uVar2) {
      local_2c = (undefined *)0x0;
      puStack_30 = (undefined *)0x0;
      local_2c = (undefined *)FUN_004538dc(&DAT_00964da4);
      puStack_30 = (undefined *)(unaff_EBP + -0x1c);
      FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      local_2c = (undefined *)0x0;
      puStack_30 = (undefined *)0x0;
      iVar3 = FUN_004538dc(&DAT_00964da4);
      local_2c = (undefined *)((iVar5 - iVar3) + -3);
      puStack_30 = (undefined *)(unaff_EBP + 8);
      FUN_0045e08c();
      local_2c = (undefined *)0x1;
      puStack_30 = (undefined *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar4 = FUN_00415015(0x400,1);
      FUN_00471777(uVar4);
      local_2c = (undefined *)0xffffffff;
      puStack_30 = (undefined *)0x5c10c8;
      FUN_004150c0();
      local_2c = &DAT_00964da4;
      puStack_30 = (undefined *)(unaff_EBP + -0x28);
      FUN_004653c5();
      local_2c = (undefined *)(unaff_EBP + 8);
      puStack_30 = (undefined *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      local_2c = (undefined *)FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_30 = (undefined *)0x5c10f5;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      local_2c = extraout_ECX_02;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        local_2c = (undefined *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        puStack_30 = (undefined *)0x5c1109;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        local_2c = (undefined *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        puStack_30 = (undefined *)0x5c111e;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + 8) != 0) {
        local_2c = (undefined *)(*(int *)(unaff_EBP + 8) + -0xc);
        puStack_30 = (undefined *)0x5c1133;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        local_2c = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        puStack_30 = (undefined *)0x5c1148;
        FUN_00434e38();
      }
    }
    *(undefined ***)(unaff_EBP + -0x20) = &puStack_30;
    puStack_30 = local_2c;
    local_2c = *(undefined **)(unaff_EBP + -0x14);
  }
  uVar6 = 0xffffffff;
  uVar4 = FUN_00449713(0xffffffff);
  FUN_004dbb20(uVar4,uVar6);
  FUN_005c152d();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    local_2c = (undefined *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    puStack_30 = (undefined *)0x5c1181;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_2c = (undefined *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    puStack_30 = (undefined *)0x5c1196;
    FUN_00434e38();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


