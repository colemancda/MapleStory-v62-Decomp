/* FUN_005bc5c2 - 0x005bc5c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005bc5c2(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  
  FUN_00879bb8();
  puStack_64 = *(undefined4 **)(unaff_EBP + 8);
  iStack_68 = 0x5bc5dc;
  FUN_0081622a();
  puStack_64 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_68 = 0x5bc5e7;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_64 = (undefined4 *)(extraout_ECX + 0x78);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_68 = 0x5bc608;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while (iVar3 = *(int *)(unaff_EBP + 8), iVar3 != 0) {
    puStack_64 = (undefined4 *)0xa;
    iStack_6c = 0x5bc622;
    iStack_68 = iVar3;
    iVar1 = FUN_0087b4c0();
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 - iVar3;
    }
    if (iVar1 < 0) goto LAB_005bc6df;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iStack_68 = unaff_EBP + -0x28;
      iStack_6c = 0x5bc64b;
      puStack_64 = (undefined4 *)iVar1;
      puStack_64 = (undefined4 *)FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_68 = 0x5bc658;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        puStack_64 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        iStack_68 = 0x5bc66c;
        FUN_00434e38();
        goto LAB_005bc66d;
      }
    }
    else {
LAB_005bc66d:
      if (*(int *)(unaff_EBP + -0x14) == 1) {
        iStack_68 = unaff_EBP + -0x2c;
        iStack_6c = 0x5bc680;
        puStack_64 = (undefined4 *)iVar1;
        puStack_64 = (undefined4 *)FUN_0045e070();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_68 = 0x5bc68d;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          puStack_64 = (undefined4 *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
          iStack_68 = 0x5bc6a1;
          FUN_00434e38();
        }
      }
    }
    puStack_64 = (undefined4 *)0xffffffff;
    iStack_68 = iVar1 + 1;
    iStack_6c = unaff_EBP + -0x30;
    uStack_70 = 0x5bc6b2;
    puStack_64 = (undefined4 *)FUN_0045e053();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_68 = 0x5bc6bf;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      puStack_64 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
      iStack_68 = 0x5bc6d3;
      FUN_00434e38();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  iVar1 = -1;
LAB_005bc6df:
  puStack_64 = (undefined4 *)0xffffffff;
  iStack_68 = iVar1 + 1;
  iStack_6c = unaff_EBP + -0x30;
  uStack_70 = 0x5bc6ef;
  puStack_64 = (undefined4 *)FUN_0045e053();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x5bc6fc;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_64 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_68 = 0x5bc710;
    FUN_00434e38();
  }
  puStack_64 = &DAT_00980690;
  iStack_68 = 0x5bc71f;
  FUN_00403191();
  puStack_64 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x5bc72c;
  FUN_00403191();
  puStack_64 = (undefined4 *)(unaff_EBP + -0x40);
  iStack_68 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_6c = 0x5bc743;
  iStack_6c = FUN_00449749();
  uStack_70 = 0x5bc74c;
  uStack_74 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_70;
  uStack_78 = 0x5bc758;
  FUN_00448a17();
  uStack_74 = 0xd;
  uStack_78 = 0x1e;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004115d9();
  FUN_00448e3a();
  puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x5bc77c;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x5bc787;
    FUN_00878dfb();
  }
  puStack_64 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_68 = 0x5bc794;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x5bc79f;
    FUN_00878dfb();
  }
  puStack_64 = (undefined4 *)0x638;
  iStack_68 = unaff_EBP + -0x30;
  iStack_6c = 0x5bc7b2;
  puStack_64 = (undefined4 *)FUN_00679d22();
  puStack_64 = (undefined4 *)*puStack_64;
  iStack_68 = *(undefined4 *)(extraout_ECX + 0x74);
  iStack_6c = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_70 = 0x5bc7ca;
  FUN_00550bc4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_64 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_68 = 0x5bc7de;
    FUN_00434e38();
  }
  puStack_64 = &DAT_00980690;
  iStack_68 = 0x5bc7e8;
  FUN_00403191();
  puStack_64 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_68 = 0x5bc7f5;
  FUN_00403191();
  puStack_64 = (undefined4 *)0x0;
  iStack_68 = 0;
  iStack_6c = 0xffffffff;
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_74 = 0;
  uStack_78 = 0;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_78;
  iStack_80 = 0x5bc821;
  FUN_00403191();
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_84 = 0x5bc838;
  uStack_84 = FUN_00449749();
  uStack_88 = 0xffffffff;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_90 = 0x5bc846;
  iStack_90 = FUN_00449713();
  uStack_94 = 0x5bc84c;
  uStack_8c = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_88;
  iStack_90 = 0x5bc859;
  FUN_004033a1();
  uStack_8c = 0xd;
  iStack_90 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_94 = 0x5bc86b;
  uVar2 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_94;
  FUN_00448a17(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0044974c();
  iStack_90 = FUN_00448ebb();
  iStack_90 = iStack_90 + 0x23;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_94 = 0x5bc89d;
  FUN_004115d9();
  uStack_94 = 0x5bc8a4;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_80 = 0x5bc8b1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc8bc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_80 = 0x5bc8c9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc8d4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_80 = 0x5bc8e1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc8ec;
    FUN_00878dfb();
  }
  iStack_80 = 0x5bc8f5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_80 = 0x5bc902;
  FUN_00403191();
  iStack_80 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x80;
  uStack_84 = 0x5bc91c;
  uStack_84 = FUN_00449749();
  uStack_88 = 0x5bc925;
  uStack_8c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_88;
  iStack_90 = 0x5bc931;
  FUN_00448a17();
  uStack_8c = 0x2f;
  iStack_90 = 0x16;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  uStack_94 = 0x5bc941;
  FUN_004115d9();
  uStack_94 = 0x5bc948;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_80 = 0x5bc955;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc960;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_80 = 0x5bc96d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc978;
    FUN_00878dfb();
  }
  iStack_80 = 0x5bc984;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_80 = unaff_EBP + -0x50;
  uStack_84 = 0x5bc98e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc99a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_80 = 0x5bc9a4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_80 = unaff_EBP + -0x40;
  uStack_84 = 0x5bc9ae;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_80 = 0x5bc9ba;
    FUN_00878dfb();
  }
  iStack_80 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_84 = 0x5bc9ce;
  uStack_84 = FUN_00449749();
  uStack_88 = 0x5bc9d7;
  uStack_8c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_88;
  iStack_90 = 0x5bc9e3;
  FUN_00448a17();
  uStack_8c = 0x43;
  iStack_90 = 0x16;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_94 = 0x5bc9f3;
  FUN_004115d9();
  uStack_94 = 0x5bc9fa;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_80 = 0x5bca07;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bca12;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_80 = 0x5bca1f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bca2a;
    FUN_00878dfb();
  }
  iStack_80 = 0x5bca30;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_80 = unaff_EBP + -0x40;
  uStack_84 = 0x5bca3a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_80 = 0x5bca46;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_80 = 0x5bca50;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_80 = unaff_EBP + -0x50;
  uStack_84 = 0x5bca5a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_80 = 0x5bca66;
    FUN_00878dfb();
  }
  iStack_80 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_84 = 0x5bca7a;
  uStack_84 = FUN_00449749();
  uStack_88 = 0x5bca83;
  uStack_8c = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_88;
  iStack_90 = 0x5bca8f;
  FUN_00448a17();
  uStack_8c = 0x57;
  iStack_90 = 0x16;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_94 = 0x5bca9f;
  FUN_004115d9();
  uStack_94 = 0x5bcaa6;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_80 = 0x5bcab3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bcabe;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_80 = 0x5bcacb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_80 = 0x5bcad6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_80 = 0x5bcb22;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


