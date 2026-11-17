/* FUN_005c3ed4 - 0x005c3ed4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c3ed4(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  int *piVar11;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  bool bVar12;
  undefined8 uVar13;
  int *piStack_160;
  int *piStack_15c;
  int *piStack_158;
  undefined *puStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  uVar4 = FUN_004b8ce9();
  *(undefined4 *)(extraout_ECX + 0x158) = uVar4;
  FUN_005c55cd();
  sVar3 = FUN_00424561();
  *(int *)(extraout_ECX + 0x488) = (int)sVar3;
  sVar3 = FUN_00424561();
  *(int *)(extraout_ECX + 0x48c) = (int)sVar3;
  *(undefined4 *)(extraout_ECX + 0x480) = *(undefined4 *)(extraout_ECX + 0x488);
  *(undefined4 *)(extraout_ECX + 0x484) = *(undefined4 *)(extraout_ECX + 0x48c);
  FUN_0042452b();
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x33c) = uVar4;
  uVar4 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar4 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  cVar2 = FUN_0042452b();
  iVar5 = (int)cVar2;
  *(int *)(unaff_EBP + -0x2c) = iVar5;
  if ((iVar5 == -3) || (-1 < iVar5)) {
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  uVar6 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x330) = uVar6 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  uVar4 = FUN_004d19c1();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  iVar5 = FUN_004d19c1();
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar5 + 0x20);
  }
  uVar4 = FUN_007f7314();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iVar5 = FUN_005d2f4a();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  FUN_00413367();
  FUN_007f7369();
  FUN_00413367();
  (**(code **)(**(int **)(unaff_EBP + -0x18) + 4))();
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x33c) = uVar4;
  uVar4 = FUN_007f7314();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  iVar5 = FUN_005d2f4a();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  FUN_00679d86();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00437222();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  FUN_00413367();
  FUN_007f7369();
  (**(code **)(**(int **)(unaff_EBP + -0x1c) + 4))();
  iStack_144 = 0x5c4151;
  FUN_00403191();
  iStack_144 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_148 = 0x5c4163;
  FUN_004031b7();
  bVar12 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar12) {
    iStack_144 = 0x5c4179;
    FUN_00878dfb();
  }
  iStack_144 = unaff_EBP + -100;
  uStack_148 = 0;
  uStack_14c = 0;
  piStack_150 = (int *)0x0;
  puStack_154 = (undefined *)0x0;
  piStack_158 = (int *)0x0;
  piStack_15c = (int *)(unaff_EBP + 0xc);
  piStack_160 = (int *)0x5c4195;
  puVar7 = (undefined4 *)FUN_0042a39f();
  iStack_144 = 0x5c41a4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x440),
             (IBinding *)*puVar7);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_144 = 0x5c41b9;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_144 = 0x5c41c4;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_144 = 0x5c41d1;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_144 = 0x5c41dc;
    FUN_00878dfb();
  }
  iStack_144 = *(undefined4 *)(extraout_ECX + 0xec);
  uStack_148 = 0x5c41ed;
  FUN_0040ee87();
  iVar5 = *(int *)(extraout_ECX + 0x440);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar5 == 0) {
    iStack_144 = 0x5c4202;
    FUN_00878dfb();
  }
  piStack_150 = *(int **)(extraout_ECX + 0x440);
  iVar5 = *piStack_150;
  uStack_14c = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_148 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_144 = *(undefined4 *)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + 0xc) = piStack_150;
  puStack_154 = (undefined *)0x5c421d;
  iVar5 = (**(code **)(iVar5 + 100))();
  if (iVar5 < 0) {
    puStack_154 = &DAT_00963de8;
    piStack_158 = *(int **)(unaff_EBP + 0xc);
    piStack_160 = (int *)0x5c422f;
    piStack_15c = (int *)iVar5;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_154 = (undefined *)(unaff_EBP + -0x40);
  piStack_158 = (int *)0x5c423c;
  puStack_154 = (undefined *)FUN_00402bc3();
  if ((int)puStack_154 < 0) {
    piStack_158 = (int *)0x5c4247;
    FUN_00878dfb();
  }
  piVar11 = (int *)(extraout_ECX + 0x440);
  if (*(int *)(extraout_ECX + 0x440) == 0) {
    puStack_154 = (undefined *)0x80004003;
    piStack_158 = (int *)0x5c4260;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar11;
  puStack_154 = (undefined *)0xffffff;
  piStack_15c = (int *)0x5c4270;
  piStack_158 = piVar1;
  iVar5 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar5 < 0) {
    piStack_15c = (int *)&DAT_00963df8;
    piStack_160 = piVar1;
    FUN_00878e09();
  }
  iVar5 = *(int *)(unaff_EBP + -0x2c);
  if (iVar5 == -4) {
    piStack_15c = *(int **)(*(int *)(extraout_ECX + 0x15c) + 0x54);
    piStack_160 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x4c);
    iVar5 = FUN_004cd670();
    if (iVar5 != 0) {
      piStack_15c = (int *)0x5c4835;
      uVar4 = FUN_004133b5();
      piStack_15c = &DAT_00980690;
      *(undefined4 *)(extraout_ECX + 0x348) = uVar4;
      piStack_160 = (int *)0x5c484c;
      FUN_00403191();
      piStack_15c = &DAT_00980690;
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      piStack_160 = (int *)0x5c485f;
      FUN_00403191();
      iVar5 = *piVar11;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (iVar5 == 0) {
        piStack_15c = (int *)0x80004003;
        piStack_160 = (int *)0x5c4872;
        FUN_00878dfb();
      }
      piStack_15c = (int *)(unaff_EBP + -0x28);
      piStack_160 = (int *)0x5c487f;
      piVar11 = (int *)FUN_004113e5();
      iVar5 = *piVar11;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar5 == 0) {
        piStack_15c = (int *)0x80004003;
        piStack_160 = (int *)0x5c4894;
        FUN_00878dfb();
      }
      piVar11 = (int *)*piVar11;
      iVar5 = *piVar11;
      piStack_160 = *(int **)(unaff_EBP + -0xbc);
      piStack_15c = *(int **)(unaff_EBP + -0xb8);
      *(int **)(unaff_EBP + 0xc) = piVar11;
      iVar5 = (**(code **)(iVar5 + 0x90))
                        (piVar11,0xff,0,*(undefined4 *)(unaff_EBP + -0xa4),
                         *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar5 = FUN_00402bc3(unaff_EBP + -0xa4);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3(unaff_EBP + -0xc4);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      if ((*(int *)(extraout_ECX + 0x274) == 0) ||
         (iVar5 = *(int *)(extraout_ECX + 0x160), iVar5 == 0)) {
        iVar5 = *(int *)(extraout_ECX + 0x15c);
      }
      FUN_004b8c9b(iVar5 + 0xc,*(undefined4 *)(iVar5 + 0x14));
      iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      piStack_160 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))
                                     (*(undefined4 *)(iVar5 + 4));
      piStack_160 = (int *)*piStack_160;
      FUN_007d3c48();
      FUN_007d4267();
    }
    piStack_15c = (int *)0x5c4974;
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x3c0) = uVar4;
    piStack_15c = (int *)0x5c4988;
    uVar4 = FUN_0055a766();
    *(undefined4 *)(extraout_ECX + 0x3d8) = uVar4;
    piStack_15c = *(int **)(*(int *)(extraout_ECX + 0x15c) + 0x14);
    piStack_160 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0xc);
    puVar10 = (undefined *)FUN_004b8c9b();
    if (puVar10 == &DAT_00864700) {
      piStack_15c = (int *)0x0;
      piStack_160 = (int *)0x0;
      FUN_0042dc18(_DAT_008eacd8);
    }
  }
  else if (iVar5 == -3) {
    piStack_15c = *(int **)(unaff_EBP + -0x20);
    piStack_160 = (int *)0x5c47c5;
    iVar5 = FUN_004308f4();
    if (iVar5 != 0) {
      piStack_15c = *(int **)(extraout_ECX + 0x158);
      piStack_160 = (int *)(extraout_ECX + 0x150);
      uVar4 = FUN_004b8c9b();
      piStack_15c = (int *)0x5c47f0;
      puVar7 = (undefined4 *)FUN_0055994b();
      *puVar7 = uVar4;
      piStack_15c = (int *)0x5c4800;
      uVar4 = FUN_0055a766();
      *(undefined4 *)(extraout_ECX + 0x3d8) = uVar4;
    }
  }
  else {
    if (iVar5 == -2) {
      piStack_15c = *(int **)(*(int *)(extraout_ECX + 0x15c) + 0x54);
      piStack_160 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x4c);
      iVar5 = FUN_004cd670();
      if (iVar5 == 0) {
        piStack_15c = (int *)0x5c46b5;
        piStack_15c = (int *)FUN_004133b5();
        *(int **)(extraout_ECX + 0x3c0) = piStack_15c;
        piStack_160 = (int *)(extraout_ECX + 0x3b8);
        iVar5 = FUN_00413367();
        if (iVar5 == 0) {
          piStack_15c = (int *)0x5c46d2;
          uVar4 = FUN_004133b5();
          *(undefined4 *)(extraout_ECX + 0x3c0) = uVar4;
        }
        piStack_15c = &DAT_00980690;
        piStack_160 = (int *)0x5c46e8;
        FUN_00403191();
        piStack_15c = *(int **)(extraout_ECX + 0x3c0);
        *(undefined4 *)(unaff_EBP + -4) = 10;
        piStack_160 = (int *)(extraout_ECX + 0x3b8);
        piStack_160 = (int *)FUN_00413367();
        piStack_15c = (int *)0x3;
        FUN_004031b7();
        iVar5 = *piVar11;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar5 == 0) {
          piStack_15c = (int *)0x80004003;
          piStack_160 = (int *)0x5c471e;
          FUN_00878dfb();
        }
        piStack_15c = (int *)(unaff_EBP + -0x44);
        piStack_160 = (int *)0x5c472b;
        piVar11 = (int *)FUN_004113e5();
        iVar5 = *piVar11;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar5 == 0) {
          piStack_15c = (int *)0x80004003;
          piStack_160 = (int *)0x5c4740;
          FUN_00878dfb();
        }
        piVar11 = (int *)*piVar11;
        iVar5 = *piVar11;
        piStack_160 = *(int **)(unaff_EBP + -0x7c);
        piStack_15c = *(int **)(unaff_EBP + -0x78);
        *(int **)(unaff_EBP + 0xc) = piVar11;
        iVar5 = (**(code **)(iVar5 + 0x90))
                          (piVar11,0xff,0xff,*(undefined4 *)(unaff_EBP + -0xe4),
                           *(undefined4 *)(unaff_EBP + -0xe0),*(undefined4 *)(unaff_EBP + -0xdc));
        if (iVar5 < 0) {
          piStack_15c = (int *)&DAT_00963de8;
          piStack_160 = *(int **)(unaff_EBP + 0xc);
          FUN_00878e09();
        }
        piStack_15c = (int *)0x5c478d;
        FUN_004125d9();
        piStack_15c = (int *)(unaff_EBP + -0xe4);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_160 = (int *)0x5c479d;
        piStack_15c = (int *)FUN_00402bc3();
        if ((int)piStack_15c < 0) {
          piStack_160 = (int *)0x5c47a8;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_15c = (int *)(unaff_EBP + -0x84);
      }
      else {
        piStack_15c = (int *)0x5c45b4;
        uVar4 = FUN_004133b5();
        piStack_15c = &DAT_00980690;
        *(undefined4 *)(extraout_ECX + 0x348) = uVar4;
        piStack_160 = (int *)0x5c45cb;
        FUN_00403191();
        piStack_15c = &DAT_00980690;
        *(undefined4 *)(unaff_EBP + -4) = 7;
        piStack_160 = (int *)0x5c45de;
        FUN_00403191();
        iVar5 = *piVar11;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iVar5 == 0) {
          piStack_15c = (int *)0x80004003;
          piStack_160 = (int *)0x5c45f1;
          FUN_00878dfb();
        }
        piStack_15c = (int *)(unaff_EBP + -0x50);
        piStack_160 = (int *)0x5c45fe;
        piVar11 = (int *)FUN_004113e5();
        iVar5 = *piVar11;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar5 == 0) {
          piStack_15c = (int *)0x80004003;
          piStack_160 = (int *)0x5c4613;
          FUN_00878dfb();
        }
        piVar11 = (int *)*piVar11;
        iVar5 = *piVar11;
        piStack_160 = *(int **)(unaff_EBP + -0xac);
        piStack_15c = *(int **)(unaff_EBP + -0xa8);
        *(int **)(unaff_EBP + 0xc) = piVar11;
        iVar5 = (**(code **)(iVar5 + 0x90))
                          (piVar11,0xff,0,*(undefined4 *)(unaff_EBP + -0xd4),
                           *(undefined4 *)(unaff_EBP + -0xd0),*(undefined4 *)(unaff_EBP + -0xcc));
        if (iVar5 < 0) {
          piStack_15c = (int *)&DAT_00963de8;
          piStack_160 = *(int **)(unaff_EBP + 0xc);
          FUN_00878e09();
        }
        piStack_15c = (int *)0x5c4660;
        FUN_004125d9();
        piStack_15c = (int *)(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_160 = (int *)0x5c4670;
        piStack_15c = (int *)FUN_00402bc3();
        if ((int)piStack_15c < 0) {
          piStack_160 = (int *)0x5c467b;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_15c = (int *)(unaff_EBP + -0xb4);
      }
    }
    else {
      if (iVar5 != -1) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        piStack_15c = (int *)0x63b;
        piStack_160 = (int *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        puVar7 = (undefined4 *)FUN_00679d86();
        piStack_160 = (int *)*puVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_15c = (int *)iVar5;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_15c = (int *)(*(int *)(unaff_EBP + -0x14) + -0xc);
          piStack_160 = (int *)0x5c42ef;
          FUN_00403384();
        }
        piStack_15c = &DAT_00980690;
        piStack_160 = (int *)0x5c42fe;
        FUN_00403191();
        piStack_15c = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piStack_160 = (int *)0x5c430b;
        FUN_00403191();
        piStack_15c = (int *)0x0;
        piStack_160 = (int *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uVar8 = FUN_00411641();
        *(undefined1 **)(unaff_EBP + -0x48) = &stack0xfffffe94;
        uVar4 = extraout_ECX_00;
        FUN_004033a1(uVar8);
        uVar13 = CONCAT44(uVar4,unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_00405a1d(unaff_EBP + -0xf4);
        FUN_00402660();
        FUN_00404a02(uVar13);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar5 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x4c) = iVar5;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        if (iVar5 != 0) {
          piStack_15c = (int *)(unaff_EBP + -0x4c);
          piStack_160 = (int *)0x5c436e;
          piStack_15c = (int *)FUN_00404b30();
          if (((int)piStack_15c < 0) && (piStack_15c != (int *)0x80004002)) {
            piStack_160 = (int *)0x5c437f;
            FUN_00878dfb();
          }
        }
        piStack_15c = (int *)(unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        piStack_160 = (int *)0x5c438f;
        piStack_15c = (int *)FUN_00402bc3();
        if ((int)piStack_15c < 0) {
          piStack_160 = (int *)0x5c439a;
          FUN_00878dfb();
        }
        piStack_15c = (int *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_160 = (int *)0x5c43a7;
        piStack_15c = (int *)FUN_00402bc3();
        if ((int)piStack_15c < 0) {
          piStack_160 = (int *)0x5c43b2;
          FUN_00878dfb();
        }
        piStack_15c = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_160 = (int *)0x5c43bf;
        iVar5 = FUN_00402bc3();
        piVar11 = piStack_15c;
        if (iVar5 < 0) {
          piStack_160 = (int *)0x5c43ca;
          piStack_15c = (int *)iVar5;
          FUN_00878dfb();
          piVar11 = extraout_ECX_01;
        }
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          piStack_15c = (int *)0x0;
          *(int ***)(unaff_EBP + -0x48) = &piStack_160;
          piStack_160 = piVar11;
          FUN_00679e4e();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_0040263d();
          piStack_160 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00412550();
          iVar5 = *(int *)(unaff_EBP + -0x20);
          piStack_15c = (int *)0x5c4426;
          uVar4 = FUN_004133b5();
          *(undefined4 *)(extraout_ECX + 0x3c0) = uVar4;
          piStack_15c = (int *)(unaff_EBP + -0x104);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          piStack_160 = (int *)0x5c443c;
          piStack_15c = (int *)FUN_00402bc3();
          if ((int)piStack_15c < 0) {
            piStack_160 = (int *)0x5c4447;
            FUN_00878dfb();
          }
          piStack_15c = *(int **)(extraout_ECX + 0x3c0);
          piStack_160 = (int *)(extraout_ECX + 0x3b8);
          iVar9 = FUN_00413367();
          if (iVar9 == 0) {
            piStack_15c = (int *)0x5c4463;
            uVar4 = FUN_004133b5();
            *(undefined4 *)(extraout_ECX + 0x3c0) = uVar4;
          }
          iVar5 = *(int *)(unaff_EBP + -0x24) + iVar5;
          *(int *)(extraout_ECX + 0x124) = iVar5;
          if (iVar5 == 0) {
            *(int *)(extraout_ECX + 0x124) = 1;
          }
          *(undefined4 *)(extraout_ECX + 0x120) = *(undefined4 *)(unaff_EBP + -0x2c);
          piStack_15c = (int *)0x5c4497;
          uVar4 = FUN_0055a766();
          *(undefined4 *)(extraout_ECX + 0x3d8) = uVar4;
        }
        piStack_15c = (int *)0x5c44a5;
        FUN_004027eb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_15c = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
          piStack_160 = (int *)0x5c44bd;
          FUN_00403384();
        }
        goto LAB_005c49c5;
      }
      piStack_15c = &DAT_00980690;
      piStack_160 = (int *)0x5c44d4;
      FUN_00403191();
      piStack_15c = &DAT_00980690;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      piStack_160 = (int *)0x5c44e4;
      FUN_00403191();
      iVar5 = *piVar11;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar5 == 0) {
        piStack_15c = (int *)0x80004003;
        piStack_160 = (int *)0x5c44f7;
        FUN_00878dfb();
      }
      piStack_15c = (int *)(unaff_EBP + -0x54);
      piStack_160 = (int *)0x5c4504;
      piVar11 = (int *)FUN_004113e5();
      iVar5 = *piVar11;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar5 == 0) {
        piStack_15c = (int *)0x80004003;
        piStack_160 = (int *)0x5c4519;
        FUN_00878dfb();
      }
      piVar11 = (int *)*piVar11;
      iVar5 = *piVar11;
      piStack_160 = *(int **)(unaff_EBP + -0x8c);
      piStack_15c = *(int **)(unaff_EBP + -0x88);
      *(int **)(unaff_EBP + 0xc) = piVar11;
      iVar5 = (**(code **)(iVar5 + 0x90))
                        (piVar11,0xff,0,*(undefined4 *)(unaff_EBP + -0x74),
                         *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c));
      if (iVar5 < 0) {
        piStack_15c = (int *)&DAT_00963de8;
        piStack_160 = *(int **)(unaff_EBP + 0xc);
        FUN_00878e09();
      }
      piStack_15c = (int *)0x5c4563;
      FUN_004125d9();
      piStack_15c = (int *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_160 = (int *)0x5c4570;
      piStack_15c = (int *)FUN_00402bc3();
      if ((int)piStack_15c < 0) {
        piStack_160 = (int *)0x5c457b;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_15c = (int *)(unaff_EBP + -0x94);
    }
    piStack_160 = (int *)0x5c468b;
    piStack_15c = (int *)FUN_00402bc3();
    if ((int)piStack_15c < 0) {
      piStack_160 = (int *)0x5c469a;
      FUN_00878dfb();
    }
  }
LAB_005c49c5:
  piStack_15c = (int *)0x5c49cc;
  FUN_005c6499();
  piStack_15c = (int *)0x5c49d3;
  FUN_005c5f49();
  piStack_15c = (int *)0x0;
  piStack_160 = (int *)0x5c49dd;
  FUN_005c7141();
  piStack_15c = (int *)0x5c49eb;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x10c) = uVar4;
  piStack_15c = (int *)0x5c49fe;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x16c) = uVar4;
  *(undefined4 *)(extraout_ECX + 0x78) = 0;
  piStack_15c = (int *)0x5c4a14;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x360) = uVar4;
  piStack_15c = (int *)0x5c4a27;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x354) = uVar4;
  if (*(int *)(*(int *)(extraout_ECX + 0x15c) + 0x1d8) != 0) {
    piStack_15c = (int *)0xffff0000;
    piStack_160 = (int *)0x64;
    FUN_005d019c();
    piStack_15c = (int *)0x5c4a50;
    FUN_005c4b14();
  }
  piStack_15c = (int *)0x5c4a5b;
  iVar5 = (**(code **)(*DAT_00978358 + 4))();
  piStack_15c = (int *)0x5c4a68;
  cVar2 = (**(code **)(**(int **)(iVar5 + 0x96c) + 4))();
  if ((cVar2 != '\0') && (*(int *)(iVar5 + 0x96c) != 0)) {
    piStack_15c = (int *)0x5c4a7b;
    iVar5 = FUN_005c4af4();
    if (iVar5 == *(int *)(unaff_EBP + 8)) {
      piStack_15c = (int *)0x0;
      piStack_160 = (int *)0x5c4a8c;
      puVar7 = (undefined4 *)FUN_005d0ba9();
      piStack_160 = (int *)*puVar7;
      FUN_005d09e9();
    }
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    piStack_15c = *(int **)(unaff_EBP + -0x30);
    piStack_160 = (int *)(unaff_EBP + 8);
    piVar11 = (int *)FUN_005cb02c();
    piVar11 = (int *)*piVar11;
    piVar1 = *(int **)(extraout_ECX + 0x44c);
    *(undefined4 *)(unaff_EBP + -4) = 0x1c;
    if (piVar1 != piVar11) {
      *(int **)(extraout_ECX + 0x44c) = piVar11;
      piStack_15c = (int *)0x5c4ac8;
      FUN_00424ed4();
      if (piVar1 != (int *)0x0) {
        piStack_160 = (int *)0x5c4ad2;
        piStack_15c = piVar1;
        (**(code **)(*piVar1 + 8))();
      }
    }
    piStack_15c = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_15c != (int *)0x0) {
      piStack_160 = (int *)0x5c4ae3;
      (**(code **)(*piStack_15c + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


