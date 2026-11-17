/* ptr_00747e83 - 0x00747e83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00747e83(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined1 uVar6;
  int *unaff_EBX;
  int unaff_EBP;
  code *unaff_EDI;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  uStack_4 = 0x747e88;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  iVar3 = FUN_00404b30();
  if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
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
  uVar6 = SUB41(unaff_EBX,0);
  *(undefined1 *)(unaff_EBP + -4) = uVar6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  puVar4 = (undefined4 *)FUN_004489f5();
  uVar2 = *puVar4;
  *(int **)(unaff_EBP + -0x18) = &param_2;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_00424e0a();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_4;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_c = 0x748019;
  FUN_00523572();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c;
  FUN_00424dbc(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puVar4 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x24);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x28),
             (IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar6;
  if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  (*unaff_EDI)();
  param_2 = 0x748070;
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  (*unaff_EDI)();
  param_2 = unaff_EBP + -0x3c;
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    param_2 = 0x74809c;
    FUN_00878dfb();
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x28);
  piVar1 = (int *)*puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar1 == unaff_EBX) {
    param_2 = 0x7480b1;
    FUN_00878dfb();
  }
  piVar1 = (int *)*puVar4;
  iVar3 = *piVar1;
  param_2 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_c = *(undefined4 *)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + -0x14) = piVar1;
  uStack_4 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(iVar3 + 0x110))(piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x3c));
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar6;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + 0xc) == 1) {
    DVar5 = timeGetTime();
    *(DWORD *)(*(int *)(unaff_EBP + -0x20) + 0xc54 + *(int *)(unaff_EBP + 8) * 4) = DVar5;
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xc54 + *(int *)(unaff_EBP + 8) * 4) = 0xffffffff;
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


