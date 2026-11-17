/* FUN_00579518 - 0x00579518 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00579518(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_64;
  undefined4 *puStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar1 = FUN_004de7ee();
  if ((iVar1 == 0) &&
     (this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd4),
     *(int *)this == 0)) {
    iStack_50 = 0xff;
    iStack_54 = 0xffffffff;
    piStack_5c = &uStack_58;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
    puStack_60 = (undefined4 *)0x579560;
    FUN_004489f5();
    piStack_5c = (int *)0x0;
    puStack_60 = (undefined4 *)0x0;
    iStack_64 = unaff_EBP + -0x20;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004489f5();
    piVar4 = &iStack_64;
    *(int **)(unaff_EBP + -0x28) = &iStack_64;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00424e27(&iStack_64);
    FUN_0042fb5e(piVar4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d86(unaff_EBP + -0x1c,0x51d);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar2 = FUN_00411641(0);
    puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x18,uVar2);
    iStack_50 = 0x5795c2;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_50 = 0x5795de;
      FUN_00403384();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412600();
    if (*(int *)this == 0) {
      iStack_50 = 0x5795fa;
      FUN_00878dfb();
    }
    iStack_50 = 0x579607;
    FUN_004113e5();
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iStack_50 = 0x57961a;
    piVar4 = (int *)FUN_004489f5();
    iVar1 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar1 == 0) {
      iStack_50 = 0x57962a;
      FUN_00878dfb();
    }
    iStack_50 = 0x579635;
    puVar3 = (undefined4 *)FUN_004113e5();
    iStack_50 = *puVar3;
    iStack_54 = 0x579642;
    FUN_0040ee87();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar4 == (int *)0x0) {
      iStack_50 = 0x579653;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar4;
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_54 = *(int *)(unaff_EBP + -0x34);
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + -0x20) = piVar4;
    puStack_60 = (undefined4 *)0x57966b;
    piStack_5c = piVar4;
    iVar1 = (**(code **)(iVar1 + 100))();
    if (iVar1 < 0) {
      puStack_60 = (undefined4 *)&DAT_00963de8;
      iStack_64 = *(int *)(unaff_EBP + -0x20);
      FUN_00878e09(iVar1);
    }
    puStack_60 = (undefined4 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_64 = 0x57968a;
    puStack_60 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_60 < 0) {
      iStack_64 = 0x579695;
      FUN_00878dfb();
    }
    puStack_60 = (undefined4 *)0x57969d;
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_60 = (undefined4 *)0x5796a9;
    FUN_00412600();
    puStack_60 = &DAT_00980690;
    iStack_64 = 0x5796b7;
    FUN_00403191();
    puStack_60 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_64 = 0x5796c4;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar4 == (int *)0x0) {
      puStack_60 = (undefined4 *)0x80004003;
      iStack_64 = 0x5796d9;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar4;
    iStack_64 = *(int *)(unaff_EBP + -0x40);
    puStack_60 = *(undefined4 **)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x20) = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar4,0xffffff01,0,*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44));
    if (iVar1 < 0) {
      iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_58 = 0x579718;
      iStack_54 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_50 = 0x579725;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x579730;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_50 = 0x57973d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x579748;
      FUN_00878dfb();
    }
    iStack_50 = 0x579755;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_50 = FUN_007d1e08();
    iStack_50 = iStack_50 + 1000;
    iStack_54 = 0x57976e;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_50 = 0x579781;
      FUN_00878dfb();
    }
    iStack_50 = unaff_EBP + -0x48;
    iStack_54 = 0;
    uStack_58 = 0;
    piStack_5c = (int *)0x579793;
    FUN_00424f2f();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_50 = 0x5797a0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x5797ab;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_50 = 0x5797b8;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x5797c3;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_50 = 0x5797d4;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  FUN_004de7fb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


