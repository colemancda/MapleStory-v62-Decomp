/* FUN_00620703 - 0x00620703 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00620703(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  undefined1 *puStack_13c;
  int iStack_138;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_004027eb();
  }
  else {
    iStack_138 = 0x62073b;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_138 = 0x620748;
    FUN_004035f5();
    FUN_004027b3();
    iStack_138 = 0x62075a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        iStack_138 = 0x620775;
        FUN_00878dfb();
      }
      piStack_140 = *(int **)(unaff_EBP + -0x2c);
      iStack_138 = unaff_EBP + -0x60;
      puStack_13c = (undefined1 *)0x1;
      uStack_144 = 0x620788;
      iVar2 = (**(code **)(*piStack_140 + 0xc))();
      if (iVar2 != 0) break;
      iStack_138 = unaff_EBP + -0x24;
      puStack_13c = (undefined1 *)0x62079d;
      puVar6 = (undefined1 *)(unaff_EBP + -0x60);
      FUN_00405a23();
      puStack_13c = puVar6;
      iStack_138 = 0;
      piStack_140 = (int *)(unaff_EBP + -0x24);
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_13c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_144 = 0x6207b4;
      FUN_004059fd();
      piStack_140 = (int *)(unaff_EBP + -0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_144 = 0x6207c7;
      FUN_0040263d();
      uStack_144 = 0x6207ce;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_13c = (undefined1 *)0x6207d9;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x48) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        iStack_138 = 0x6207ef;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_138 = 0x620800;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_138 = 0x620810;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x62081b;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_0062224d();
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x20) + 4);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4);
      }
      puStack_13c = &stack0xfffffecc;
      **(undefined4 **)(unaff_EBP + -0x10) = uVar3;
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffecc;
      iStack_138 = 0x6b0;
      piStack_140 = (int *)0x620855;
      FUN_00679e4e();
      iStack_138 = unaff_EBP + -0x120;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_13c = (undefined1 *)0x620868;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x62086f;
      FUN_004048a4();
      iStack_138 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_13c = (undefined1 *)0x62087d;
      piVar4 = (int *)FUN_00405a23();
      piVar4 = (int *)*piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piVar4 == (int *)0x0) {
        iStack_138 = 0;
      }
      else {
        iStack_138 = *piVar4;
      }
      puStack_13c = (undefined1 *)0x62089d;
      FUN_00454081();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x6208b5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x6208c0;
        FUN_00878dfb();
      }
      puStack_13c = &stack0xfffffecc;
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffecc;
      iStack_138 = 0x6b1;
      piStack_140 = (int *)0x6208d3;
      FUN_00679e4e();
      iStack_138 = unaff_EBP + -0xc0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_13c = (undefined1 *)0x6208e6;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x6208ed;
      FUN_004048a4();
      iVar2 = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uVar3 = FUN_00403213();
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x62090e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x620919;
        FUN_00878dfb();
      }
      puStack_13c = &stack0xfffffecc;
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffecc;
      iStack_138 = 0x3ca;
      piStack_140 = (int *)0x62092c;
      FUN_00679e4e();
      iStack_138 = unaff_EBP + -0x100;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_13c = (undefined1 *)0x62093f;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x620946;
      FUN_004048a4();
      iVar2 = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      uVar3 = FUN_00403213();
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x620967;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x620972;
        FUN_00878dfb();
      }
      puStack_13c = &stack0xfffffecc;
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffecc;
      iStack_138 = 0x3cb;
      piStack_140 = (int *)0x620985;
      FUN_00679e4e();
      iStack_138 = unaff_EBP + -0x90;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_13c = (undefined1 *)0x620998;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x62099f;
      FUN_004048a4();
      iVar2 = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      uVar3 = FUN_00403213();
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x6209c0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x6209cb;
        FUN_00878dfb();
      }
      puStack_13c = &stack0xfffffecc;
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffecc;
      iStack_138 = 0x6b2;
      piStack_140 = (int *)0x6209de;
      FUN_00679e4e();
      iStack_138 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_13c = (undefined1 *)0x6209f1;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x6209f8;
      FUN_004048a4();
      iVar2 = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uVar3 = FUN_00403213();
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x620a19;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x620a24;
        FUN_00878dfb();
      }
      puStack_13c = &stack0xfffffecc;
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffecc;
      iStack_138 = 0x6b3;
      piStack_140 = (int *)0x620a37;
      FUN_00679e4e();
      iStack_138 = unaff_EBP + -0xb0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_13c = (undefined1 *)0x620a4a;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x620a51;
      FUN_004048a4();
      iStack_138 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_13c = (undefined1 *)0x620a5f;
      piVar4 = (int *)FUN_00405a23();
      piVar4 = (int *)*piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (piVar4 == (int *)0x0) {
        iStack_138 = 0;
      }
      else {
        iStack_138 = *piVar4;
      }
      puStack_13c = (undefined1 *)0x620a7f;
      FUN_00454081();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x620a97;
      iVar2 = unaff_EBP + -0xb0;
      iVar5 = FUN_00402bc3();
      iStack_138 = iVar2;
      if (iVar5 < 0) {
        iStack_138 = 0x620aa2;
        FUN_00878dfb();
        iStack_138 = extraout_ECX_00;
      }
      piStack_140 = &iStack_138;
      *(int **)(unaff_EBP + -0x1c) = &iStack_138;
      puStack_13c = (undefined1 *)0xe73;
      uStack_144 = 0x620ab6;
      FUN_00679e4e();
      puStack_13c = (undefined1 *)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_140 = (int *)0x620ac9;
      FUN_0040263d();
      piStack_140 = (int *)0x620ad0;
      iStack_138 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_13c = (undefined1 *)0x620ada;
      uVar3 = FUN_00412550();
      iVar2 = FUN_00622244();
      *(undefined4 *)(iVar2 + 0x1c) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x620af9;
      iVar2 = unaff_EBP + -0xd0;
      iVar5 = FUN_00402bc3();
      iStack_138 = iVar2;
      if (iVar5 < 0) {
        iStack_138 = 0x620b04;
        FUN_00878dfb();
        iStack_138 = extraout_ECX_01;
      }
      piStack_140 = &iStack_138;
      *(int **)(unaff_EBP + -0x1c) = &iStack_138;
      puStack_13c = (undefined1 *)0x474;
      uStack_144 = 0x620b18;
      FUN_00679e4e();
      puStack_13c = (undefined1 *)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_140 = (int *)0x620b2b;
      FUN_0040263d();
      piStack_140 = (int *)0x620b32;
      iStack_138 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_13c = (undefined1 *)0x620b3c;
      uVar3 = FUN_00412550();
      iVar2 = FUN_00622244();
      *(undefined4 *)(iVar2 + 0x24) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x620b5b;
      iVar2 = unaff_EBP + -0xf0;
      iVar5 = FUN_00402bc3();
      iStack_138 = iVar2;
      if (iVar5 < 0) {
        iStack_138 = 0x620b66;
        FUN_00878dfb();
        iStack_138 = extraout_ECX_02;
      }
      piStack_140 = &iStack_138;
      *(int **)(unaff_EBP + -0x1c) = &iStack_138;
      puStack_13c = (undefined1 *)0x10b2;
      uStack_144 = 0x620b7a;
      FUN_00679e4e();
      puStack_13c = (undefined1 *)(unaff_EBP + -0x110);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_140 = (int *)0x620b8d;
      FUN_0040263d();
      piStack_140 = (int *)0x620b94;
      iStack_138 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      puStack_13c = (undefined1 *)0x620b9e;
      uVar3 = FUN_00412550();
      iVar2 = FUN_00622244();
      *(undefined4 *)(iVar2 + 0x20) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_138 = 0x620bbd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x620bc8;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 8);
      if (iVar2 == 6) {
        iStack_138 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc);
        puStack_13c = (undefined1 *)0x620be1;
        FUN_004e80ba();
      }
      else {
        if ((iVar2 == 3) || (iVar2 == 9)) {
          iStack_138 = 0x620bfd;
          iVar2 = FUN_0062231e();
          FUN_00622280();
          FUN_0062229d();
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
        }
        iStack_138 = 0x620c21;
        iVar2 = FUN_0062231e();
        FUN_00622280();
        FUN_0062229d();
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 8);
        if (((iVar2 == 2) || (iVar2 == 4)) || (iVar2 == 7)) {
          iStack_138 = 0x620c5d;
          FUN_00620f5d();
          iStack_138 = 0xff;
          puStack_13c = (undefined1 *)0xc0041f78;
          *(int ***)(unaff_EBP + -0x1c) = &piStack_140;
          uStack_144 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          uStack_148 = 0x620c78;
          FUN_00424e0a();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          uStack_144 = 0x620c84;
          iVar2 = FUN_00622244();
          uStack_144 = *(undefined4 *)(iVar2 + 0x10);
          uStack_148 = 0x620c8f;
          iVar2 = FUN_00622244();
          uStack_148 = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 **)(unaff_EBP + -0x30) = &uStack_14c;
          uStack_150 = 0;
          uStack_154 = 0x620c9e;
          FUN_00424dd7();
          uStack_150 = 0;
          *(undefined4 **)(unaff_EBP + -0x30) = &uStack_154;
          FUN_00424dbc(unaff_EBP + -0x34);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          FUN_0042e5bf(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iStack_138 = 0x620ccc;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
          iStack_138 = unaff_EBP + -0x70;
          puStack_13c = (undefined1 *)0x620cdb;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_138 = 0x620ce7;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          iStack_138 = 0x620cf5;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
          iStack_138 = unaff_EBP + -0x80;
          puStack_13c = (undefined1 *)0x620cff;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_138 = 0x620d0b;
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (piVar4 == (int *)0x0) {
            iStack_138 = 0x620d20;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x28);
          }
          piStack_140 = *(int **)(unaff_EBP + -0x70);
          puStack_13c = *(undefined1 **)(unaff_EBP + -0x6c);
          iVar2 = *piVar4;
          iStack_138 = *(int *)(unaff_EBP + -0x68);
          uStack_150 = *(undefined4 *)(unaff_EBP + -0x80);
          uStack_14c = *(undefined4 *)(unaff_EBP + -0x7c);
          uStack_148 = *(undefined4 *)(unaff_EBP + -0x78);
          uStack_154 = 0x20;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          uStack_144 = *(undefined4 *)(unaff_EBP + -0x74);
          puVar6 = (undefined1 *)(**(code **)(iVar2 + 0x110))(piVar4);
          if ((int)puVar6 < 0) {
            iStack_138 = *(int *)(unaff_EBP + -0x1c);
            piStack_140 = (int *)0x620d5b;
            puStack_13c = puVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          iStack_138 = 0x620d68;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_138 = 0x620d73;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iStack_138 = 0x620d80;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_138 = 0x620d8b;
            FUN_00878dfb();
          }
          this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
          iStack_138 = 0x620da0;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    (this,*(IBinding **)(unaff_EBP + -0x28));
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
            iStack_138 = 0x620db1;
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
            iStack_138 = 0x620dc2;
            (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
          }
        }
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 8);
        if ((iVar2 == 10) || (iVar2 == 0xb)) {
          iStack_138 = 0x620de5;
          iVar2 = FUN_0062231e();
          FUN_00622280();
          FUN_0062229d();
          puStack_13c = &stack0xfffffecc;
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
          *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffecc;
          iStack_138 = 0x10dc;
          piStack_140 = (int *)0x620e0f;
          FUN_00679e4e();
          iStack_138 = unaff_EBP + -0x130;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          puStack_13c = (undefined1 *)0x620e22;
          FUN_0040263d();
          puStack_13c = (undefined1 *)0x620e29;
          FUN_004048a4();
          iStack_138 = unaff_EBP + -0x38;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          puStack_13c = (undefined1 *)0x620e37;
          piVar4 = (int *)FUN_00405a23();
          piVar4 = (int *)*piVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          if (piVar4 == (int *)0x0) {
            iStack_138 = 0;
          }
          else {
            iStack_138 = *piVar4;
          }
          puStack_13c = (undefined1 *)0x620e57;
          FUN_00454081();
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_138 = 0x620e76;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_138 = 0x620e81;
            FUN_00878dfb();
          }
          pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x10) + 0x28);
          if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
            iStack_138 = unaff_EBP + -0x40;
            puStack_13c = (undefined1 *)0x620ea0;
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            iStack_138 = 0x620eb0;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_00414ebb();
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        iStack_138 = 0x620ece;
        FUN_006222b3();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        iStack_138 = 0x620ee2;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      iStack_138 = 0x620efe;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_138 = 0x620f0d;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_138 = 0x620f1f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_138 = 0x620f2a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      iStack_138 = 0x620f3b;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      iStack_138 = 0x620f4c;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


