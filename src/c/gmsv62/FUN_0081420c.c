/* FUN_0081420c - 0x0081420c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081420c(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  
  FUN_00879bb8();
  DAT_0097c224 = DAT_0097c224 + 1;
  extraout_ECX[5] = DAT_0097c224;
  (*DAT_0097b508)(extraout_ECX + 9);
  (**(code **)(*extraout_ECX + 8))
            (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
             *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
             *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
             *(undefined4 *)(unaff_EBP + 0x20));
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 6);
  if (*(int *)this == 0) {
    extraout_ECX[7] = *(int *)(unaff_EBP + 0x10);
    extraout_ECX[8] = *(int *)(unaff_EBP + 0x14);
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004031b7(0,3);
    bVar5 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (bVar5) {
      FUN_00878dfb(0x80004003);
    }
    puVar2 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + 0x10,0,0,0,0,0,unaff_EBP + -0x24,unaff_EBP + -0x34);
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
    FUN_0040ee87(*(undefined4 *)(DAT_00978364 + 0xd4),1);
    iVar3 = *(int *)this;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)FUN_0042fb5e(unaff_EBP + 0x14);
    iVar3 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + 0x10) = piVar4;
    iVar3 = (**(code **)(iVar3 + 100))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00403191(&DAT_00980690);
    iVar3 = extraout_ECX[6];
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)FUN_0042fb5e(unaff_EBP + 0x1c);
    iVar3 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + 0x10) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x90))
                      (piVar4,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
    }
    FUN_004125d9();
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
    piVar4 = extraout_ECX + 6;
    if (extraout_ECX[6] == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar4;
    iVar3 = (**(code **)(*piVar1 + 0xb4))(piVar1,*(undefined4 *)(unaff_EBP + 0x18));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
    }
    if (*piVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar3 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xffffffff);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
    }
  }
  (**(code **)(*extraout_ECX + 0xc))(*(undefined4 *)(unaff_EBP + 0x20));
  FUN_008161f1(0);
  FUN_00819029(extraout_ECX);
  if (*(int *)(unaff_EBP + 0x24) != 0) {
    FUN_00817f6e(-(uint)(extraout_ECX != (int *)0x0) & (uint)(extraout_ECX + 1));
  }
  FUN_00817e25(unaff_EBP + -0x14,0);
  piVar4 = (int *)FUN_00818edc(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10)
                              );
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x20))(), iVar3 != 0)) {
    (**(code **)(*piVar4 + 0x14))(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


