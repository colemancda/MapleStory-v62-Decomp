/* FUN_0052688f - 0x0052688f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052688f(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  int *piStack_64;
  undefined *puStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x97c);
  do {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_50 = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_54 = 0x5268ca;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_50 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_54 = unaff_EBP + -0x14;
    uStack_58 = 0x5268dd;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iStack_50 = 0xff;
    iStack_54 = 0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_58;
    piStack_5c = (int *)0x0;
    puStack_60 = (undefined *)0x5268ff;
    FUN_00424e0a();
    piStack_5c = (int *)0x0;
    puStack_60 = (undefined *)0x0;
    *(int ***)(unaff_EBP + -0x28) = &piStack_64;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00424dd7(0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uVar3 = FUN_00411641(0);
    puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x1c,uVar3);
    iStack_50 = 0x526934;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_50 = 0x526941;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    if (*(int *)this == 0) {
      iStack_50 = 0x52694f;
      FUN_00878dfb();
    }
    piStack_5c = *(int **)this;
    *(undefined4 *)(unaff_EBP + -0x48) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x44) = DAT_0097bb34;
    iVar4 = *piStack_5c;
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb3c;
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_54 = *(int *)(unaff_EBP + -0x44);
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + -0x20) = piStack_5c;
    puStack_60 = (undefined *)0x526975;
    iVar4 = (**(code **)(iVar4 + 0xfc))();
    if (iVar4 < 0) {
      puStack_60 = &DAT_00963df8;
      piStack_64 = *(int **)(unaff_EBP + -0x20);
      FUN_00878e09(iVar4);
    }
    if (*(int *)this == 0) {
      puStack_60 = (undefined *)0x80004003;
      piStack_64 = (int *)0x526997;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    puStack_60 = (undefined *)0x7fffffff;
    piStack_64 = piVar1;
    iVar4 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
    if (*(int *)this == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)this;
    iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffff);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
    piVar1 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0x9b0);
    *(undefined2 *)(unaff_EBP + -0x38) = 0xd;
    *(int **)(unaff_EBP + -0x30) = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    iVar4 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)this;
    iVar4 = *piVar1;
    *(int **)(unaff_EBP + -0x20) = piVar1;
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar4 < 0) {
      iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_58 = 0x526a32;
      iStack_54 = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_50 = 0x526a3f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_50 = 0x526a4a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    this = this + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 0xd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


