/* FUN_0077892f - 0x0077892f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077892f(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  undefined1 *puStack_84;
  char *pcStack_80;
  int local_7c;
  char *pcStack_78;
  undefined4 *puStack_74;
  
  FUN_00879bb8();
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  *(int **)(unaff_EBP + -0x1c) = &local_7c;
  pcStack_80 = s_UI_UIWindow_img_UserList_GuildUn_0096b7a0;
  puStack_84 = (undefined1 *)0x778955;
  FUN_00448a17();
  pcStack_80 = (char *)0x77895c;
  FUN_008163ca();
  puStack_74 = &DAT_00980690;
  pcStack_78 = (char *)0x77896a;
  FUN_00403191();
  puStack_74 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_78 = (char *)0x778976;
  FUN_00403191();
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  local_7c = unaff_EBP + -0x60;
  pcStack_80 = (char *)(unaff_EBP + -0x50);
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_84;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_84,0xc97);
  iVar1 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_7c = 0x7789c2;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    puStack_74 = (undefined4 *)(unaff_EBP + -0x14);
    pcStack_78 = (char *)0x7789d8;
    puStack_74 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
      pcStack_78 = (char *)0x7789e9;
      FUN_00878dfb();
    }
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pcStack_78 = (char *)0x7789f6;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    pcStack_78 = (char *)0x778a01;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  pcStack_78 = (char *)0x778a0e;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    pcStack_78 = (char *)0x778a19;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_78 = (char *)0x778a26;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    pcStack_78 = (char *)0x778a31;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_00;
  }
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  pcStack_80 = (char *)0x84a;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  pcStack_80 = (char *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x778a56;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x778a5d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_7c = 0x778a68;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  pcStack_78 = (char *)0x778a77;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    pcStack_78 = (char *)0x778a88;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_78 = (char *)0x778a95;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    pcStack_78 = (char *)0x778aa0;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_01;
  }
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  pcStack_80 = (char *)0x84b;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  pcStack_80 = (char *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x778ac5;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x778acc;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  local_7c = 0x778ad7;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  pcStack_78 = (char *)0x778ae6;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    pcStack_78 = (char *)0x778af7;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_78 = (char *)0x778b04;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    pcStack_78 = (char *)0x778b0f;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_02;
  }
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  pcStack_80 = (char *)0x84c;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  pcStack_80 = (char *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x778b34;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x778b3b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  local_7c = 0x778b46;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  pcStack_78 = (char *)0x778b58;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    pcStack_78 = (char *)0x778b69;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_78 = (char *)0x778b76;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    pcStack_78 = (char *)0x778b81;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_03;
  }
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  pcStack_80 = (char *)0x84d;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  pcStack_80 = (char *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x778ba6;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x778bad;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  local_7c = 0x778bb8;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  pcStack_78 = (char *)0x778bca;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    pcStack_78 = (char *)0x778bdb;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_78 = (char *)0x778be8;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_74;
  if (iVar1 < 0) {
    pcStack_78 = (char *)0x778bf3;
    puStack_74 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_04;
  }
  puStack_74 = (undefined4 *)0x0;
  pcStack_78 = (char *)0x0;
  puStack_84 = (undefined1 *)&local_7c;
  *(int **)(unaff_EBP + -0x20) = &local_7c;
  pcStack_80 = (char *)0x84e;
  local_7c = (int)puVar3;
  FUN_00679e4e();
  pcStack_80 = (char *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x778c18;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x778c1f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  local_7c = 0x778c2a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x18);
  pcStack_78 = (char *)0x778c3c;
  puStack_74 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_74 < 0) && (puStack_74 != (undefined4 *)0x80004002)) {
    pcStack_78 = (char *)0x778c4d;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pcStack_78 = (char *)0x778c5a;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    pcStack_78 = "hs\f";
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)0xc73;
  pcStack_78 = (char *)(unaff_EBP + -0x18);
  local_7c = 0x778c75;
  puStack_74 = (undefined4 *)FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pcStack_78 = (char *)0x778c85;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_74 = (undefined4 *)0x778c91;
  FUN_00414ebb();
  puStack_74 = (undefined4 *)0xc74;
  pcStack_78 = (char *)(unaff_EBP + -0x18);
  local_7c = 0x778ca1;
  puStack_74 = (undefined4 *)FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  pcStack_78 = (char *)0x778cb1;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_74 = (undefined4 *)0x778cbd;
  FUN_00414ebb();
  puStack_74 = (undefined4 *)0xffffffff;
  pcStack_78 = s_Member_0096b798;
  local_7c = 0x778ccf;
  FUN_00414edd();
  puStack_74 = (undefined4 *)(extraout_ECX + 0xb4);
  pcStack_78 = (char *)0x778ce1;
  puStack_74 = (undefined4 *)FUN_00414f8b();
  pcStack_78 = (char *)0x778ced;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puStack_74 = (undefined4 *)0x84f;
  pcStack_78 = (char *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  local_7c = 0x778d0d;
  puStack_74 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  pcStack_78 = (char *)0x778d1a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_74 = (undefined4 *)0x778d26;
  FUN_00402676();
  puStack_74 = (undefined4 *)0x578;
  pcStack_78 = (char *)0x778d35;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar1 == 0) {
    puStack_74 = (undefined4 *)0x0;
  }
  else {
    puStack_74 = (undefined4 *)0x778d47;
    puStack_74 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  pcStack_78 = (char *)0x778d58;
  iVar1 = FUN_00450382();
  puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
  pcStack_78 = (char *)0x1;
  local_7c = 0x10c;
  pcStack_80 = (char *)0x19;
  puStack_84 = (undefined1 *)0x85c;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX);
  uVar2 = FUN_00679d86(unaff_EBP + -0x18,0x850);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0x85d,0x7d,0x10c,1,unaff_EBP + -0x30);
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x20);
  piVar4 = (int *)*puVar3;
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piVar4;
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  (**(code **)(iVar1 + 4))(piVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
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
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar4 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = (**(code **)(*piVar4 + 0xb4))(piVar4,0xfffffffe);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar4,&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  FUN_00778f1a();
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


