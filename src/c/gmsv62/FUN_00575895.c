/* FUN_00575895 - 0x00575895 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00575895(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  bool bVar5;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x14,0,0,0x96,0x16,0,unaff_EBP + -0x28,unaff_EBP + -0x38);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x35b4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  uVar2 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87(uVar2,1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,1);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  uVar2 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0040ee87(uVar2,1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00424f2f(0x199,0x6b,unaff_EBP + -0x48,unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00576870(*(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 100) + 0x160));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


