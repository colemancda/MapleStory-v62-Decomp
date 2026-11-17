/* FUN_0079c347 - 0x0079c347 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0079c347(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  uint uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_00879bb8();
  DAT_0097bf94 = DAT_0097bf94 + 1;
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while( true ) {
    iVar7 = *(int *)(*(int *)(extraout_ECX + 0x1e18) + 8 + iVar5);
    uVar2 = *(int *)(extraout_ECX + 0x1e18) + iVar5;
    if (iVar7 == 0) break;
    if (iVar7 == 1) {
      *(undefined4 *)(unaff_EBP + -0x18) = **(undefined4 **)(uVar2 + 0x10);
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0042503d();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412600();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      uVar2 = DAT_0097bf94 / 0x21;
      if (DAT_0097bf94 % 0x21 != 0) break;
    }
    else {
      DAT_0097bf94 = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x10) =
         **(undefined4 **)(iVar5 + 0x10 + *(int *)(extraout_ECX + 0x1e18));
    FUN_00424ed4();
    *(undefined4 *)(unaff_EBP + -4) = 6;
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
      piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x20);
      iVar5 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)*piVar3;
      iVar5 = *piVar3;
      *(int **)(unaff_EBP + -0x1c) = piVar3;
      iVar5 = (**(code **)(iVar5 + 0x90))
                        (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      iVar5 = *(int *)(unaff_EBP + -0x14);
      iVar7 = *(int *)(iVar5 + 0x10 + *(int *)(extraout_ECX + 0x1e18));
      FUN_0048bbbd(iVar7);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_005d188e();
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,*(IBinding **)(unaff_EBP + -0x10));
      uVar2 = *(uint *)(extraout_ECX + 0x1e10);
      while (uVar4 = uVar2, uVar4 != 0) {
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar2 = iVar1 + 0x10U & -(uint)(iVar1 != 0);
        if (*(int *)(uVar4 + 8) == iVar7) {
          *(undefined4 *)(uVar4 + 8) =
               *(undefined4 *)(iVar5 + 0xc + *(int *)(extraout_ECX + 0x1e18));
        }
      }
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)**(undefined4 **)(iVar5 + 0x10 + *(int *)(extraout_ECX + 0x1e18)));
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x24);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00424f2f(0xff,0,unaff_EBP + -0x54,unaff_EBP + -100);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00424aee(&DAT_00980690);
    iVar7 = unaff_EBP + -0x84;
    iVar5 = unaff_EBP + -0x74;
    uVar6 = 0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00424e27(0x20,iVar5,iVar7);
    FUN_00425139(uVar6,iVar5,iVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x84);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = FUN_00412600();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x14;
    if (0x27 < *(int *)(unaff_EBP + -0x14)) break;
    iVar5 = *(int *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


