/* FUN_0080a0bb - 0x0080a0bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0080a0bb(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x18);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0xc),
               (IBinding *)*puVar2);
    FUN_004125d9();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x18);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar2);
  FUN_004125d9();
  puVar2 = (undefined4 *)FUN_0080a033(unaff_EBP + -0x18);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar2);
  FUN_004125d9();
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0xc),1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar3 = (**(code **)(*piVar1 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar3 = (**(code **)(*piVar1 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar3 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,*(undefined4 *)(unaff_EBP + 0x10),0,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(unaff_EBP + 0x14);
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    iVar3 = -iVar3;
  }
  FUN_004031b7(iVar3,3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar3 = (**(code **)(*piVar1 + 0xa0))
                    (piVar1,0,*(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_00434bee();
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


