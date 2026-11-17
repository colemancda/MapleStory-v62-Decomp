/* FUN_00597130 - 0x00597130 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00597130(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_60;
  undefined *puStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  
  FUN_00879bb8();
  puStack_50 = &DAT_00980690;
  iStack_54 = 0x597150;
  FUN_00403191();
  puStack_50 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_54 = 0x59715e;
  FUN_00403191();
  puStack_50 = (undefined4 *)0x0;
  iStack_54 = 0;
  iStack_58 = unaff_EBP + -0x3c;
  puStack_5c = (undefined *)(unaff_EBP + -0x2c);
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_60;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_60,0x566);
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_58 = 0x5971a8;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  puStack_50 = (undefined4 *)(unaff_EBP + -0x14);
  iStack_54 = 0x5971b9;
  puStack_50 = (undefined4 *)FUN_00404b30();
  if (((int)puStack_50 < 0) && (puStack_50 != (undefined4 *)0x80004002)) {
    iStack_54 = 0x5971ca;
    FUN_00878dfb();
  }
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_54 = 0x5971d7;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x5971e2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_50 = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_54 = 0x5971ef;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x5971fa;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
  iStack_54 = 0x597207;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x597212;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x1c) == 0) {
    puStack_50 = (undefined4 *)0x80004003;
    iStack_54 = 0x597220;
    FUN_00878dfb();
  }
  puStack_50 = (undefined4 *)0x597227;
  uVar1 = FUN_0040cf4d();
  puStack_50 = (undefined4 *)0x0;
  iStack_54 = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_58;
  puStack_5c = &DAT_00964310;
  *(undefined4 *)(extraout_ECX + 0x20) = uVar1;
  uStack_60 = 0x59723c;
  FUN_004033a1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_5c = (undefined *)(unaff_EBP + -0x4c);
  uStack_60 = 0x59724b;
  FUN_0040263d();
  uStack_60 = 0x597252;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  iStack_58 = 0x597260;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    puStack_50 = (undefined4 *)(unaff_EBP + -0x14);
    iStack_54 = 0x597276;
    puStack_50 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_50 < 0) && (puStack_50 != (undefined4 *)0x80004002)) {
      iStack_54 = 0x597287;
      FUN_00878dfb();
    }
  }
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_54 = 0x597294;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x59729f;
    FUN_00878dfb();
  }
  puStack_50 = (undefined4 *)0x3;
  iStack_54 = 0;
  iStack_58 = 0x5972aa;
  FUN_004031b7();
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    puStack_50 = (undefined4 *)0x80004003;
    iStack_54 = 0x5972bd;
    FUN_00878dfb();
  }
  puStack_50 = (undefined4 *)(unaff_EBP + -0x3c);
  iStack_54 = unaff_EBP + -0x18;
  iStack_58 = 0x5972cd;
  piVar3 = (int *)FUN_00425067();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    puStack_50 = (undefined4 *)0x80004003;
    iStack_54 = 0x5972e1;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  puStack_50 = (undefined4 *)0xffffffff;
  iStack_54 = 600;
  iStack_58 = 800;
  puStack_5c = (undefined *)0x0;
  uStack_60 = 0;
  iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004031b7(0,3);
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_00425067(unaff_EBP + -0x1c,unaff_EBP + -0x3c);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x18) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x10),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(extraout_ECX + 0x18);
  iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = 3;
  iVar2 = FUN_0042a378(3);
  FUN_004295f1(iVar2 + 500,uVar1);
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004113e5(unaff_EBP + -0x1c);
  iVar2 = unaff_EBP + -0x2c;
  iVar6 = unaff_EBP + -0x3c;
  uVar5 = 0xff;
  uVar1 = 0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00424df4(0xff,0xff,iVar6,iVar2);
  FUN_00424f2f(uVar1,uVar5,iVar6,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x4e7);
  uVar1 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0045af91(uVar1,0,0,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00402676();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


