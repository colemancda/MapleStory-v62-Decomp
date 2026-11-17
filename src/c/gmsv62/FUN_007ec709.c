/* FUN_007ec709 - 0x007ec709 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ec709(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  IBinding *pIVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  uint uVar8;
  int unaff_EBP;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0x124);
  iVar1 = *(int *)(extraout_ECX + 0x120);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int *)(unaff_EBP + -0x18) = iVar1 + iVar6 * 0x14;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar9) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x20,0,0,0,0,0,unaff_EBP + -0x44,unaff_EBP + -0x30);
  pIVar2 = (IBinding *)*puVar5;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x128);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x14) = this;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x1c);
  uVar7 = *puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87(uVar7,1);
  iVar6 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)this;
  iVar6 = *piVar3;
  *(int **)(unaff_EBP + -0x20) = piVar3;
  iVar6 = (**(code **)(iVar6 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  piVar3 = *(int **)(unaff_EBP + -0x14);
  if (*piVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar3;
  iVar6 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xffffffff);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar4,&DAT_00963df8);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x1c);
  uVar7 = *puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0040ee87(uVar7,1);
  iVar6 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar6 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar6 = (**(code **)(iVar6 + 0xfc))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  piVar3 = *(int **)(unaff_EBP + -0x14);
  if (*piVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar3;
  iVar6 = (**(code **)(*piVar4 + 0xb4))(piVar4,1);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar4,&DAT_00963df8);
  }
  if (*piVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar3;
  iVar6 = (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar4,&DAT_00963df8);
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) == 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00403191(&DAT_00980690);
    iVar6 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar6 = *piVar3;
    *(int **)(unaff_EBP + -0x10) = piVar3;
    iVar6 = (**(code **)(iVar6 + 0x90))
                      (piVar3,0xd1,0xda,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined ***)(unaff_EBP + -0x78) = &PTR_FUN_008e8648;
    iVar6 = unaff_EBP + -0x78;
    uVar11 = 0;
    uVar10 = 1;
    uVar7 = **(undefined4 **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 8;
    uVar7 = FUN_0061aa2e(uVar7,1,0,iVar6);
    FUN_0040c030(uVar7,uVar10,uVar11,iVar6);
    uVar8 = *(uint *)(unaff_EBP + -0x6c);
    while (uVar8 != 0) {
      iVar6 = *(int *)(uVar8 + 4);
      iVar1 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
      uVar8 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00403191(&DAT_00980690);
      uVar7 = *(undefined4 *)(iVar6 + 0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004031b7(uVar7,3);
      iVar1 = **(int **)(unaff_EBP + -0x14);
      uVar7 = *(undefined4 *)(iVar6 + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x98,uVar7,unaff_EBP + -0x30,unaff_EBP + -0x44,unaff_EBP + -0x88,
                   unaff_EBP + -100,unaff_EBP + -0x54);
      iVar6 = FUN_00402bc3(unaff_EBP + -0x98);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x88);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar6 = FUN_00402bc3(unaff_EBP + -100);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + -0x14);
    iVar6 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar6 = (**(code **)(*piVar3 + 0x110))
                      (piVar3,0x20,*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -100),
                       *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                       *(undefined4 *)(unaff_EBP + -0x58));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar3,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar6 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x78) = &PTR_FUN_008e8648;
    FUN_0041398d();
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    FUN_00403191(&DAT_00980690);
    iVar6 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar6 = *piVar3;
    *(int **)(unaff_EBP + -0x10) = piVar3;
    iVar6 = (**(code **)(iVar6 + 0x90))
                      (piVar3,0xe2,0xda,*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -100),
                       *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                       *(undefined4 *)(unaff_EBP + -0x58));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_005536ce(unaff_EBP + -0x34,**(undefined4 **)(unaff_EBP + -0x18),1,1);
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00424aee(&DAT_00980690);
    iVar6 = **(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0xd8,*(undefined4 *)(unaff_EBP + -0x34),unaff_EBP + -0x88,
                 unaff_EBP + -0xb8,unaff_EBP + -0xa8,unaff_EBP + -200,unaff_EBP + -0x98);
    iVar6 = FUN_00402bc3(unaff_EBP + -0xd8);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x88);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iVar6 = FUN_00402bc3(unaff_EBP + -0xb8);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iVar6 = FUN_00402bc3(unaff_EBP + -0xa8);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar6 = FUN_00402bc3(unaff_EBP + -200);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x98);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_004125e6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


