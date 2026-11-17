/* FUN_00775b1e - 0x00775b1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00775b1e(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  
  FUN_00879bb8();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x58);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x14,10,0x55,0x113,0xf,0,unaff_EBP + -0x30,unaff_EBP + -0x40);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)this;
  iVar3 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
  iVar3 = *piVar4;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)FUN_0042fb5e(unaff_EBP + -0x18);
  FUN_0040ee87(*puVar2,1);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)this;
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + -0x14) = piVar4;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_004125d9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  puVar2 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x20);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_0040ee87(uVar1,1);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)this;
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)this;
  iVar3 = (**(code **)(*piVar4 + 0xb4))(piVar4,1);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x5c) = 0x113;
  return;
}


