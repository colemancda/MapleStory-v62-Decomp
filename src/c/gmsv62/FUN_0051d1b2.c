/* FUN_0051d1b2 - 0x0051d1b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051d1b2(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(extraout_ECX + 0x10) = *(undefined4 *)(unaff_EBP + 8);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x2c) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x24) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x30) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x28) = uVar1;
  uVar3 = FUN_007f6512();
  uVar1 = *(undefined4 *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  FUN_00861327(*(undefined4 *)(extraout_ECX + 0x24),uVar1,0,0x7fffffff);
  FUN_007f113f(extraout_ECX);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar4 = *(int *)(extraout_ECX + 0x24) + 1;
  }
  else {
    iVar4 = *(int *)(extraout_ECX + 0x24) + -1;
  }
  (**(code **)(**(int **)(unaff_EBP + 0x14) + 4))
            (1,iVar4,*(int *)(extraout_ECX + 0x28) + -0x14,*(undefined4 *)(unaff_EBP + 0x18),
             *(undefined4 *)(unaff_EBP + 0x1c),3,0);
  iVar4 = FUN_0051e689(unaff_EBP + 0x14);
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb(iVar4);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iVar4 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)FUN_0042a39f(unaff_EBP + 0xc,0,0,0,0,0,unaff_EBP + -0x3c,unaff_EBP + -0x1c)
  ;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x18);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
  piVar2 = *(int **)(unaff_EBP + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar5 = (undefined4 *)FUN_0043f93c(unaff_EBP + 0x1c);
  piVar2 = (int *)*puVar5;
  *(undefined2 *)(unaff_EBP + -0x2c) = 0xd;
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iVar4 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  (**(code **)(iVar4 + 4))(piVar2);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)this;
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_0051d39d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


