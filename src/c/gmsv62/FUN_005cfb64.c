/* FUN_005cfb64 - 0x005cfb64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_005cfb64(void)

{
  IBinding *pIVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  undefined4 uVar6;
  int iVar7;
  
  FUN_00879bb8();
  uVar2 = 0;
  if (*(int *)(extraout_ECX + 200) != 0) {
    if (*(int *)(extraout_ECX + 200) == 1) {
      *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(extraout_ECX + 0xd0);
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0042503d();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412600();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      uVar2 = DAT_00979470 / 0x16;
      uVar5 = DAT_00979470 % 0x16;
      DAT_00979470 = DAT_00979470 + 1;
      if (uVar5 != 0) goto LAB_005cfe60;
    }
    else {
      DAT_00979470 = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    pIVar1 = (IBinding *)**(undefined4 **)(extraout_ECX + 0xd0);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar1);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar2 = FUN_0042503d();
    if ((uVar2 & 0xff000000) != 0) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
      iVar4 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)*piVar3;
      iVar4 = *piVar3;
      *(int **)(unaff_EBP + 8) = piVar3;
      iVar4 = (**(code **)(iVar4 + 0x90))
                        (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      iVar4 = *(int *)(extraout_ECX + 0xd0);
      FUN_0048bbbd(*(undefined4 *)(extraout_ECX + 0xd0));
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_005d188e();
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,*(IBinding **)(unaff_EBP + -0x10));
      uVar2 = *(uint *)(extraout_ECX + 0x90);
      while (uVar5 = uVar2, uVar5 != 0) {
        iVar7 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
        uVar2 = iVar7 + 0x10U & -(uint)(iVar7 != 0);
        if (*(int *)(uVar5 + 8) == iVar4) {
          *(undefined4 *)(uVar5 + 8) = *(undefined4 *)(extraout_ECX + 0xcc);
        }
      }
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)**(undefined4 **)(extraout_ECX + 0xd0));
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + 8);
    iVar4 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00424f2f(0xff,0,unaff_EBP + -0x34,unaff_EBP + -0x24);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00424aee(&DAT_00980690);
    iVar4 = unaff_EBP + -0x24;
    iVar7 = unaff_EBP + -0x34;
    uVar6 = 0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00424e27(0x20,iVar7,iVar4);
    FUN_00425139(uVar6,iVar7,iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    uVar2 = FUN_00412600();
  }
LAB_005cfe60:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


