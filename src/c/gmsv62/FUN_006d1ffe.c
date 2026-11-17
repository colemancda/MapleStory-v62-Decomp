/* FUN_006d1ffe - 0x006d1ffe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d1ffe(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  undefined *puStack_e4;
  int *piStack_e0;
  undefined *puStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int *piStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_006d43be();
  FUN_006d4737();
  iStack_88 = unaff_EBP + -0x18;
  iStack_8c = 0x6d202a;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  iStack_88 = 0x6d2036;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x7c),
             (IBinding *)*puVar2);
  FUN_004497b5();
  iStack_88 = unaff_EBP + -0x18;
  iStack_8c = 0x6d2053;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_8c = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_88 = extraout_ECX + 0x80;
  iStack_90 = 0x6d2068;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_88 = 0x6d207f;
    FUN_00403384();
  }
  iStack_88 = 0x6d208e;
  FUN_00403191();
  iStack_88 = 0xffffffff;
  iStack_8c = 0xc;
  *(int **)(unaff_EBP + -0x20) = &iStack_90;
  piStack_94 = (int *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_94 = (int *)0x6d20bc;
  FUN_0044974c();
  piStack_94 = (int *)0x6d20c3;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_88 = 0x6d20d0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_88 = 0x6d20db;
    FUN_00878dfb();
  }
  iStack_88 = 0x6d20e4;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_88 = 0x6d20f4;
  FUN_00403191();
  iStack_88 = 0;
  iStack_8c = unaff_EBP + -0x70;
  iStack_90 = unaff_EBP + -0x60;
  *(int ***)(unaff_EBP + -0x20) = &piStack_94;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_8c = 0x6d213d;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    iStack_88 = 0x6d2155;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_88 = 0x6d2166;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_88 = 0x6d2173;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_88 = 0x6d217e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_88 = 0x6d218b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_88 = 0x6d2196;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_88 = 0x6d21a3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_88 = 0x6d21ae;
    FUN_00878dfb();
  }
  iStack_88 = 0x6d21b7;
  FUN_00403191();
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_8c = 0x6d21c4;
  FUN_0040ee87();
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (bVar4) {
    iStack_88 = 0x6d21da;
    FUN_00878dfb();
  }
  iStack_88 = unaff_EBP + -0x50;
  iStack_8c = 0;
  iStack_90 = 0;
  piStack_94 = (int *)0x0;
  puVar2 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x84);
  iStack_88 = 0x6d2205;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_88 = 0x6d2212;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_88 = 0x6d221f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_88 = 0x6d222a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_88 = 0x6d2237;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_88 = 0x6d2242;
    FUN_00878dfb();
  }
  iStack_88 = 0x6d224d;
  puVar2 = (undefined4 *)FUN_004489f5();
  iStack_88 = *puVar2;
  iStack_8c = 0x6d225a;
  FUN_0040ee87();
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 == 0) {
    iStack_88 = 0x6d226c;
    FUN_00878dfb();
  }
  piStack_94 = *(int **)this;
  iVar3 = *piStack_94;
  iStack_90 = *(int *)(unaff_EBP + -0x50);
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x48);
  *(int **)(unaff_EBP + -0x1c) = piStack_94;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  puVar2 = (undefined4 *)FUN_004489f5();
  piVar1 = (int *)*puVar2;
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piVar1;
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  (**(code **)(iVar3 + 4))();
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  iVar3 = **(int **)this;
  *(int **)(unaff_EBP + -0x20) = *(int **)this;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    iStack_b4 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_bc = 0x6d231e;
    iStack_b8 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_b4 = 0x6d232b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x6d2336;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_b4 = 0x6d2347;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  iStack_b4 = 0x6d2353;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_b4 = unaff_EBP + -0x50;
  iStack_b8 = 0x6d2362;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_b4 = 0x6d236e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_b4 = 0x6d2378;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_b4 = unaff_EBP + -0x40;
  iStack_b8 = 0x6d2382;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_b4 = 0x6d238e;
    FUN_00878dfb();
  }
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    iStack_b4 = 0x6d23a1;
    FUN_00878dfb();
  }
  piStack_d8 = *(int **)this;
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x4c);
  iVar3 = *piStack_d8;
  iStack_b4 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_cc = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_c8 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_d0 = 6;
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_d4 = 0x6c;
  *(int **)(unaff_EBP + -0x20) = piStack_d8;
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_dc = (undefined *)0x6d23cb;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    puStack_dc = &DAT_00963de8;
    piStack_e0 = *(int **)(unaff_EBP + -0x20);
    piStack_e8 = (int *)0x6d23dd;
    puStack_e4 = (undefined *)iVar3;
    FUN_00878e09();
  }
  puStack_dc = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_e0 = (int *)0x6d23ea;
  puStack_dc = (undefined *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    piStack_e0 = (int *)0x6d23f5;
    FUN_00878dfb();
  }
  puStack_dc = (undefined *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_e0 = (int *)0x6d2402;
  puStack_dc = (undefined *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    piStack_e0 = (int *)0x6d240d;
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    puStack_dc = (undefined *)0x80004003;
    piStack_e0 = (int *)0x6d241c;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  puStack_dc = (undefined *)0x1;
  puStack_e4 = (undefined *)0x6d2429;
  piStack_e0 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0xb4))();
  if (iVar3 < 0) {
    puStack_e4 = &DAT_00963df8;
    piStack_f0 = (int *)0x6d2439;
    piStack_ec = (int *)iVar3;
    piStack_e8 = piVar1;
    FUN_00878e09();
  }
  if (*(int *)this == 0) {
    puStack_e4 = (undefined *)0x80004003;
    piStack_e8 = (int *)0x6d2448;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  puStack_e4 = (undefined *)0xffffff;
  piStack_ec = (int *)0x6d2458;
  piStack_e8 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar3 < 0) {
    piStack_ec = (int *)&DAT_00963df8;
    piStack_f0 = piVar1;
    FUN_00878e09(iVar3);
  }
  piStack_ec = (int *)0xffffffff;
  *(int ***)(unaff_EBP + -0x20) = &piStack_f0;
  FUN_00679d86(&piStack_f0,0x30d);
  iVar3 = *(int *)(unaff_EBP + -0x14);
  FUN_006d2ea2();
  piStack_ec = (int *)0xffffffff;
  *(int ***)(unaff_EBP + -0x20) = &piStack_f0;
  FUN_00679d86(&piStack_f0,0x747);
  FUN_006d2ea2();
  piStack_ec = (int *)0xffffffff;
  *(int ***)(unaff_EBP + -0x20) = &piStack_f0;
  FUN_00679d86(&piStack_f0,0x30e);
  FUN_006d2ea2();
  piStack_ec = (int *)0xffffffff;
  *(int ***)(unaff_EBP + -0x20) = &piStack_f0;
  FUN_00679d86(&piStack_f0,0x30f);
  FUN_006d2ea2();
  piStack_ec = (int *)0xffffffff;
  *(int ***)(unaff_EBP + -0x20) = &piStack_f0;
  FUN_00679d86(&piStack_f0,0x747);
  FUN_006d2ea2();
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_ec = (int *)0x0;
    piStack_f0 = (int *)0x0;
    FUN_006d33c0();
  }
  else {
    *(undefined4 *)(iVar3 + 0x118) = 0xffffffff;
  }
  piStack_ec = (int *)0x0;
  piStack_f0 = (int *)0x0;
  FUN_0060142b(0x6e);
  piStack_ec = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_f0 = (int *)0x6d252b;
  FUN_00457cda();
  piStack_ec = *(int **)(unaff_EBP + 8);
  piStack_f0 = (int *)0x6d2536;
  FUN_00457d37();
  piStack_ec = (int *)(unaff_EBP + -0x30);
  piStack_f0 = (int *)0x6d2545;
  FUN_004751b2();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_ec = (int *)0x6d2551;
  FUN_0045ebca();
  piStack_ec = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_ec != (int *)0x0) {
    piStack_f0 = (int *)0x6d2562;
    (**(code **)(*piStack_ec + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


