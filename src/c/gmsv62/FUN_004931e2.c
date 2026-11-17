/* FUN_004931e2 - 0x004931e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004931e2(void)

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
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_48 = unaff_EBP + -0x20;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x493212;
  FUN_00679d86();
  iStack_48 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x493228;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_48 = *puVar1;
  iStack_4c = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_50 = 0x49323a;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_48 = 0xff;
  iStack_4c = 1;
  puStack_54 = (undefined1 *)&uStack_50;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_50;
  uStack_58 = 0x49326b;
  uStack_50 = extraout_ECX_00;
  FUN_004489f5();
  puStack_54 = *(undefined1 **)(unaff_EBP + 0xc);
  uStack_58 = *(undefined4 *)(unaff_EBP + 8);
  iStack_5c = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004489f5();
  piVar4 = &iStack_5c;
  *(int **)(unaff_EBP + 0xc) = &iStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_5c = extraout_ECX_01;
  FUN_00424e27(&iStack_5c);
  FUN_0042fb5e(piVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar2 = FUN_00411641(0);
  FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_48 = 0x4932c5;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_48 = 0x4932da;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_48 = unaff_EBP + -0x40;
    iStack_4c = 0x4932e9;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_48 = 0x4932f5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_48 = 0x4932ff;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_48 = unaff_EBP + -0x30;
    iStack_4c = 0x493309;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_48 = 0x493315;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piVar4 == (int *)0x0) {
      iStack_48 = 0x49332a;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_4c = *(int *)(unaff_EBP + -0x3c);
    iVar3 = *piVar4;
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_5c = *(int *)(unaff_EBP + -0x2c);
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + 0xc) = piVar4;
    puStack_54 = *(undefined1 **)(unaff_EBP + -0x24);
    iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x30));
    if (iVar3 < 0) {
      iStack_48 = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_50 = 0x493365;
      iStack_4c = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_48 = 0x493372;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_48 = 0x49337d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_48 = 0x49338a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_48 = 0x493395;
      FUN_00878dfb();
    }
    iStack_48 = 0x4933a5;
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004251cf();
    iStack_48 = 0x4933af;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (this,*(IBinding **)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_48 = 0x4933bf;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


