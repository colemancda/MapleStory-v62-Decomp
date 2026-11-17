/* FUN_006917fc - 0x006917fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006917fc(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  puVar2 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x10,0,0,0,0,0,unaff_EBP + -0x38,unaff_EBP + -0x24);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x108);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  puVar2 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  uVar6 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87(uVar6,1);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar1,0x35,0x4c,*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
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
  puVar2 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
  uVar6 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0040ee87(uVar6,1);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = (**(code **)(*piVar1 + 0xb4))(piVar1,1);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
  }
  if (*(int *)this == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar3 = (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
  }
  iVar4 = FUN_005f3a71(*(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0xc0));
  *(int *)(unaff_EBP + -0x3c) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_008e863c;
  iVar3 = *(int *)(iVar4 + 0x30);
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  FUN_0040b905(iVar4,iVar3,unaff_EBP + -0x50);
  FUN_004031b7(0xfffffffe,3);
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + -0x14,unaff_EBP + -0x24);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(unaff_EBP + -0x44);
  if (iVar3 != 0) {
    while( true ) {
      iVar4 = *(int *)(iVar3 + 4);
      iVar3 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00403191(&DAT_00980690);
      uVar6 = *(undefined4 *)(iVar4 + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_004031b7(uVar6,3);
      iVar3 = *(int *)this;
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x90,uVar6,unaff_EBP + -0x24,unaff_EBP + -0x38,unaff_EBP + -0x80,
                   unaff_EBP + -0x60,unaff_EBP + -0x70);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x90);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x80);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    iVar4 = *(int *)(unaff_EBP + -0x3c);
  }
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00424aee(&DAT_00980690);
  iVar3 = unaff_EBP + -0x60;
  iVar7 = unaff_EBP + -0x70;
  uVar6 = 0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424e27(0x20,iVar7,iVar3);
  FUN_00425139(uVar6,iVar7,iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  uVar6 = *(undefined4 *)(iVar4 + 0x34);
  iVar3 = *(int *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xc4) = uVar6;
  *(undefined4 *)(iVar3 + 200) = *(undefined4 *)(iVar4 + 0x38);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_008e863c;
  FUN_00413915();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


