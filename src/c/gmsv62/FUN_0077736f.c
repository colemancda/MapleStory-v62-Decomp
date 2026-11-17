/* FUN_0077736f - 0x0077736f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077736f(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  undefined1 *puStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  undefined4 *puStack_74;
  
  FUN_00879bb8();
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x1c) = &local_7c;
  iStack_80 = 0x83e;
  FUN_00679e4e();
  iStack_80 = 0x7773a4;
  FUN_008163ca();
  puStack_74 = &DAT_00980690;
  iStack_78 = 0x7773b1;
  FUN_00403191();
  puStack_74 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_78 = 0x7773c1;
  FUN_00403191();
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  local_7c = unaff_EBP + -0x60;
  iStack_80 = unaff_EBP + -0x50;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_84;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_84,0xc97);
  iVar1 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_7c = 0x777408;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    puStack_74 = (undefined4 *)(unaff_EBP + -0x14);
    iStack_78 = 0x77741e;
    puStack_74 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
      iStack_78 = 0x77742f;
      FUN_00878dfb();
    }
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_78 = 0x77743c;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    iStack_78 = 0x777447;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_78 = 0x777454;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    iStack_78 = 0x77745f;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x77746c;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    iStack_78 = 0x777477;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_00;
  }
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  iStack_80 = 0x84a;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x77749c;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x7774a3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_7c = 0x7774ae;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_78 = 0x7774bd;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    iStack_78 = 0x7774ce;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x7774db;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    iStack_78 = 0x7774e6;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_01;
  }
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  iStack_80 = 0x84b;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x77750b;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x777512;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  local_7c = 0x77751d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_78 = 0x77752c;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    iStack_78 = 0x77753d;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x77754a;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    iStack_78 = 0x777555;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_02;
  }
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  iStack_80 = 0x84c;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x77757a;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x777581;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  local_7c = 0x77758c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_78 = 0x77759e;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    iStack_78 = 0x7775af;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x7775bc;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    iStack_78 = 0x7775c7;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_03;
  }
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  iStack_80 = 0x84d;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x7775ec;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x7775f3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  local_7c = 0x7775fe;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_78 = 0x777610;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    iStack_78 = 0x777621;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x77762e;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    iStack_78 = 0x777639;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_04;
  }
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  iStack_80 = 0x84e;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x77765e;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x777665;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  local_7c = 0x777670;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_78 = 0x777682;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    iStack_78 = 0x777693;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x7776a0;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    iStack_78 = 0x7776ab;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)0xc73;
  iStack_78 = unaff_EBP + -0x18;
  local_7c = 0x7776bb;
  puStack_74 = (undefined4 *)FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_78 = 0x7776cb;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_74 = (undefined4 *)0x7776d7;
  FUN_00414ebb();
  puStack_74 = (undefined4 *)0xc74;
  iStack_78 = unaff_EBP + -0x18;
  local_7c = 0x7776e7;
  puStack_74 = (undefined4 *)FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_78 = 0x7776f7;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_74 = (undefined4 *)0x777703;
  FUN_00414ebb();
  puStack_74 = (undefined4 *)0xc75;
  iStack_78 = unaff_EBP + -0x18;
  local_7c = 0x777713;
  puStack_74 = (undefined4 *)FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_78 = 0x777723;
  puStack_74 = (undefined4 *)FUN_00414f8b();
  iStack_78 = 0x77772f;
  puStack_74 = (undefined4 *)FUN_00414f8b();
  iStack_78 = 0x77773b;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_74 = (undefined4 *)0x777747;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puStack_74 = (undefined4 *)0x84f;
  iStack_78 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  local_7c = 0x777767;
  puStack_74 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_78 = 0x777774;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_74 = (undefined4 *)0x777780;
  FUN_00402676();
  puStack_74 = (undefined4 *)0x578;
  iStack_78 = 0x77778f;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar1 == 0) {
    puStack_74 = (undefined4 *)0x0;
  }
  else {
    puStack_74 = (undefined4 *)0x7777a1;
    puStack_74 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_78 = 0x7777b2;
  iVar1 = FUN_00450382();
  puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_78 = 1;
  local_7c = 0x10c;
  iStack_80 = 0x19;
  puStack_84 = (undefined1 *)0x85c;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX);
  uVar2 = FUN_00679d86(unaff_EBP + -0x18,0x850);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x85d,0x7d,0x10c,1,unaff_EBP + -0x30);
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x20);
  piVar4 = (int *)*puVar3;
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piVar4;
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  (**(code **)(iVar1 + 4))(piVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0xfc))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar4 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = (**(code **)(*piVar4 + 0xb4))(piVar4,0xfffffffe);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar4,&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  FUN_00777974();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


