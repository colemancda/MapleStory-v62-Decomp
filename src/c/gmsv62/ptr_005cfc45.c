/* ptr_005cfc45 - 0x005cfc45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005cfc45(void)

{
  int *piVar1;
  int iVar2;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar5;
  int iVar6;
  
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar1 = (int *)FUN_004113e5();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar1,0,0,*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = *(int *)(unaff_EBX + 0xd0);
  FUN_0048bbbd(*(undefined4 *)(unaff_EBX + 0xd0));
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_005d188e();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,*(IBinding **)(unaff_EBP + -0x10))
  ;
  uVar4 = *(uint *)(unaff_EBX + 0x90);
  while (uVar3 = uVar4, uVar3 != 0) {
    iVar6 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar4 = iVar6 + 0x10U & -(uint)(iVar6 != 0);
    if (*(int *)(uVar3 + 8) == iVar2) {
      *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(unaff_EBX + 0xcc);
    }
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)**(undefined4 **)(unaff_EBX + 0xd0));
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_004113e5(unaff_EBP + 8);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00424f2f(0xff,0,unaff_EBP + -0x34,unaff_EBP + -0x24);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x24;
  iVar6 = unaff_EBP + -0x34;
  uVar5 = 0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00424e27(0x20,iVar6,iVar2);
  FUN_00425139(uVar5,iVar6,iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


