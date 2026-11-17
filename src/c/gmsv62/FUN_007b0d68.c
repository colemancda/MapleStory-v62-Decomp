/* FUN_007b0d68 - 0x007b0d68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b0d68(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar4) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x14,0,0,0x48,0xc,2,unaff_EBP + -0x24,unaff_EBP + -0x34);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x2458);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0xd3c),1);
  iVar3 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xd74),1);
  iVar3 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,0xffffffdc,0xffffff9c,*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x245c) = 2;
  FUN_007b0fd0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


