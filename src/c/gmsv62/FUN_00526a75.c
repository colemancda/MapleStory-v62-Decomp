/* FUN_00526a75 - 0x00526a75 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00526ad1) */

void FUN_00526a75(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x9b4);
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar4 != iVar1) {
    if (iVar1 == -1) {
      *(undefined4 *)(extraout_ECX + 0x9b4) = *(undefined4 *)(extraout_ECX + 0x9b8);
    }
    else {
      if ((iVar4 < 0) || (iVar4 < 9)) {
        *(int *)(extraout_ECX + 0x9b8) = iVar4;
      }
      *(int *)(extraout_ECX + 0x9b4) = iVar1;
    }
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x978);
    if (*(int *)(extraout_ECX + 0x978) != 0) {
      piVar2 = *(int **)this;
      iVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffff);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
      }
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    }
    piVar2 = *(int **)this;
    piVar3 = *(int **)(extraout_ECX + 0x97c + *(int *)(extraout_ECX + 0x9b4) * 4);
    if (piVar2 != piVar3) {
      *(int **)this = piVar3;
      FUN_00424ed4();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
    FUN_0052676d(this);
    if (*(int *)this == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar5 = FUN_0042d476();
    if (1 < uVar5) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar4 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
      iVar4 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      iVar4 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)this;
      iVar4 = (**(code **)(*piVar2 + 0x110))
                        (piVar2,0x20,*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x1c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


