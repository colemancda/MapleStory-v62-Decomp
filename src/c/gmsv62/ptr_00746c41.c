/* ptr_00746c41 - 0x00746c41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00746c41(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_8 = 0x746c4b;
  FUN_00405a1d();
  uStack_8 = 0x746c52;
  FUN_00402660();
  uStack_8 = 0x746c59;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piVar2 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x18) = piVar2;
  *(int **)(unaff_EBP + -0x14) = unaff_EBX;
  if (piVar2 != unaff_EBX) {
    iVar3 = FUN_00404b30();
    if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x10) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puVar4 = (undefined4 *)FUN_00485656();
  uVar1 = *puVar4;
  *(undefined4 **)(unaff_EBP + -0x28) = &param_1;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  uStack_4 = 0x746d07;
  FUN_0041160e();
  uStack_4 = 0x146;
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_8;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00523572();
  piStack_14 = (int *)(unaff_EBP + -0x14);
  *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffff0;
  piStack_18 = (int *)0x746d34;
  FUN_00424dbc();
  piStack_14 = (int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_18 = (int *)0x746d41;
  puVar4 = (undefined4 *)FUN_0042e5bf();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar2 == unaff_EBX) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  param_1 = *(undefined4 *)(unaff_EBP + -0x4c);
  iVar3 = *piVar2;
  uStack_8 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_4 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x24) = piVar2;
  piStack_18 = (int *)0x746deb;
  piStack_14 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x110))();
  if (iVar3 < (int)unaff_EBX) {
    piStack_18 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x24));
  }
  piStack_18 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_18 = (int *)FUN_00402bc3();
  if ((int)piStack_18 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  piStack_18 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_18 = (int *)FUN_00402bc3();
  if ((int)piStack_18 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  piStack_18 = *(int **)(unaff_EBP + -0x10);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(int ***)(unaff_EBP + -0x2c) = &piStack_18;
  if (piVar2 != unaff_EBX) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00424e82();
  FUN_00427af9();
  piStack_18 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_18 != unaff_EBX) {
    (**(code **)(*piStack_18 + 8))();
  }
  piStack_18 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_18 != unaff_EBX) {
    (**(code **)(*piStack_18 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


