/* FUN_00423ef1 - 0x00423ef1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00423ef1(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  uint uVar8;
  int unaff_EBP;
  undefined4 *puStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x34) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  uVar3 = FUN_0042459a();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  bVar1 = FUN_0042452b();
  uVar8 = (uint)bVar1;
  uVar4 = FUN_00424561();
  *(uint *)(unaff_EBP + -0x3c) = uVar4 & 0xffff;
  iStack_b4 = unaff_EBP + -0x6c;
  iStack_b8 = 0x423f62;
  FUN_004245d2();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  iStack_b4 = unaff_EBP + -0x34;
  iStack_b8 = 0x423f7e;
  FUN_004253e4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00424fa8();
  **(undefined4 **)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = *(undefined4 *)(unaff_EBP + -0x24);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8) = uVar3;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc) = uVar2;
  *(uint *)(*(int *)(unaff_EBP + -0x10) + 0x10) = uVar8;
  iVar5 = *(int *)(unaff_EBP + -0x10);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(unaff_EBP + -0x6c);
  *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(unaff_EBP + -100);
  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(unaff_EBP + -0x60);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x30) = uVar2;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x38) = 0;
  *(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) =
       *(int *)(unaff_EBP + -0x3c) * 100 + *(int *)(unaff_EBP + -0x20);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) == 0) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14) = 1;
  }
  if (*(int *)(unaff_EBP + -0x24) == 3) {
    iStack_b4 = 0x424006;
    iVar5 = FUN_004260d0();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_b4 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_b8 = 0x424025;
    piVar6 = (int *)FUN_00679d86();
    iStack_b4 = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b8 = unaff_EBP + -0x1c;
    iStack_bc = 0x424038;
    FUN_0041354c();
    iStack_b4 = 0x424045;
    FUN_00402e8e();
    iStack_b4 = 0x424051;
    FUN_00402f41();
    FUN_00402fa6();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_b4 = 0x42406d;
      FUN_00403384();
    }
    iStack_b4 = 0x42407c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_b4 = 0x424089;
    FUN_00403191();
    iStack_b4 = 0;
    iStack_b8 = unaff_EBP + -0x5c;
    iStack_bc = unaff_EBP + -0x4c;
    *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_c0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_c0 = extraout_ECX_00;
    FUN_004059fd(unaff_EBP + -0x18);
    iVar7 = unaff_EBP + -0x7c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar7);
    FUN_00402660();
    FUN_00404a02(iVar7);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_b8 = 0x4240cc;
    iVar7 = FUN_004032b4();
    *(int *)(unaff_EBP + 8) = iVar7;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar7 != 0) {
      iStack_b4 = 0x4240e2;
      iVar7 = FUN_00404b30();
      if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
        iStack_b4 = 0x4240f3;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_b4 = 0x424100;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_b4 = 0x42410b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_b4 = 0x424118;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_b4 = 0x424123;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_b4 = 0x424130;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_b4 = 0x42413b;
      FUN_00878dfb();
    }
    iStack_b4 = *(int *)(iVar5 + 8) * 1000 + *(int *)(*(int *)(unaff_EBP + -0x10) + 0x14);
    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x18) = iStack_b4;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c) = 0;
    iStack_b8 = unaff_EBP + -0x24;
    *(int **)(unaff_EBP + -0x30) = &iStack_b4;
    iStack_bc = 0x424166;
    FUN_00424dbc();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_b8 = 0x424172;
    iStack_b8 = FUN_00424e73();
    iStack_b8 = iStack_b8 + 0x3c;
    iStack_bc = 0x42417e;
    FUN_00424b14();
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402fa6();
    iVar5 = extraout_ECX_01;
  }
  else {
    iVar5 = *(int *)(unaff_EBP + 8);
    if (iVar5 == 0x82) {
      iStack_b4 = 0x424495;
      iVar5 = FUN_00651eaf();
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x34) =
           *(undefined4 *)(*(int *)(iVar5 + 4) + uVar8 * 0x5c + -0x48);
      iVar5 = *(int *)(unaff_EBP + -0x10);
      iStack_b4 = 0x4244b4;
      puStack_c0 = (undefined4 *)FUN_0042463f();
      puStack_c0 = (undefined4 *)*puStack_c0;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (puStack_c0 == (undefined4 *)0x0) {
        puStack_c0 = (undefined4 *)0x0;
      }
      else {
        puStack_c0 = (undefined4 *)*puStack_c0;
      }
      iStack_b4 = 0x14;
      iStack_b8 = iVar5 + 0x3c;
      iStack_bc = unaff_EBP + -0x6c;
      FUN_0042ded8();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = 0;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        iVar5 = extraout_ECX_08;
      }
    }
    else {
      if (iVar5 == 0x83) {
        iStack_b4 = 0x424336;
        iVar5 = FUN_00651eaf();
        iVar5 = *(int *)(iVar5 + 4) + -0x5c + uVar8 * 0x5c;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x34) = *(undefined4 *)(iVar5 + 0x14);
        *(int *)(unaff_EBP + 8) = iVar5;
        iStack_b4 = 0x424358;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        iStack_b4 = unaff_EBP + -0x4c;
        iStack_b8 = 0x424367;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_b4 = 0x424373;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iStack_b4 = 0x42437d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        iStack_b4 = unaff_EBP + -0x5c;
        puStack_c0 = &DAT_00980690;
        iStack_b8 = 0x424387;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_b4 = 0x424393;
          FUN_00878dfb();
          puStack_c0 = extraout_ECX_04;
        }
        iStack_b4 = 0;
        iStack_b8 = unaff_EBP + -0x4c;
        iStack_bc = unaff_EBP + -0x5c;
        *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c0;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_0042463f(&puStack_c0);
        iVar5 = unaff_EBP + -0xac;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_00405a1d(iVar5);
        FUN_00402660();
        FUN_00404a02(iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_b8 = 0x4243d9;
        iVar5 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x30) = iVar5;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar5 != 0) {
          iStack_b4 = 0x4243ef;
          iVar5 = FUN_00404b30();
          if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
            iStack_b4 = 0x424400;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_b4 = 0x424410;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b4 = 0x42441b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_b4 = 0x424428;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b4 = 0x424433;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iStack_b4 = 0x424440;
        iVar5 = unaff_EBP + -0x4c;
        iVar7 = FUN_00402bc3();
        iStack_b4 = iVar5;
        if (iVar7 < 0) {
          iStack_b4 = 0x42444b;
          FUN_00878dfb();
          iStack_b4 = extraout_ECX_05;
        }
        iStack_b8 = unaff_EBP + -0x18;
        *(int **)(unaff_EBP + 8) = &iStack_b4;
        iStack_bc = 0x42445e;
        FUN_00424dbc();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iStack_b8 = 0x42446a;
        iStack_b8 = FUN_00424e73();
        iStack_b8 = iStack_b8 + 0x3c;
        iStack_bc = 0x424476;
        FUN_00424b14();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piVar6 = *(int **)(unaff_EBP + -0x18);
        iVar5 = extraout_ECX_06;
      }
      else {
        if ((iVar5 != 0x20361b) && (iVar5 = iVar5 + -0x40684e, iVar5 != 0)) goto LAB_004244ee;
        iStack_b4 = 0x4241dc;
        uVar2 = FUN_0064d61f();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
        iStack_b4 = 0x4241ed;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_b4 = 0x4241fd;
        FUN_00403191();
        iStack_b4 = 0;
        iStack_b8 = unaff_EBP + -0x7c;
        iStack_bc = unaff_EBP + -0x8c;
        *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c0;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_c0 = extraout_ECX_02;
        FUN_00424619(&puStack_c0);
        iVar5 = unaff_EBP + -0x9c;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00405a1d(iVar5);
        FUN_00402660();
        FUN_00404a02(iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_b8 = 0x424246;
        iVar5 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x38) = iVar5;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        if (iVar5 != 0) {
          iStack_b4 = 0x42425c;
          iVar5 = FUN_00404b30();
          if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
            iStack_b4 = 0x42426d;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_b4 = 0x42427d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b4 = 0x424288;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_b4 = 0x424298;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b4 = 0x4242a3;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_b4 = 0x4242b0;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b4 = 0x4242bb;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(unaff_EBP + -0x10);
        iStack_b4 = 0x4242c7;
        iStack_b4 = FUN_006509a1();
        iStack_b4 = iStack_b4 + 0xe8;
        iStack_b8 = 0x4242d8;
        iVar7 = FUN_00413367();
        iStack_b4 = *(int *)(unaff_EBP + -0x10);
        *(int *)(iStack_b4 + 0x18) = iVar7 * 1000 + *(int *)(iVar5 + 0x14);
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c) = 0;
        iStack_b8 = unaff_EBP + 8;
        *(int **)(unaff_EBP + -0x20) = &iStack_b4;
        iStack_bc = 0x424302;
        FUN_00424dbc();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_b8 = 0x42430e;
        iStack_b8 = FUN_00424e73();
        iStack_b8 = iStack_b8 + 0x3c;
        iStack_bc = 0x42431a;
        FUN_00424b14();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piVar6 = *(int **)(unaff_EBP + 8);
        iVar5 = extraout_ECX_03;
      }
      if (piVar6 != (int *)0x0) {
        iStack_b4 = 0x424487;
        (**(code **)(*piVar6 + 8))();
        iVar5 = extraout_ECX_07;
      }
    }
  }
LAB_004244ee:
  *(int **)(unaff_EBP + 8) = &iStack_b4;
  iStack_b8 = 0x424500;
  iStack_b4 = iVar5;
  FUN_00424fdb();
  iStack_b8 = 0x424508;
  FUN_00424665();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_b4 = 0x42451a;
    FUN_0042500e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


