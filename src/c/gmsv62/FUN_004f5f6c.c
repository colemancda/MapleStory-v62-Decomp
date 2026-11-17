/* FUN_004f5f6c - 0x004f5f6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f5f6c(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 *puStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  
  FUN_00879bb8();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x72c);
  iVar2 = *(int *)this;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar2 == 0) {
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191();
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (bVar7) {
      FUN_00878dfb();
    }
    puVar1 = (undefined4 *)FUN_0042a39f();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    FUN_00485656();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar2 == 0) {
      FUN_00878dfb();
    }
    iVar2 = **(int **)this;
    *(int **)(unaff_EBP + -0x10) = *(int **)this;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004125d9();
    if (*(int *)this == 0) {
      FUN_00878dfb();
    }
    iVar2 = (**(code **)(**(int **)this + 0xe0))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    if (*(int *)this == 0) {
      FUN_00878dfb();
    }
    iVar2 = (**(code **)(**(int **)this + 0x44))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
  }
  FUN_004031b7();
  iVar2 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191();
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_e0 = 0x4f61ba;
    iStack_dc = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_d8 = 0x4f61c7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_d8 = 0x4f61d2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_d8 = 0x4f61df;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_d8 = 0x4f61ea;
    FUN_00878dfb();
  }
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x728);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 2;
  while ((*piVar3 != 0 && (*(uint *)(unaff_EBP + -0x24) < *(uint *)(*piVar3 + -4)))) {
    uStack_d8 = 0x4f6222;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 8 + *piVar3);
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar3 == (int *)0x0) {
      uStack_d8 = 0x4f6243;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x14);
    }
    iVar2 = *piVar3;
    uStack_e4 = *(undefined4 *)(unaff_EBP + -100);
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x58);
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x54);
    iStack_e8 = *(int *)(unaff_EBP + -0x20) + -2;
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x50);
    uStack_ec = 5;
    *(int **)(unaff_EBP + -0x28) = piVar3;
    puStack_f4 = (undefined4 *)0x4f626a;
    piStack_f0 = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      puStack_f4 = (undefined4 *)&DAT_00963cc8;
      iStack_f8 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_100 = 0x4f627c;
      iStack_fc = iVar2;
      FUN_00878e09();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_f8 = 0x4f6289;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      iStack_f8 = 0x4f6294;
      FUN_00878dfb();
    }
    puStack_f4 = &DAT_00980690;
    iStack_f8 = 0x4f62a0;
    FUN_00403191();
    puStack_f4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_f8 = 0x4f62ad;
    FUN_00403191();
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x94);
    iStack_f8 = unaff_EBP + -0x74;
    iStack_100 = unaff_EBP + -0x5c;
    iStack_fc = 0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_fc = 0x4f62d4;
    iStack_fc = FUN_00449749();
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iStack_100 = *(int *)(unaff_EBP + -0x24);
    FUN_004f6f3f();
    iStack_100 = 0x4f62e9;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_100;
    FUN_00448a17(uVar4);
    uVar4 = *(undefined4 *)(unaff_EBP + -0x20);
    uVar8 = 0x15;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_004115d9(0x15,uVar4);
    FUN_00448e3a(uVar8,uVar4);
    puStack_f4 = (undefined4 *)0x4f6315;
    FUN_004497b5();
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_f8 = 0x4f6322;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      iStack_f8 = 0x4f632d;
      FUN_00878dfb();
    }
    puStack_f4 = (undefined4 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_f8 = 0x4f633d;
    puStack_f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f4 < 0) {
      iStack_f8 = 0x4f6348;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    puStack_f4 = (undefined4 *)0x10d4;
    iStack_f8 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_fc = 0x4f6363;
    puVar1 = (undefined4 *)FUN_00679d22();
    puStack_f4 = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 4 + *piVar3);
    iStack_f8 = *puVar1;
    iStack_fc = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_100 = 0x4f637c;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int *)(unaff_EBP + -0x60) != 0) {
      puStack_f4 = (undefined4 *)(*(int *)(unaff_EBP + -0x60) + -0xc);
      iStack_f8 = 0x4f6393;
      FUN_00434e38();
    }
    puStack_f4 = &DAT_00980690;
    iStack_f8 = 0x4f63a0;
    FUN_00403191();
    puStack_f4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_f8 = 0x4f63b0;
    FUN_00403191();
    puStack_f4 = (undefined4 *)(unaff_EBP + -0xa4);
    iStack_f8 = unaff_EBP + -0x84;
    iStack_100 = unaff_EBP + -0x2c;
    iStack_fc = 0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_dc = 0x4f63da;
    iStack_dc = FUN_00449749();
    uStack_e0 = 0x4f63e3;
    uStack_e4 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_e0;
    iStack_e8 = 0x4f63ef;
    uStack_e0 = extraout_ECX_00;
    FUN_00448a17();
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_e8 = 0x6a;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_ec = 0x4f6400;
    FUN_004115d9();
    uStack_ec = 0x4f6407;
    FUN_00448e3a();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_d8 = 0x4f641f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_d8 = 0x4f642a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_d8 = 0x4f643a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_d8 = 0x4f6445;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      uStack_d8 = 0x4f645d;
      FUN_00434e38();
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0xc;
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  uVar6 = *(uint *)(DAT_00978140 + 0x30);
  while (uVar6 != 0) {
    iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
    uVar5 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    iVar2 = *(int *)(uVar6 + 4);
    *(int *)(unaff_EBP + -0x2c) = iVar2;
    if (iVar2 != 0) {
      uStack_d8 = 0x4f64ac;
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_007cf3ba();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uVar6 = uVar5;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      uStack_d8 = 0x4f64cd;
      FUN_004f6e32();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
  }
  FUN_007b02be();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    uStack_d8 = 0x4f64ee;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


