/* FUN_006c1657 - 0x006c1657 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c1657(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int unaff_EBP;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  int iStack_8c;
  undefined4 *puStack_88;
  int iStack_84;
  int iStack_7c;
  undefined4 *puVar6;
  
  FUN_00879bb8();
  iStack_7c = 0x6c1671;
  FUN_0081622a();
  iStack_7c = 0x6c1680;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  FUN_0045e4a2();
  iStack_7c = 0x6c1699;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_7c = iVar2 + 0xa5;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_84 = FUN_00413367();
  puStack_88 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_8c = 0x6c16c3;
  FUN_007d3546();
  iStack_7c = 0x6c16d4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_7c = 0x6c16e4;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x24) = &iStack_7c;
  iStack_84 = 0x6c16f0;
  FUN_00448a17();
  iStack_84 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_88 = (undefined4 *)0x6c16ff;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0044974c();
  iVar2 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_7c = 0x6c172b;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_7c = 0x6c1738;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_7c = 0x6c1743;
    FUN_00878dfb();
  }
  iStack_7c = 0x6c174c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_7c = 0x6c1759;
  FUN_00403191();
  iStack_7c = unaff_EBP + -0x44;
  iStack_84 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_88 = (undefined4 *)0x6c1770;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00449749();
  iStack_84 = 0x6c1786;
  puStack_88 = (undefined4 *)FUN_00449713();
  *(int **)(unaff_EBP + -0x24) = &iStack_84;
  iStack_8c = 0x6c1792;
  iStack_84 = extraout_ECX_00;
  FUN_00448a17();
  puStack_88 = (undefined4 *)0x10a;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_90 = (undefined1 *)0x6c17a4;
  iStack_8c = 0x8a - iVar2;
  FUN_004115d9();
  puStack_90 = (undefined1 *)0x6c17ab;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_7c = 0x6c17be;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_7c = 0x6c17cb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_7c = 0x6c17d6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_7c = 0x6c17e3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_7c = 0x6c17ee;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x3e3 + *(int *)(extraout_ECX + 0x59c) * 4);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar2 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x598);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  do {
    iVar2 = *(int *)(extraout_ECX + 0x598) + 0x18;
    if (*(int *)(unaff_EBP + -0x1c) <= iVar2) {
      iVar2 = *(int *)(unaff_EBP + -0x1c);
    }
    if (iVar2 <= *(int *)(unaff_EBP + -0x10)) {
      if ((*(int *)(extraout_ECX + 0x59c) == 2) && (DAT_00978358 != 0)) {
        iStack_7c = 0;
        iStack_84 = 0;
        puStack_88 = (undefined4 *)0x0;
        iStack_8c = 0x6c19b2;
        iVar2 = FUN_007a22a3();
        if ((iVar2 != 0) && (iStack_7c = iVar2, iVar2 = FUN_006c1bf9(), iVar2 != 0)) {
          iStack_7c = 0x6c19da;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
          iStack_7c = unaff_EBP + -0x34;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_7c = 0x6c19f0;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_7c = 0x6c19fa;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          iStack_7c = unaff_EBP + -0x44;
          puVar6 = &DAT_00980690;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            iStack_7c = 0x6c1a10;
            FUN_00878dfb();
            puVar6 = extraout_ECX_03;
          }
          iStack_7c = 0;
          iStack_84 = unaff_EBP + -0x44;
          puStack_90 = (undefined1 *)&puStack_88;
          *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_88;
          iStack_8c = 0x73d;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          uStack_94 = 0x6c1a34;
          puStack_88 = puVar6;
          FUN_00679e4e();
          iStack_8c = unaff_EBP + -0x74;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_90 = (undefined1 *)0x6c1a41;
          FUN_00405a1d();
          puStack_90 = (undefined1 *)0x6c1a48;
          FUN_00402660();
          puStack_90 = (undefined1 *)0x6c1a4f;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x24) = iVar2;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          if (iVar2 != 0) {
            iStack_7c = 0x6c1a70;
            iVar2 = FUN_0041a581();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              iStack_7c = 0x6c1a81;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          iStack_7c = 0x6c1a8e;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_7c = 0x6c1a99;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_7c = 0x6c1aa6;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_7c = 0x6c1ab1;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_7c = 0x6c1abe;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_7c = 0x6c1ac9;
            FUN_00878dfb();
          }
          iStack_7c = 0xff;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            iStack_7c = 0x6c1aec;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              iStack_7c = 0x6c1af7;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            iStack_7c = 0x6c1b05;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(unaff_EBP + 8);
          *(int **)(unaff_EBP + -0x20) = piVar1;
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x50);
          iVar5 = FUN_0040eea9();
          puStack_88 = *(undefined4 **)(unaff_EBP + -0x1c);
          puStack_90 = (undefined1 *)(*(int *)(unaff_EBP + -0x54) - iVar5);
          iStack_84 = *(int *)(unaff_EBP + -100);
          iStack_7c = *(int *)(unaff_EBP + -0x5c);
          uStack_94 = *(undefined4 *)(unaff_EBP + -0x20);
          uStack_98 = 0x6c1b43;
          iStack_8c = iVar2 - iVar3;
          iVar2 = (**(code **)(*piVar1 + 0x80))();
          if (iVar2 < 0) {
            iStack_7c = *(int *)(unaff_EBP + -0x20);
            iStack_84 = 0x6c1b55;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_7c = 0x6c1b62;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_7c = 0x6c1b6d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            iStack_7c = 0x6c1b7e;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_7c = 0x6c1b9d;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iStack_7c = *(int *)(extraout_ECX + 0x59c);
    iStack_84 = 0x6c1846;
    iVar2 = FUN_00458c4f();
    piVar1 = *(int **)(iVar2 + 4);
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      iStack_7c = 0x6c1859;
      FUN_00449913();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    if (piVar1 != (int *)0x0) {
      uVar4 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      iStack_7c = *(int *)(unaff_EBP + -0x10);
      FUN_006c1bf9();
      *(int **)(unaff_EBP + -0x24) = &iStack_7c;
      iStack_84 = 0x6c1892;
      InterlockedIncrement(piVar1 + 1);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      uVar4 = FUN_0055540f();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      iVar2 = (**(code **)(*piVar1 + 0x10))();
      if (iVar2 == 3) {
        iStack_7c = 0;
        iStack_84 = 0x6c18bd;
        iStack_84 = FUN_0048b3b8();
        puStack_88 = (undefined4 *)0x0;
        iStack_8c = 0;
        puStack_90 = *(undefined1 **)(unaff_EBP + -0x38);
        uStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined1 **)(unaff_EBP + -0x24) = auStack_9c;
        FUN_0046fc23(unaff_EBP + 8);
      }
      else {
        iStack_7c = *(int *)(unaff_EBP + -0x24);
        iStack_84 = 0;
        puStack_88 = (undefined4 *)0x0;
        iStack_8c = 0x6c18ec;
        iStack_8c = (**(code **)(*piVar1 + 4))();
        puStack_90 = *(undefined1 **)(unaff_EBP + -0x38);
        uStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined1 **)(unaff_EBP + -0x24) = auStack_9c;
        FUN_0046fc23(unaff_EBP + 8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      FUN_005558b0();
      iVar2 = *(int *)(extraout_ECX + 0x59c);
      if (((iVar2 != 2) && (iVar2 != 3)) && (iVar2 != 4)) {
        iStack_7c = 0x6c1932;
        iVar2 = FUN_0048b567();
        if (iVar2 == 0) {
          iStack_7c = 0x6c193f;
          iVar2 = FUN_0048b8d9();
          if (iVar2 == 0) goto LAB_006c1983;
        }
      }
      (**(code **)(*piVar1 + 0x18))();
      *(int **)(unaff_EBP + -0x24) = &iStack_7c;
      iStack_84 = 0x6c1961;
      iStack_7c = extraout_ECX_01;
      FUN_00424dbc();
      iStack_84 = *(int *)(unaff_EBP + -0x38) + -0xc;
      puStack_88 = *(undefined4 **)(unaff_EBP + -0x44);
      puStack_90 = (undefined1 *)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x24) = &iStack_8c;
      uStack_94 = 0x6c197b;
      iStack_8c = extraout_ECX_02;
      FUN_0046fc23();
      puStack_90 = (undefined1 *)0x6c1980;
      FUN_007d3201();
    }
LAB_006c1983:
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while( true );
}


