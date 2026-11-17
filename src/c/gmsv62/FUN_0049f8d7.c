/* FUN_0049f8d7 - 0x0049f8d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049f8d7(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = (*DAT_0097b704)();
  extraout_ECX[2] = uVar1;
  *extraout_ECX = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0x10);
  extraout_ECX[4] = *(undefined4 *)(unaff_EBP + 0x14);
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00403191(&DAT_00980690);
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 0xc,0,0,1,extraout_ECX[4],*(undefined4 *)(unaff_EBP + 0x18),
                        unaff_EBP + -0x1c,unaff_EBP + -0x2c);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 5);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_004031b7(0,3);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)FUN_00425067(unaff_EBP + 0xc,unaff_EBP + -0x2c);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar3 = (**(code **)(*piVar4 + 0x8c))(piVar4,0,0,1,extraout_ECX[4],0xffffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963cc8);
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)FUN_0042fb5e(unaff_EBP + 0x14);
  FUN_0040ee87(*puVar2,1);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)FUN_0042fb5e(unaff_EBP + 0x10);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + 0xc) = piVar4;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004125d9();
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00403191(&DAT_00980690);
  iVar3 = unaff_EBP + 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00424e27(iVar3);
  FUN_0042fb5e(iVar3);
  iVar3 = unaff_EBP + -0x1c;
  iVar7 = unaff_EBP + -0x2c;
  uVar1 = extraout_ECX[1];
  uVar6 = *extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00424df4(uVar6,uVar1,iVar7,iVar3);
  FUN_00424f2f(uVar6,uVar1,iVar7,iVar3);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  uVar1 = 2;
  FUN_00424e27(2);
  FUN_004a2f57(uVar1);
  uVar1 = 0xffffffff;
  FUN_00424e27(0xffffffff);
  FUN_00444e05(uVar1);
  extraout_ECX[3] = 1;
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


