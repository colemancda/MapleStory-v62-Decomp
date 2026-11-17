/* FUN_005cd4b4 - 0x005cd4b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005cd4b4(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  byte bVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_90;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x38) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_90 = 0x5cd4e4;
  iVar4 = FUN_00455c59();
  iStack_90 = *(int *)(iVar4 + 4) + 0x33;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar3 = FUN_0045f03e();
  *(undefined1 *)(unaff_EBP + -0xd) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e4a2();
  iStack_90 = *(int *)(extraout_ECX + 0x15c) + 0x70;
  iVar4 = FUN_00413367();
  bVar1 = *(byte *)(unaff_EBP + -0xd);
  if (iVar4 < (int)(bVar1 + 0x14)) {
    iStack_90 = *(int *)(extraout_ECX + 0x15c) + 0x70;
    iVar4 = FUN_00413367();
    if ((int)(bVar1 - 0x14) < iVar4) {
      iStack_90 = unaff_EBP + -0x20;
      puVar5 = (undefined4 *)FUN_007d4a9a();
      iStack_90 = 0x5cd590;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 (IBinding *)*puVar5);
    }
    else {
      iStack_90 = unaff_EBP + -0x20;
      puVar5 = (undefined4 *)FUN_007d4a9a();
      iStack_90 = 0x5cd575;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 (IBinding *)*puVar5);
    }
  }
  else {
    iStack_90 = unaff_EBP + -0x20;
    puVar5 = (undefined4 *)FUN_007d4a9a();
    iStack_90 = 0x5cd53e;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)*puVar5);
  }
  FUN_004497b5();
  iStack_90 = 0x5cd5a6;
  FUN_00403191();
  *(int **)(unaff_EBP + -0x28) = &iStack_90;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0044974c();
  uVar6 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_90 = 0x5cd5df;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_90 = 0x5cd5ea;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    iStack_90 = 0x5cd5f9;
    FUN_00878dfb();
  }
  iVar4 = FUN_004a2734();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_90 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679d86();
  iStack_90 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    iStack_90 = 0x5cd645;
    FUN_00403384();
  }
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 5;
  *(int *)(unaff_EBP + -0x20) = iVar4 + 4;
  iStack_90 = 0x5cd65e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_90 = 0x5cd66b;
  FUN_00403191();
  piVar7 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar7 == (int *)0x0) {
    iStack_90 = 0x5cd680;
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar7;
  iStack_90 = *(int *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x24) = piVar7;
  iVar4 = (**(code **)(iVar4 + 0x2c))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb();
  }
  iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x8c))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  piVar7 = *(int **)(unaff_EBP + -0x14);
  if (piVar7 == (int *)0x0) {
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar7;
  *(int **)(unaff_EBP + -0x24) = piVar7;
  iVar4 = (**(code **)(iVar4 + 0x8c))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  piVar7 = *(int **)(unaff_EBP + -0x14);
  if (piVar7 == (int *)0x0) {
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar7;
  *(int **)(unaff_EBP + -0x24) = piVar7;
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + -1;
  iVar4 = (**(code **)(iVar4 + 0x8c))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  piVar7 = *(int **)(unaff_EBP + -0x14);
  if (piVar7 == (int *)0x0) {
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar7;
  *(int **)(unaff_EBP + -0x24) = piVar7;
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x1c) + -1;
  iVar4 = (**(code **)(iVar4 + 0x8c))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  piVar7 = *(int **)(unaff_EBP + -0x14);
  if (piVar7 == (int *)0x0) {
    FUN_00878dfb();
    piVar7 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar7;
  *(int **)(unaff_EBP + -0x24) = piVar7;
  iVar4 = (**(code **)(iVar4 + 0x8c))();
  if (iVar4 < 0) {
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_13c = 0x5cd821;
    iStack_138 = iVar4;
    FUN_00878e09();
  }
  iStack_134 = 0x5cd82a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_134 = 0x5cd837;
  FUN_00403191();
  iStack_134 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_138 = 0x5cd84b;
  iStack_138 = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_13c;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
  uVar9 = 2;
  uVar6 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004115d9(2,2);
  FUN_00448e3a(uVar6,uVar9);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_134 = 0x5cd87e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_134 = 0x5cd889;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_134 = 0x5cd896;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_134 = 0x5cd8a1;
    FUN_00878dfb();
  }
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x38) + 0x70);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 8) = this;
  iStack_134 = 0x5cd8b3;
  FUN_00403191();
  iStack_134 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_138 = 0x5cd8c2;
  FUN_004031b7();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (bVar8) {
    iStack_134 = 0x5cd8d8;
    FUN_00878dfb();
  }
  iStack_134 = unaff_EBP + -0x58;
  iStack_138 = 0;
  uStack_13c = 0;
  puVar5 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x38,0,0,0);
  iStack_134 = 0x5cd8fd;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_134 = 0x5cd912;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_134 = 0x5cd91d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_134 = 0x5cd92a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_134 = 0x5cd935;
    FUN_00878dfb();
  }
  iStack_134 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_138 = 0x5cd942;
  FUN_0040ee87();
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar4 == 0) {
    iStack_134 = 0x5cd954;
    FUN_00878dfb();
  }
  piVar7 = *(int **)this;
  iVar4 = *piVar7;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_134 = *(undefined4 *)(unaff_EBP + -0x50);
  *(int **)(unaff_EBP + -0x38) = piVar7;
  iVar4 = (**(code **)(iVar4 + 0xfc))(piVar7);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x38),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar7 = *(int **)(unaff_EBP + 8);
  if (*piVar7 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar7;
  iVar4 = (**(code **)(*piVar2 + 0xb4))(piVar2,5);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0x10),1);
  iVar4 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar7 = (int *)*piVar7;
  iVar4 = *piVar7;
  *(int **)(unaff_EBP + -0x38) = piVar7;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar7,*(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x38),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar7 = *(int **)(unaff_EBP + 8);
  if (*piVar7 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar7;
  iVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00403191(&DAT_00980690);
  iVar4 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x88,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x58,
               unaff_EBP + -0x48,unaff_EBP + -0x34,unaff_EBP + -0x68,unaff_EBP + -0x78);
  iVar4 = FUN_00402bc3(unaff_EBP + -0x88);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x78);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00403191(&DAT_00980690);
  iVar4 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar7 = (int *)*piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x90))
                    (piVar7,*(int *)(unaff_EBP + -0x1c) / -2,2,*(undefined4 *)(unaff_EBP + -0x78),
                     *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                     *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x5c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar7,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x78);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar6 = FUN_0040e53d();
  FUN_004125e6();
  FUN_004497b5();
  FUN_00412600();
  FUN_004125d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


