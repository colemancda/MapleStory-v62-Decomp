/* FUN_0067ad87 - 0x0067ad87 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0067ad87(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar11;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  sVar4 = FUN_00424561();
  *(int *)(extraout_ECX + 0x140) = (int)sVar4;
  sVar4 = FUN_00424561();
  *(int *)(extraout_ECX + 0x144) = (int)sVar4;
  *(undefined4 *)(extraout_ECX + 0x148) = *(undefined4 *)(extraout_ECX + 0x140);
  *(undefined4 *)(extraout_ECX + 0x14c) = *(undefined4 *)(extraout_ECX + 0x144);
  FUN_0042452b();
  uVar5 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xcc) = uVar5;
  uVar5 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  uVar6 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xac) = uVar6 & 0xff;
  uVar6 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xb0) = uVar6 & 0xff;
  if (*(int *)(extraout_ECX + 0xac) == 0) {
    iVar7 = FUN_00654380();
    uVar5 = 0;
    if (iVar7 == 0) goto LAB_0067ae3a;
  }
  uVar5 = 1;
LAB_0067ae3a:
  *(undefined4 *)(extraout_ECX + 0xbc) = uVar5;
  *(undefined4 *)(extraout_ECX + 0x9c) = *(undefined4 *)(unaff_EBP + 8);
  iVar7 = FUN_0064d61f();
  uVar5 = FUN_004d19c1();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  if (iVar7 == 0) {
    uVar5 = 0;
  }
  else {
    iVar7 = FUN_006509a1();
    uVar5 = FUN_00413367(iVar7 + 0x1c,*(undefined4 *)(iVar7 + 0x24));
    *(undefined4 *)(extraout_ECX + 0xb4) = uVar5;
    iVar7 = FUN_006509a1();
    uVar5 = FUN_00413367(iVar7 + 0x34,*(undefined4 *)(iVar7 + 0x3c));
    *(undefined4 *)(extraout_ECX + 0xb8) = uVar5;
    iVar7 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar7;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar7 != 0) {
      FUN_005c5810();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_005d0c41();
    if ((*(int *)(extraout_ECX + 0xac) == 3) || (*(int *)(extraout_ECX + 0xac) == 4)) {
      FUN_005d0f1a(0x3ff0000000000000);
      FUN_005d0f1a(0x3ff0000000000000);
    }
    uVar8 = FUN_008010db();
    uVar5 = *(undefined4 *)(extraout_ECX + 0xac);
    uVar1 = *(undefined4 *)(extraout_ECX + 0xa0);
    uVar9 = *(undefined4 *)(extraout_ECX + 0x98);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
    FUN_0080116f(-(uint)(extraout_ECX != 0) & extraout_ECX + 4U,uVar9,uVar1,uVar5);
    if ((*(int *)(extraout_ECX + 0xac) == 3) || (*(int *)(extraout_ECX + 0xac) == 4)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    uVar9 = FUN_00413367(extraout_ECX + 0xc4,*(undefined4 *)(extraout_ECX + 0xcc));
    iVar7 = **(int **)(unaff_EBP + 8);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x144);
    *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + -0x10);
    uVar5 = (**(code **)(iVar7 + 8))(*(undefined4 *)(extraout_ECX + 0x140),uVar1,0,0,uVar9,uVar5);
    (**(code **)(*(int *)(unaff_EBP + -0x14) + 4))(uVar5);
    iVar7 = FUN_00680d4c(unaff_EBP + -0x10);
    if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
      FUN_00878dfb(iVar7);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_004031b7(0,3);
    bVar11 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (bVar11) {
      FUN_00878dfb(0x80004003);
    }
    puVar10 = (undefined4 *)
              FUN_0042a39f(unaff_EBP + -0x14,0,0,0,0,0,unaff_EBP + -0x38,unaff_EBP + -0x48);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xc0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar10);
    piVar2 = *(int **)(unaff_EBP + -0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar7 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar7 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    if (*(int *)this == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)this;
    iVar7 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar2,&DAT_00963df8);
    }
    piVar2 = *(int **)(extraout_ECX + 0x134);
    *(undefined2 *)(unaff_EBP + -0x28) = 0xd;
    *(int **)(unaff_EBP + -0x20) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    iVar7 = *(int *)this;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar7 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)this;
    iVar7 = *piVar2;
    *(int **)(unaff_EBP + -0x14) = piVar2;
    iVar7 = (**(code **)(iVar7 + 100))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar7 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    if (*(int *)(extraout_ECX + 0xc0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(extraout_ECX + 0xc0);
    *(undefined4 *)(unaff_EBP + -0x48) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x44) = DAT_0097bb34;
    iVar7 = *piVar2;
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb3c;
    *(int **)(unaff_EBP + -0x14) = piVar2;
    iVar7 = (**(code **)(iVar7 + 0xfc))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
    }
    cVar3 = FUN_0042452b();
    if (cVar3 == '\0') {
      uVar5 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0xd8) = uVar5;
    }
    *(undefined4 *)(extraout_ECX + 0x78) = 0;
    uVar5 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0xfc) = uVar5;
    iVar7 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x130) = 0;
    *(int *)(extraout_ECX + 0x104) = iVar7 + 10000;
    *(int *)(extraout_ECX + 0x100) = iVar7 + 10000;
    FUN_0067b45c();
    FUN_0067b79a();
    FUN_0067e8d9(1,-(uint)(*(int *)(unaff_EBP + 8) != 0) & *(int *)(unaff_EBP + 8) + 4U);
    uVar5 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


