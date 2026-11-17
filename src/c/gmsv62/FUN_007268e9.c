/* FUN_007268e9 - 0x007268e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007268e9(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  uint uVar9;
  int unaff_EBP;
  undefined4 uVar10;
  undefined1 *puStack_190;
  int iStack_18c;
  int iStack_188;
  int *piStack_180;
  undefined1 *puStack_17c;
  int iStack_178;
  int *piStack_174;
  undefined1 *puStack_170;
  int iStack_16c;
  int iStack_168;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_168 = 0x726907;
  FUN_0081622a();
  iStack_168 = 0x726913;
  FUN_00448dc6();
  iStack_168 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_16c = 0x726923;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_168 = 0x72693a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_168 = 0x72694a;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0x100;
  puStack_170 = (undefined1 *)(unaff_EBP + -0xd0);
  puStack_17c = (undefined1 *)&piStack_174;
  *(int ***)(unaff_EBP + -0x24) = &piStack_174;
  iStack_178 = 0xb31;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_180 = (int *)0x726976;
  FUN_00679e4e();
  iStack_178 = unaff_EBP + -0x140;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_17c = (undefined1 *)0x726986;
  FUN_00405a1d();
  puStack_17c = (undefined1 *)0x72698d;
  FUN_00402660();
  puStack_17c = (undefined1 *)0x726994;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_16c = 0x72699f;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x80) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  if (iVar3 != 0) {
    iStack_168 = 0x7269b5;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_168 = 0x7269c6;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_168 = 0x7269d6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x7269e1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_168 = 0x7269f1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x7269fc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_168 = 0x726a0c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726a17;
    FUN_00878dfb();
  }
  iStack_168 = 0x726a23;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_168 = 0x726a33;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0x120;
  puStack_170 = (undefined1 *)(unaff_EBP + -0xf0);
  puStack_17c = (undefined1 *)&piStack_174;
  *(int ***)(unaff_EBP + -0x24) = &piStack_174;
  iStack_178 = 0xb32;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_180 = (int *)0x726a5a;
  FUN_00679e4e();
  iStack_178 = unaff_EBP + -0x150;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_17c = (undefined1 *)0x726a6a;
  FUN_00405a1d();
  puStack_17c = (undefined1 *)0x726a71;
  FUN_00402660();
  puStack_17c = (undefined1 *)0x726a78;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_16c = 0x726a83;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x88) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar3 != 0) {
    iStack_168 = 0x726a9f;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_168 = 0x726ab0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_168 = 0x726ac0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726acb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_168 = 0x726adb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726ae6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_168 = 0x726af6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726b01;
    FUN_00878dfb();
  }
  iStack_168 = 0x726b0d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_168 = 0x726b1d;
  FUN_00403191();
  iStack_168 = 0;
  iStack_16c = unaff_EBP + -0x130;
  puStack_170 = (undefined1 *)(unaff_EBP + -0x110);
  puStack_17c = (undefined1 *)&piStack_174;
  *(int ***)(unaff_EBP + -0x24) = &piStack_174;
  iStack_178 = 0xb33;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_180 = (int *)0x726b44;
  piStack_174 = extraout_ECX_00;
  FUN_00679e4e();
  iStack_178 = unaff_EBP + -0x160;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_17c = (undefined1 *)0x726b54;
  FUN_00405a1d();
  puStack_17c = (undefined1 *)0x726b5b;
  FUN_00402660();
  puStack_17c = (undefined1 *)0x726b62;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_16c = 0x726b6d;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x7c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  if (iVar3 != 0) {
    iStack_168 = 0x726b83;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_168 = 0x726b94;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_168 = 0x726ba4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726baf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_168 = 0x726bbf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726bca;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_168 = 0x726bda;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_168 = 0x726be5;
    FUN_00878dfb();
  }
  iStack_168 = 0x726bf4;
  iVar3 = FUN_00455c59();
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(unaff_EBP + -0x90) = iVar3;
  FUN_0045e4a2();
  iStack_168 = iVar3 + 0x39;
  iStack_16c = 0x726c11;
  sVar2 = FUN_0045f084();
  iStack_16c = (int)sVar2;
  puStack_170 = (undefined1 *)0x726c1a;
  FUN_00483340();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x7c);
  if (*(int *)(iVar3 + 0x48) == 0) goto LAB_00727594;
  iVar6 = *(int *)(iVar3 + 0x3c);
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 200);
  *(int *)(unaff_EBP + -0x2c) = iVar6;
  if (iVar6 < iVar3) {
    iStack_168 = 0x726c4d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_168 = 0x726c5d;
    FUN_00403191();
    iStack_168 = 0;
    iStack_16c = unaff_EBP + -0xa0;
    puStack_170 = (undefined1 *)(unaff_EBP + -0xb0);
    puStack_17c = (undefined1 *)&piStack_174;
    *(int ***)(unaff_EBP + -0x24) = &piStack_174;
    iStack_178 = 0xb35;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_180 = (int *)0x726c89;
    FUN_00679e4e();
    iStack_178 = unaff_EBP + -0xc0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_17c = (undefined1 *)0x726c99;
    FUN_00405a1d();
    puStack_17c = (undefined1 *)0x726ca0;
    FUN_00402660();
    puStack_17c = (undefined1 *)0x726ca7;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_16c = 0x726cb2;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x34) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar3 != 0) {
      iStack_168 = 0x726cc8;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_168 = 0x726cd9;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_168 = 0x726ce9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_168 = 0x726cf4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_168 = 0x726d04;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_168 = 0x726d0f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_168 = 0x726d1f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_168 = 0x726d2a;
      FUN_00878dfb();
    }
    iStack_168 = 0xff;
    iStack_16c = 0x726d39;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (piVar4 == (int *)0x0) {
      iStack_168 = 0x726d4e;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar4;
    piStack_174 = *(int **)(unaff_EBP + -0x20);
    puStack_170 = *(undefined1 **)(unaff_EBP + -0x44);
    iStack_16c = *(int *)(unaff_EBP + -0x40);
    iStack_178 = 0x105;
    iStack_168 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_17c = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x14) = piVar4;
    piStack_180 = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      iStack_168 = *(undefined4 *)(unaff_EBP + -0x14);
      puStack_170 = (undefined1 *)0x726d85;
      iStack_16c = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_168 = 0x726d92;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_168 = 0x726d9d;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 200);
    if (iVar3 == 1) {
      iStack_168 = 0x726db9;
      piVar4 = (int *)FUN_00727d03();
      iStack_168 = 0x726dc4;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_168 = 0x726dd1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0087a1b0();
      iStack_168 = 0x726de8;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_0087a1b0();
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffea0;
      iStack_168 = unaff_EBP + -0x78;
      iStack_16c = 0x726e07;
      iStack_16c = FUN_00449749();
      iStack_178 = 0x726e0f;
      piStack_174 = piVar4;
      puStack_170 = &stack0xfffffea0;
      piStack_174 = (int *)FUN_0048b981();
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_170;
      iStack_178 = 0x726e1b;
      FUN_00448a17();
      piStack_174 = (int *)0x10d;
      iStack_178 = unaff_EBP + -0x44;
      puStack_17c = *(undefined1 **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_180 = piVar4;
      piStack_180 = (int *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_17c;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_180 = (int *)0x726e49;
      FUN_0044974c();
      piStack_180 = (int *)0x726e50;
      iStack_178 = FUN_00448ebb();
      iStack_178 = 0x8f - iStack_178;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      puStack_17c = (undefined1 *)0x726e64;
      FUN_004115d9();
      puStack_17c = (undefined1 *)0x726e6b;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_168 = 0x726e78;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_168 = 0x726e83;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_168 = 0x726e90;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_168 = 0x726e9b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
LAB_00727105:
      iStack_168 = 0x72710b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_168 = 0x727116;
        FUN_00878dfb();
      }
    }
    else {
      if (iVar3 == 2) {
        iStack_168 = 0x726eb9;
        iVar3 = FUN_00727d03();
        iStack_168 = 0x726ec4;
        iVar6 = FUN_00727d03();
        iStack_168 = 0x726ecf;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_168 = 0x726edc;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_0087a1b0();
        iStack_168 = 0x726ef3;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_0087a1b0();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffea0;
        iStack_168 = unaff_EBP + -0x78;
        iStack_16c = 0x726f12;
        iStack_16c = FUN_00449749();
        iStack_178 = 0x726f1a;
        piStack_174 = (int *)(iVar3 + iVar6);
        puStack_170 = &stack0xfffffea0;
        piStack_174 = (int *)FUN_0048b981();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_170;
        iStack_178 = 0x726f26;
        FUN_00448a17();
        piStack_174 = (int *)0x10d;
        iStack_178 = unaff_EBP + -0x44;
        puStack_17c = *(undefined1 **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_180 = (int *)(iVar3 + iVar6);
        piStack_180 = (int *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_17c;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_180 = (int *)0x726f54;
        FUN_0044974c();
        piStack_180 = (int *)0x726f5b;
        iStack_178 = FUN_00448ebb();
        iStack_178 = 0x8f - iStack_178;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        puStack_17c = (undefined1 *)0x726f6f;
        FUN_004115d9();
        puStack_17c = (undefined1 *)0x726f76;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        iStack_168 = 0x726f83;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_168 = 0x726f8e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_168 = 0x726f9b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_168 = 0x726fa6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        goto LAB_00727105;
      }
      if (iVar3 == 3) {
        iStack_168 = 0x726fc5;
        iVar3 = FUN_00727d03();
        iStack_168 = 0x726fd1;
        iVar6 = FUN_00727d03();
        iStack_168 = 0x726fdd;
        iVar5 = FUN_00727d03();
        piVar4 = (int *)(iVar3 + iVar6 + iVar5);
        iStack_168 = 0x726feb;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        iStack_168 = unaff_EBP + -0x44;
        iStack_16c = 0x726ff5;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_168 = 0x727001;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iStack_168 = 0x72700b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        iStack_168 = unaff_EBP + -0x78;
        iStack_16c = 0x727015;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_168 = 0x727021;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        FUN_0087a1b0();
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffea0;
        iStack_168 = 0x727036;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        iStack_168 = unaff_EBP + -0x68;
        iStack_16c = 0x727040;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_168 = 0x72704c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_0087a1b0();
        iStack_168 = unaff_EBP + -0x78;
        iStack_16c = 0x72706a;
        iStack_16c = FUN_00449749();
        puStack_170 = *(undefined1 **)(unaff_EBP + -0x14);
        iStack_178 = 0x727074;
        piStack_174 = piVar4;
        piStack_174 = (int *)FUN_0048b981();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_170;
        iStack_178 = 0x727080;
        FUN_00448a17();
        piStack_174 = (int *)0x10d;
        iStack_178 = unaff_EBP + -0x68;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_180 = piVar4;
        puStack_17c = &stack0xfffffea0;
        piStack_180 = (int *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_17c;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_180 = (int *)0x7270ac;
        FUN_0044974c();
        piStack_180 = (int *)0x7270b3;
        iStack_178 = FUN_00448ebb();
        iStack_178 = 0x8f - iStack_178;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        puStack_17c = (undefined1 *)0x7270c7;
        FUN_004115d9();
        puStack_17c = (undefined1 *)0x7270ce;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        iStack_168 = 0x7270db;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_168 = 0x7270e6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iStack_168 = 0x7270f3;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_168 = 0x7270fe;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        goto LAB_00727105;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_168 = 0x727127;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
  }
  iVar3 = *(int *)(unaff_EBP + -0x10);
  iStack_168 = 0x727133;
  iVar6 = FUN_00727e9d();
  *(int *)(unaff_EBP + -0x34) = iVar6;
  if (iVar6 != 0) {
    iVar5 = *(int *)(*(int *)(iVar3 + 0x84) + 0x38);
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(int *)(unaff_EBP + -0x84) = iVar5;
    *(int *)(unaff_EBP + -0x4c) = iVar5 << 3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x78;
    *(int *)(unaff_EBP + -0x2c) = iVar3 + 0x8c;
    while ((iVar3 = *(int *)(iVar6 + 8), iVar3 != 0 &&
           (uVar9 = iVar5 + *(int *)(unaff_EBP + -0x50), uVar1 = *(uint *)(iVar3 + -4),
           *(uint *)(unaff_EBP + -0x24) = uVar9, uVar9 < uVar1))) {
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(*(int *)(unaff_EBP + -0x4c) + 4 + iVar3);
      uVar7 = (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x20))();
      iStack_168 = 0xff;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
      iStack_16c = 0x7271be;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      puVar8 = (undefined4 *)(unaff_EBP + -0x54);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        puVar8 = (undefined4 *)(unaff_EBP + -0x48);
      }
      *(undefined4 *)(unaff_EBP + -0x8c) = *puVar8;
      piVar4 = *(int **)(unaff_EBP + 8);
      if (piVar4 == (int *)0x0) {
        iStack_168 = 0x7271e7;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piVar4;
      piStack_174 = *(int **)(unaff_EBP + -0x8c);
      puStack_170 = *(undefined1 **)(unaff_EBP + -0xe0);
      iStack_16c = *(int *)(unaff_EBP + -0xdc);
      iStack_178 = *(int *)(unaff_EBP + -0x10) + -0x15;
      iStack_168 = *(undefined4 *)(unaff_EBP + -0xd8);
      puStack_17c = (undefined1 *)0x7;
      *(int **)(unaff_EBP + -0x1c) = piVar4;
      piStack_180 = piVar4;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        iStack_188 = *(int *)(unaff_EBP + -0x1c);
        puStack_190 = (undefined1 *)0x727226;
        iStack_18c = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_188 = 0x727236;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_188 = 0x727241;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      iStack_188 = 0x727254;
      FUN_00414f8b();
      iStack_18c = unaff_EBP + -0x18;
      *(int **)(unaff_EBP + -0x1c) = &iStack_188;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      puStack_190 = (undefined1 *)0x727269;
      FUN_0046fcc9();
      iStack_18c = unaff_EBP + -0x20;
      puStack_190 = (undefined1 *)0x727272;
      FUN_007d3a22();
      iStack_188 = 0x727281;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
      iStack_188 = unaff_EBP + -0x78;
      iStack_18c = 0x72728b;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_188 = 0x727297;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      iStack_188 = 0x7272a1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      iStack_188 = unaff_EBP + -0x44;
      iStack_18c = 0x7272ab;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_188 = 0x7272b7;
        FUN_00878dfb();
      }
      iStack_188 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      iStack_18c = 0x7272cb;
      iStack_18c = FUN_004458be();
      puStack_190 = (undefined1 *)0x7272d4;
      uVar7 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_190;
      FUN_00448a17(uVar7);
      iVar6 = *(int *)(unaff_EBP + -0x10);
      iVar3 = iVar6 + -0x12;
      uVar7 = 0x2f;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      FUN_0044974c(0x2f,iVar3);
      FUN_005c1d2c(uVar7,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      iStack_188 = 0x727309;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_188 = 0x727314;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_188 = 0x727321;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_188 = 0x72732c;
        FUN_00878dfb();
      }
      iStack_188 = 0x727335;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
      iStack_188 = unaff_EBP + -0xa0;
      iStack_18c = 0x727342;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_188 = 0x72734e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_188 = 0x727358;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      iStack_188 = unaff_EBP + -0x68;
      iStack_18c = 0x727362;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_188 = 0x72736e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_0087a1b0();
      iStack_188 = unaff_EBP + -0x68;
      iStack_18c = 0x72738f;
      iStack_18c = FUN_004458be();
      iVar3 = unaff_EBP + -0x30;
      uVar7 = **(undefined4 **)(unaff_EBP + -0x30);
      uVar10 = *(undefined4 *)(unaff_EBP + -0x90);
      puStack_190 = (undefined1 *)&piStack_180;
      FUN_0072aafa(uVar10,uVar7,iVar3);
      uVar7 = FUN_00650dae(uVar10,uVar7,iVar3);
      uVar7 = FUN_00412335(uVar7);
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_190;
      FUN_004033a1(uVar7);
      uVar7 = 0x2f;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_0044974c(0x2f,iVar6);
      FUN_005c1d2c(uVar7,iVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_188 = 0x7273e1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_188 = 0x7273ec;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_188 = 0x7273fc;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_188 = 0x727407;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0x8c + *(int *)(unaff_EBP + -0x14) * 4);
      *(int **)(unaff_EBP + -0x14) = piVar4;
      if (piVar4 != (int *)0x0) {
        iStack_188 = 0x727423;
        (**(code **)(*piVar4 + 4))();
      }
      iStack_188 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iStack_18c = 0x727439;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (piVar4 == (int *)0x0) {
        iStack_188 = 0x72744e;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piVar4;
      puStack_190 = *(undefined1 **)(unaff_EBP + -0xc0);
      iStack_18c = *(int *)(unaff_EBP + -0xbc);
      iStack_188 = *(int *)(unaff_EBP + -0xb8);
      *(int **)(unaff_EBP + -0x1c) = piVar4;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar4,9,*(int *)(unaff_EBP + -0x10) + -0x13,
                         *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar3 < 0) {
        iStack_168 = *(undefined4 *)(unaff_EBP + -0x1c);
        puStack_170 = (undefined1 *)0x72748a;
        iStack_16c = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iStack_168 = 0x72749a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_168 = 0x7274a5;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) < 0xf0) {
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 8);
        iVar6 = 0;
        if (iVar3 != 0) {
          iVar6 = *(int *)(iVar3 + -4);
        }
        if (*(uint *)(unaff_EBP + -0x24) < iVar6 - 1U) {
          iStack_168 = 0x7274d6;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
          iStack_168 = unaff_EBP + -0xb0;
          iStack_16c = 0x7274e3;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_168 = 0x7274ef;
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (piVar4 == (int *)0x0) {
            iStack_168 = 0x727504;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + 8);
          }
          iVar3 = *piVar4;
          piStack_174 = *(int **)(unaff_EBP + -0x58);
          puStack_170 = *(undefined1 **)(unaff_EBP + -0xb0);
          iStack_16c = *(int *)(unaff_EBP + -0xac);
          iStack_178 = *(int *)(unaff_EBP + -0x10) + 0x10;
          iStack_168 = *(undefined4 *)(unaff_EBP + -0xa8);
          puStack_17c = (undefined1 *)0x7;
          *(int **)(unaff_EBP + -0x24) = piVar4;
          piStack_180 = piVar4;
          iVar3 = (**(code **)(iVar3 + 0x80))();
          if (iVar3 < 0) {
            iStack_168 = *(undefined4 *)(unaff_EBP + -0x24);
            puStack_170 = (undefined1 *)0x727540;
            iStack_16c = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          iStack_168 = 0x727550;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_168 = 0x72755b;
            FUN_00878dfb();
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_168 = 0x72756c;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
      *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x50) + 1;
      *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 8;
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 8;
      if (0x117 < *(int *)(unaff_EBP + -0x10)) break;
      iVar6 = *(int *)(unaff_EBP + -0x34);
      iVar5 = *(int *)(unaff_EBP + -0x84);
    }
  }
LAB_00727594:
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
    iStack_168 = 0x7275a5;
    (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    iStack_168 = 0x7275b6;
    (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
    iStack_168 = 0x7275c7;
    (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_168 = 0x7275d8;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_168 = 0x7275e9;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


