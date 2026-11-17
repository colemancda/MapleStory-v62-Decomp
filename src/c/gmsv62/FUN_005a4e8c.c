/* FUN_005a4e8c - 0x005a4e8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a4e8c(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  bool bVar10;
  undefined4 uStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  int *piStack_15c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  piStack_15c = (int *)0x5a4eb5;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_15c = (int *)0x5a4ec6;
  FUN_00403191();
  piStack_15c = (int *)0x0;
  puStack_160 = (undefined1 *)(unaff_EBP + -0x114);
  iStack_164 = unaff_EBP + -0x104;
  *(undefined4 **)(unaff_EBP + -0x38) = &uStack_168;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_168 = extraout_ECX_00;
  FUN_00679e4e(&uStack_168,0x5fa);
  iVar2 = unaff_EBP + -0x134;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_160 = (undefined1 *)0x5a4f19;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x4c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    piStack_15c = (int *)0x5a4f2f;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_15c = (int *)0x5a4f40;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_15c = (int *)0x5a4f50;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_15c = (int *)0x5a4f5b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_15c = (int *)0x5a4f6b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_15c = (int *)0x5a4f76;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_15c = (int *)0x5a4f86;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_15c = (int *)0x5a4f91;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    piStack_15c = (int *)0x5a4fa0;
    FUN_00878dfb();
  }
  uVar3 = FUN_0040cf4d();
  *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
  iVar2 = *(int *)(extraout_ECX + 0x30);
  iVar8 = *(int *)(iVar2 + 0x24);
  iVar4 = *(int *)(iVar2 + 0x2c);
  iVar9 = *(int *)(iVar2 + 0x30);
  *(int *)(unaff_EBP + -0x3c) = iVar8 + -200;
  iVar2 = *(int *)(iVar2 + 0x28);
  iVar9 = (iVar9 - iVar2) + 400;
  *(int *)(unaff_EBP + -0x24) = iVar9;
  iVar8 = (iVar4 - iVar8) + 400;
  *(int *)(unaff_EBP + -0x30) = iVar8;
  *(int *)(unaff_EBP + -0x28) = iVar2 + -200;
  fVar1 = (float)*(int *)(unaff_EBP + -0x24) * (float)*(int *)(unaff_EBP + -0x30) * _DAT_008ec768;
  *(float *)(unaff_EBP + -0x18) = fVar1;
  if (_DAT_008ec764 < fVar1) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x3f800000;
  }
  iVar2 = _rand();
  iVar4 = __ftol();
  iVar2 = (iVar2 % 0x14 - iVar4) + 10;
  if (0 < iVar2) {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x20) + 0x34;
    *(int *)(unaff_EBP + -0x20) = iVar2;
    while( true ) {
      FUN_0087a1b0();
      piStack_15c = (int *)0x0;
      iStack_164 = 0x5a504e;
      puStack_160 = &stack0xfffffeac;
      iStack_164 = _rand();
      iStack_164 = iStack_164 % *(int *)(unaff_EBP + -0x5c);
      uStack_168 = 0x5a5058;
      iStack_164 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x40) = &puStack_160;
      uStack_168 = 0x5a5064;
      FUN_004033a1();
      iStack_164 = unaff_EBP + -0x144;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_168 = 0x5a5077;
      FUN_0040263d();
      uStack_168 = 0x5a507e;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_160 = (undefined1 *)0x5a5089;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -100) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        piStack_15c = (int *)0x5a509f;
        iVar2 = FUN_0041a581();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          piStack_15c = (int *)0x5a50b0;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_15c = (int *)0x5a50c0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_15c = (int *)0x5a50cb;
        FUN_00878dfb();
      }
      iVar2 = _rand();
      iVar4 = _rand();
      *(int *)(unaff_EBP + -0x48) = iVar4 % 0x50 + 0x8c;
      iVar4 = _rand();
      *(int *)(unaff_EBP + -0x2c) = iVar4 % iVar8 + *(int *)(unaff_EBP + -0x3c);
      iVar4 = _rand();
      *(int *)(unaff_EBP + -0x40) = (iVar2 % 100 + 0x32) * 10;
      *(int *)(unaff_EBP + -0x34) = iVar4 % iVar9 + *(int *)(unaff_EBP + -0x28);
      *(int *)(unaff_EBP + -0x54) = (iVar2 % 100 + -0x3c) / 4;
      piStack_15c = (int *)0x5a512c;
      FUN_00403191();
      piStack_15c = *(int **)(unaff_EBP + -0x18);
      puStack_160 = (undefined1 *)0x5a513c;
      FUN_0040ee87();
      bVar10 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (bVar10) {
        piStack_15c = (int *)0x5a5154;
        FUN_00878dfb();
      }
      piStack_15c = (int *)(unaff_EBP + -0xa4);
      puStack_160 = (undefined1 *)0xc0061508;
      iStack_164 = 0;
      uStack_168 = 0;
      FUN_0042a39f(unaff_EBP + -0x14,0,0);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_15c = (int *)0x5a5187;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_15c = (int *)0x5a5192;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_15c = (int *)0x5a519f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_15c = (int *)0x5a51aa;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piStack_15c = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_160 = (undefined1 *)0x5a51c4;
      puVar5 = (undefined4 *)FUN_00679d86();
      puStack_160 = (undefined1 *)*puVar5;
      piStack_15c = (int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_164 = 0x5a51d5;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int *)(unaff_EBP + -0x58) != 0) {
        piStack_15c = (int *)0x5a51ec;
        FUN_00403384();
      }
      piStack_15c = (int *)0x0;
      puStack_160 = (undefined1 *)0x5a51fb;
      FUN_004031b7();
      piVar6 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (piVar6 == (int *)0x0) {
        piStack_15c = (int *)0x5a5210;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x10);
      }
      *(undefined4 *)(unaff_EBP + -0x154) = DAT_0097bb30;
      *(undefined4 *)(unaff_EBP + -0x150) = DAT_0097bb34;
      *(undefined4 *)(unaff_EBP + -0x14c) = DAT_0097bb38;
      *(undefined4 *)(unaff_EBP + -0x148) = DAT_0097bb3c;
      uStack_168 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_164 = *(int *)(unaff_EBP + -0xc4);
      puStack_160 = *(undefined1 **)(unaff_EBP + -0xc0);
      iVar2 = *piVar6;
      piStack_15c = *(int **)(unaff_EBP + -0xbc);
      *(int **)(unaff_EBP + -0x50) = piVar6;
      iVar2 = (**(code **)(iVar2 + 0x9c))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x154),
                         *(undefined4 *)(unaff_EBP + -0x150),*(undefined4 *)(unaff_EBP + -0x14c),
                         *(undefined4 *)(unaff_EBP + -0x148),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x28),iVar8);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x50),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xc4);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar6 + 0x90))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x124),
                         *(undefined4 *)(unaff_EBP + -0x120),*(undefined4 *)(unaff_EBP + -0x11c),
                         *(undefined4 *)(unaff_EBP + -0x118),*(undefined4 *)(unaff_EBP + -0xe4),
                         *(undefined4 *)(unaff_EBP + -0xe0),*(undefined4 *)(unaff_EBP + -0xdc),
                         *(undefined4 *)(unaff_EBP + -0xd8));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar6,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x124);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xe4);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)FUN_0042fb5e(unaff_EBP + -0x60);
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)*piVar6;
      iVar2 = (**(code **)(*piVar6 + 100))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x84),
                         *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c),
                         *(undefined4 *)(unaff_EBP + -0x78));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar6,&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x84);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = *(int **)(unaff_EBP + -0x14);
      iVar2 = (**(code **)(*piVar6 + 0xe0))(piVar6,0xffffff);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar6,&DAT_00963df8);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_004031b7(3000,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)FUN_004113e5(unaff_EBP + -0x44);
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)*piVar6;
      iVar2 = (**(code **)(*piVar6 + 0x90))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x48),0xff,
                         *(undefined4 *)(unaff_EBP + -0x94),*(undefined4 *)(unaff_EBP + -0x90),
                         *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                         *(undefined4 *)(unaff_EBP + -0xb4),*(undefined4 *)(unaff_EBP + -0xb0),
                         *(undefined4 *)(unaff_EBP + -0xac),*(undefined4 *)(unaff_EBP + -0xa8));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar6,&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x94);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xb4);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0x10000000,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_0042a378();
      FUN_004031b7(iVar2 + 30000,3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      puVar7 = (undefined1 *)
               (**(code **)(*piVar6 + 0x90))
                         (piVar6,*(int *)(unaff_EBP + -0x40) + *(int *)(unaff_EBP + -0x2c),
                          *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x34),
                          *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0),
                          *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200),
                          *(undefined4 *)(unaff_EBP + -0xf4),*(undefined4 *)(unaff_EBP + -0xf0),
                          *(undefined4 *)(unaff_EBP + -0xec),*(undefined4 *)(unaff_EBP + -0xe8));
      if ((int)puVar7 < 0) {
        iStack_164 = 0x5a5562;
        puStack_160 = puVar7;
        piStack_15c = piVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_15c = (int *)0x5a5572;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_15c = (int *)0x5a557d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_15c = (int *)0x5a558d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_15c = (int *)0x5a5598;
        FUN_00878dfb();
      }
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
      piStack_15c = (int *)0x5a55aa;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,*(IBinding **)(unaff_EBP + -0x14));
      FUN_004125d9();
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004125e6();
      piVar6 = (int *)(unaff_EBP + -0x20);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) break;
      iVar8 = *(int *)(unaff_EBP + -0x30);
      iVar9 = *(int *)(unaff_EBP + -0x24);
    }
  }
  FUN_004027eb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


