/* FUN_006f2474 - 0x006f2474 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006f2474(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_a0;
  undefined *puStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_00879bb8();
  uStack_54 = 0x2d;
  uStack_58 = 0x8b;
  uStack_5c = 0x23;
  uStack_60 = 9;
  iStack_64 = unaff_EBP + -0x30;
  uStack_68 = 0x6f249c;
  (*DAT_0097b504)();
  uStack_68 = 0x41;
  uStack_6c = 0x8b;
  uStack_70 = 0x37;
  uStack_74 = 9;
  iStack_78 = unaff_EBP + -0x40;
  uStack_7c = 0x6f24ad;
  (*DAT_0097b504)();
  uStack_7c = 0x55;
  uStack_80 = 0x8b;
  uStack_84 = 0x4b;
  uStack_88 = 9;
  iStack_8c = unaff_EBP + -0x50;
  uStack_90 = 0x6f24be;
  (*DAT_0097b504)();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uStack_90 = *(undefined4 *)(unaff_EBP + 0x14);
  iStack_98 = unaff_EBP + -0x30;
  uStack_94 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_9c = (undefined *)0x6f24dd;
  iVar3 = (*DAT_0097b57c)();
  if (iVar3 == 0) {
    puStack_9c = *(undefined **)(unaff_EBP + 0x14);
    iStack_a0 = *(int *)(unaff_EBP + 0x10);
    iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x40);
    if (iVar3 == 0) {
      puStack_9c = *(undefined **)(unaff_EBP + 0x14);
      iStack_a0 = *(int *)(unaff_EBP + 0x10);
      iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x50);
      if (iVar3 != 0) {
        puStack_9c = (undefined *)0xfde;
        uVar5 = (uint)(*(int *)(extraout_ECX + 0xb1c) == 0);
        iStack_a0 = unaff_EBP + 0x14;
        puVar4 = (undefined4 *)FUN_00679d22();
        puStack_9c = (undefined *)*puVar4;
        iStack_a0 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_9c = (undefined *)0x6f262f;
        FUN_00414ebb();
        puStack_9c = (undefined *)0xfdb;
        iStack_a0 = unaff_EBP + 0x14;
        puVar4 = (undefined4 *)FUN_00679d22();
        puStack_9c = *(undefined **)(extraout_ECX + 0xb14 + uVar5 * 4);
        uVar7 = *puVar4;
        iStack_a0 = *(int *)(extraout_ECX + 0xb0c + uVar5 * 4);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00434e21(unaff_EBP + -0x10,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_9c = (undefined *)0x6f266c;
        FUN_00414ebb();
      }
      goto LAB_006f266e;
    }
    puStack_9c = (undefined *)0xfdc;
    iStack_a0 = unaff_EBP + 0x14;
    puVar4 = (undefined4 *)FUN_00679d22();
    puStack_9c = (undefined *)*puVar4;
    iStack_a0 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_9c = (undefined *)0x6f2599;
    FUN_00414ebb();
    puStack_9c = (undefined *)0xfdb;
    iStack_a0 = unaff_EBP + 0x14;
    puVar4 = (undefined4 *)FUN_00679d22();
    uVar7 = *puVar4;
    iVar3 = *(int *)(extraout_ECX + 0xb1c);
    puStack_9c = *(undefined **)(extraout_ECX + 0xb14 + iVar3 * 4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_a0 = *(int *)(extraout_ECX + 0xb0c + iVar3 * 4);
    FUN_00434e21(unaff_EBP + -0x10,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    puStack_9c = (undefined *)0xfda;
    iStack_a0 = unaff_EBP + 0x14;
    puVar4 = (undefined4 *)FUN_00679d22();
    puStack_9c = (undefined *)*puVar4;
    iStack_a0 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_9c = (undefined *)0x6f2513;
    FUN_00414ebb();
    puStack_9c = (undefined *)0xfdb;
    iStack_a0 = unaff_EBP + 0x14;
    puVar4 = (undefined4 *)FUN_00679d22();
    puStack_9c = *(undefined **)(extraout_ECX + 0xb08);
    uVar7 = *puVar4;
    iStack_a0 = *(int *)(extraout_ECX + 0xb04);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x10,uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  puStack_9c = (undefined *)0x6f254e;
  FUN_00414ebb();
LAB_006f266e:
  pcVar1 = *(char **)(unaff_EBP + -0x14);
  if ((((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) ||
      (pcVar2 = *(char **)(unaff_EBP + -0x10), pcVar2 == (char *)0x0)) || (*pcVar2 == '\0')) {
    puStack_9c = (undefined *)0x6f276c;
    FUN_0074d6fb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_9c = (undefined *)0x6f2778;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_9c = (undefined *)0x6f2784;
    FUN_00414ebb();
    uVar7 = 0;
  }
  else {
    iVar3 = *(int *)(pcVar2 + -4);
    if (*(int *)(pcVar2 + -4) < *(int *)(pcVar1 + -4)) {
      iVar3 = *(int *)(pcVar1 + -4);
    }
    *(undefined4 *)(unaff_EBP + 0x14) = 0;
    puStack_9c = &DAT_0096b140;
    iStack_a0 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004653c5();
    puStack_9c = (undefined *)(unaff_EBP + -0x10);
    iStack_a0 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_9c = (undefined *)FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_a0 = 0x6f26df;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_9c = (undefined *)0x6f26eb;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_9c = (undefined *)0x6f26f7;
    FUN_00414ebb();
    *(int **)(unaff_EBP + -0x20) = &iStack_a0;
    puStack_9c = (undefined *)(iVar3 * 6);
    FUN_00450368(unaff_EBP + 0x14);
    iVar3 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar3 = (**(code **)(iVar3 + 0x30))();
    iVar3 = iVar3 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar6 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar3);
    FUN_0074d8fb(iVar6 + 0x14 + *(int *)(unaff_EBP + 8),iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_9c = (undefined *)0x6f2744;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_9c = (undefined *)0x6f2750;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_9c = (undefined *)0x6f275c;
    FUN_00414ebb();
    uVar7 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


