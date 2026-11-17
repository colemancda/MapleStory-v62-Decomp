/* FUN_0073cbf2 - 0x0073cbf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073cbf2(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined1 *puStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 *puStack_100;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_100 = &DAT_00980690;
  iStack_104 = 0x73cc19;
  FUN_00403191();
  puStack_100 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_104 = 0x73cc27;
  FUN_00403191();
  puStack_100 = (undefined4 *)0x0;
  iStack_104 = 0;
  iStack_108 = unaff_EBP + -0x9c;
  iStack_10c = unaff_EBP + -0x7c;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_110;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_110,0x78f);
  iVar1 = unaff_EBP + -0xcc;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_108 = 0x73cc79;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    puStack_100 = (undefined4 *)(unaff_EBP + -0x58);
    iStack_104 = 0x73cc94;
    puStack_100 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_100 < 0) && (puStack_100 != (undefined4 *)0x80004002)) {
      iStack_104 = 0x73cca2;
      FUN_00878dfb();
    }
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_104 = 0x73ccb2;
  puStack_100 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_100 < 0) {
    iStack_104 = 0x73ccbd;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_104 = 0x73ccca;
  puStack_100 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_100 < 0) {
    iStack_104 = 0x73ccd5;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_104 = 0x73cce5;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_100;
  if (iVar1 < 0) {
    iStack_104 = 0x73ccf0;
    puStack_100 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_00;
  }
  puStack_100 = (undefined4 *)0x0;
  iStack_104 = 0;
  puStack_110 = (undefined1 *)&iStack_108;
  *(int **)(unaff_EBP + -0x1c) = &iStack_108;
  iStack_10c = 0x7be;
  iStack_108 = (int)puVar3;
  FUN_00679e4e();
  iStack_10c = unaff_EBP + -0xac;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_110 = (undefined1 *)0x73cd18;
  FUN_0040263d();
  puStack_110 = (undefined1 *)0x73cd1f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_108 = 0x73cd2a;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x4c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    puStack_100 = (undefined4 *)(unaff_EBP + -0x4c);
    iStack_104 = 0x73cd40;
    puStack_100 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_100 < 0) && (puStack_100 != (undefined4 *)0x80004002)) {
      iStack_104 = 0x73cd4e;
      FUN_00878dfb();
    }
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0xac);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_104 = 0x73cd5e;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_100;
  if (iVar1 < 0) {
    iStack_104 = 0x73cd69;
    puStack_100 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_01;
  }
  puStack_100 = (undefined4 *)0x0;
  iStack_104 = 0;
  puStack_110 = (undefined1 *)&iStack_108;
  *(int **)(unaff_EBP + -0x1c) = &iStack_108;
  iStack_10c = 0x55d;
  iStack_108 = (int)puVar3;
  FUN_00679e4e();
  iStack_10c = unaff_EBP + -0xec;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_110 = (undefined1 *)0x73cd91;
  FUN_0040263d();
  puStack_110 = (undefined1 *)0x73cd98;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_108 = 0x73cda3;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x50) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar1 != 0) {
    puStack_100 = (undefined4 *)(unaff_EBP + -0x50);
    iStack_104 = 0x73cdb9;
    puStack_100 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_100 < 0) && (puStack_100 != (undefined4 *)0x80004002)) {
      iStack_104 = 0x73cdc7;
      FUN_00878dfb();
    }
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0xec);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_104 = 0x73cdd7;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_100;
  if (iVar1 < 0) {
    iStack_104 = 0x73cde2;
    puStack_100 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_02;
  }
  puStack_100 = (undefined4 *)0x0;
  iStack_104 = 0;
  puStack_110 = (undefined1 *)&iStack_108;
  *(int **)(unaff_EBP + -0x1c) = &iStack_108;
  iStack_10c = 0x58b;
  iStack_108 = (int)puVar3;
  FUN_00679e4e();
  iStack_10c = unaff_EBP + -0xbc;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_110 = (undefined1 *)0x73ce0a;
  FUN_0040263d();
  puStack_110 = (undefined1 *)0x73ce11;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_108 = 0x73ce1c;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar1 != 0) {
    puStack_100 = (undefined4 *)(unaff_EBP + -0x54);
    iStack_104 = 0x73ce32;
    puStack_100 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_100 < 0) && (puStack_100 != (undefined4 *)0x80004002)) {
      iStack_104 = 0x73ce40;
      FUN_00878dfb();
    }
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_104 = 0x73ce50;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_100;
  if (iVar1 < 0) {
    iStack_104 = 0x73ce5b;
    puStack_100 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_03;
  }
  puStack_100 = (undefined4 *)0x0;
  iStack_104 = 0;
  puStack_110 = (undefined1 *)&iStack_108;
  *(int **)(unaff_EBP + -0x1c) = &iStack_108;
  iStack_10c = 0xa23;
  iStack_108 = (int)puVar3;
  FUN_00679e4e();
  iStack_10c = unaff_EBP + -0xdc;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_110 = (undefined1 *)0x73ce83;
  FUN_0040263d();
  puStack_110 = (undefined1 *)0x73ce8a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_108 = 0x73ce95;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar1 != 0) {
    puStack_100 = (undefined4 *)(unaff_EBP + -0x48);
    iStack_104 = 0x73ceab;
    puStack_100 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_100 < 0) && (puStack_100 != (undefined4 *)0x80004002)) {
      iStack_104 = 0x73ceb9;
      FUN_00878dfb();
    }
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0xdc);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_104 = 0x73cec9;
  iVar1 = FUN_00402bc3();
  puVar3 = puStack_100;
  if (iVar1 < 0) {
    iStack_104 = 0x73ced4;
    puStack_100 = (undefined4 *)iVar1;
    FUN_00878dfb();
    puVar3 = (undefined4 *)extraout_ECX_04;
  }
  puStack_100 = (undefined4 *)0x0;
  iStack_104 = 0;
  puStack_110 = (undefined1 *)&iStack_108;
  *(int **)(unaff_EBP + -0x5c) = &iStack_108;
  iStack_10c = 0xa26;
  iStack_108 = (int)puVar3;
  FUN_00679e4e();
  iStack_10c = unaff_EBP + -0xfc;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_110 = (undefined1 *)0x73cefc;
  FUN_0040263d();
  puStack_110 = (undefined1 *)0x73cf03;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_108 = 0x73cf0e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar1 != 0) {
    puStack_100 = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_104 = 0x73cf24;
    puStack_100 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_100 < 0) && (puStack_100 != (undefined4 *)0x80004002)) {
      iStack_104 = 0x73cf32;
      FUN_00878dfb();
    }
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_104 = 0x73cf42;
  puStack_100 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_100 < 0) {
    iStack_104 = 0x73cf4d;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)0x3;
  iStack_104 = 0;
  iStack_108 = 0x73cf5b;
  FUN_004031b7();
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc34);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 == 0) {
    puStack_100 = (undefined4 *)0x80004003;
    iStack_104 = 0x73cf7b;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0x8c);
  iStack_104 = unaff_EBP + -0x28;
  iStack_108 = 0x73cf8d;
  FUN_00425067();
  puStack_100 = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_104 = 0x73cf9d;
  puStack_100 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_100 < 0) {
    iStack_104 = 0x73cfa8;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)0x3;
  iStack_104 = 0;
  iStack_108 = 0x73cfb3;
  FUN_004031b7();
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc38);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar1 == 0) {
    puStack_100 = (undefined4 *)0x80004003;
    iStack_104 = 0x73cfce;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)(unaff_EBP + -0x6c);
  iStack_104 = unaff_EBP + -0x14;
  iStack_108 = 0x73cfdd;
  FUN_00425067();
  puStack_100 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_104 = 0x73cfea;
  puStack_100 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_100 < 0) {
    iStack_104 = 0x73cff5;
    FUN_00878dfb();
  }
  puStack_100 = (undefined4 *)0x3;
  iStack_104 = 0xff;
  iStack_108 = 0x73d004;
  FUN_004031b7();
  piVar2 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (piVar2 == (int *)0x0) {
    puStack_100 = (undefined4 *)0x80004003;
    iStack_104 = 0x73d015;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x28);
  }
  iVar1 = *piVar2;
  puStack_110 = *(undefined1 **)(unaff_EBP + -0x2c);
  iStack_10c = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_108 = *(int *)(unaff_EBP + -0x40);
  iStack_104 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x10) = piVar2;
  puStack_100 = *(undefined4 **)(unaff_EBP + -0x38);
  iVar1 = (**(code **)(iVar1 + 0x80))(piVar2,0,0x1fb);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004031b7(0xff,3);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar2 = *(int **)(unaff_EBP + -0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar2,2,0x1fb,*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004031b7(0xff,3);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar2 = *(int **)(unaff_EBP + -0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar2,0x23d,0x203,*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004031b7(0xff,3);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar2 = *(int **)(unaff_EBP + -0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar2,599,0x207,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


