/* FUN_0083057d - 0x0083057d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083057d(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar8;
  undefined *puStack_34;
  
  FUN_00879bb8();
  puStack_34 = (undefined *)0x830594;
  puVar2 = (undefined *)FUN_007d1e08();
  *(undefined **)(unaff_EBP + -0x10) = puVar2;
  puStack_34 = (undefined *)0x8305a0;
  FUN_00846cb8();
  puStack_34 = (undefined *)0x8305ab;
  FUN_00428e9e();
  if (*(undefined4 **)(extraout_ECX + 0x315c) != (undefined4 *)0x0) {
    puStack_34 = (undefined *)0x8305bb;
    (**(code **)**(undefined4 **)(extraout_ECX + 0x315c))();
    puStack_34 = (undefined *)0x8305c2;
    FUN_0083007f();
  }
  if (*(int *)(extraout_ECX + 0x3164) != 0) {
    puStack_34 = (undefined *)0x8305d1;
    FUN_005d5ea1();
  }
  if (*(undefined4 **)(extraout_ECX + 0x316c) != (undefined4 *)0x0) {
    puStack_34 = (undefined *)0x8305df;
    (**(code **)**(undefined4 **)(extraout_ECX + 0x316c))();
  }
  if (*(undefined4 **)(extraout_ECX + 0x3174) != (undefined4 *)0x0) {
    puStack_34 = (undefined *)0x8305ed;
    (**(code **)**(undefined4 **)(extraout_ECX + 0x3174))();
  }
  if (*(int *)(extraout_ECX + 0x317c) != 0) {
    puStack_34 = puVar2;
    FUN_004c9834();
  }
  if (*(int *)(extraout_ECX + 0x3184) != 0) {
    puStack_34 = puVar2;
    FUN_005bd7c2();
  }
  if (*(int *)(extraout_ECX + 0x318c) != 0) {
    puStack_34 = puVar2;
    FUN_00423626();
  }
  if (*(int *)(extraout_ECX + 0x3194) != 0) {
    puStack_34 = puVar2;
    FUN_00688d26();
  }
  if (*(int *)(extraout_ECX + 0x319c) != 0) {
    puStack_34 = puVar2;
    FUN_006343e3();
  }
  puStack_34 = (undefined *)0x830648;
  FUN_00684a70();
  puStack_34 = (undefined *)0x830652;
  (**(code **)*DAT_0097810c)();
  DAT_0097c3f4 = DAT_0097c3f4 + 1;
  if (DAT_0097bdc4 != 0) {
    puStack_34 = (undefined *)0x830667;
    FUN_00704cb6();
  }
  if ((*(int *)(extraout_ECX + 0x3114) != 0) &&
     (0x898 < *(int *)(unaff_EBP + -0x10) - *(int *)(extraout_ECX + 0x3114))) {
    puStack_34 = (undefined *)0x830689;
    FUN_0083d97c();
    *(undefined4 *)(extraout_ECX + 0x3114) = 0;
  }
  if (DAT_0097c3f4 % 400 == 0) {
    puStack_34 = (undefined *)0x0;
    FUN_00429303();
    iVar3 = FUN_004efada();
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puStack_34 = *(undefined **)(extraout_ECX + 0x20b0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar4 = FUN_00413367(extraout_ECX + 0x20a8);
      uVar1 = *(undefined4 *)(extraout_ECX + 0x20bc);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
      iVar3 = FUN_00413367(extraout_ECX + 0x20b4,uVar1);
      puStack_34 = (undefined *)(unaff_EBP + -0x10);
      iVar3 = FUN_00687fae(iVar3 / 100,*(undefined4 *)(unaff_EBP + -0x18));
      if (iVar3 != 0) {
        puStack_34 = (undefined *)0x368;
        FUN_00679d22(unaff_EBP + -0x1c);
        puStack_34 = &DAT_00964364;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004653c5(unaff_EBP + -0x14);
        puStack_34 = (undefined *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puStack_34 = (undefined *)FUN_0045e02d(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puStack_34 = (undefined *)0x830755;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_34 = (undefined *)0x830761;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_34 = (undefined *)0x83076d;
        FUN_00414ebb();
        puStack_34 = (undefined *)0x8;
        FUN_00471102(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_34 = (undefined *)0x830786;
      FUN_00414ebb();
    }
  }
  puStack_34 = (undefined *)0x1;
  FUN_00429303();
  iVar3 = FUN_004efada();
  if (((iVar3 == 0) ||
      (((iVar3 = *(int *)(extraout_ECX + 0x3264), iVar3 != 0 && (*(int *)(iVar3 + 100) != 0)) &&
       (*(int *)(iVar3 + 0x78) == 0)))) && (*(int *)(extraout_ECX + 0x3264) != 0)) {
    puStack_34 = (undefined *)0x8307bd;
    FUN_00815de9();
    puStack_34 = (undefined *)0x8307c8;
    FUN_004f1617();
  }
  puStack_34 = (undefined *)0x8307ce;
  DVar5 = timeGetTime();
  *(DWORD *)(unaff_EBP + -0x20) = DVar5;
  if (-1 < (int)(DVar5 - *(int *)(extraout_ECX + 0x32a4))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar3 = *(int *)(extraout_ECX + 0x32a8);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (iVar3 < 3) {
      puStack_34 = (undefined *)0xd8f;
      puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c);
      puStack_34 = *(undefined **)(extraout_ECX + 0x32a8);
      uVar1 = *puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00434e21(unaff_EBP + -0x10,uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    else {
      puStack_34 = (undefined *)0xd90;
      puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c);
      puStack_34 = *(undefined **)(extraout_ECX + 0x32a8);
      uVar1 = *puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + -0x10,uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    puStack_34 = (undefined *)0x830857;
    FUN_00414ebb();
    puStack_34 = (undefined *)0xc;
    FUN_00471102(unaff_EBP + -0x10);
    *(int *)(extraout_ECX + 0x32a4) = *(int *)(extraout_ECX + 0x32a4) + 3600000;
    *(int *)(extraout_ECX + 0x32a8) = *(int *)(extraout_ECX + 0x32a8) + 1;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_34 = (undefined *)0x830880;
    FUN_00414ebb();
  }
  puStack_34 = (undefined *)0x83088b;
  iVar3 = FUN_0059d9bc();
  if (iVar3 != 0) {
    *(undefined4 *)(extraout_ECX + 13000) = 1;
    *(undefined4 *)(extraout_ECX + 0x32cc) = 0;
  }
  piVar7 = DAT_0097c1ac;
  if ((*(int *)(DAT_0097924c + 0x394) != 0) && (*(int *)(extraout_ECX + 13000) != 0)) {
    bVar8 = DAT_0097c1ac == (int *)0x0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (bVar8) {
      puStack_34 = (undefined *)0x80004003;
      FUN_00878dfb();
      piVar7 = DAT_0097c1ac;
    }
    puStack_34 = (undefined *)(unaff_EBP + -0x18);
    (**(code **)(*piVar7 + 0x78))(piVar7);
    if (*(int *)(extraout_ECX + 0x32cc) == 0) {
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        *(undefined4 *)(extraout_ECX + 0x32cc) = 1;
        puStack_34 = (undefined *)0x83090d;
        puStack_34 = (undefined *)FUN_0059d9b5();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) ||
           (**(char **)(unaff_EBP + -0x14) == '\0')) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          puStack_34 = (undefined *)0x830938;
          FUN_00414ebb();
          goto LAB_008309ec;
        }
        puStack_34 = (undefined *)0x0;
        FUN_0060142b(0xd4,0);
        *(undefined ***)(unaff_EBP + -0x1c) = &puStack_34;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_34 = (undefined *)0x0;
        FUN_00414f8b(unaff_EBP + -0x14);
        FUN_00459cb5();
        puStack_34 = *(undefined **)(extraout_ECX + 0x2048);
        FUN_00457d37();
        puStack_34 = (undefined *)0x83097c;
        FUN_00429303();
        puStack_34 = (undefined *)0x830987;
        puStack_34 = (undefined *)FUN_004f162d();
        FUN_00457d37();
        puStack_34 = (undefined *)(unaff_EBP + -0x30);
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puStack_34 = (undefined *)0x8309ab;
        FUN_0045ebca();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_34 = (undefined *)0x8309b7;
        FUN_00414ebb();
      }
    }
    else if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(extraout_ECX + 0x32cc) = 0;
    }
  }
  if ((*(int *)(extraout_ECX + 8) != 0) &&
     (10000 < *(int *)(unaff_EBP + -0x20) - *(int *)(extraout_ECX + 0xc))) {
    if (*(int *)(extraout_ECX + 0x31fc) != 0) {
      puStack_34 = (undefined *)0x8309e9;
      FUN_00449484();
    }
    *(undefined4 *)(extraout_ECX + 8) = 0;
  }
LAB_008309ec:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


