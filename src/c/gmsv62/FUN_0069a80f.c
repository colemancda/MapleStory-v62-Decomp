/* FUN_0069a80f - 0x0069a80f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069a80f(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined *puStack_cc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  puStack_cc = (undefined *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_d0 = 0x69a844;
  FUN_004031b7();
  iVar2 = *(int *)(extraout_ECX + 0x3ec);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    puStack_cc = (undefined *)0x69a860;
    FUN_00878dfb();
  }
  puStack_cc = (undefined *)(unaff_EBP + -0x14);
  uStack_d0 = 0x69a871;
  puVar1 = (undefined4 *)FUN_00425067();
  puStack_cc = (undefined *)0x69a87b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
             (IBinding *)*puVar1);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_cc = (undefined *)0x69a890;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_cc = (undefined *)0x69a89b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  piVar5 = (int *)(extraout_ECX + 0x3b4);
  *(int **)(unaff_EBP + -0x18) = piVar5;
  *(int *)(unaff_EBP + -0x28) = extraout_ECX + 0x7c;
  iVar2 = extraout_ECX;
  do {
    if (**(int **)(unaff_EBP + -0x28) == 0) {
LAB_0069a8d0:
      puStack_cc = &DAT_0096a684;
      uStack_d0 = 0x69a8de;
      FUN_00414edd();
    }
    else {
      if (*piVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*piVar5 + -4);
      }
      if (iVar4 == 0) goto LAB_0069a8d0;
    }
    puStack_cc = (undefined *)0x69a8ea;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_cc = (undefined *)0x69a8fc;
    uStack_d0 = FUN_00449713();
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_cc;
    uStack_d4 = 0x69a908;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(int *)(unaff_EBP + -0x30) = iVar2 + 0x3f8;
    uStack_d0 = 0x69a91c;
    FUN_0044974c();
    uStack_d0 = 0x69a923;
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_cc = (undefined *)0x69a936;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_cc = (undefined *)0x69a941;
      FUN_00878dfb();
    }
    puStack_cc = (undefined *)0x69a94d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_cc = (undefined *)0x69a95d;
    FUN_00403191();
    puStack_cc = (undefined *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_d0 = 0x69a976;
    uStack_d0 = FUN_00449749();
    uStack_d4 = 0x69a97f;
    uVar3 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_d4;
    FUN_00448a17(uVar3);
    *(int *)(unaff_EBP + -0x10) =
         *(int *)(unaff_EBP + -0x14) - (*(int *)(unaff_EBP + -0x14) >> 0x1f);
    uVar3 = 0x189;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) >> 1;
    iVar6 = *(int *)(unaff_EBP + -0x24) / 2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = (((*(int *)(unaff_EBP + -0x24) % 2) * 0x53 + iVar6 * 0xae) - *(int *)(unaff_EBP + -0x10)
            ) + 0x2a;
    FUN_004115d9(iVar4,0x189);
    FUN_00448e3a(iVar4,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_cc = (undefined *)0x69a9e6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_cc = (undefined *)0x69a9f1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_cc = (undefined *)0x69aa01;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_cc = (undefined *)0x69aa0c;
      FUN_00878dfb();
    }
    if (**(int **)(unaff_EBP + -0x28) == *(int *)(iVar2 + 0x80 + iVar6 * 0x18)) {
      puStack_cc = (undefined *)0x69aa30;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      puStack_cc = (undefined *)(unaff_EBP + -0x90);
      uStack_d0 = 0x69aa3d;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        puStack_cc = (undefined *)0x69aa49;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_cc = (undefined *)0x69aa53;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
      puStack_cc = (undefined *)(unaff_EBP + -0x70);
      uStack_d0 = 0x69aa5d;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        puStack_cc = (undefined *)0x69aa69;
        FUN_00878dfb();
      }
      puStack_cc = (undefined *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_d0 = 0x69aa80;
      uStack_d0 = FUN_00449749();
      uStack_d4 = 0x69aa89;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_d4;
      FUN_00448a17(uVar3);
      uVar3 = 0x121;
      iVar4 = iVar6 / 2;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar2 = ((iVar6 % 2 + iVar4 * 2) * 0xaf - *(int *)(unaff_EBP + -0x10)) + 0x51;
      FUN_004115d9(iVar2,0x121);
      FUN_00448e3a(iVar2,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_cc = (undefined *)0x69aadb;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_cc = (undefined *)0x69aae6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_cc = (undefined *)0x69aaf6;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_cc = (undefined *)0x69ab01;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x80 + iVar6 * 0x18) ==
          *(int *)(*(int *)(unaff_EBP + -0x20) + 0x84 + iVar4 * 0x18)) {
        puStack_cc = (undefined *)0x69ab2a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
        puStack_cc = (undefined *)(unaff_EBP + -0x50);
        uStack_d0 = 0x69ab34;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          puStack_cc = (undefined *)0x69ab40;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_cc = (undefined *)0x69ab4a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
        puStack_cc = (undefined *)(unaff_EBP + -0x80);
        uStack_d0 = 0x69ab54;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          puStack_cc = (undefined *)0x69ab60;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar4 % 2 == 0) {
          iVar2 = -*(int *)(unaff_EBP + -0x10);
          *(int *)(unaff_EBP + -0x14) = iVar2;
          iVar2 = iVar2 + 0x115;
        }
        else {
          iVar2 = -*(int *)(unaff_EBP + -0x10);
          *(int *)(unaff_EBP + -0x14) = iVar2;
          iVar2 = iVar2 + 0x19b;
        }
        *(int *)(unaff_EBP + -0x10) = iVar2;
        puStack_cc = (undefined *)(unaff_EBP + -0x80);
        uStack_d0 = 0x69aba2;
        uStack_d0 = FUN_00449749();
        uStack_d4 = 0x69abab;
        uVar3 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_d4;
        FUN_00448a17(uVar3);
        uVar7 = 0xb9;
        uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_004115d9(uVar3,0xb9);
        FUN_00448e3a(uVar3,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_cc = (undefined *)0x69abdf;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_cc = (undefined *)0x69abea;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_cc = (undefined *)0x69abf7;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_cc = (undefined *)0x69ac02;
          FUN_00878dfb();
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x84 + iVar4 * 0x18) ==
            *(int *)(*(int *)(unaff_EBP + -0x20) + 0x88 + (iVar4 / 2) * 0x18)) {
          puStack_cc = (undefined *)0x69ac2c;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          puStack_cc = (undefined *)(unaff_EBP + -0x40);
          uStack_d0 = 0x69ac36;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            puStack_cc = (undefined *)0x69ac42;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_cc = (undefined *)0x69ac4c;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
          puStack_cc = (undefined *)(unaff_EBP + -0x60);
          uStack_d0 = 0x69ac56;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            puStack_cc = (undefined *)0x69ac62;
            FUN_00878dfb();
          }
          puStack_cc = (undefined *)(unaff_EBP + -0x60);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          uStack_d0 = 0x69ac7c;
          uStack_d0 = FUN_00449749();
          uStack_d4 = 0x69ac85;
          uVar3 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_d4;
          FUN_00448a17(uVar3);
          uVar3 = 0x51;
          iVar2 = *(int *)(unaff_EBP + -0x14) + 0x155;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_004115d9(iVar2,0x51);
          FUN_00448e3a(iVar2,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_cc = (undefined *)0x69acbc;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_cc = (undefined *)0x69acc7;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          puStack_cc = (undefined *)0x69acd4;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_cc = (undefined *)0x69acdf;
            FUN_00878dfb();
          }
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x20);
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x18;
    if (7 < *(int *)(unaff_EBP + -0x24)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        puStack_cc = (undefined *)0x69ad08;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piVar5 = *(int **)(unaff_EBP + -0x18);
  } while( true );
}


