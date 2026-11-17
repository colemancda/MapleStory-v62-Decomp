/* FUN_0049ba6f - 0x0049ba6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049ba6f(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_4e8;
  int iStack_4e4;
  int iStack_4e0;
  int iStack_4dc;
  
  FUN_00879bb8();
  if ((*(int **)(extraout_ECX + 0xac) == (int *)0x0) ||
     (iVar3 = **(int **)(extraout_ECX + 0xac), iVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar3 + -4) >> 1;
  }
  if (uVar1 == 0) {
    iStack_4dc = *(undefined4 *)(extraout_ECX + 0x58);
    iStack_4e0 = 0x49bab2;
    FUN_0049ba0b();
  }
  iVar3 = *(int *)(extraout_ECX + 0x58);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iStack_4dc = 0x49bae5;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x13c));
      iStack_4dc = unaff_EBP + -0x13c;
      iStack_4e0 = 0x49baf7;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bb03;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x5f;
      iStack_4dc = 0x49bb13;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x14c));
      iStack_4dc = unaff_EBP + -0x14c;
      iStack_4e0 = 0x49bb20;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bb2c;
        FUN_00878dfb();
      }
      iStack_4dc = 0;
      iStack_4e0 = unaff_EBP + -0x13c;
      iStack_4e4 = unaff_EBP + -0x14c;
      uStack_4e8 = 0x59e;
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      uVar2 = FUN_00432f57(unaff_EBP + -0x6c);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
      FUN_0046fd15(uVar2);
      iVar3 = unaff_EBP + -0x37c;
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 100;
      iStack_4e0 = 0x49bba0;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0xe4) = uVar2;
      iStack_4dc = 0x49bbb8;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_4dc = 0x49bbc9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      iStack_4dc = 0x49bbd9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bbe4;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x6c) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x6c) = 0;
      }
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iStack_4dc = 0x49bc14;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bc1f;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_4dc = 0x49bc2f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bc3a;
        FUN_00878dfb();
      }
      iStack_4dc = 0x49bc47;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x15c));
      iStack_4dc = unaff_EBP + -0x15c;
      iStack_4e0 = 0x49bc54;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bc60;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x65;
      iStack_4dc = 0x49bc74;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1bc));
      iStack_4dc = unaff_EBP + -0x1bc;
      iStack_4e0 = 0x49bc81;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bc8d;
        FUN_00878dfb();
      }
      iStack_4dc = 0;
      iStack_4e0 = unaff_EBP + -0x15c;
      iStack_4e4 = unaff_EBP + -0x1bc;
      uStack_4e8 = 0x5a0;
      *(undefined1 *)(unaff_EBP + -4) = 0x66;
      uStack_4e8 = FUN_00679e4e(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x67;
      uVar2 = FUN_00432f57(unaff_EBP + -0x74);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
      FUN_0046fd15(uVar2);
      iVar3 = unaff_EBP + -0x39c;
      *(undefined1 *)(unaff_EBP + -4) = 0x68;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x6a;
      iStack_4e0 = 0x49bcfc;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0xf4) = uVar2;
      iStack_4dc = 0x49bd14;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_4dc = 0x49bd25;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x68;
      iStack_4dc = 0x49bd35;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bd40;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x74) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x74) = 0;
      }
      if (*(int *)(unaff_EBP + -100) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -100) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x65;
      iStack_4dc = 0x49bd70;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bd7b;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_4dc = 0x49bd8b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bd96;
        FUN_00878dfb();
      }
      iStack_4dc = 0x49bda3;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x17c));
      iStack_4dc = unaff_EBP + -0x17c;
      iStack_4e0 = 0x49bdb0;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bdbc;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x6b;
      iStack_4dc = 0x49bdd0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1fc));
      iStack_4dc = unaff_EBP + -0x1fc;
      iStack_4e0 = 0x49bddd;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bde9;
        FUN_00878dfb();
      }
      iStack_4dc = 0;
      iStack_4e0 = unaff_EBP + -0x17c;
      iStack_4e4 = unaff_EBP + -0x1fc;
      uStack_4e8 = 0x5a2;
      *(undefined1 *)(unaff_EBP + -4) = 0x6c;
      uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x6d;
      uVar2 = FUN_00432f57(unaff_EBP + -0x60);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
      FUN_0046fd15(uVar2);
      iVar3 = unaff_EBP + -0x49c;
      *(undefined1 *)(unaff_EBP + -4) = 0x6e;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      iStack_4e0 = 0x49be58;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0xfc) = uVar2;
      iStack_4dc = 0x49be70;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_4dc = 0x49be81;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x6e;
      iStack_4dc = 0x49be91;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49be9c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x60) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
      }
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x6b;
      iStack_4dc = 0x49becc;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bed7;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_4dc = 0x49bee7;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bef2;
        FUN_00878dfb();
      }
      iStack_4dc = 0x49beff;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x19c));
      iStack_4dc = unaff_EBP + -0x19c;
      iStack_4e0 = 0x49bf0c;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bf18;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x71;
      iStack_4dc = 0x49bf2c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1dc));
      iStack_4dc = unaff_EBP + -0x1dc;
      iStack_4e0 = 0x49bf39;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bf45;
        FUN_00878dfb();
      }
      iStack_4dc = 0;
      iStack_4e0 = unaff_EBP + -0x19c;
      iStack_4e4 = unaff_EBP + -0x1dc;
      uStack_4e8 = 0x5a4;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      uVar2 = FUN_00432f57(unaff_EBP + -0x50);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
      FUN_0046fd15(uVar2);
      iVar3 = unaff_EBP + -0x3bc;
      *(undefined1 *)(unaff_EBP + -4) = 0x74;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x76;
      iStack_4e0 = 0x49bfb4;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10c) = uVar2;
      iStack_4dc = 0x49bfcc;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_4dc = 0x49bfdd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x74;
      iStack_4dc = 0x49bfed;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49bff8;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x50) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
      }
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      iStack_4dc = 0x49c026;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49c031;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_4dc = 0x49c041;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_4dc = 0x49c050;
        FUN_00878dfb();
      }
      goto LAB_0049d45d;
    }
    if ((iVar3 < 2) || (4 < iVar3)) goto LAB_0049d45d;
  }
  iStack_4dc = 0x49c066;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4dc = 0x49c077;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x25c;
  iStack_4e4 = unaff_EBP + -0x26c;
  uStack_4e8 = 0xa83;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_00432f57(unaff_EBP + -200);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x43c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_4e0 = 0x49c0ef;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x80) = uVar2;
  iStack_4dc = 0x49c101;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c112;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_4dc = 0x49c122;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c12d;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_4dc = 0x49c153;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c15e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c16e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c179;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c185;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_4dc = 0x49c198;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x27c;
  iStack_4e4 = unaff_EBP + -0x35c;
  uStack_4e8 = 0xa84;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar2 = FUN_00432f57(unaff_EBP + -0x90);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x3dc;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_4e0 = 0x49c20d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x108) = uVar2;
  iStack_4dc = 0x49c225;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c236;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_4dc = 0x49c246;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c251;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_4dc = 0x49c277;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c282;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c292;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c29d;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c2a9;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  iStack_4dc = 0x49c2bc;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x29c;
  iStack_4e4 = unaff_EBP + -0x2fc;
  uStack_4e8 = 0xa85;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar2 = FUN_00432f57(unaff_EBP + -0xf0);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x47c;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_4e0 = 0x49c331;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x98) = uVar2;
  iStack_4dc = 0x49c349;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c35a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_4dc = 0x49c36a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c375;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_4dc = 0x49c39b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c3a6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c3b6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c3c1;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c3cd;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  iStack_4dc = 0x49c3e0;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -700;
  iStack_4e4 = unaff_EBP + -0x33c;
  uStack_4e8 = 0xa86;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x100);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uVar2 = FUN_00432f57(unaff_EBP + -0xa8);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x3fc;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_4e0 = 0x49c455;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xd8) = uVar2;
  iStack_4dc = 0x49c46d;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c47e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_4dc = 0x49c48e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c499;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_4dc = 0x49c4bf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c4ca;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c4da;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c4e5;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c4f1;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  iStack_4dc = 0x49c504;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x2dc;
  iStack_4e4 = unaff_EBP + -0x31c;
  uStack_4e8 = 0xa87;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uVar2 = FUN_00432f57(unaff_EBP + -0xe0);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x45c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_4e0 = 0x49c579;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xb0) = uVar2;
  iStack_4dc = 0x49c591;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c5a2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_4dc = 0x49c5b2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c5bd;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_4dc = 0x49c5e3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c5ee;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c5fe;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c609;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c615;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x1e;
  iStack_4dc = 0x49c628;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x23c;
  iStack_4e4 = unaff_EBP + -0x24c;
  uStack_4e8 = 0x59e;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0xe8);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uVar2 = FUN_00432f57(unaff_EBP + -0xc0);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x41c;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_4e0 = 0x49c69d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xf8) = uVar2;
  iStack_4dc = 0x49c6b5;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c6c6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_4dc = 0x49c6d6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c6e1;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_4dc = 0x49c707;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c712;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c722;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c72d;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c739;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x24;
  iStack_4dc = 0x49c74c;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x2ac;
  iStack_4e4 = unaff_EBP + -0x28c;
  uStack_4e8 = 0x5a0;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  uVar2 = FUN_00432f57(unaff_EBP + -0x84);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x38c;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_4e0 = 0x49c7c1;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x7c) = uVar2;
  iStack_4dc = 0x49c7d3;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c7e4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_4dc = 0x49c7f4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c7ff;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_4dc = 0x49c825;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c830;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c840;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c84b;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c857;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x2a;
  iStack_4dc = 0x49c86a;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x2ec;
  iStack_4e4 = unaff_EBP + -0x2cc;
  uStack_4e8 = 0x5a2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  uVar2 = FUN_00432f57(unaff_EBP + -0x9c);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x3ac;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_4e0 = 0x49c8df;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x94) = uVar2;
  iStack_4dc = 0x49c8f7;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49c908;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_4dc = 0x49c918;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c923;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_4dc = 0x49c949;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c954;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49c964;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49c96f;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49c97b;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x30;
  iStack_4dc = 0x49c98e;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x32c;
  iStack_4e4 = unaff_EBP + -0x30c;
  uStack_4e8 = 0x5a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  uVar2 = FUN_00432f57(unaff_EBP + -0x70);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x3cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_4e0 = 0x49c9fd;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xac) = uVar2;
  iStack_4dc = 0x49ca15;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49ca26;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_4dc = 0x49ca36;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ca41;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x70) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  iStack_4dc = 0x49ca71;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ca7c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49ca8c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ca97;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49caa3;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x36;
  iStack_4dc = 0x49cab6;
  FUN_00403191();
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x36c;
  iStack_4e4 = unaff_EBP + -0x34c;
  uStack_4e8 = 0xa7d;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  uVar2 = FUN_00432f57(unaff_EBP + -0x58);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x3ec;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  iStack_4e0 = 0x49cb25;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xb4) = uVar2;
  iStack_4dc = 0x49cb3d;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49cb4e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_4dc = 0x49cb5e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cb69;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_4dc = 0x49cb99;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cba4;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49cbb4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cbbf;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49cbcc;
  VariantInit((VARIANTARG *)(unaff_EBP + -300));
  iStack_4dc = unaff_EBP + -300;
  iStack_4e0 = 0x49cbd9;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cbe5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x3c;
  iStack_4dc = 0x49cbf9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x21c));
  iStack_4dc = unaff_EBP + -0x21c;
  iStack_4e0 = 0x49cc06;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cc12;
    FUN_00878dfb();
  }
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -300;
  iStack_4e4 = unaff_EBP + -0x21c;
  uStack_4e8 = 0xa7e;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  uVar2 = FUN_00432f57(unaff_EBP + -0x68);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x40c;
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_4e0 = 0x49cc81;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xbc) = uVar2;
  iStack_4dc = 0x49cc99;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49ccaa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_4dc = 0x49ccba;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ccc5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iStack_4dc = 0x49ccf5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cd00;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49cd10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cd1b;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49cd28;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x16c));
  iStack_4dc = unaff_EBP + -0x16c;
  iStack_4e0 = 0x49cd35;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cd41;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x42;
  iStack_4dc = 0x49cd55;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x11c));
  iStack_4dc = unaff_EBP + -0x11c;
  iStack_4e0 = 0x49cd62;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cd6e;
    FUN_00878dfb();
  }
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x16c;
  iStack_4e4 = unaff_EBP + -0x11c;
  uStack_4e8 = 0xa7f;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  uVar2 = FUN_00432f57(unaff_EBP + -0x20);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x42c;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  iStack_4e0 = 0x49cddd;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xc4) = uVar2;
  iStack_4dc = 0x49cdf5;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49ce06;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_4dc = 0x49ce16;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ce21;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_4dc = 0x49ce51;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ce5c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49ce6c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ce77;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49ce84;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1ac));
  iStack_4dc = unaff_EBP + -0x1ac;
  iStack_4e0 = 0x49ce91;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ce9d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x48;
  iStack_4dc = 0x49ceb1;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x18c));
  iStack_4dc = unaff_EBP + -0x18c;
  iStack_4e0 = 0x49cebe;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49ceca;
    FUN_00878dfb();
  }
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x1ac;
  iStack_4e4 = unaff_EBP + -0x18c;
  uStack_4e8 = 0xa80;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  uVar2 = FUN_00432f57(unaff_EBP + -0x2c);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x44c;
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  iStack_4e0 = 0x49cf39;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xcc) = uVar2;
  iStack_4dc = 0x49cf51;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49cf62;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  iStack_4dc = 0x49cf72;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cf7d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  iStack_4dc = 0x49cfad;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cfb8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49cfc8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cfd3;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49cfe0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1ec));
  iStack_4dc = unaff_EBP + -0x1ec;
  iStack_4e0 = 0x49cfed;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49cff9;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x4e;
  iStack_4dc = 0x49d00d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1cc));
  iStack_4dc = unaff_EBP + -0x1cc;
  iStack_4e0 = 0x49d01a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d026;
    FUN_00878dfb();
  }
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x1ec;
  iStack_4e4 = unaff_EBP + -0x1cc;
  uStack_4e8 = 0xa81;
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  uVar2 = FUN_00432f57(unaff_EBP + -0x3c);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x46c;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iStack_4e0 = 0x49d095;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xd4) = uVar2;
  iStack_4dc = 0x49d0ad;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49d0be;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  iStack_4dc = 0x49d0ce;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d0d9;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  iStack_4dc = 0x49d109;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d114;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49d124;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d12f;
    FUN_00878dfb();
  }
  iStack_4dc = 0x49d13c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x22c));
  iStack_4dc = unaff_EBP + -0x22c;
  iStack_4e0 = 0x49d149;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d155;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x54;
  iStack_4dc = 0x49d169;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20c));
  iStack_4dc = unaff_EBP + -0x20c;
  iStack_4e0 = 0x49d176;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d182;
    FUN_00878dfb();
  }
  iStack_4dc = 0;
  iStack_4e0 = unaff_EBP + -0x22c;
  iStack_4e4 = unaff_EBP + -0x20c;
  uStack_4e8 = 0xa82;
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  uStack_4e8 = FUN_00679e4e(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  uVar2 = FUN_00432f57(unaff_EBP + -0x4c);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4e8;
  FUN_0046fd15(uVar2);
  iVar3 = unaff_EBP + -0x48c;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  iStack_4e0 = 0x49d1f1;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0xdc) = uVar2;
  iStack_4dc = 0x49d209;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_4dc = 0x49d21a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  iStack_4dc = 0x49d22a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d235;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x4c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iStack_4dc = 0x49d263;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d26e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_4dc = 0x49d27e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_4dc = 0x49d289;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x9c) == 2) {
    FUN_0049f842();
    iStack_4dc = unaff_EBP + -0x5c;
    *(undefined4 *)(unaff_EBP + -4) = 0x5a;
    *(undefined4 *)(unaff_EBP + -0x4b8) = 0xff000000;
    iStack_4e0 = 0x49d2bf;
    puVar4 = (undefined4 *)FUN_00679e4e();
    FUN_00408b49();
    FUN_00402fa6();
    *(undefined4 *)(unaff_EBP + -0x4c0) = *puVar4;
    if (*(int *)(unaff_EBP + -0x5c) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    }
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      iStack_4dc = 0x49d2fa;
      FUN_00878dfb();
    }
    uVar2 = FUN_00424ee1();
    iVar3 = *(int *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    if (iVar3 == 0) {
      iStack_4dc = 0x49d310;
      FUN_00878dfb();
    }
    uVar2 = FUN_00424f08();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    iStack_4dc = 0x49d329;
    piVar5 = (int *)FUN_0049e247();
    iVar3 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    if (iVar3 == 0) {
      iStack_4dc = 0x49d33d;
      FUN_00878dfb();
    }
    iVar3 = FUN_0040e48b();
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    *(int *)(unaff_EBP + -0x10) = iVar3 + *(int *)(unaff_EBP + -0x18);
    if (*(int **)(unaff_EBP + -0xec) != (int *)0x0) {
      iStack_4dc = 0x49d35e;
      (**(code **)(**(int **)(unaff_EBP + -0xec) + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) + 2;
    iStack_4dc = 0x49d375;
    piVar5 = (int *)FUN_0049e247();
    iVar3 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    if (iVar3 == 0) {
      iStack_4dc = 0x49d389;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *piVar5;
    iStack_4dc = 0x49d399;
    piVar5 = (int *)FUN_0049e1a1();
    iVar3 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    if (iVar3 == 0) {
      iStack_4dc = 0x49d3ad;
      FUN_00878dfb();
    }
    iVar6 = FUN_0040e48b();
    iVar3 = *(int *)(extraout_ECX + 0x1c);
    iVar7 = FUN_0040e48b();
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
      iStack_4dc = 0x49d3d7;
      (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    if (*(int **)(unaff_EBP + -0x104) != (int *)0x0) {
      iStack_4dc = 0x49d3eb;
      (**(code **)(**(int **)(unaff_EBP + -0x104) + 8))();
    }
    iStack_4dc = 0x49d3fa;
    iVar8 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    if (iVar8 != 0) {
      FUN_004a0726();
    }
    uVar2 = *(undefined4 *)(extraout_ECX + 0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    iStack_4dc = 0x49d420;
    iVar8 = FUN_0045e196();
    iStack_4dc = 0xe;
    iStack_4e4 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_4e8 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_4e0 = ((iVar3 - iVar6) - iVar7) + -1;
    (**(code **)(**(int **)(iVar8 + 4) + 8))(uVar2,*(uint *)(extraout_ECX + 0x14) | 0xb0000000);
    iVar3 = *(int *)(extraout_ECX + 0x54);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(iVar3 + 0xb4) = extraout_ECX;
    FUN_0045c14e();
  }
LAB_0049d45d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(undefined4 *)(extraout_ECX + 0x68) = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  return;
}


