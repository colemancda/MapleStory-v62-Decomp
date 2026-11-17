/* FUN_007dbaf2 - 0x007dbaf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007dbaf2(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint uVar4;
  int extraout_ECX_00;
  int unaff_EBP;
  int iVar5;
  int iStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  iStack_184 = 0x7dbb12;
  FUN_0081622a();
  iStack_184 = 0x7dbb1d;
  FUN_00448dc6();
  iVar1 = *(int *)(extraout_ECX + 0xa0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  iVar1 = 0;
  if (*(int *)(extraout_ECX + 0xa0) != 0) {
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0xa0) + -4);
  }
  iVar1 = (uint)(iVar1 * 0xe) / 0x14 + 1;
  if (iVar1 == 1) {
    iVar1 = 2;
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x10) = (iVar1 * 0x14 + iVar2 * -0xe) / 2 + 0x18;
  uVar4 = 0;
  iVar1 = extraout_ECX;
  while ((*(int *)(iVar1 + 0xa0) != 0 && (uVar4 < *(uint *)(*(int *)(iVar1 + 0xa0) + -4)))) {
    iStack_184 = 0x7dbba4;
    FUN_00414f8b();
    iStack_184 = 0x7dbbb0;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_184 = 0x7dbbc3;
    uStack_188 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_184;
    iStack_18c = 0x7dbbcf;
    FUN_00448a17();
    iStack_18c = unaff_EBP + -0x30;
    uStack_188 = 0xf;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_188 = 0x7dbbeb;
    FUN_0044974c();
    uStack_188 = 0x7dbbf2;
    iVar1 = FUN_00448ebb();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x7dbc0c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_184 = 0x7dbc17;
      FUN_00878dfb();
    }
    iVar5 = (0xea - iVar1) / 2;
    iVar2 = iVar5 + 0xf;
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x74);
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    if (iVar1 == 1000) {
      iStack_184 = 0x7dbc47;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_184 = 0x7dbc57;
      FUN_00403191();
      iStack_184 = unaff_EBP + -0x14c;
      iStack_18c = unaff_EBP + -0x4c;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_188 = 0x7dbc81;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dbc8a;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      iVar2 = *(int *)(unaff_EBP + -0x10) + -2;
      iVar5 = iVar5 + 0xe;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar1 = iVar5;
      FUN_004115d9(iVar5,iVar2);
      FUN_00448e3a(iVar1,iVar2);
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_184 = 0x7dbcca;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dbcd5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dbce5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dbcf0;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dbcfc;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_184 = 0x7dbd0c;
      FUN_00403191();
      iStack_184 = unaff_EBP + -0x16c;
      iStack_18c = unaff_EBP + -0x28;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      uStack_188 = 0x7dbd36;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dbd3f;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      iVar2 = *(int *)(unaff_EBP + -0x10) + -1;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar1 = iVar5;
      FUN_004115d9(iVar5,iVar2);
      FUN_00448e3a(iVar1,iVar2);
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_184 = 0x7dbd7c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dbd87;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dbd97;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dbda2;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dbdae;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_184 = 0x7dbdbe;
      FUN_00403191();
      iStack_184 = unaff_EBP + -0x11c;
      iStack_18c = unaff_EBP + -0x40;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      uStack_188 = 0x7dbde8;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dbdf1;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004115d9(iVar5,uVar3);
      FUN_00448e3a(iVar5,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
        iStack_184 = 0x7dbe25;
        (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_184 = 0x7dbe35;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dbe40;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dbe50;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dbe5b;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dbe67;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_184 = 0x7dbe77;
      FUN_00403191();
      iStack_184 = unaff_EBP + -0x15c;
      iStack_18c = unaff_EBP + -0x38;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      uStack_188 = 0x7dbea1;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dbeaa;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      iVar1 = *(int *)(unaff_EBP + -0x1c);
      iVar5 = *(int *)(unaff_EBP + -0x10) + -2;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iVar2 = iVar1;
      FUN_004115d9(iVar1,iVar5);
      FUN_00448e3a(iVar2,iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
        iStack_184 = 0x7dbee5;
        (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_184 = 0x7dbef5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dbf00;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dbf10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dbf1b;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dbf21;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      iStack_184 = unaff_EBP + -0x5c;
      uStack_188 = 0x7dbf2b;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dbf37;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_184 = 0x7dbf44;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xec));
      iStack_184 = unaff_EBP + -0xec;
      uStack_188 = 0x7dbf51;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dbf5d;
        FUN_00878dfb();
      }
      iStack_184 = unaff_EBP + -0xec;
      iStack_18c = unaff_EBP + -0x48;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      uStack_188 = 0x7dbf84;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dbf8d;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar2 = iVar1;
      FUN_004115d9(iVar1,uVar3);
      FUN_00448e3a(iVar2,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
        iStack_184 = 0x7dbfc1;
        (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_184 = 0x7dbfd1;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dbfdc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dbfe9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dbff4;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dbffd;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
      iStack_184 = unaff_EBP + -0x9c;
      uStack_188 = 0x7dc00a;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc016;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_184 = 0x7dc023;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xbc));
      iStack_184 = unaff_EBP + -0xbc;
      uStack_188 = 0x7dc030;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc03c;
        FUN_00878dfb();
      }
      iStack_184 = unaff_EBP + -0xbc;
      iStack_18c = unaff_EBP + -0x2c;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      uStack_188 = 0x7dc066;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dc06f;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      iVar5 = *(int *)(unaff_EBP + -0x10) + -2;
      iVar1 = iVar1 + 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar2 = iVar1;
      FUN_004115d9(iVar1,iVar5);
      FUN_00448e3a(iVar2,iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        iStack_184 = 0x7dc0a8;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_184 = 0x7dc0b8;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc0c3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dc0d3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc0de;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dc0e4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
      iStack_184 = unaff_EBP + -0x7c;
      uStack_188 = 0x7dc0ee;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc0fa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_184 = 0x7dc107;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xdc));
      iStack_184 = unaff_EBP + -0xdc;
      uStack_188 = 0x7dc114;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc120;
        FUN_00878dfb();
      }
      iStack_184 = unaff_EBP + -0xdc;
      iStack_18c = unaff_EBP + -0x34;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      uStack_188 = 0x7dc147;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dc150;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      FUN_00448a17(uVar3);
      iVar5 = *(int *)(unaff_EBP + -0x10) + -1;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iVar2 = iVar1;
      FUN_004115d9(iVar1,iVar5);
      FUN_00448e3a(iVar2,iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
        iStack_184 = 0x7dc186;
        (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_184 = 0x7dc196;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc1a1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dc1ae;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc1b9;
        FUN_00878dfb();
      }
      iStack_184 = 0x7dc1c2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
      iStack_184 = unaff_EBP + -0xac;
      uStack_188 = 0x7dc1cf;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc1db;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_184 = 0x7dc1e8;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
      iStack_184 = unaff_EBP + -0x8c;
      uStack_188 = 0x7dc1f5;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_184 = 0x7dc201;
        FUN_00878dfb();
      }
      iStack_184 = unaff_EBP + -0x8c;
      iStack_18c = unaff_EBP + -0x3c;
      uStack_188 = 0x11;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      uStack_188 = 0x7dc22b;
      uStack_188 = FUN_00449749();
      iStack_18c = 0x7dc234;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x18) = &iStack_18c;
      iStack_18c = extraout_ECX_00;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_004115d9(iVar1,uVar3);
      FUN_00448e3a(iVar1,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
        iStack_184 = 0x7dc268;
        (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_184 = 0x7dc278;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dc283;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_184 = 0x7dc293;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_184 = 0x7dc29e;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x1c);
    }
    iStack_184 = 0x7dc2a7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    iStack_184 = unaff_EBP + -0x6c;
    uStack_188 = 0x7dc2b1;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x7dc2bd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_184 = 0x7dc2ca;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xcc));
    iStack_184 = unaff_EBP + -0xcc;
    uStack_188 = 0x7dc2d7;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x7dc2e3;
      FUN_00878dfb();
    }
    iStack_184 = unaff_EBP + -0xcc;
    iStack_18c = unaff_EBP + -0x44;
    uStack_188 = 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    uStack_188 = 0x7dc30a;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x7dc313;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    iVar1 = *(int *)(unaff_EBP + -0x10) + -1;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_004115d9(iVar2,iVar1);
    FUN_00448e3a(iVar2,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      iStack_184 = 0x7dc349;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_184 = 0x7dc359;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x7dc364;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x7dc371;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x7dc37c;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xe;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    iVar1 = *(int *)(unaff_EBP + -0x24);
    uVar4 = *(uint *)(unaff_EBP + -0x20);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_184 = 0x7dc3ab;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


