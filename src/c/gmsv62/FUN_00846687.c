/* FUN_00846687 - 0x00846687 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00846687(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int iVar8;
  int unaff_EBP;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  int iStack_7c;
  undefined *puStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  
  FUN_00879bb8();
  uStack_6c = 100;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0x1f;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined ***)(unaff_EBP + -0x68) = &PTR_FUN_008f3518;
  iStack_70 = 0x8466c2;
  FUN_006729a2();
  uStack_6c = 0x80;
  iStack_70 = unaff_EBP + -0x68;
  uStack_74 = *(undefined4 *)(unaff_EBP + 8);
  puStack_78 = (undefined *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_7c = 0x8466e1;
  iStack_7c = FUN_00665371();
  uStack_80 = 0x8466ea;
  FUN_006f5512();
  puStack_78 = (undefined *)0x8466f2;
  uVar3 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x20) = uVar3 & 0xffff;
  puStack_78 = (undefined *)0x846700;
  cVar2 = FUN_006f5bb6();
  if (cVar2 == '\0') goto LAB_00846a2f;
  piVar4 = *(int **)(unaff_EBP + -100);
  if (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + *(int *)(unaff_EBP + -0x60);
    for (; piVar4 < piVar1; piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        iVar6 = *piVar4;
        goto LAB_00846728;
      }
    }
  }
  iVar6 = 0;
LAB_00846728:
  *(int *)(unaff_EBP + -0x1c) = iVar6;
  iVar8 = extraout_ECX;
  while (iVar6 != 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    puStack_78 = (undefined *)(unaff_EBP + -0x30);
    iStack_7c = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_80 = 0x846750;
    piVar4 = (int *)FUN_0084f449();
    puStack_78 = (undefined *)*piVar4;
    *(undefined **)(unaff_EBP + -0x14) = puStack_78;
    if ((int)puStack_78 < 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_00846786:
      if (puStack_78 == (undefined *)0x4faa8e) {
        puStack_78 = (undefined *)(unaff_EBP + -0x38);
        iStack_7c = 0x846799;
        FUN_00455c59();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          puStack_78 = (undefined *)0x0;
          iStack_7c = 0x4faa8e;
          uStack_80 = *(undefined4 *)(unaff_EBP + -0x34);
          uStack_84 = 0x8467b4;
          uVar5 = FUN_00650dae();
          puStack_78 = *(undefined **)(*(int *)(unaff_EBP + -0x34) + 0x35);
          iStack_7c = *(int *)(unaff_EBP + -0x34) + 0x33;
          uStack_80 = 0x8467c5;
          uStack_80 = FUN_0045f03e();
          uStack_80 = uStack_80 & 0xff;
          uStack_88 = 0x4faa8e;
          iStack_8c = 0x8467d0;
          uStack_84 = uVar5;
          uVar5 = FUN_0065435f();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
          puStack_78 = (undefined *)0x0;
          *(undefined ***)(unaff_EBP + -0x24) = &puStack_78;
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_88;
          iStack_8c = 0x80;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar6 = FUN_00670b9e();
          FUN_006f5512(iVar6 + 0xc);
          iStack_8c = *(int *)(unaff_EBP + -0x14);
          iVar8 = *(int *)(unaff_EBP + -0x18);
          FUN_00684733(2,0x4faa8e);
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          puStack_78 = (undefined *)0x0;
          iStack_7c = 0x846826;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
      }
      else {
        if (*(int *)(unaff_EBP + -0x10) == 1) {
          puStack_78 = (undefined *)-(int)puStack_78;
        }
        *(undefined **)(unaff_EBP + -0x14) = puStack_78;
        puStack_78 = (undefined *)0x0;
        *(undefined ***)(unaff_EBP + -0x28) = &puStack_78;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_88;
        iStack_8c = 0x80;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar6 = FUN_00670b9e();
        FUN_006f5512(iVar6 + 0xc);
        iStack_8c = 0x846868;
        iVar6 = FUN_00670b9e();
        iStack_8c = *(int *)(iVar6 + 0x1c);
        iVar8 = *(int *)(unaff_EBP + -0x18);
        FUN_00684733(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14));
      }
    }
    else {
      iStack_7c = 0x84676e;
      iVar6 = FUN_0064d61f();
      if (iVar6 != 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
      }
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        puStack_78 = *(undefined **)(unaff_EBP + -0x14);
        goto LAB_00846786;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      puStack_78 = (undefined *)0x0;
      iStack_7c = 0x846893;
      FUN_006717b2();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
    iVar6 = *(int *)(unaff_EBP + -0x1c);
  }
  puStack_78 = &DAT_0097f7a8;
  iStack_7c = unaff_EBP + -0x40;
  uStack_80 = 0x8468b2;
  FUN_006f5b1a();
  puStack_78 = (undefined *)0x8468b9;
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    puStack_78 = (undefined *)0x8468c8;
    piVar4 = (int *)FUN_004c2648();
    if (*piVar4 / 10000 == 0xc1) {
      puStack_78 = (undefined *)0x8468e4;
      iVar6 = FUN_004865cc();
      if (iVar6 != 0) {
        puStack_78 = (undefined *)0x4faa8e;
        iStack_7c = 0x8468f4;
        FUN_007bd2b0();
        goto LAB_00846910;
      }
    }
    puStack_78 = (undefined *)0x846907;
    puVar7 = (undefined4 *)FUN_004c2648();
    puStack_78 = (undefined *)*puVar7;
    iStack_7c = 0x846910;
    FUN_00793488();
  }
LAB_00846910:
  puStack_78 = (undefined *)0x846915;
  piVar4 = (int *)FUN_005a9f5e();
  iVar6 = *piVar4;
  puStack_78 = (undefined *)0x0;
  iStack_7c = *(undefined4 *)(unaff_EBP + -0x20);
  *(int **)(unaff_EBP + -0x18) = piVar4;
  *(int **)(unaff_EBP + -0x28) = &iStack_8c;
  FUN_006f5512(unaff_EBP + -0x50,0x80);
  (**(code **)(iVar6 + 0x18))();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_84;
  uStack_88 = 0x80;
  iStack_8c = unaff_EBP + -0x50;
  FUN_006f5512();
  uStack_88 = 0x84694e;
  iVar6 = FUN_00662850();
  if (iVar6 != 0) {
    puStack_78 = (undefined *)0x846963;
    puStack_78 = (undefined *)FUN_0042452b();
    iStack_7c = 0x84696b;
    FUN_007b029d();
  }
  puStack_78 = &DAT_0097f798;
  iStack_7c = unaff_EBP + -0x40;
  uStack_80 = 0x84697c;
  FUN_006f5b1a();
  puStack_78 = (undefined *)0x846983;
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    puStack_78 = (undefined *)0x846994;
    FUN_004456be();
  }
  puStack_78 = &DAT_0097f788;
  iStack_7c = unaff_EBP + -0x40;
  uStack_80 = 0x8469a5;
  FUN_006f5b1a();
  puStack_78 = (undefined *)0x8469ac;
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    puStack_78 = (undefined *)0x8469bb;
    cVar2 = (**(code **)(**(int **)(iVar8 + 0x2a80) + 4))();
    if ((cVar2 != '\0') && (*(int *)(iVar8 + 0x2a80) != 0)) {
      puStack_78 = (undefined *)0x8469d4;
      puStack_78 = (undefined *)FUN_005c4af4();
      iStack_7c = 0x8469dc;
      iVar6 = FUN_004308f4();
      if (iVar6 != 0) {
        puStack_78 = (undefined *)0x0;
        iStack_7c = 0x8469ef;
        puVar7 = (undefined4 *)FUN_005d0ba9();
        iStack_7c = *puVar7;
        uStack_80 = 0x8469f8;
        FUN_005d09e9();
      }
    }
  }
  puStack_78 = &DAT_0097f778;
  iStack_7c = unaff_EBP + -0x40;
  uStack_80 = 0x846a09;
  FUN_006f5b1a();
  puStack_78 = (undefined *)0x846a10;
  cVar2 = FUN_006f5bb6();
  if ((cVar2 != '\0') && (DAT_0097beec != 0)) {
    puStack_78 = (undefined *)0x846a26;
    FUN_00815de9();
    puStack_78 = (undefined *)0x846a2d;
    FUN_0077fcef();
  }
LAB_00846a2f:
  puStack_78 = (undefined *)0x846a36;
  FUN_00833dbd();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_84;
  uStack_88 = 0x80;
  iStack_8c = unaff_EBP + -0x50;
  FUN_006f5512();
  uStack_88 = 0x846a4d;
  iVar6 = FUN_00670464();
  if (iVar6 != 0) {
    puStack_78 = (undefined *)0x0;
    iStack_7c = 0;
    uStack_80 = 99;
    uStack_84 = 0x846a60;
    FUN_0060142b();
    puStack_78 = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_7c = 0x846a73;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_78 = (undefined *)0x846a7f;
    FUN_0045ebca();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x68) = &PTR_FUN_008f3518;
  puStack_78 = (undefined *)0x846a92;
  FUN_0084f3f8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


