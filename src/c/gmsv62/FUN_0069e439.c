/* FUN_0069e439 - 0x0069e439 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069e439(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int *piVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var6;
  int unaff_EBP;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  piVar5 = (int *)(extraout_ECX + 0x2ac);
  iVar3 = extraout_ECX;
  while( true ) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x3b1);
    uVar8 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00437222(uVar8,piVar5,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
    FUN_0040ee87(*(undefined4 *)(iVar3 + 0x18),1);
    iVar3 = *piVar5;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar5;
    iVar3 = *piVar1;
    *(int **)(unaff_EBP + -0x18) = piVar1;
    iVar3 = (**(code **)(iVar3 + 100))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    iVar3 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    puVar2 = (undefined4 *)*piVar5;
    iVar3 = piVar5[-6];
    *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
    *(undefined4 *)(unaff_EBP + -0x1c) = *puVar2;
    iVar3 = (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x18),
                       ((2 < *(int *)(unaff_EBP + -0x14)) - 1 & 0xffffff98) + 0xb6 +
                       (*(int *)(unaff_EBP + -0x14) % 3) * 0x1b,iVar3 + 0x7c,
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00403191(&DAT_00980690);
    iVar3 = *piVar5;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar5;
    iVar3 = piVar5[-0xc];
    iVar9 = *piVar1;
    *(int **)(unaff_EBP + -0x1c) = piVar1;
    iVar3 = (**(code **)(iVar9 + 0xa0))
                      (piVar1,(double)iVar3,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    piVar5 = piVar5 + 1;
    if (5 < *(int *)(unaff_EBP + -0x14)) break;
    iVar3 = *(int *)(unaff_EBP + -0x20);
  }
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x20) + 0x2c4);
  *(undefined4 *)(unaff_EBP + -0x18) = 6;
  do {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_00403191(&DAT_00980690);
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (bVar7) {
      FUN_00878dfb(0x80004003);
    }
    puVar2 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x1c,0,0,0x1b,0x23,0,unaff_EBP + -0x30,unaff_EBP + -0x40);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    if (*(int *)p_Var6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var6;
    iVar3 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
    }
    FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18),1);
    iVar3 = *(int *)p_Var6;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var6;
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x10) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0xfc))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_0040ee87(*(undefined4 *)(p_Var6 + -0x18),1);
    iVar3 = *(int *)p_Var6;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var6;
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x10) = piVar5;
    iVar3 = (**(code **)(iVar3 + 100))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)p_Var6;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var6;
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x10) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x90))
                      (piVar5,0xfffffff3,0xffffffef,*(undefined4 *)(unaff_EBP + -0x80),
                       *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                       *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x60),
                       *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x80);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    p_Var6 = p_Var6 + 4;
    piVar5 = (int *)(unaff_EBP + -0x18);
    *piVar5 = *piVar5 + -1;
  } while (*piVar5 != 0);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x20) + 0x2dc);
  do {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191(&DAT_00980690);
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (bVar7) {
      FUN_00878dfb(0x80004003);
    }
    puVar2 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x1c,0,0,0x5a,0x2c,1,unaff_EBP + -0x60,unaff_EBP + -0x80);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var6,(IBinding *)*puVar2);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x80);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    if (*(int *)p_Var6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var6;
    iVar3 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
    }
    FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18),1);
    iVar3 = *(int *)p_Var6;
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var6;
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x10) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0xfc))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18),1);
    iVar3 = *(int *)p_Var6;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00429607(unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_00424aee(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    FUN_00424aee(&DAT_00980690);
    iVar3 = unaff_EBP + -0xa0;
    iVar9 = unaff_EBP + -0x90;
    uVar8 = 0x66;
    iVar4 = (-(uint)(*(int *)(unaff_EBP + -0x14) != 0) & 0x68) + 0x3a;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00424e27(iVar4,0x66,iVar9,iVar3);
    FUN_00424f2f(iVar4,uVar8,iVar9,iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x90);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0xa0);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    p_Var6 = p_Var6 + 4;
  } while (*(int *)(unaff_EBP + -0x14) < 2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


