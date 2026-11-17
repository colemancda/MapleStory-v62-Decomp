/* FUN_00814535 - 0x00814535 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00814535(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0x34) = *(undefined4 *)(unaff_EBP + 0x1c);
  if ((iVar4 == 0) || (*(int *)(unaff_EBP + 0x14) == 0)) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -0x10) = 8;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_004031b7(0,3);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x18;
    bVar5 = DAT_0097c1ac == 0;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (bVar5) {
      FUN_00878dfb(0x80004003);
    }
    puVar1 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x18,0,0,0,0,0,unaff_EBP + -0x2c,unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x38;
    iVar4 = extraout_ECX;
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -0x10) = 3;
    bVar5 = DAT_0097c1ac == 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (bVar5) {
      FUN_00878dfb(0x80004003);
    }
    puVar1 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x1c,0,0,*(undefined4 *)(unaff_EBP + 0x10),
                          *(undefined4 *)(unaff_EBP + 0x14),0,unaff_EBP + -0x4c,unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -0x10) = 7;
    iVar4 = *(int *)(unaff_EBP + -0x14);
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0x18),(IBinding *)*puVar1);
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
    FUN_00412600();
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    FUN_00412600();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    FUN_0040ee87(*(undefined4 *)(DAT_00978364 + 0xd4),1);
    iVar4 = *(int *)(iVar4 + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
    iVar4 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = *piVar3;
    *(int **)(unaff_EBP + 0x1c) = piVar3;
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x1c),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x10);
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar4 = *piVar3;
  *(int **)(unaff_EBP + 0x1c) = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x90))
                    (piVar3,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                     *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                     *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x1c),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar6 = *(undefined4 *)(unaff_EBP + 0x18);
  FUN_00424e27(uVar6);
  FUN_006e612a(uVar6);
  uVar6 = 0xffffffff;
  FUN_00424e27(0xffffffff);
  FUN_00444e05(uVar6);
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(unaff_EBP + 0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


