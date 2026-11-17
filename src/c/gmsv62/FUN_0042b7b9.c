/* FUN_0042b7b9 - 0x0042b7b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b7b9(void)

{
  double dVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  float10 fVar6;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_58 = (undefined4 *)0x0;
  uStack_60 = CONCAT44(0xff,*(undefined4 *)(unaff_EBP + 0x20));
  iStack_68 = unaff_EBP + 0x1c;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_64;
  uStack_6c = 0x42b7e9;
  uStack_64 = extraout_ECX;
  FUN_0041160e();
  iStack_68 = 0;
  uStack_6c = 0;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_70;
  uStack_74 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_78 = 0x42b7fb;
  uStack_70 = extraout_ECX_00;
  FUN_00424dd7();
  uStack_74 = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_78;
  uStack_78 = extraout_ECX_01;
  FUN_00424dbc(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0042e5bf(unaff_EBP + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    if ((*(double *)(unaff_EBP + 0x24) != _DAT_008e8a78) ||
       (*(double *)(unaff_EBP + 0x2c) != _DAT_008e8a80)) {
      puStack_58 = (undefined4 *)(unaff_EBP + -0x18);
      uStack_60 = CONCAT44(0x42b858,(undefined4)uStack_60);
      piVar2 = (int *)FUN_0042bc90();
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar4 == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42b86c,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      puStack_58 = (undefined4 *)0x42b873;
      uVar3 = FUN_00424ee1();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(double *)(unaff_EBP + -0x34) = (double)*(int *)(unaff_EBP + -0x10);
      puStack_58 = (undefined4 *)0x42b888;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42b897,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      puStack_58 = (undefined4 *)(unaff_EBP + -0x10);
      uStack_60 = CONCAT44(0x42b8a3,(undefined4)uStack_60);
      piVar2 = (int *)FUN_0042bc90();
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42b8b7,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      puStack_58 = (undefined4 *)0x42b8be;
      uVar3 = FUN_00424f08();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(double *)(unaff_EBP + -0x2c) = (double)*(int *)(unaff_EBP + -0x18);
      puStack_58 = (undefined4 *)0x42b8d3;
      FUN_004125d9();
      puStack_58 = &DAT_00980690;
      uStack_60 = CONCAT44(0x42b8dc,(undefined4)uStack_60);
      FUN_00403191();
      puStack_58 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_60 = CONCAT44(0x42b8e9,(undefined4)uStack_60);
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42b8fc,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      puStack_58 = (undefined4 *)(unaff_EBP + -0x20);
      uStack_60 = CONCAT44(0x42b908,(undefined4)uStack_60);
      piVar2 = (int *)FUN_0042bc90();
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar4 == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42b91c,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      uVar3 = *(undefined4 *)*piVar2;
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_60 = *(undefined8 *)(unaff_EBP + -0x50);
      puStack_58 = *(undefined4 **)(unaff_EBP + -0x48);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x40);
      uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
      *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)*piVar2;
      iStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      uStack_78 = 0x42b949;
      uStack_78 = __ftol();
      uVar3 = __ftol();
      iVar4 = (**(code **)(*(int *)(unaff_EBP + -0x18) + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x10),uVar3);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      piVar2 = *(int **)(unaff_EBP + 0x20);
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar2 = *(int **)(unaff_EBP + 0x20);
      }
      iVar4 = *piVar2;
      *(int **)(unaff_EBP + -0x20) = piVar2;
      uVar3 = __ftol();
      uVar3 = __ftol(uVar3);
      iVar4 = (**(code **)(iVar4 + 0x44))(*(undefined4 *)(unaff_EBP + 0x20),uVar3);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963d08);
      }
      *(double *)(unaff_EBP + -0x1c) = *(double *)(unaff_EBP + 0x2c) * _DAT_008e8a88;
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        FUN_00878dfb();
      }
      piVar2 = (int *)FUN_0042bc90();
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (iVar4 == 0) {
        FUN_00878dfb();
      }
      uVar3 = FUN_00424ee1();
      *(undefined4 *)(unaff_EBP + 0x28) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + 0x28) * _DAT_008e89d0;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        FUN_00878dfb();
      }
      piVar2 = (int *)FUN_0042bc90();
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar4 == 0) {
        FUN_00878dfb();
      }
      uVar3 = FUN_00424f08();
      *(undefined4 *)(unaff_EBP + 0x28) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(double *)(unaff_EBP + 0x24) = (double)*(int *)(unaff_EBP + 0x28);
      FUN_004125d9();
      fVar6 = (float10)FUN_0087ae74(*(undefined8 *)(unaff_EBP + -0x1c));
      *(double *)(unaff_EBP + -0x34) = (double)(fVar6 * (float10)*(double *)(unaff_EBP + -0x14));
      fVar6 = (float10)FUN_0087adc4(*(undefined8 *)(unaff_EBP + -0x1c));
      *(double *)(unaff_EBP + -0x2c) =
           (double)((float10)*(double *)(unaff_EBP + -0x34) -
                   fVar6 * (float10)*(double *)(unaff_EBP + 0x24));
      fVar6 = (float10)FUN_0087ae74(*(undefined8 *)(unaff_EBP + -0x1c));
      *(double *)(unaff_EBP + -0x34) = (double)(fVar6 * (float10)*(double *)(unaff_EBP + 0x24));
      fVar6 = (float10)FUN_0087adc4(*(undefined8 *)(unaff_EBP + -0x1c));
      puStack_58 = &DAT_00980690;
      dVar1 = *(double *)(unaff_EBP + -0x34);
      *(double *)(unaff_EBP + -0x34) =
           *(double *)(unaff_EBP + -0x14) - *(double *)(unaff_EBP + -0x2c);
      *(double *)(unaff_EBP + 0x24) =
           (double)((float10)*(double *)(unaff_EBP + 0x24) -
                   (fVar6 * (float10)*(double *)(unaff_EBP + -0x14) + (float10)dVar1));
      uStack_60 = CONCAT44(0x42bb00,(undefined4)uStack_60);
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42bb10,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      uStack_60 = *(undefined8 *)(unaff_EBP + 0x2c);
      puStack_58 = (undefined4 *)(unaff_EBP + -0x54);
      uStack_64 = 0x42bb24;
      FUN_0042bc52();
      puStack_58 = (undefined4 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_60 = CONCAT44(0x42bb31,(undefined4)uStack_60);
      puStack_58 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_58 < 0) {
        uStack_60 = CONCAT44(0x42bb3c,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        puStack_58 = (undefined4 *)0x80004003;
        uStack_60 = CONCAT44(0x42bb48,(undefined4)uStack_60);
        FUN_00878dfb();
      }
      puStack_58 = (undefined4 *)0x42bb50;
      puStack_58 = (undefined4 *)__ftol();
      uStack_60 = CONCAT44(0x42bb59,(undefined4)uStack_60);
      uVar3 = __ftol();
      uStack_60 = CONCAT44(uVar3,0x42bb62);
      FUN_0042bc27();
    }
    puStack_58 = (undefined4 *)0x42bb6c;
    puStack_58 = (undefined4 *)__ftol();
    uStack_60 = CONCAT44(0x42bb75,(undefined4)uStack_60);
    uStack_60._4_4_ = __ftol();
    uStack_60._0_4_ = 0x42bb7e;
    FUN_00424e27();
    uStack_60 = CONCAT44(uStack_60._4_4_,0x42bb85);
    FUN_0042bc27();
    puStack_58 = &DAT_00980690;
    uStack_60 = CONCAT44(0x42bb8e,(undefined4)uStack_60);
    FUN_00424aee();
    puStack_58 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_60 = CONCAT44(0x42bb9b,(undefined4)uStack_60);
    FUN_00424aee();
    puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
    uStack_60 = (ulonglong)(unaff_EBP - 0x54) << 0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_64 = 0x42bbb0;
    FUN_00424e27();
    uStack_64 = 0x42bbb7;
    FUN_00425139();
    puStack_58 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_60 = CONCAT44(0x42bbc4,(undefined4)uStack_60);
    puStack_58 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_58 < 0) {
      uStack_60 = CONCAT44(0x42bbcf,(undefined4)uStack_60);
      FUN_00878dfb();
    }
    puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_60 = CONCAT44(0x42bbdc,(undefined4)uStack_60);
    puVar5 = (undefined4 *)FUN_00402bc3();
    if ((int)puVar5 < 0) {
      uStack_60 = CONCAT44(0x42bbe7,(undefined4)uStack_60);
      puStack_58 = puVar5;
      FUN_00878dfb();
      puStack_58 = extraout_ECX_02;
    }
    *(undefined4 ***)(unaff_EBP + 0x28) = &puStack_58;
    uStack_60 = CONCAT44(unaff_EBP + 0x20,0x42bbf6);
    FUN_0041160e();
    uStack_60 = CONCAT44(0x42bbfe,(undefined4)uStack_60);
    FUN_00427af9();
  }
  puStack_58 = (undefined4 *)0x42bc06;
  FUN_00412600();
  puStack_58 = (undefined4 *)0x42bc0e;
  FUN_004027eb();
  puStack_58 = (undefined4 *)0x42bc16;
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


