/* FUN_0070de48 - 0x0070de48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070de48(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar6;
  int *piStack_90;
  undefined4 *puStack_8c;
  int *piStack_88;
  undefined *puStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  
  FUN_00879bb8();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xc0);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  piStack_60 = (int *)0x70de6d;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  iVar2 = FUN_0070e29f();
  if (iVar2 < 0) goto LAB_0070e28b;
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffa8;
  uVar3 = FUN_0070e29f();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  piStack_60 = (int *)(unaff_EBP + -0x24);
  iStack_64 = 0x70dea2;
  FUN_0046fc3e();
  piStack_60 = *(int **)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_64 = *(int *)(unaff_EBP + -0x20);
  iStack_68 = 0x70deb4;
  FUN_0087a25a();
  piStack_60 = (int *)(unaff_EBP + -0x14);
  iStack_64 = 0x70dec3;
  FUN_0046fc3e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    piStack_60 = (int *)0x70ded7;
    FUN_00403384();
  }
  piStack_60 = (int *)0x70dee6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_60 = (int *)0x70def3;
  FUN_00403191();
  piStack_60 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x70df07;
  iStack_68 = FUN_00411641();
  *(int **)(unaff_EBP + -0x28) = &iStack_64;
  piStack_6c = (int *)0x70df13;
  iStack_64 = extraout_ECX_00;
  FUN_004033a1();
  iStack_68 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_6c = (int *)0x70df20;
  FUN_00405a1d();
  piStack_6c = (int *)0x70df27;
  FUN_00402660();
  piStack_6c = (int *)0x70df2e;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_60 = (int *)0x70df3b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x70df46;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_60 = (int *)0x70df53;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_60 = (int *)0x70df5e;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x38) == 0) {
LAB_0070df99:
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_60 = (int *)0x70dfa6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_60 = (int *)0x70dfb1;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    piStack_60 = (int *)(unaff_EBP + -0x20);
    iStack_64 = 0x70df71;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_60 = (int *)0x70df80;
    FUN_004172b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004027b3();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_004125e6();
      goto LAB_0070df99;
    }
    piStack_60 = (int *)0x70dfc8;
    FUN_00403191();
    piStack_60 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_64 = 0x70dfd7;
    FUN_004031b7();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (bVar6) {
      piStack_60 = (int *)0x70dfed;
      FUN_00878dfb();
    }
    piStack_60 = (int *)(unaff_EBP + -0x58);
    iStack_64 = 0;
    iStack_68 = 0;
    piStack_6c = (int *)0x0;
    puStack_70 = (undefined *)0x0;
    uStack_74 = 0;
    iStack_78 = unaff_EBP + -0x1c;
    uStack_7c = 0x70e009;
    puVar4 = (undefined4 *)FUN_0042a39f();
    piStack_60 = (int *)0x70e012;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_60 = (int *)0x70e027;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_60 = (int *)0x70e032;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_60 = (int *)0x70e03f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_60 = (int *)0x70e04a;
      FUN_00878dfb();
    }
    piStack_60 = (int *)0x70e056;
    puVar4 = (undefined4 *)FUN_004489f5();
    piStack_60 = (int *)*puVar4;
    iStack_64 = 0x70e063;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar2 == 0) {
      piStack_60 = (int *)0x70e075;
      FUN_00878dfb();
    }
    piStack_6c = *(int **)this;
    iVar2 = *piStack_6c;
    iStack_68 = *(int *)(unaff_EBP + -0x58);
    iStack_64 = *(int *)(unaff_EBP + -0x54);
    piStack_60 = *(int **)(unaff_EBP + -0x50);
    *(int **)(unaff_EBP + -0x1c) = piStack_6c;
    puStack_70 = (undefined *)0x70e08c;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      puStack_70 = &DAT_00963de8;
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_7c = 0x70e09e;
      iStack_78 = iVar2;
      FUN_00878e09();
    }
    puStack_70 = (undefined *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_74 = 0x70e0ab;
    puStack_70 = (undefined *)FUN_00402bc3();
    if ((int)puStack_70 < 0) {
      uStack_74 = 0x70e0b6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_70 = (undefined *)0x70e0c2;
    FUN_00412600();
    puStack_70 = (undefined *)(unaff_EBP + -0x1c);
    uStack_74 = 0x70e0ce;
    puVar4 = (undefined4 *)FUN_004489f5();
    uStack_74 = *puVar4;
    puStack_70 = (undefined *)0x1;
    iStack_78 = 0x70e0db;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar2 == 0) {
      puStack_70 = (undefined *)0x80004003;
      uStack_74 = 0x70e0ee;
      FUN_00878dfb();
    }
    piStack_80 = *(int **)this;
    iVar2 = *piStack_80;
    uStack_7c = *(undefined4 *)(unaff_EBP + -0x58);
    iStack_78 = *(undefined4 *)(unaff_EBP + -0x54);
    uStack_74 = *(undefined4 *)(unaff_EBP + -0x50);
    *(int **)(unaff_EBP + -0x28) = piStack_80;
    puStack_70 = *(undefined **)(unaff_EBP + -0x4c);
    puStack_84 = (undefined *)0x70e108;
    puVar4 = (undefined4 *)(**(code **)(iVar2 + 0xfc))();
    if ((int)puVar4 < 0) {
      puStack_84 = &DAT_00963df8;
      piStack_88 = *(int **)(unaff_EBP + -0x28);
      piStack_90 = (int *)0x70e11b;
      puStack_8c = puVar4;
      FUN_00878e09();
    }
    puStack_84 = (undefined *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_88 = (int *)0x70e128;
    puStack_84 = (undefined *)FUN_00402bc3();
    if ((int)puStack_84 < 0) {
      piStack_88 = (int *)0x70e133;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_84 = (undefined *)0x70e13f;
    FUN_00412600();
    if (*(int *)this == 0) {
      puStack_84 = (undefined *)0x80004003;
      piStack_88 = (int *)0x70e14e;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    puStack_84 = *(undefined **)(unaff_EBP + 8);
    puStack_8c = (undefined4 *)0x70e15c;
    piStack_88 = piVar1;
    iVar2 = (**(code **)(*piVar1 + 0xe0))();
    if (iVar2 < 0) {
      puStack_8c = (undefined4 *)&DAT_00963df8;
      piStack_90 = piVar1;
      FUN_00878e09(iVar2);
    }
    puStack_8c = *(undefined4 **)(unaff_EBP + -0x10);
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_8c;
    piStack_90 = (int *)0x70e178;
    FUN_004125f3();
    *(int ***)(unaff_EBP + 8) = &piStack_90;
    FUN_0041160e(this);
    FUN_0042ea7d();
    puStack_8c = &DAT_00980690;
    piStack_90 = (int *)0x70e199;
    FUN_00403191();
    puStack_8c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_90 = (int *)0x70e1a6;
    FUN_00403191();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (iVar2 == 0) {
      puStack_8c = (undefined4 *)0x80004003;
      piStack_90 = (int *)0x70e1b9;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    piStack_90 = *(int **)(unaff_EBP + -0x40);
    puStack_8c = *(undefined4 **)(unaff_EBP + -0x3c);
    iVar2 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,10,0x1e,*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44));
    if (iVar2 < 0) {
      iStack_68 = 0x70e1f0;
      iStack_64 = iVar2;
      piStack_60 = piVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_60 = (int *)0x70e1fd;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_60 = (int *)0x70e208;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_60 = (int *)0x70e215;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_60 = (int *)0x70e220;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_60 = (int *)0x70e230;
      FUN_00878dfb();
    }
    iVar5 = FUN_0040e48b();
    iVar2 = *(int *)(unaff_EBP + -0x18);
    *(int *)(iVar2 + 0x1c) = iVar5 + 0x14;
    FUN_004115d9();
    iVar5 = FUN_0040e53d();
    *(int *)(iVar2 + 0x20) = iVar5 + 0x28;
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_60 = (int *)0x70e26b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_60 = (int *)0x70e276;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (iVar2 != 0) {
    piStack_60 = (int *)0x70e28a;
    FUN_00403384();
  }
LAB_0070e28b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


