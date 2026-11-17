/* FUN_00743f2d - 0x00743f2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00743f2d(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  undefined4 *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iStack_54 = 0xffffffff;
  iStack_58 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_5c = 0x743f54;
  FUN_00414edd();
  iStack_54 = 3;
  iStack_58 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_5c = 0x743f62;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0xc20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    iStack_54 = 0x80004003;
    iStack_58 = 0x743f79;
    FUN_00878dfb();
  }
  iStack_54 = unaff_EBP + -0x30;
  iStack_58 = unaff_EBP + 8;
  iStack_5c = 0x743f8c;
  FUN_00425067();
  iStack_54 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_58 = 0x743f99;
  iStack_54 = FUN_00402bc3();
  if (iStack_54 < 0) {
    iStack_58 = 0x743fa4;
    FUN_00878dfb();
  }
  iStack_58 = unaff_EBP + -0x14;
  iStack_54 = 0;
  iStack_5c = 0x743fae;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_54 = 0x80004003;
    iStack_58 = 0x743fbf;
    FUN_00878dfb();
  }
  iStack_54 = 0x743fc7;
  iStack_54 = FUN_0040e48b();
  iStack_54 = iStack_54 + -0x10;
  iStack_5c = unaff_EBP + -0x14;
  *(int **)(unaff_EBP + -0x20) = &iStack_58;
  uStack_60 = 0x743fda;
  iStack_58 = extraout_ECX_00;
  FUN_0046fcc9();
  iStack_5c = unaff_EBP + -0x10;
  uStack_60 = 0x743fe3;
  FUN_007d3a22();
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_54 = 0x80004003;
    iStack_58 = 0x743ff1;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + 8) == 0) {
      iStack_54 = 0x80004003;
      iStack_58 = 0x743ffc;
      FUN_00878dfb();
    }
  }
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_54 = 0x80004003;
    iStack_58 = 0x74400c;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  iStack_54 = 0x744016;
  iVar1 = FUN_0040e53d();
  iStack_54 = 0x744020;
  iStack_5c = FUN_0040e48b();
  iStack_54 = 0xffffff;
  uStack_60 = 0;
  uStack_64 = 0;
  puStack_6c = (undefined4 *)0x744032;
  piStack_68 = piVar3;
  iStack_58 = iVar1;
  iVar1 = (**(code **)(*piVar3 + 0x8c))();
  if (iVar1 < 0) {
    puStack_6c = (undefined4 *)&DAT_00963cc8;
    iStack_78 = 0x744042;
    iStack_74 = iVar1;
    piStack_70 = piVar3;
    FUN_00878e09();
  }
  puStack_6c = &DAT_00980690;
  piStack_70 = (int *)0x744050;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_70 = (int *)0x74405d;
  FUN_00403191();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x50);
  piStack_70 = (int *)(unaff_EBP + -0x40);
  iStack_78 = unaff_EBP + -0x1c;
  iStack_74 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_74 = 0x744083;
  iStack_74 = FUN_00449749();
  iStack_78 = 0x74408c;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_78;
  FUN_00448a17(uVar2);
  uVar5 = 2;
  uVar2 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004115d9(1,2);
  FUN_00448e3a(uVar2,uVar5);
  puStack_6c = (undefined4 *)0x7440b6;
  FUN_004497b5();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_70 = (int *)0x7440c3;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x7440ce;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_70 = (int *)0x7440db;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x7440e6;
    FUN_00878dfb();
  }
  puStack_6c = &DAT_00980690;
  piStack_70 = (int *)0x7440ef;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_70 = (int *)0x7440fc;
  FUN_00403191();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  piStack_70 = (int *)(unaff_EBP + -0x50);
  iStack_78 = unaff_EBP + -0x1c;
  iStack_74 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_74 = 0x74411f;
  iStack_74 = FUN_00449749();
  iStack_78 = 0x744128;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_78;
  FUN_00448a17(uVar2);
  uVar5 = 0;
  uVar2 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004115d9(1,0);
  FUN_00448e3a(uVar2,uVar5);
  puStack_6c = (undefined4 *)0x744151;
  FUN_004497b5();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_70 = (int *)0x74415e;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x744169;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_70 = (int *)0x744176;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x744181;
    FUN_00878dfb();
  }
  puStack_6c = &DAT_00980690;
  piStack_70 = (int *)0x74418a;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_70 = (int *)0x744197;
  FUN_00403191();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  piStack_70 = (int *)(unaff_EBP + -0x50);
  iStack_78 = unaff_EBP + -0x1c;
  iStack_74 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_74 = 0x7441ba;
  iStack_74 = FUN_00449749();
  iStack_78 = 0x7441c3;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_78;
  FUN_00448a17(uVar2);
  uVar5 = 1;
  uVar2 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004115d9(2,1);
  FUN_00448e3a(uVar2,uVar5);
  puStack_6c = (undefined4 *)0x7441ed;
  FUN_004497b5();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_70 = (int *)0x7441fa;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x744205;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_70 = (int *)0x744212;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x74421d;
    FUN_00878dfb();
  }
  puStack_6c = &DAT_00980690;
  piStack_70 = (int *)0x744226;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_70 = (int *)0x744233;
  FUN_00403191();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  piStack_70 = (int *)(unaff_EBP + -0x50);
  iStack_78 = unaff_EBP + -0x1c;
  iStack_74 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_74 = 0x744256;
  iStack_74 = FUN_00449749();
  iStack_78 = 0x74425f;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_78;
  FUN_00448a17(uVar2);
  uVar5 = 1;
  uVar2 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_004115d9(0,1);
  FUN_00448e3a(uVar2,uVar5);
  puStack_6c = (undefined4 *)0x744288;
  FUN_004497b5();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_70 = (int *)0x744295;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x7442a0;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_70 = (int *)0x7442ad;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x7442b8;
    FUN_00878dfb();
  }
  puStack_6c = &DAT_00980690;
  piStack_70 = (int *)0x7442c1;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_70 = (int *)0x7442ce;
  FUN_00403191();
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  piStack_70 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_74 = 0x7442e2;
  iStack_74 = FUN_00449749();
  iStack_78 = 0x7442eb;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_78;
  FUN_00448a17(uVar2);
  uVar5 = 1;
  uVar2 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9(1,1);
  FUN_00448e3a(uVar2,uVar5);
  puStack_6c = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_70 = (int *)0x744319;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x744324;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_70 = (int *)0x744331;
  puStack_6c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_6c < 0) {
    piStack_70 = (int *)0x74433c;
    FUN_00878dfb();
  }
  puStack_6c = &DAT_00980690;
  piStack_70 = (int *)0x744345;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_70 = (int *)0x744352;
  FUN_00403191();
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xc20);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar1 == 0) {
    puStack_6c = (undefined4 *)0x80004003;
    piStack_70 = (int *)0x74436b;
    FUN_00878dfb();
  }
  puStack_6c = (undefined4 *)(unaff_EBP + -0x20);
  piStack_70 = (int *)0x74437a;
  piVar3 = (int *)FUN_004113e5();
  iVar1 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar1 == 0) {
    puStack_6c = (undefined4 *)0x80004003;
    piStack_70 = (int *)0x74438e;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  iStack_78 = *(int *)(unaff_EBP + -0x40);
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x3c);
  piStack_70 = *(int **)(unaff_EBP + -0x38);
  iVar1 = *piVar3;
  puStack_6c = *(undefined4 **)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar3,0xff,0,*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00403191(&DAT_00980690);
  iVar1 = *(int *)(unaff_EBP + -0x18);
  iVar4 = *(int *)(iVar1 + 0xc20);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar4 = FUN_0042a378();
  FUN_004031b7(iVar4 + 8000,3);
  iVar1 = *(int *)(iVar1 + 0xc20);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x20);
  iVar1 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x90))
                    (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar3,&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


