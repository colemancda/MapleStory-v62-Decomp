/* FUN_0058dcaa - 0x0058dcaa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058dcaa(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x78) = *(undefined4 *)(unaff_EBP + 8);
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 8,0,0,0x96f,0x97,0xb,unaff_EBP + -0x28,unaff_EBP + -0x38);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x13c);
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
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  uVar1 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87(uVar1,1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)this;
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)this;
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar4 = (**(code **)(iVar4 + 0x90))
                    (piVar2,0xfffffff6,0xfffffff6,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  uVar1 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0040ee87(uVar1,1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)this;
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)this;
  iVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(iVar4 + 0x144) = 0;
  *(undefined4 *)(iVar4 + 0x80) = 0xffffffff;
  FUN_00426311();
  FUN_0058e1fb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


