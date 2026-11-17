/* FUN_00753933 - 0x00753933 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00753933(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int extraout_ECX_09;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  int iStack_3d0;
  int iStack_3cc;
  int iStack_3c8;
  undefined4 *puStack_3c4;
  undefined4 uStack_3c0;
  int iStack_3bc;
  int iStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  undefined *puStack_3a4;
  undefined4 uStack_3a0;
  int iStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  int iStack_38c;
  int iStack_388;
  undefined *puStack_384;
  int *piStack_380;
  int iStack_37c;
  int *piStack_378;
  undefined *puStack_374;
  int *piStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_360;
  undefined1 *puStack_334;
  int iStack_330;
  undefined1 *puStack_32c;
  int *piStack_328;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x54) = extraout_ECX;
  iVar9 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_328 = (int *)0x753959;
  cVar1 = FUN_00433bfa();
  if (((cVar1 == '\0') && (*(int *)(extraout_ECX + 0x14) == *(int *)(unaff_EBP + 8))) &&
     (*(int *)(extraout_ECX + 0x18) == *(int *)(unaff_EBP + 0xc))) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e46f();
  }
  else {
    piStack_328 = (int *)0x75398f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_328 = (int *)0x75399f;
    FUN_00403191();
    piStack_328 = (int *)0x0;
    puStack_32c = (undefined1 *)(unaff_EBP + -0x1e8);
    iStack_330 = unaff_EBP + -0x208;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_334;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_32c = (undefined1 *)0x7539f4;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x114) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753a15;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753a23;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_328 = (int *)0x753a33;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753a3e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_328 = (int *)0x753a4e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753a59;
      FUN_00878dfb();
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x1e8);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_328 = (int *)0x753a69;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753a74;
      FUN_00878dfb();
      puVar7 = extraout_ECX_00;
    }
    piStack_328 = (int *)0x0;
    puStack_334 = (undefined1 *)&puStack_32c;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
    iStack_330 = 0x578;
    puStack_32c = puVar7;
    FUN_00679e4e();
    iStack_330 = unaff_EBP + -800;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_334 = (undefined1 *)0x753a9c;
    FUN_0040263d();
    puStack_334 = (undefined1 *)0x753aa3;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_32c = (undefined1 *)0x753aae;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xf8) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753aca;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753ad8;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_328 = (int *)0x753ae8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753af3;
      FUN_00878dfb();
    }
    piStack_328 = (int *)&LAB_00450362;
    puStack_32c = (undefined1 *)0xa;
    iStack_330 = 4;
    puStack_334 = (undefined1 *)(unaff_EBP + -0x2a0);
    FUN_0087b2f0();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    do {
      FUN_0087a1b0();
      piStack_328 = (int *)0x0;
      iStack_330 = *(int *)(unaff_EBP + -0x20);
      puStack_334 = (undefined1 *)0x753b2f;
      puStack_32c = &stack0xfffffce0;
      iStack_330 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
      puStack_334 = (undefined1 *)0x753b3b;
      FUN_004033a1();
      iStack_330 = unaff_EBP + -0xd4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_334 = (undefined1 *)0x753b4e;
      FUN_0040263d();
      puStack_334 = (undefined1 *)0x753b55;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_32c = (undefined1 *)0x753b60;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar3;
      piStack_328 = (int *)0x753b6e;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753b7f;
        FUN_00878dfb();
      }
      puVar7 = (undefined1 *)(unaff_EBP + -0xd4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_328 = (int *)0x753b8f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_328 = (int *)0x753b9a;
        FUN_00878dfb();
        puVar7 = extraout_ECX_01;
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    } while (*(int *)(unaff_EBP + -0x20) < 10);
    piStack_328 = (int *)0x0;
    puStack_334 = (undefined1 *)&puStack_32c;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
    iStack_330 = 0x577;
    puStack_32c = puVar7;
    FUN_00679e4e();
    iStack_330 = unaff_EBP + -0x2d0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_334 = (undefined1 *)0x753bd2;
    FUN_0040263d();
    puStack_334 = (undefined1 *)0x753bd9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_32c = (undefined1 *)0x753be4;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xe4) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753c06;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753c19;
        FUN_00878dfb();
      }
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x2d0);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_328 = (int *)0x753c30;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753c3b;
      FUN_00878dfb();
      puVar7 = extraout_ECX_02;
    }
    piStack_328 = (int *)0x0;
    puStack_334 = (undefined1 *)&puStack_32c;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
    iStack_330 = 0x736;
    puStack_32c = puVar7;
    FUN_00679e4e();
    iStack_330 = unaff_EBP + -0x310;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_334 = (undefined1 *)0x753c63;
    FUN_0040263d();
    puStack_334 = (undefined1 *)0x753c6a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_32c = (undefined1 *)0x753c75;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xec) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753c97;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753ca5;
        FUN_00878dfb();
      }
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x310);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_328 = (int *)0x753cb5;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753cc0;
      FUN_00878dfb();
      puVar7 = extraout_ECX_03;
    }
    piStack_328 = (int *)0x0;
    puStack_334 = (undefined1 *)&puStack_32c;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
    iStack_330 = 0x57d;
    puStack_32c = puVar7;
    FUN_00679e4e();
    iStack_330 = unaff_EBP + -0x2f0;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_334 = (undefined1 *)0x753ce8;
    FUN_0040263d();
    puStack_334 = (undefined1 *)0x753cef;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_32c = (undefined1 *)0x753cfa;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xf4) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753d16;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753d24;
        FUN_00878dfb();
      }
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x2f0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_328 = (int *)0x753d34;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753d3f;
      FUN_00878dfb();
      puVar7 = extraout_ECX_04;
    }
    piStack_328 = (int *)0x0;
    puStack_334 = (undefined1 *)&puStack_32c;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
    iStack_330 = 0x55d;
    puStack_32c = puVar7;
    FUN_00679e4e();
    iStack_330 = unaff_EBP + -0x2c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_334 = (undefined1 *)0x753d67;
    FUN_0040263d();
    puStack_334 = (undefined1 *)0x753d6e;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    puStack_32c = (undefined1 *)0x753d79;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x110) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753d95;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753da3;
        FUN_00878dfb();
      }
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x2c0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    piStack_328 = (int *)0x753db3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753dbe;
      FUN_00878dfb();
      puVar7 = extraout_ECX_05;
    }
    piStack_328 = (int *)0x0;
    puStack_334 = (undefined1 *)&puStack_32c;
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_32c;
    iStack_330 = 0xaf9;
    puStack_32c = puVar7;
    FUN_00679e4e();
    iStack_330 = unaff_EBP + -0x2e0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_334 = (undefined1 *)0x753de6;
    FUN_0040263d();
    puStack_334 = (undefined1 *)0x753ded;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_32c = (undefined1 *)0x753df8;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x118) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    if (iVar2 != 0) {
      piStack_328 = (int *)0x753e14;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_328 = (int *)0x753e22;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_328 = (int *)0x753e32;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_328 = (int *)0x753e3d;
      FUN_00878dfb();
    }
    piStack_328 = (int *)(unaff_EBP + -0x30);
    puStack_32c = (undefined1 *)0x753e47;
    FUN_007d4a9a();
    iVar2 = *(int *)(*(int *)(unaff_EBP + 0x14) + 0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    iVar8 = (-(uint)(*(int *)(unaff_EBP + 0x18) != 0) & 0xffffffe7) + 0x19;
    piStack_328 = (int *)((iVar2 * 0x35 - iVar8) + 0x41);
    puStack_32c = (undefined1 *)0x104;
    iStack_330 = 9;
    puStack_334 = (undefined1 *)0x753e85;
    FUN_0074d72a();
    iVar2 = *(int *)(*(int *)(unaff_EBP + 0x14) + 0x5c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    *(int *)(unaff_EBP + -0x68) = iVar2;
    if (iVar2 < 10) {
      *(int *)(unaff_EBP + -0x6c) = iVar2;
    }
    else {
      *(int *)(unaff_EBP + -0x6c) = (iVar2 + 1) / 2;
    }
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (0 < iVar2) {
      do {
        iVar2 = *(int *)(unaff_EBP + -0x54);
        if (iVar9 == *(int *)(unaff_EBP + -0x6c)) {
          *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(iVar2 + 0xc);
        }
        piStack_328 = (int *)(unaff_EBP + -100);
        puStack_32c = (undefined1 *)0x753eef;
        FUN_0084a5e4();
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x60) + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if ((iVar4 < 90000000) || (90999999 < iVar4)) {
          piStack_328 = (int *)0x753f28;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_328 = (int *)0x753f3b;
          FUN_00469862();
          piStack_328 = (int *)0x753f45;
          piStack_328 = (int *)thunk_FUN_0045e2eb();
          puStack_32c = (undefined1 *)(unaff_EBP + -0x50);
          iStack_330 = 0x753f4f;
          FUN_0048b97b();
          iStack_330 = 0x753f56;
          FUN_0045a1d8();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_328 = (int *)0x753f61;
          puStack_32c = (undefined1 *)FUN_00449713();
          *(int ***)(unaff_EBP + -0x3c) = &piStack_328;
          iStack_330 = 0x753f6d;
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          puStack_32c = (undefined1 *)0x753f79;
          FUN_0044974c();
          puStack_32c = (undefined1 *)0x753f80;
          iVar9 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          if (*(int *)(unaff_EBP + -0x50) != 0) {
            piStack_328 = (int *)0x753f96;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_328 = (int *)0x753fa7;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_328 = (int *)0x753fb2;
            FUN_00878dfb();
          }
          iVar9 = iVar9 + 100 + *(int *)(unaff_EBP + -0xb0);
          if (iVar9 < *(int *)(iVar2 + 0xc)) {
            iVar9 = *(int *)(iVar2 + 0xc);
          }
          *(int *)(iVar2 + 0xc) = iVar9;
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_0045e46f();
          iVar9 = *(int *)(unaff_EBP + -0x20);
        }
        else {
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_0045e46f();
        }
        iVar9 = iVar9 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar9;
      } while (iVar9 < *(int *)(unaff_EBP + -0x68));
    }
    iVar9 = *(int *)(unaff_EBP + -0x6c) * 0x35;
    *(int *)(unaff_EBP + -0x78) = iVar9;
    *(int *)(*(int *)(unaff_EBP + -0x54) + 8) = (iVar9 - iVar8) + 0x41;
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    piStack_328 = (int *)(unaff_EBP + -0xa8);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_32c = (undefined1 *)0x754015;
    FUN_00750398();
    piStack_328 = (int *)0x0;
    puStack_32c = (undefined1 *)0x1;
    iStack_330 = *(int *)(unaff_EBP + 0xc);
    puStack_334 = *(undefined1 **)(unaff_EBP + 8);
    FUN_0075699b();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_0045e2eb();
    piStack_328 = (int *)(unaff_EBP + -0xb4);
    puStack_32c = (undefined1 *)0x75404e;
    FUN_00556acf();
    puStack_32c = &stack0xfffffcdc;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffcdc;
    piStack_328 = (int *)0x1;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_330 = 0x754062;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_328 = (int *)0x754071;
    piStack_328 = (int *)FUN_00449713();
    puStack_32c = (undefined1 *)0xa;
    iStack_330 = 0x75407b;
    FUN_007585ac();
    *(undefined4 *)(unaff_EBP + -0xfc) = *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x58);
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
    *(undefined4 *)(unaff_EBP + -0xa4) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (0 < *(int *)(unaff_EBP + -0x68)) {
      *(uint *)(unaff_EBP + -0xf0) = (-(uint)(*(int *)(unaff_EBP + 0x18) != 0) & 0xfffffffb) + 10;
      do {
        iVar9 = *(int *)(unaff_EBP + -0x6c);
        if (*(int *)(unaff_EBP + -0x20) < iVar9) {
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          iVar9 = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0xb0);
        }
        *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0x20) - iVar9;
        piStack_328 = (int *)(unaff_EBP + -0x94);
        puStack_32c = (undefined1 *)0x754100;
        FUN_0084a5e4();
        *(uint *)(unaff_EBP + -0x48) =
             (-(uint)(*(int *)(*(int *)(unaff_EBP + -0x90) + 0x28) != 0) & 0xfffffff7) + 9;
        iVar9 = *(int *)(*(int *)(unaff_EBP + -0x90) + 0xc);
        if ((iVar9 < 90000000) || (*(undefined4 *)(unaff_EBP + -0x28) = 1, 90999999 < iVar9)) {
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          piStack_328 = (int *)0x0;
          puStack_32c = (undefined1 *)0x75414d;
          puStack_32c = (undefined1 *)FUN_0045e2eb();
          iStack_330 = unaff_EBP + -0xe0;
          puStack_334 = (undefined1 *)0x75415c;
          puVar5 = (undefined4 *)FUN_005536ce();
          piStack_328 = (int *)0x754166;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                     (IBinding *)*puVar5);
          FUN_004125e6();
        }
        else {
          *(undefined4 *)(unaff_EBP + 0x1c) = 0;
          piStack_328 = (int *)(unaff_EBP + -0x10c);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          puStack_32c = (undefined1 *)0x75419a;
          puVar5 = (undefined4 *)FUN_00679d22();
          piStack_328 = (int *)*puVar5;
          puStack_32c = (undefined1 *)(unaff_EBP + 0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          iStack_330 = 0x7541ad;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          if (*(int *)(unaff_EBP + -0x10c) != 0) {
            piStack_328 = (int *)0x7541c7;
            FUN_00434e38();
          }
          piStack_328 = (int *)0x7541d9;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          piStack_328 = (int *)0x7541e9;
          FUN_00403191();
          piStack_328 = (int *)0x0;
          puStack_32c = (undefined1 *)0xffffffff;
          iStack_330 = *(int *)(unaff_EBP + 0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          puStack_334 = (undefined1 *)0x0;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          piStack_328 = (int *)0x0;
          puStack_32c = (undefined1 *)(unaff_EBP + -0x248);
          iStack_330 = unaff_EBP + -0x178;
          puStack_334 = (undefined1 *)0xffffffff;
          FUN_00449713();
          FUN_00456ad5();
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_334;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          FUN_00405a1d();
          FUN_00402660();
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          puStack_32c = (undefined1 *)0x754262;
          uVar3 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x104) = uVar3;
          piStack_328 = (int *)0x754277;
          iVar9 = FUN_0041a581();
          if ((iVar9 < 0) && (iVar9 != -0x7fffbffe)) {
            piStack_328 = (int *)0x754288;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          piStack_328 = (int *)0x754298;
          iVar9 = FUN_00402bc3();
          if (iVar9 < 0) {
            piStack_328 = (int *)0x7542a3;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          piStack_328 = (int *)0x7542b3;
          iVar9 = FUN_00402bc3();
          if (iVar9 < 0) {
            piStack_328 = (int *)0x7542be;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          piStack_328 = (int *)0x7542ce;
          iVar9 = FUN_00402bc3();
          if (iVar9 < 0) {
            piStack_328 = (int *)0x7542d9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          if (*(int *)(unaff_EBP + 0x1c) != 0) {
            piStack_328 = (int *)0x7542ed;
            FUN_00434e38();
          }
        }
        piStack_328 = (int *)0xff;
        puStack_32c = (undefined1 *)0x754300;
        FUN_004031b7();
        piVar6 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        if (piVar6 == (int *)0x0) {
          piStack_328 = (int *)0x754315;
          FUN_00878dfb();
          piVar6 = *(int **)(unaff_EBP + -0x10);
        }
        puStack_334 = *(undefined1 **)(unaff_EBP + -0x14);
        iStack_330 = *(int *)(unaff_EBP + -0x198);
        puStack_32c = *(undefined1 **)(unaff_EBP + -0x194);
        *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0xac) * 0x35;
        *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + 0xc) + 0xd;
        iVar9 = *piVar6;
        piStack_328 = *(int **)(unaff_EBP + -400);
        *(int **)(unaff_EBP + 0x1c) = piVar6;
        iVar9 = (**(code **)(iVar9 + 0x80))();
        if (iVar9 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          FUN_00878dfb();
        }
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 8);
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x10);
        *(int **)(unaff_EBP + 0x1c) = piVar6;
        *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 8);
        iVar9 = FUN_0040e53d();
        iVar2 = FUN_0040e53d();
        *(int *)(unaff_EBP + -0x18) = (iVar2 - iVar9) / 2 + 0x29 + *(int *)(unaff_EBP + -0x7c);
        FUN_0040e48b();
        FUN_0040e48b();
        iStack_360 = *(int *)(unaff_EBP + 0x1c);
        iVar9 = (**(code **)(*piVar6 + 0x80))();
        if (iVar9 < 0) {
          iStack_368 = *(int *)(unaff_EBP + 0x1c);
          piStack_370 = (int *)0x754466;
          iStack_36c = iVar9;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        iStack_368 = 0x754476;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          iStack_368 = 0x754481;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x5c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          FUN_0045e2eb();
          iStack_368 = unaff_EBP + -0xe8;
          iStack_36c = 0x7544b2;
          FUN_0045a1d8();
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          iStack_368 = 0x7544bf;
          FUN_00414f8b();
          iVar9 = *(int *)(unaff_EBP + -0xe8);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
        }
        else {
          iStack_368 = unaff_EBP + -0xd8;
          iStack_36c = 0x7544e1;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          iStack_368 = 0x7544ee;
          FUN_00414f8b();
          iVar9 = *(int *)(unaff_EBP + -0xd8);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
        }
        if (iVar9 != 0) {
          iStack_368 = 0x754505;
          FUN_00434e38();
        }
        iStack_368 = 0x754512;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iStack_368 = 0x754522;
        FUN_00403191();
        iStack_368 = unaff_EBP + -0x1b8;
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iStack_36c = 0x75453c;
        iStack_36c = FUN_00449749();
        piStack_370 = (int *)0x754545;
        puStack_374 = (undefined *)FUN_00449713();
        *(int ***)(unaff_EBP + 0x1c) = &piStack_370;
        piStack_378 = (int *)0x754551;
        FUN_00448a17();
        puStack_374 = (undefined *)
                      (*(int *)(unaff_EBP + -0x48) + *(int *)(unaff_EBP + -0xf0) + 0x20 +
                      *(int *)(unaff_EBP + -0x7c));
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        piStack_378 = (int *)0x754570;
        FUN_004115d9();
        piStack_378 = (int *)0x754577;
        iVar2 = FUN_0040e48b();
        iVar9 = *(int *)(unaff_EBP + 0xc);
        piStack_378 = (int *)(iVar2 + 0x15 + iVar9);
        iStack_37c = 0x754587;
        FUN_004115d9();
        iStack_37c = 0x75458e;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iStack_368 = 0x75459e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_368 = 0x7545a9;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_368 = 0x7545b9;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_368 = 0x7545c4;
          FUN_00878dfb();
        }
        iStack_368 = 0x7545d0;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        iStack_368 = 0x7545e3;
        iStack_36c = FUN_00449713();
        *(int **)(unaff_EBP + 0x1c) = &iStack_368;
        piStack_370 = (int *)0x7545ef;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        iStack_36c = 0x7545fb;
        FUN_0044974c();
        iStack_36c = 0x754602;
        uVar3 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_368 = 0x754615;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_368 = 0x754620;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x18) != 0) {
          if (*(int *)(unaff_EBP + -0x28) == 0) {
            iStack_368 = unaff_EBP + -100;
            iStack_36c = 0x75464f;
            FUN_0084a5e4();
            iVar9 = ((100 - *(int *)(unaff_EBP + -0xfc)) *
                    *(int *)(*(int *)(unaff_EBP + -0x90) + 100)) / 100;
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            *(int *)(unaff_EBP + -0xa0) = *(int *)(unaff_EBP + -0xa0) + iVar9;
            *(int *)(unaff_EBP + -0x70) = iVar9;
            iVar9 = *(int *)(*(int *)(unaff_EBP + -0x60) + 100);
            *(int *)(unaff_EBP + -0xa4) = *(int *)(unaff_EBP + -0xa4) + iVar9;
            if (*(int *)(*(int *)(unaff_EBP + -0x90) + 0x20) == 0) {
              *(undefined4 *)(unaff_EBP + -0x28) = 100;
            }
            else {
              *(int *)(unaff_EBP + -0x28) = ((iVar9 - *(int *)(unaff_EBP + -0x70)) * 100) / iVar9;
            }
            iStack_368 = 0xff;
            iStack_36c = 0x7546ad;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x41;
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              iStack_368 = 0x7546c1;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              iStack_368 = 0x7546d1;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x10);
            *(int **)(unaff_EBP + -0x18) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
            iVar9 = FUN_0040e48b();
            iStack_37c = iVar9 + *(int *)(unaff_EBP + 0xc) + 0x1a + *(int *)(unaff_EBP + -0x58);
            iVar2 = *(int *)(unaff_EBP + -0x48) + *(int *)(unaff_EBP + -0x7c);
            iVar9 = *piVar6;
            puStack_374 = *(undefined **)(unaff_EBP + -0x24);
            piStack_370 = *(int **)(unaff_EBP + -600);
            iStack_36c = *(int *)(unaff_EBP + -0x254);
            *(int *)(unaff_EBP + 0x1c) = iVar2;
            piStack_378 = (int *)(iVar2 + 0x25);
            iStack_368 = *(int *)(unaff_EBP + -0x250);
            piStack_380 = *(int **)(unaff_EBP + -0x18);
            puStack_384 = (undefined *)0x75471c;
            iVar9 = (**(code **)(iVar9 + 0x80))();
            if (iVar9 < 0) {
              puStack_384 = &DAT_00963cc8;
              iStack_388 = *(undefined4 *)(unaff_EBP + -0x18);
              uStack_390 = 0x75472e;
              iStack_38c = iVar9;
              FUN_00878e09();
            }
            puStack_384 = (undefined *)(unaff_EBP + -600);
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_388 = 0x75473e;
            puStack_384 = (undefined *)FUN_00402bc3();
            if ((int)puStack_384 < 0) {
              iStack_388 = 0x754749;
              FUN_00878dfb();
            }
            iVar9 = *(int *)(unaff_EBP + -0x28) / 100;
            *(int *)(unaff_EBP + -0x74) = iVar9;
            if (0 < iVar9) {
              puStack_384 = (undefined *)0x3;
              iStack_388 = 0xff;
              iStack_38c = 0x75476f;
              FUN_004031b7();
              uVar3 = *(undefined4 *)(unaff_EBP + -0x2a0 + *(int *)(unaff_EBP + -0x74) * 4);
              *(undefined1 *)(unaff_EBP + -4) = 0x42;
              *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
              if (*(int *)(unaff_EBP + -0x14) == 0) {
                puStack_384 = (undefined *)0x80004003;
                iStack_388 = 0x754791;
                FUN_00878dfb();
              }
              if (*(int *)(unaff_EBP + -0x38) == 0) {
                puStack_384 = (undefined *)0x80004003;
                iStack_388 = 0x75479d;
                FUN_00878dfb();
              }
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                puStack_384 = (undefined *)0x80004003;
                iStack_388 = 0x7547ac;
                FUN_00878dfb();
              }
              piVar6 = *(int **)(unaff_EBP + -0x10);
              *(int **)(unaff_EBP + -0x18) = piVar6;
              puStack_384 = (undefined *)0x7547b9;
              iVar9 = FUN_0040e48b();
              puStack_384 = (undefined *)0x7547c3;
              iVar2 = FUN_0040e48b();
              uStack_394 = *(undefined4 *)(unaff_EBP + -0x24);
              uStack_390 = *(undefined4 *)(unaff_EBP + -0x1f8);
              iStack_39c = iVar2 + *(int *)(unaff_EBP + 0xc) + iVar9 + 0x1a +
                           *(int *)(unaff_EBP + -0x58);
              iStack_38c = *(int *)(unaff_EBP + -500);
              iStack_398 = *(int *)(unaff_EBP + 0x1c) + 0x25;
              iStack_388 = *(undefined4 *)(unaff_EBP + -0x1f0);
              uStack_3a0 = *(undefined4 *)(unaff_EBP + -0x18);
              puStack_384 = *(undefined **)(unaff_EBP + -0x1ec);
              puStack_3a4 = (undefined *)0x7547f6;
              iVar9 = (**(code **)(*piVar6 + 0x80))();
              if (iVar9 < 0) {
                puStack_384 = &DAT_00963cc8;
                iStack_388 = *(undefined4 *)(unaff_EBP + -0x18);
                uStack_390 = 0x754808;
                iStack_38c = iVar9;
                FUN_00878e09();
              }
              puStack_384 = (undefined *)(unaff_EBP + -0x1f8);
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              iStack_388 = 0x754818;
              puStack_384 = (undefined *)FUN_00402bc3();
              if ((int)puStack_384 < 0) {
                iStack_388 = 0x754823;
                FUN_00878dfb();
              }
            }
            iVar9 = *(int *)(unaff_EBP + -0x28) / 10;
            *(int *)(unaff_EBP + -0x24) = iVar9;
            if (0 < iVar9) {
              puStack_384 = (undefined *)0x3;
              iStack_388 = 0xff;
              iStack_38c = 0x754849;
              FUN_004031b7();
              *(undefined1 *)(unaff_EBP + -4) = 0x43;
              if (*(int *)(unaff_EBP + -0x74) < 1) {
                iVar9 = 0;
              }
              else {
                iVar9 = 5;
              }
              *(undefined4 *)(unaff_EBP + -0x2c) =
                   *(undefined4 *)
                    (unaff_EBP + -0x2a0 + ((*(int *)(unaff_EBP + -0x28) % 100) / 10) * 4);
              if (*(int *)(unaff_EBP + -0x14) == 0) {
                puStack_384 = (undefined *)0x80004003;
                iStack_388 = 0x754886;
                FUN_00878dfb();
              }
              if (*(int *)(unaff_EBP + -0x38) == 0) {
                puStack_384 = (undefined *)0x80004003;
                iStack_388 = 0x754892;
                FUN_00878dfb();
              }
              *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                puStack_384 = (undefined *)0x80004003;
                iStack_388 = 0x7548a4;
                FUN_00878dfb();
              }
              *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
              puStack_384 = (undefined *)0x7548b2;
              iVar2 = FUN_0040e48b();
              puStack_384 = (undefined *)0x7548bc;
              iVar8 = FUN_0040e48b();
              uStack_394 = *(undefined4 *)(unaff_EBP + -0x2c);
              iStack_39c = iVar8 + iVar9 + iVar2 + *(int *)(unaff_EBP + 0xc) + 0x1a +
                           *(int *)(unaff_EBP + -0x58);
              uStack_390 = *(undefined4 *)(unaff_EBP + -0x278);
              iStack_38c = *(int *)(unaff_EBP + -0x274);
              iStack_398 = *(int *)(unaff_EBP + 0x1c) + 0x25;
              iStack_388 = *(undefined4 *)(unaff_EBP + -0x270);
              uStack_3a0 = *(undefined4 *)(unaff_EBP + -0x18);
              puStack_384 = *(undefined **)(unaff_EBP + -0x26c);
              puStack_3a4 = (undefined *)0x7548f2;
              iVar9 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x80))();
              if (iVar9 < 0) {
                puStack_384 = &DAT_00963cc8;
                iStack_388 = *(undefined4 *)(unaff_EBP + -0x18);
                uStack_390 = 0x754904;
                iStack_38c = iVar9;
                FUN_00878e09();
              }
              puStack_384 = (undefined *)(unaff_EBP + -0x278);
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              iStack_388 = 0x754914;
              puStack_384 = (undefined *)FUN_00402bc3();
              if ((int)puStack_384 < 0) {
                iStack_388 = 0x75491f;
                FUN_00878dfb();
              }
            }
            puStack_384 = (undefined *)0x3;
            iStack_388 = 0xff;
            iStack_38c = 0x754931;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            *(undefined4 *)(unaff_EBP + -0x34) = 5;
            if (*(int *)(unaff_EBP + -0x74) < 1) {
              *(undefined4 *)(unaff_EBP + -0x34) = 0;
            }
            *(undefined4 *)(unaff_EBP + -0x18) = 5;
            if (*(int *)(unaff_EBP + -0x24) < 1) {
              *(undefined4 *)(unaff_EBP + -0x18) = 0;
            }
            *(undefined4 *)(unaff_EBP + -0x2c) =
                 *(undefined4 *)(unaff_EBP + -0x2a0 + (*(int *)(unaff_EBP + -0x28) % 10) * 4);
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              puStack_384 = (undefined *)0x80004003;
              iStack_388 = 0x754978;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x38) == 0) {
              puStack_384 = (undefined *)0x80004003;
              iStack_388 = 0x754983;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              puStack_384 = (undefined *)0x80004003;
              iStack_388 = 0x754992;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x10);
            *(int **)(unaff_EBP + -0x28) = piVar6;
            puStack_384 = (undefined *)0x75499f;
            iVar9 = FUN_0040e48b();
            puStack_384 = (undefined *)0x7549a9;
            iVar2 = FUN_0040e48b();
            uStack_394 = *(undefined4 *)(unaff_EBP + -0x2c);
            uStack_390 = *(undefined4 *)(unaff_EBP + -0x228);
            iStack_39c = iVar2 + *(int *)(unaff_EBP + 0xc) + iVar9 + *(int *)(unaff_EBP + -0x58) +
                         *(int *)(unaff_EBP + -0x18) + 0x1a + *(int *)(unaff_EBP + -0x34);
            iStack_38c = *(int *)(unaff_EBP + -0x224);
            iStack_398 = *(int *)(unaff_EBP + 0x1c) + 0x25;
            iStack_388 = *(int *)(unaff_EBP + -0x220);
            uStack_3a0 = *(undefined4 *)(unaff_EBP + -0x28);
            puStack_384 = *(undefined **)(unaff_EBP + -0x21c);
            puStack_3a4 = (undefined *)0x7549e2;
            iVar9 = (**(code **)(*piVar6 + 0x80))();
            if (iVar9 < 0) {
              puStack_3a4 = &DAT_00963cc8;
              uStack_3a8 = *(undefined4 *)(unaff_EBP + -0x28);
              uStack_3b0 = 0x7549f4;
              iStack_3ac = iVar9;
              FUN_00878e09();
            }
            puStack_3a4 = (undefined *)(unaff_EBP + -0x228);
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            uStack_3a8 = 0x754a04;
            puStack_3a4 = (undefined *)FUN_00402bc3();
            if ((int)puStack_3a4 < 0) {
              uStack_3a8 = 0x754a11;
              FUN_00878dfb();
            }
            puStack_3a4 = (undefined *)0x3;
            uStack_3a8 = 0xff;
            iStack_3ac = 0x754a23;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x45;
            *(undefined4 *)(unaff_EBP + -0x34) = 5;
            if (*(int *)(unaff_EBP + -0x74) < 1) {
              *(undefined4 *)(unaff_EBP + -0x34) = 0;
            }
            iVar9 = *(int *)(unaff_EBP + -0x24);
            *(undefined4 *)(unaff_EBP + -0x24) = 5;
            if (iVar9 < 1) {
              *(undefined4 *)(unaff_EBP + -0x24) = 0;
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              puStack_3a4 = (undefined *)0x80004003;
              uStack_3a8 = 0x754a55;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x38) == 0) {
              puStack_3a4 = (undefined *)0x80004003;
              uStack_3a8 = 0x754a60;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              puStack_3a4 = (undefined *)0x80004003;
              uStack_3a8 = 0x754a6f;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x10);
            *(int **)(unaff_EBP + -0x18) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x98);
            puStack_3a4 = (undefined *)0x754a85;
            iVar9 = FUN_0040e48b();
            puStack_3a4 = (undefined *)0x754a8f;
            iVar2 = FUN_0040e48b();
            uStack_3b4 = *(undefined4 *)(unaff_EBP + -0x2c);
            uStack_3b0 = *(undefined4 *)(unaff_EBP + -0x218);
            iStack_3bc = iVar2 + *(int *)(unaff_EBP + 0xc) + iVar9 + *(int *)(unaff_EBP + -0x58) +
                         *(int *)(unaff_EBP + -0x24) + 0x1f + *(int *)(unaff_EBP + -0x34);
            iStack_3ac = *(int *)(unaff_EBP + -0x214);
            iStack_3b8 = *(int *)(unaff_EBP + 0x1c) + 0x25;
            uStack_3a8 = *(undefined4 *)(unaff_EBP + -0x210);
            uStack_3c0 = *(undefined4 *)(unaff_EBP + -0x18);
            puStack_3a4 = *(undefined **)(unaff_EBP + -0x20c);
            puStack_3c4 = (undefined4 *)0x754ac8;
            iVar9 = (**(code **)(*piVar6 + 0x80))();
            if (iVar9 < 0) {
              puStack_3c4 = (undefined4 *)&DAT_00963cc8;
              iStack_3c8 = *(int *)(unaff_EBP + -0x18);
              iStack_3d0 = 0x754ada;
              iStack_3cc = iVar9;
              FUN_00878e09();
            }
            puStack_3c4 = (undefined4 *)(unaff_EBP + -0x218);
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_3c8 = 0x754aea;
            puStack_3c4 = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_3c4 < 0) {
              iStack_3c8 = 0x754af5;
              FUN_00878dfb();
            }
            iVar9 = *(int *)(unaff_EBP + -0x60);
            puStack_3c4 = (undefined4 *)0xa4c;
            iStack_3c8 = unaff_EBP + -0x100;
            iStack_3cc = 0x754b0e;
            piVar6 = (int *)FUN_00679d86();
            puStack_3c4 = *(undefined4 **)(iVar9 + 100);
            iStack_3c8 = *piVar6;
            iStack_3cc = unaff_EBP + -0x1c;
            *(undefined1 *)(unaff_EBP + -4) = 0x46;
            iStack_3d0 = 0x754b21;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            puStack_3c4 = (undefined4 *)0x754b33;
            FUN_00402676();
            puStack_3c4 = &DAT_00980690;
            iStack_3c8 = 0x754b3f;
            FUN_00403191();
            puStack_3c4 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            iStack_3c8 = 0x754b4f;
            FUN_00403191();
            puStack_3c4 = (undefined4 *)(unaff_EBP + -0x168);
            iStack_3c8 = unaff_EBP + -0x268;
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            iStack_3cc = 0x754b69;
            iStack_3cc = FUN_00449749();
            iStack_3d0 = 0x754b72;
            uVar3 = FUN_00411641();
            *(int **)(unaff_EBP + -0x2c) = &iStack_3d0;
            FUN_004033a1(uVar3);
            iVar8 = (*(int *)(unaff_EBP + -0xac) + 1) * 0x35 + *(int *)(unaff_EBP + -0x48);
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            *(int *)(unaff_EBP + -0x34) = iVar8;
            FUN_004115d9(iVar8);
            iVar9 = FUN_0040e48b();
            iVar2 = *(int *)(unaff_EBP + 0xc);
            iVar9 = iVar9 + 0x15 + iVar2;
            FUN_004115d9(iVar9);
            FUN_00448e3a(iVar9,iVar8);
            puStack_3c4 = (undefined4 *)(unaff_EBP + -0x268);
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            iStack_3c8 = 0x754bcb;
            puStack_3c4 = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_3c4 < 0) {
              iStack_3c8 = 0x754bd6;
              FUN_00878dfb();
            }
            puStack_3c4 = (undefined4 *)(unaff_EBP + -0x168);
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_3c8 = 0x754be6;
            puStack_3c4 = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_3c4 < 0) {
              iStack_3c8 = 0x754bf1;
              FUN_00878dfb();
            }
            puStack_3c4 = &DAT_00980690;
            iStack_3c8 = 0x754bfd;
            FUN_00403191();
            puStack_3c4 = (undefined4 *)(unaff_EBP + -0x188);
            *(undefined1 *)(unaff_EBP + -4) = 0x4a;
            iStack_3c8 = 0x754c10;
            iStack_3cc = FUN_00411641();
            *(int **)(unaff_EBP + -0x2c) = &iStack_3c8;
            iStack_3d0 = 0x754c1c;
            FUN_004033a1();
            *(undefined1 *)(unaff_EBP + -4) = 0x4a;
            iStack_3cc = 0x754c28;
            FUN_0044974c();
            iStack_3cc = 0x754c2f;
            uVar3 = FUN_00448ebb();
            *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
            puStack_3c4 = (undefined4 *)(unaff_EBP + -0x188);
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_3c8 = 0x754c42;
            puStack_3c4 = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_3c4 < 0) {
              iStack_3c8 = 0x754c4d;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              puStack_3c4 = (undefined4 *)0x80004003;
              iStack_3c8 = 0x754c5d;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              puStack_3c4 = (undefined4 *)0x80004003;
              iStack_3c8 = 0x754c6d;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x10);
            puStack_3c4 = (undefined4 *)0x754c78;
            iVar9 = FUN_0040e48b();
            puStack_3c4 = (undefined4 *)0xffffffff;
            iStack_3c8 = 1;
            iStack_3cc = *(int *)(unaff_EBP + -0x48) + 2;
            iStack_3d0 = *(int *)(unaff_EBP + 0x1c) + 0x39;
            iVar9 = (**(code **)(*piVar6 + 0x8c))(piVar6,iVar9 + 0x15 + iVar2);
            if (iVar9 < 0) {
              FUN_00878e09(iVar9,piVar6,&DAT_00963cc8);
            }
            FUN_004031b7(0xff,3);
            *(undefined1 *)(unaff_EBP + -4) = 0x4c;
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              FUN_00878dfb(0x80004003);
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar6 = *(int **)(unaff_EBP + -0x10);
            *(int **)(unaff_EBP + -0x24) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x4c);
            iVar9 = FUN_0040e48b();
            iVar9 = (**(code **)(*piVar6 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x24),
                               iVar9 + *(int *)(unaff_EBP + 0xc) + 0x1f +
                               *(int *)(unaff_EBP + -0x48),*(int *)(unaff_EBP + 0x1c) + 0x36,
                               *(undefined4 *)(unaff_EBP + -0x2c),
                               *(undefined4 *)(unaff_EBP + -0x1a8),
                               *(undefined4 *)(unaff_EBP + -0x1a4),
                               *(undefined4 *)(unaff_EBP + -0x1a0),
                               *(undefined4 *)(unaff_EBP + -0x19c));
            if (iVar9 < 0) {
              iStack_368 = *(int *)(unaff_EBP + -0x24);
              piStack_370 = (int *)0x754d33;
              iStack_36c = iVar9;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_368 = 0x754d43;
            iVar9 = FUN_00402bc3();
            if (iVar9 < 0) {
              iStack_368 = 0x754d4e;
              FUN_00878dfb();
            }
            iStack_368 = unaff_EBP + -0x108;
            iStack_36c = 0x754d64;
            piVar6 = (int *)FUN_00679d86();
            iStack_368 = *piVar6;
            *(undefined1 *)(unaff_EBP + -4) = 0x4d;
            iStack_36c = unaff_EBP + -0x1c;
            piStack_370 = (int *)0x754d77;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            FUN_00402676();
            iStack_368 = 0x754d98;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x128));
            iStack_368 = unaff_EBP + -0x128;
            iStack_36c = 0x754da5;
            iVar9 = FUN_00402e32();
            if (iVar9 < 0) {
              iStack_368 = 0x754db1;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x4e;
            iStack_368 = 0x754dc1;
            FUN_00403191();
            iStack_368 = unaff_EBP + -0x1c8;
            *(undefined1 *)(unaff_EBP + -4) = 0x4f;
            iStack_36c = 0x754ddb;
            iStack_36c = FUN_00449749();
            piStack_370 = (int *)0x754de4;
            puStack_374 = (undefined *)FUN_00411641();
            *(int ***)(unaff_EBP + -0x2c) = &piStack_370;
            piStack_378 = (int *)0x754df0;
            piStack_370 = extraout_ECX_06;
            FUN_004033a1();
            puStack_374 = *(undefined **)(unaff_EBP + -0x34);
            *(undefined1 *)(unaff_EBP + -4) = 0x4f;
            piStack_378 = (int *)0x754dff;
            FUN_004115d9();
            piStack_378 = (int *)0x754e06;
            iVar9 = FUN_0040e48b();
            piStack_378 = (int *)0x754e10;
            FUN_004115d9();
            piStack_378 = (int *)0x754e17;
            iVar2 = FUN_0040e48b();
            piStack_378 = (int *)(iVar2 + *(int *)(unaff_EBP + 0xc) + iVar9 + 0x24 +
                                 *(int *)(unaff_EBP + -0x48));
            iStack_37c = 0x754e2e;
            FUN_004115d9();
            iStack_37c = 0x754e35;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x4e;
            iStack_368 = 0x754e45;
            iVar9 = FUN_00402bc3();
            if (iVar9 < 0) {
              iStack_368 = 0x754e50;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_368 = 0x754e60;
            iVar9 = FUN_00402bc3();
            if (iVar9 < 0) {
              iStack_368 = 0x754e6b;
              FUN_00878dfb();
            }
            if (*(int *)(*(int *)(unaff_EBP + -0x90) + 0x28) != 0) {
              iStack_368 = unaff_EBP + -0xdc;
              iStack_36c = 0x754e91;
              piVar6 = (int *)FUN_00679d86();
              iStack_368 = *piVar6;
              iStack_36c = unaff_EBP + -0x1c;
              *(undefined1 *)(unaff_EBP + -4) = 0x51;
              piStack_370 = (int *)0x754ea4;
              FUN_0041354c();
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              FUN_00402676();
              iStack_368 = 0x754ebf;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x138));
              iStack_368 = unaff_EBP + -0x138;
              iStack_36c = 0x754ecc;
              iVar9 = FUN_00402e32();
              if (iVar9 < 0) {
                iStack_368 = 0x754ed8;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x52;
              iStack_368 = 0x754ee5;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
              iStack_368 = unaff_EBP + -0x148;
              iStack_36c = 0x754ef2;
              iVar9 = FUN_00402e32();
              if (iVar9 < 0) {
                iStack_368 = 0x754efe;
                FUN_00878dfb();
              }
              iStack_368 = unaff_EBP + -0x148;
              *(undefined1 *)(unaff_EBP + -4) = 0x53;
              iStack_36c = 0x754f18;
              iStack_36c = FUN_00449749();
              piStack_370 = (int *)0x754f21;
              puStack_374 = (undefined *)FUN_00411641();
              *(int ***)(unaff_EBP + -0x2c) = &piStack_370;
              piStack_378 = (int *)0x754f2d;
              piStack_370 = extraout_ECX_07;
              FUN_004033a1();
              puStack_374 = (undefined *)(*(int *)(unaff_EBP + 0x1c) + 0x45);
              *(undefined1 *)(unaff_EBP + -4) = 0x53;
              piStack_378 = (int *)0x754f40;
              FUN_004115d9();
              piStack_378 = (int *)0x754f47;
              iVar9 = FUN_0040e48b();
              piStack_378 = (int *)(iVar9 + 0x15 + *(int *)(unaff_EBP + 0xc));
              iStack_37c = 0x754f57;
              FUN_004115d9();
              iStack_37c = 0x754f5e;
              FUN_00448e3a();
              *(undefined1 *)(unaff_EBP + -4) = 0x52;
              iStack_368 = 0x754f6e;
              iVar9 = FUN_00402bc3();
              if (iVar9 < 0) {
                iStack_368 = 0x754f79;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              iStack_368 = 0x754f89;
              iVar9 = FUN_00402bc3();
              if (iVar9 < 0) {
                iStack_368 = 0x754f94;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x38;
            if (*(int *)(unaff_EBP + -0x60) != 0) {
              iStack_368 = 0x754fac;
              FUN_0045e794();
              *(undefined4 *)(unaff_EBP + -0x60) = 0;
            }
          }
          else {
            iStack_368 = unaff_EBP + -0x3c;
            iStack_36c = 0x754fce;
            piVar6 = (int *)FUN_00679d86();
            iStack_368 = *piVar6;
            iStack_36c = unaff_EBP + -0x1c;
            *(undefined1 *)(unaff_EBP + -4) = 0x55;
            piStack_370 = (int *)0x754fe1;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x38;
            FUN_00402676();
            iStack_368 = 0x754fff;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
            iStack_368 = unaff_EBP + -0x8c;
            iStack_36c = 0x75500c;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              iStack_368 = 0x755018;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x56;
            iStack_368 = 0x755025;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
            iStack_368 = unaff_EBP + -0xc4;
            iStack_36c = 0x755032;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              iStack_368 = 0x75503e;
              FUN_00878dfb();
            }
            iStack_368 = unaff_EBP + -0xc4;
            *(undefined1 *)(unaff_EBP + -4) = 0x57;
            iStack_36c = 0x755058;
            iStack_36c = FUN_00449749();
            piStack_370 = (int *)0x755061;
            puStack_374 = (undefined *)FUN_00411641();
            *(int ***)(unaff_EBP + 0xc) = &piStack_370;
            piStack_378 = (int *)0x75506d;
            piStack_370 = extraout_ECX_08;
            FUN_004033a1();
            puStack_374 = (undefined *)((*(int *)(unaff_EBP + -0xac) + 1) * 0x35);
            *(undefined1 *)(unaff_EBP + -4) = 0x57;
            piStack_378 = (int *)0x755084;
            FUN_004115d9();
            piStack_378 = (int *)0x75508b;
            iVar2 = FUN_0040e48b();
            piStack_378 = (int *)(iVar2 + 0x15 + iVar9);
            iStack_37c = 0x755098;
            FUN_004115d9();
            iStack_37c = 0x75509f;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x56;
            iStack_368 = 0x7550af;
            iVar9 = FUN_00402bc3();
            if (iVar9 < 0) {
              iStack_368 = 0x7550ba;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x38;
            iStack_368 = 0x7550ca;
            iVar9 = FUN_00402bc3();
            if (iVar9 < 0) {
              iStack_368 = 0x7550d5;
              FUN_00878dfb();
            }
          }
        }
        iStack_368 = 0xff;
        iStack_36c = 0x7550e7;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          iStack_368 = 0x7550fb;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x10);
        puStack_374 = *(undefined **)(unaff_EBP + -0x9c);
        piStack_370 = *(int **)(unaff_EBP + -0xd4);
        iStack_36c = *(int *)(unaff_EBP + -0xd0);
        piStack_378 = (int *)(*(int *)(unaff_EBP + -0x7c) + 0x56);
        iStack_37c = *(undefined4 *)(unaff_EBP + -0x50);
        iStack_368 = *(int *)(unaff_EBP + -0xcc);
        puStack_384 = (undefined *)0x755126;
        piStack_380 = piVar6;
        puVar7 = (undefined1 *)(**(code **)(*piVar6 + 0x80))();
        if ((int)puVar7 < 0) {
          iStack_330 = 0x755138;
          puStack_32c = puVar7;
          piStack_328 = piVar6;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        piStack_328 = (int *)0x755148;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          piStack_328 = (int *)0x755153;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          piStack_328 = (int *)0x755170;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        if (*(int *)(unaff_EBP + -0x90) != 0) {
          piStack_328 = (int *)0x755188;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x90) = 0;
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      } while (*(int *)(unaff_EBP + -0x20) < *(int *)(unaff_EBP + -0x68));
    }
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_328 = (int *)0x7551b7;
        FUN_00878dfb();
      }
      iVar9 = *(int *)(unaff_EBP + -0x78);
      piStack_328 = (int *)0x1;
      puStack_32c = (undefined1 *)(*(int *)(*(int *)(unaff_EBP + -0x54) + 0xc) + -0x14);
      iStack_330 = iVar9 + 0x23;
      puStack_334 = (undefined1 *)0xd;
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))();
      if (iVar2 < 0) {
        FUN_00878e09();
      }
      FUN_004031b7();
      piVar6 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      if (piVar6 == (int *)0x0) {
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar6;
      *(int **)(unaff_EBP + 0x18) = piVar6;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        iStack_360 = *(int *)(unaff_EBP + 0x18);
        iStack_368 = 0x75524a;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_360 = 0x75525a;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_360 = 0x755265;
        FUN_00878dfb();
      }
      iStack_360 = unaff_EBP + 0x18;
      piVar6 = (int *)FUN_00679d86();
      iStack_360 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      iStack_368 = 0x75528e;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00402676();
      iStack_360 = 0x7552ac;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
      iStack_360 = unaff_EBP + -0xc4;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_360 = 0x7552ca;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      iStack_360 = 0x7552d7;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
      iStack_360 = unaff_EBP + -0x8c;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_360 = 0x7552f0;
        FUN_00878dfb();
      }
      iStack_360 = unaff_EBP + -0x8c;
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      FUN_00449749();
      iStack_368 = 0x755313;
      iStack_36c = FUN_00411641();
      *(int **)(unaff_EBP + 0x18) = &iStack_368;
      piStack_370 = (int *)0x75531f;
      FUN_004033a1();
      iStack_36c = iVar9 + 0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      piStack_370 = (int *)0x75532f;
      FUN_004115d9();
      piStack_370 = (int *)0x755336;
      iVar9 = FUN_0040e48b();
      piStack_370 = (int *)(iVar9 + 0x10);
      puStack_374 = (undefined *)0x755342;
      FUN_004115d9();
      puStack_374 = (undefined *)0x755349;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      iStack_360 = 0x755359;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        iStack_360 = 0x755364;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_360 = 0x755374;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        iStack_360 = 0x75537f;
        FUN_00878dfb();
      }
      iStack_360 = 0x755388;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
      iStack_360 = unaff_EBP + -0x8c;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        iStack_360 = 0x7553a1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iStack_360 = 0x7553b4;
      FUN_00411641();
      *(int **)(unaff_EBP + 0x18) = &iStack_360;
      iStack_368 = 0x7553c0;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      FUN_0044974c();
      iVar9 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_360 = 0x7553e5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_360 = 0x7553f0;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x40) == 0) {
        iStack_360 = 0x755401;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_360 = 0x75540d;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      iStack_36c = FUN_0040e48b();
      iStack_360 = 1;
      iStack_368 = *(int *)(unaff_EBP + -0x78) + 0x31;
      iStack_36c = iStack_36c + 0x10;
      puStack_374 = (undefined *)0x755434;
      piStack_370 = piVar6;
      iStack_37c = (**(code **)(*piVar6 + 0x8c))();
      if (iStack_37c < 0) {
        puStack_374 = &DAT_00963cc8;
        piStack_380 = (int *)0x755444;
        piStack_378 = piVar6;
        FUN_00878e09();
      }
      puStack_374 = (undefined *)0x3;
      piStack_378 = (int *)0xff;
      iStack_37c = 0x755456;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      if (*(int *)(unaff_EBP + -0x40) == 0) {
        puStack_374 = (undefined *)0x80004003;
        piStack_378 = (int *)0x755466;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_374 = (undefined *)0x80004003;
        piStack_378 = (int *)0x755472;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      *(int **)(unaff_EBP + 0x18) = piVar6;
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x4c);
      puStack_374 = (undefined *)0x755486;
      iVar2 = FUN_0040e48b();
      puStack_384 = *(undefined **)(unaff_EBP + 0xc);
      piStack_380 = *(int **)(unaff_EBP + -0xd4);
      iStack_37c = *(undefined4 *)(unaff_EBP + -0xd0);
      iStack_388 = *(int *)(unaff_EBP + -0x78) + 0x2d;
      iStack_38c = iVar2 + 0x1a + iVar9;
      piStack_378 = *(int **)(unaff_EBP + -0xcc);
      uStack_390 = *(undefined4 *)(unaff_EBP + 0x18);
      puStack_374 = *(undefined **)(unaff_EBP + -200);
      uStack_394 = 0x7554af;
      puVar7 = (undefined1 *)(**(code **)(*piVar6 + 0x80))();
      if ((int)puVar7 < 0) {
        piStack_328 = *(int **)(unaff_EBP + 0x18);
        iStack_330 = 0x7554c1;
        puStack_32c = puVar7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      piStack_328 = (int *)0x7554d1;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        piStack_328 = (int *)0x7554dc;
        FUN_00878dfb();
      }
      piStack_328 = (int *)(unaff_EBP + 0x18);
      puStack_32c = (undefined1 *)0x7554ef;
      puVar5 = (undefined4 *)FUN_00679d86();
      piStack_328 = (int *)*puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      puStack_32c = (undefined1 *)(unaff_EBP + -0x1c);
      iStack_330 = 0x755505;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00402676();
      piStack_328 = (int *)0x755523;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
      piStack_328 = (int *)(unaff_EBP + -0xc4);
      puStack_32c = (undefined1 *)0x755535;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        piStack_328 = (int *)0x755541;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 99;
      piStack_328 = (int *)0x75554e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
      piStack_328 = (int *)(unaff_EBP + -0x8c);
      puStack_32c = (undefined1 *)0x75555b;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        piStack_328 = (int *)0x755567;
        FUN_00878dfb();
      }
      piStack_328 = (int *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 100;
      puStack_32c = (undefined1 *)0x755581;
      puStack_32c = (undefined1 *)FUN_00449749();
      iStack_330 = 0x75558a;
      puStack_334 = (undefined1 *)FUN_00411641();
      *(int **)(unaff_EBP + 0x18) = &iStack_330;
      iStack_330 = extraout_ECX_09;
      FUN_004033a1();
      iVar9 = *(int *)(unaff_EBP + -0x78);
      puStack_334 = (undefined1 *)(iVar9 + 0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 100;
      FUN_004115d9();
      FUN_0040e48b();
      FUN_004115d9();
      FUN_0040e48b();
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 99;
      piStack_328 = (int *)0x7555e7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_328 = (int *)0x7555f2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      piStack_328 = (int *)0x755602;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_328 = (int *)0x75560d;
        FUN_00878dfb();
      }
      piStack_328 = (int *)(iVar9 + 0x41);
      puStack_32c = (undefined1 *)0x755620;
      FUN_007509d5();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_328 = (int *)0x75564c;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_0045f10c();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      piStack_328 = (int *)0x75566c;
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      piStack_328 = (int *)0x75567d;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_328 = (int *)0x75568e;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
      piStack_328 = (int *)0x75569f;
      (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x9c) != (int *)0x0) {
      piStack_328 = (int *)0x7556b3;
      (**(code **)(**(int **)(unaff_EBP + -0x9c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x98) != (int *)0x0) {
      piStack_328 = (int *)0x7556c7;
      (**(code **)(**(int **)(unaff_EBP + -0x98) + 8))();
    }
    piStack_328 = (int *)0xa;
    puStack_32c = (undefined1 *)0x4;
    iStack_330 = unaff_EBP + -0x2a0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_334 = (undefined1 *)0x7556e0;
    FUN_0087a0b8();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      piStack_328 = (int *)0x7556f1;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      piStack_328 = (int *)0x755702;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0x14) != 0) {
      piStack_328 = (int *)0x755716;
      FUN_0045e794();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


