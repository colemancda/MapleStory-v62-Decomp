/* FUN_0042c9f9 - 0x0042c9f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042c9f9(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined *extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined *local_48;
  int iStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  *(undefined **)(unaff_EBP + -0x14) = extraout_ECX;
  piStack_40 = (int *)0xff;
  iStack_44 = *(int *)(unaff_EBP + 0x20);
  iStack_4c = unaff_EBP + 0x1c;
  *(undefined ***)(unaff_EBP + -0x10) = &local_48;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_50 = 0x42ca2e;
  local_48 = extraout_ECX;
  FUN_0041160e();
  iStack_4c = *(undefined4 *)(unaff_EBP + 0x18);
  uStack_50 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_54;
  FUN_00433bdf(unaff_EBP + 0x10);
  FUN_0042e3f0(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    piStack_40 = (int *)(unaff_EBP + 8);
    local_48 = &DAT_00964034;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_44 = 0x42ca77;
    FUN_0041354c();
    piStack_40 = (int *)0xff;
    iStack_44 = *(int *)(unaff_EBP + 0x20);
    iStack_4c = unaff_EBP + 0x1c;
    *(undefined ***)(unaff_EBP + -0x18) = &local_48;
    uStack_50 = 0x42ca8d;
    FUN_0041160e();
    iStack_4c = *(undefined4 *)(unaff_EBP + 0x18);
    uStack_50 = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 **)(unaff_EBP + 0x18) = &uStack_54;
    uStack_54 = extraout_ECX_00;
    FUN_00433bdf(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar1 = FUN_00411641(*(undefined4 *)(unaff_EBP + 0xc));
    puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 0x20,uVar1);
    piStack_40 = (int *)0x42cac8;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar2);
    if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
      piStack_40 = (int *)0x42cad5;
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00402676();
      goto LAB_0042cbd6;
    }
    FUN_00402676();
  }
  piStack_40 = (int *)0x42cafc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  piStack_40 = (int *)(unaff_EBP + -0x38);
  iStack_44 = 0x42cb0b;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_40 = (int *)0x42cb17;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_40 = (int *)0x42cb21;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  piStack_40 = (int *)(unaff_EBP + -0x28);
  iStack_44 = 0x42cb2b;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_40 = (int *)0x42cb37;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar4 == (int *)0x0) {
    piStack_40 = (int *)0x42cb4c;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  local_48 = *(undefined **)(unaff_EBP + -0x38);
  iStack_44 = *(int *)(unaff_EBP + -0x34);
  iVar3 = *piVar4;
  piStack_40 = *(int **)(unaff_EBP + -0x30);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
  *(int **)(unaff_EBP + 0x20) = piVar4;
  iStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
  iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    piStack_40 = *(int **)(unaff_EBP + 0x20);
    local_48 = (undefined *)0x42cb86;
    iStack_44 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_40 = (int *)0x42cb93;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_40 = (int *)0x42cb9e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_40 = (int *)0x42cbab;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_40 = (int *)0x42cbb6;
    FUN_00878dfb();
  }
  piStack_40 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffffc4;
  if (piStack_40 != (int *)0x0) {
    iStack_44 = 0x42cbce;
    (**(code **)(*piStack_40 + 4))();
  }
  piStack_40 = (int *)0x42cbd6;
  FUN_00427af9();
LAB_0042cbd6:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_40 = (int *)0x42cbe7;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    piStack_40 = (int *)0x42cbf7;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
    piStack_40 = (int *)0x42cc08;
    (**(code **)(**(int **)(unaff_EBP + 0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


