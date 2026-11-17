/* FUN_005d004e - 0x005d004e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d004e(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x448);
  iVar3 = *(int *)this;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x10) = this;
  if (iVar3 != 0) {
    iVar3 = FUN_005c5b12(unaff_EBP + -0x24,0);
    if (iVar3 == 0) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    }
    else {
      piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      iVar1 = *(int *)(unaff_EBP + -0x24);
      iVar2 = *piVar4;
      iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x20) - *(int *)(iVar5 + 4);
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      iVar5 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iVar5 = FUN_00402e32(unaff_EBP + -0x34,&DAT_00980690);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      iVar5 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar4 = (int *)*piVar4;
      iVar5 = *piVar4;
      *(int **)(unaff_EBP + -0x10) = piVar4;
      iVar3 = (**(code **)(iVar5 + 0x90))
                        (piVar4,((iVar1 + iVar3) / 2 - iVar2) + -0x1a,
                         *(int *)(unaff_EBP + -0x14) + -0x1e,*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


