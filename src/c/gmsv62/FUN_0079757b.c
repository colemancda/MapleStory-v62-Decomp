/* FUN_0079757b - 0x0079757b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079757b(void)

{
  IBinding *pIVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int *piStack_bc;
  int *piStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  char *pcStack_98;
  undefined4 *puStack_94;
  
  FUN_00879bb8();
  if (extraout_ECX[0x149] == 0) {
    puStack_94 = (undefined4 *)0x3;
    pcStack_98 = (char *)0x7975b1;
    uVar5 = FUN_0079b949();
    *(undefined4 *)(unaff_EBP + -0x60) = uVar5;
    puStack_94 = (undefined4 *)extraout_ECX[0x138];
    bVar3 = false;
    if (puStack_94 != (undefined4 *)0x0) {
      pcStack_98 = (char *)0x7975c6;
      iVar6 = FUN_005e2932();
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x30) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    if (extraout_ECX[0x13d] != 0) {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined1 **)(unaff_EBP + -0x18) = &LAB_004c7637;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 8);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 100;
    *(undefined4 *)(unaff_EBP + -0x50) = 1000;
    *(undefined1 *)(unaff_EBP + -0x54) = 0x80;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) / 10000 == 0x1ad) {
      puStack_94 = *(undefined4 **)(unaff_EBP + -0x18);
      iStack_9c = unaff_EBP + -0x1c;
      pcStack_98 = s_Item_Etc_0429_img__08d_effect_0096c050;
      uStack_a0 = 0x797645;
      FUN_00434e21();
    }
    else {
      puStack_94 = (undefined4 *)0xc07;
      pcStack_98 = (char *)(unaff_EBP + -0x40);
      iStack_9c = 0x79765a;
      puVar7 = (undefined4 *)FUN_00679d22();
      pcStack_98 = (char *)*puVar7;
      puStack_94 = *(undefined4 **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_9c = unaff_EBP + -0x1c;
      uStack_a0 = 0x79766d;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_94 = (undefined4 *)0x79767b;
      FUN_00414ebb();
    }
    puStack_94 = &DAT_00980690;
    pcStack_98 = (char *)0x797688;
    FUN_00403191();
    puStack_94 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    pcStack_98 = (char *)0x797699;
    FUN_00403191();
    puStack_94 = (undefined4 *)0x0;
    pcStack_98 = (char *)0x0;
    iStack_9c = 0xffffffff;
    uStack_a0 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_a4 = 0;
    uStack_a8 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_b0 = 0;
    iStack_b4 = unaff_EBP + -0x80;
    piStack_b8 = (int *)(unaff_EBP + -0x70);
    piStack_bc = (int *)0xffffffff;
    uVar5 = FUN_00449713(&uStack_a8);
    uVar5 = FUN_00456ad5(uVar5);
    *(int ***)(unaff_EBP + -0x24) = &piStack_bc;
    FUN_004033a1(uVar5);
    iVar6 = unaff_EBP + -0x90;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    FUN_00404a02(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_b4 = 0x79770c;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x40) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar6 != 0) {
      iStack_b0 = 0x797722;
      iVar6 = FUN_00404b30();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_b0 = 0x797733;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_b0 = 0x797743;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_b0 = 0x79774e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_b0 = 0x79775b;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_b0 = 0x797766;
      FUN_00878dfb();
    }
    iVar6 = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_b0 = 0x797773;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      iStack_b0 = 0x79777e;
      FUN_00878dfb();
      iVar6 = extraout_ECX_00;
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0x43e;
      piStack_bc = (int *)0x79779b;
      iStack_b0 = iVar6;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x7977ab;
      FUN_0040263d();
      piStack_b8 = (int *)0x7977b2;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_b4 = 0x7977bc;
      iVar6 = FUN_00412550();
      *(uint *)(unaff_EBP + -0x20) = (uint)(iVar6 != 0);
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x7977d2;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x7977df;
        FUN_00878dfb();
      }
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0xdbd;
      piStack_bc = (int *)0x7977f3;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x797803;
      FUN_0040263d();
      piStack_b8 = (int *)0x79780a;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_b4 = 0x797814;
      iVar6 = FUN_00412550();
      *(uint *)(unaff_EBP + -0x3c) = (uint)(iVar6 != 0);
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x79782a;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x797837;
        FUN_00878dfb();
      }
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0xe9f;
      piStack_bc = (int *)0x79784c;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x79785c;
      FUN_0040263d();
      piStack_b8 = (int *)0x797863;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_b4 = 0x79786d;
      iVar6 = FUN_00412550();
      *(uint *)(unaff_EBP + -0x10) = (uint)(iVar6 != 0);
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x797883;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x797890;
        FUN_00878dfb();
      }
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0x1071;
      piStack_bc = (int *)0x7978a4;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x7978b4;
      FUN_0040263d();
      piStack_b8 = (int *)0x7978bb;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_b4 = 0x7978c5;
      iVar6 = FUN_00412550();
      *(uint *)(unaff_EBP + -0x4c) = (uint)(iVar6 != 0);
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x7978db;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x7978e8;
        FUN_00878dfb();
      }
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0x3ce;
      piStack_bc = (int *)0x7978fd;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x79790d;
      FUN_0040263d();
      piStack_b8 = (int *)0x797914;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_b4 = 0x79791e;
      uVar5 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x48) = uVar5;
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x79792e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x79793b;
        FUN_00878dfb();
      }
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0x474;
      piStack_bc = (int *)0x797953;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x797963;
      FUN_0040263d();
      piStack_b8 = (int *)0x79796a;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_b4 = 0x797974;
      uVar5 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar5;
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x797984;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x797991;
        FUN_00878dfb();
      }
      piStack_b8 = &iStack_b0;
      *(int **)(unaff_EBP + -0x24) = &iStack_b0;
      iStack_b4 = 0x1072;
      piStack_bc = (int *)0x7979a9;
      FUN_00679e4e();
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x7979b9;
      FUN_0040263d();
      piStack_b8 = (int *)0x7979c0;
      iStack_b0 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_b4 = 0x7979ca;
      uVar4 = FUN_00412550();
      *(undefined1 *)(unaff_EBP + -0x54) = uVar4;
      iStack_b4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_b8 = (int *)0x7979da;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_b0 = 0x7979e7;
        FUN_00878dfb();
      }
    }
    extraout_ECX[0x77e] = *(int *)(unaff_EBP + -0x3c);
    iVar6 = *(int *)(unaff_EBP + 8) / 1000;
    if ((iVar6 == 0x1393) || (iVar6 == 0x10c3)) {
      if (extraout_ECX[0x77d] == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = -extraout_ECX[0x77d];
      }
      extraout_ECX[0x77d] = iVar6;
    }
    else {
      extraout_ECX[0x77d] = *(int *)(unaff_EBP + 8);
      FUN_00445a30();
      if (((0 < *(int *)(unaff_EBP + -0x18)) && (*(int *)(unaff_EBP + -0x20) != 0)) &&
         ((*(int *)(unaff_EBP + -0x10) != 0 ||
          ((extraout_ECX[0x13f] / 10000 != 0xbe && (extraout_ECX[0x13f] / 10000 != 0xc1)))))) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iStack_b0 = 0x797a6f;
          FUN_00878dfb();
        }
        iStack_b0 = 0x797a7b;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_b0 = 0x797a88;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
          iStack_b0 = 0x797a99;
          (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
        }
        iStack_b0 = 0x797aa3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            iStack_b0 = 0x797ab9;
            FUN_00878dfb();
          }
          piStack_b8 = *(int **)(unaff_EBP + -0x20);
          iStack_b0 = unaff_EBP + -0x38;
          iStack_b4 = 1;
          piStack_bc = (int *)0x797acc;
          iVar6 = (**(code **)(*piStack_b8 + 0xc))();
          if (iVar6 != 0) break;
          iStack_b0 = unaff_EBP + -0x10;
          iStack_b4 = 0x797add;
          FUN_00405a23();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          *(undefined1 **)(unaff_EBP + -0x58) = &stack0xffffff54;
          iStack_b0 = 0x797af3;
          FUN_00408b49();
          iStack_b0 = 0x797af8;
          iVar6 = FUN_0048342d();
          if (-1 < iVar6) {
            iStack_b0 = 0x797b0c;
            piVar9 = (int *)FUN_0045f1e3();
            *piVar9 = iVar6;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_b0 = 0x797b30;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_b0 = 0x797b3b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          iStack_b0 = 0x797b4c;
          (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
        }
      }
    }
    iVar6 = (**(code **)(*extraout_ECX + 8))();
    if (iVar6 != 0) {
      *(int *)(DAT_00978368 + 0x2b3c) = extraout_ECX[0x77d];
    }
    if (((undefined4 *)extraout_ECX[0x5e3] != (undefined4 *)0x0) &&
       (*(undefined4 *)extraout_ECX[0x5e3] = 1, extraout_ECX[0x5e3] != 0)) {
      iStack_b0 = 0x797ba5;
      FUN_00434d73();
      extraout_ECX[0x5e3] = 0;
    }
    if (*(int *)(unaff_EBP + -0x4c) != 0) {
      iStack_b0 = 5;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_b4 = 0x797bc2;
      FUN_004356c4();
      pIVar1 = (IBinding *)extraout_ECX[0x34d];
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_b0 = 0x797bd4;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x10),pIVar1);
      piVar9 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
      if (piVar9 != (int *)extraout_ECX[0x34e]) {
        *(int **)(*(int *)(unaff_EBP + -0x10) + 4) = (int *)extraout_ECX[0x34e];
        FUN_00424ed4();
        if (piVar9 != (int *)0x0) {
          iStack_b0 = 0x797bf8;
          (**(code **)(*piVar9 + 8))();
        }
      }
      piVar9 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
      if (piVar9 != (int *)extraout_ECX[0x34f]) {
        *(int **)(*(int *)(unaff_EBP + -0x10) + 8) = (int *)extraout_ECX[0x34f];
        FUN_00424ed4();
        if (piVar9 != (int *)0x0) {
          iStack_b0 = 0x797c1c;
          (**(code **)(*piVar9 + 8))();
        }
      }
      piVar9 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc);
      if (piVar9 != (int *)extraout_ECX[0x351]) {
        *(int **)(*(int *)(unaff_EBP + -0x10) + 0xc) = (int *)extraout_ECX[0x351];
        FUN_00424ed4();
        if (piVar9 != (int *)0x0) {
          iStack_b0 = 0x797c40;
          (**(code **)(*piVar9 + 8))();
        }
      }
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x10);
      piVar9 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x10);
      if (piVar2 != (int *)extraout_ECX[0x352]) {
        *piVar9 = extraout_ECX[0x352];
        FUN_00424ed4();
        piVar9 = extraout_ECX_01;
        if (piVar2 != (int *)0x0) {
          iStack_b0 = 0x797c64;
          (**(code **)(*piVar2 + 8))();
          piVar9 = extraout_ECX_02;
        }
      }
      piStack_b8 = (int *)(unaff_EBP + -0x10);
      iStack_b0 = *(int *)(unaff_EBP + -0x48);
      iStack_b4 = *(int *)(unaff_EBP + -0x50);
      *(int ***)(unaff_EBP + -0x58) = &piStack_bc;
      piStack_bc = piVar9;
      FUN_0041160e(extraout_ECX + 0x353);
      iVar6 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_00424e82(iVar6);
      FUN_00428d4a(iVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_b0 = 0x797ca7;
      FUN_0043443b();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        iStack_b0 = 0x797cb9;
        FUN_00434d73();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00426311();
    }
    if (((*(int *)(unaff_EBP + 8) == 0) && (extraout_ECX[0x138] == 0)) && (extraout_ECX[0x13d] == 0)
       ) {
      iStack_b0 = 0x797ce6;
      FUN_0079ba1a();
      iStack_b0 = 0x797cef;
      FUN_0079ba1a();
    }
    else {
      iVar6 = *(int *)(unaff_EBP + -0x3c);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x60) + 8) = *(undefined4 *)(unaff_EBP + -0x18);
      if (iVar6 == 0) {
        iStack_b0 = 0x797d08;
        FUN_0079ba1a();
        iStack_b0 = 0x797d12;
        FUN_00797d5a();
      }
      else {
        iStack_b0 = 0x797d1d;
        FUN_0079ba1a();
        iStack_b0 = 0x797d27;
        FUN_007980a6();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_b0 = 0x797d37;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    extraout_ECX[0x77b] = *(int *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


