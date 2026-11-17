/* FUN_00492f21 - 0x00492f21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00492f21(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar3 < 0) goto LAB_004931d1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    iStack_50 = unaff_EBP + -0x28;
    iStack_54 = 0x492ff6;
    FUN_00679d86();
    iStack_50 = unaff_EBP + 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_54 = 0x493005;
    FUN_0041354c();
    iVar3 = *(int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0049300e:
    if (iVar3 != 0) {
      iStack_50 = 0x49301b;
      FUN_00403384();
    }
  }
  else {
    if (iVar3 == 1) {
      iStack_50 = unaff_EBP + -0x24;
      iStack_54 = 0x492fcc;
      FUN_00679d86();
      iStack_50 = unaff_EBP + 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_54 = 0x492fdb;
      FUN_0041354c();
      iVar3 = *(int *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_0049300e;
    }
    if (iVar3 == 2) {
      iStack_50 = unaff_EBP + -0x20;
      iStack_54 = 0x492fa2;
      FUN_00679d86();
      iStack_50 = unaff_EBP + 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_54 = 0x492fb1;
      FUN_0041354c();
      iVar3 = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_0049300e;
    }
    if (iVar3 == 3) {
      iStack_50 = unaff_EBP + -0x1c;
      iStack_54 = 0x492f78;
      FUN_00679d86();
      iStack_50 = unaff_EBP + 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_54 = 0x492f87;
      FUN_0041354c();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_0049300e;
    }
  }
  iStack_50 = unaff_EBP + -0x28;
  iStack_54 = 0x49302c;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_50 = *puVar1;
  iStack_54 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_58 = 0x49303f;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iStack_50 = 0xff;
  iStack_54 = 1;
  puStack_5c = (undefined1 *)&uStack_58;
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
  uStack_60 = 0x493065;
  uStack_58 = extraout_ECX_00;
  FUN_004489f5();
  puStack_5c = *(undefined1 **)(unaff_EBP + 0xc);
  uStack_60 = *(undefined4 *)(unaff_EBP + 8);
  iStack_64 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004489f5();
  piVar4 = &iStack_64;
  *(int **)(unaff_EBP + 0xc) = &iStack_64;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_64 = extraout_ECX_01;
  FUN_00424e27(&iStack_64);
  FUN_0042fb5e(piVar4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uVar2 = FUN_00411641(0);
  FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_50 = 0x4930bf;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_50 = 0x4930d4;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_50 = unaff_EBP + -0x48;
    iStack_54 = 0x4930e3;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_50 = 0x4930ef;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_50 = 0x4930f9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_50 = unaff_EBP + -0x38;
    iStack_54 = 0x493103;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_50 = 0x49310f;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piVar4 == (int *)0x0) {
      iStack_50 = 0x493124;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_54 = *(int *)(unaff_EBP + -0x44);
    iVar3 = *piVar4;
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_64 = *(int *)(unaff_EBP + -0x34);
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + 0xc) = piVar4;
    puStack_5c = *(undefined1 **)(unaff_EBP + -0x2c);
    iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar3 < 0) {
      iStack_50 = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_58 = 0x49315f;
      iStack_54 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_50 = 0x49316c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_50 = 0x493177;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_50 = 0x493184;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_50 = 0x49318f;
      FUN_00878dfb();
    }
    iStack_50 = 0x49319f;
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004251cf();
    iStack_50 = 0x4931a9;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (this,*(IBinding **)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_50 = 0x4931ba;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
LAB_004931d1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


