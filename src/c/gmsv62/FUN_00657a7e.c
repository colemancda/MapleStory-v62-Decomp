/* FUN_00657a7e - 0x00657a7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00657a7e(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  int iVar4;
  undefined4 *puStack_148;
  int iStack_144;
  undefined1 *puStack_140;
  int iStack_13c;
  undefined1 auStack_134 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iStack_100 = 10;
  iStack_104 = 10;
  iStack_10c = unaff_EBP + -0x24;
  uStack_108 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_110 = 0x657aa9;
  FUN_005d0ab2();
  iVar4 = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x568;
  do {
    iStack_100 = *(undefined4 *)(iVar4 + *(int *)(unaff_EBP + -0x24));
    iStack_104 = 0x657ac5;
    FUN_0045e3a0();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0xc;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x28);
  iStack_100 = 0x657adc;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x98) = 0xffffffff;
  iStack_100 = 10;
  iStack_104 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0xff000000;
  uStack_108 = 0x657b01;
  puVar2 = (undefined4 *)FUN_00679e4e();
  iStack_100 = 0x657b0a;
  FUN_00408b49();
  iStack_100 = 0x657b15;
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0xa8) = *puVar2;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_100 = 0x657b29;
    FUN_004030b1();
  }
  uVar3 = *(undefined4 *)(extraout_ECX + 0x78);
  iStack_100 = 0xc0;
  *(undefined4 *)(unaff_EBP + -0x94) = 1;
  *(undefined4 *)(unaff_EBP + -0x8c) = uVar3;
  iStack_104 = 0x657b4d;
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    iStack_100 = 0;
  }
  else {
    iStack_100 = 0x657b5f;
    iStack_100 = FUN_004a5590();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_104 = 0x657b73;
  FUN_00658a3a();
  iStack_100 = unaff_EBP + -0xbc;
  iStack_104 = 0xd;
  uStack_108 = 0x7a;
  iStack_10c = 0x2e;
  uStack_110 = 0xc;
  uStack_114 = 0x409;
  uStack_11c = 0x657b93;
  (**(code **)(**(int **)(extraout_ECX + 0x700) + 8))();
  uStack_11c = 0x68;
  uStack_120 = 0x657b9c;
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    uStack_11c = 0;
  }
  else {
    uStack_11c = 0x657bae;
    uStack_11c = FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_120 = 0x657bc2;
  FUN_0048b9a0();
  uStack_11c = 0;
  uStack_120 = 0x82;
  uStack_124 = 0x41;
  uStack_128 = 0xb;
  uStack_12c = 6;
  uStack_130 = 0x408;
  (**(code **)(**(int **)(extraout_ECX + 0x5e8) + 8))();
  iStack_13c = 0x657be9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iStack_13c = unaff_EBP + -0x54;
  puStack_140 = (undefined1 *)0x657bf8;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_13c = 0x657c04;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_13c = 0x657c14;
  FUN_00403191();
  iStack_13c = 0;
  puStack_140 = (undefined1 *)(unaff_EBP + -0x54);
  iStack_144 = unaff_EBP + -0x84;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_148;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&puStack_148,0xfcd);
  iVar4 = unaff_EBP + -0xcc;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_140 = (undefined1 *)0x657c64;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar4 != 0) {
    iStack_13c = 0x657c7a;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_13c = 0x657c8b;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_13c = 0x657c9b;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_13c = 0x657ca6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_13c = 0x657cb6;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_13c = 0x657cc1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_13c = 0x657cce;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_13c = 0x657cd9;
    FUN_00878dfb();
  }
  iStack_13c = 0x657ce3;
  VariantInit((VARIANTARG *)(unaff_EBP + -100));
  iStack_13c = unaff_EBP + -100;
  puStack_140 = (undefined1 *)0x657ced;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_13c = 0x657cf9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_13c = 0x657d07;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
  iStack_13c = unaff_EBP + -0x74;
  puStack_148 = &DAT_00980690;
  puStack_140 = (undefined1 *)0x657d11;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_13c = 0x657d1d;
    FUN_00878dfb();
    puStack_148 = extraout_ECX_00;
  }
  iStack_13c = 0;
  puStack_140 = (undefined1 *)(unaff_EBP + -100);
  iStack_144 = unaff_EBP + -0x74;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_148;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e(&puStack_148,0xfce);
  iVar4 = unaff_EBP + -0xfc;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_140 = (undefined1 *)0x657d6a;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar4 != 0) {
    iStack_13c = 0x657d80;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_13c = 0x657d91;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_13c = 0x657da1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_13c = 0x657dac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_13c = 0x657db9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_13c = 0x657dc4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_13c = 0x657dd1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_13c = 0x657ddc;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    FUN_0087a1b0();
    iStack_13c = 0;
    iStack_144 = *(undefined4 *)(unaff_EBP + -0x14);
    puStack_148 = (undefined4 *)0x657df4;
    puStack_140 = auStack_134;
    iStack_144 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_140;
    puStack_148 = (undefined4 *)0x657e00;
    FUN_00448a17();
    iStack_144 = unaff_EBP + -0xdc;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_148 = (undefined4 *)0x657e13;
    FUN_0040263d();
    puStack_148 = (undefined4 *)0x657e1a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_140 = (undefined1 *)0x657e25;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    FUN_0087a1b0();
    iStack_13c = 0;
    iStack_144 = *(undefined4 *)(unaff_EBP + -0x14);
    puStack_148 = (undefined4 *)0x657e3d;
    puStack_140 = auStack_134;
    iStack_144 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_140;
    puStack_148 = (undefined4 *)0x657e49;
    FUN_00448a17();
    iStack_144 = unaff_EBP + -0xec;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_148 = (undefined4 *)0x657e5c;
    FUN_0040263d();
    puStack_148 = (undefined4 *)0x657e63;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_140 = (undefined1 *)0x657e6e;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    puStack_140 = (undefined1 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x38) = &iStack_13c;
    iStack_144 = 0x657e84;
    FUN_0048bb05();
    iStack_144 = unaff_EBP + -0x10;
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_140;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_148 = (undefined4 *)0x657e97;
    puStack_140 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_144 = 0x657ea6;
    FUN_0048b99c();
    iStack_144 = 0x657ead;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_13c = 0x657ebd;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_13c = 0x657ec8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_13c = 0x657ed8;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_13c = 0x657ee3;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 3);
  iStack_13c = 0x657f01;
  FUN_004b2699();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iStack_13c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_140 = (undefined1 *)0x657f24;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_13c = 0x657f31;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00402676();
  iStack_13c = 0x657f4d;
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar4 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_13c = 0x657f73;
  iVar4 = FUN_00450382();
  iStack_13c = 0;
  puStack_140 = (undefined1 *)0xc1;
  iStack_144 = 0x37;
  puStack_148 = (undefined4 *)0x406;
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX);
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0xfd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00402676();
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar4 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,0x407,0x5e,0xc1,0,unaff_EBP + -0x34);
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0xfd1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00402676();
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar4 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,1,0x10,0xe7,0,unaff_EBP + -0x34);
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0xfd2);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00402676();
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar4 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,2,0x4a,0xe7,0,unaff_EBP + -0x34);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x700));
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00402676();
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00445a30();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


