/* FUN_0049b13a - 0x0049b13a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049b13a(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar4) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x10,0,0,*(undefined4 *)(extraout_ECX + 0x1c),
                        *(undefined4 *)(extraout_ECX + 0x20),1,unaff_EBP + -0x38,unaff_EBP + -0x48);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x48);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0x18),1);
  iVar3 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  puVar2 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  piVar1 = (int *)*puVar2;
  *(undefined2 *)(unaff_EBP + -0x28) = 0xd;
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  (**(code **)(iVar3 + 4))(piVar1);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


