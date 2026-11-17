/* FUN_00431693 - 0x00431693 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00431693(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar6;
  int iStack_6c;
  undefined4 *puStack_68;
  
  FUN_00879bb8();
  iVar6 = extraout_ECX[4];
  *(int **)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar6 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar6 + -4);
  }
  if (*(int *)(unaff_EBP + 8) == extraout_ECX[1] || *(int *)(unaff_EBP + 8) - extraout_ECX[1] < 0) {
    iVar6 = *extraout_ECX;
    if ((iVar6 != 0) && (*(int *)(unaff_EBP + 8) != iVar6 && -1 < *(int *)(unaff_EBP + 8) - iVar6))
    {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piVar1 = extraout_ECX;
      if (0 < *(int *)(unaff_EBP + -0x14)) {
        do {
          puStack_68 = &DAT_00980690;
          iStack_6c = 0x43183b;
          FUN_00403191();
          puStack_68 = (undefined4 *)0x3;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          iStack_6c = 0x43184e;
          uVar3 = FUN_004133f0();
          iStack_6c = (uVar3 % 5 + 1) * 100 + *(int *)(unaff_EBP + 8);
          FUN_004031b7();
          iVar6 = piVar1[2];
          uVar3 = (piVar1[3] - iVar6) + 1;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (uVar3 == 0) {
            puStack_68 = (undefined4 *)0x43188e;
            uVar2 = FUN_004133f0();
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
          }
          else {
            puStack_68 = (undefined4 *)0x43187e;
            uVar4 = FUN_004133f0();
            *(uint *)(unaff_EBP + -0x1c) = uVar4 % uVar3 + iVar6;
          }
          iVar6 = *(int *)(unaff_EBP + -0x10) * 4;
          if (*(int *)(iVar6 + piVar1[4]) == 0) {
            puStack_68 = (undefined4 *)0x80004003;
            iStack_6c = 0x4318b0;
            FUN_00878dfb();
          }
          puStack_68 = (undefined4 *)(unaff_EBP + -0x24);
          iStack_6c = 0x4318bd;
          piVar1 = (int *)FUN_004113e5();
          iVar5 = *piVar1;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar5 == 0) {
            puStack_68 = (undefined4 *)0x80004003;
            iStack_6c = 0x4318d2;
            FUN_00878dfb();
          }
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
          iStack_6c = *(int *)(unaff_EBP + -0x2c);
          puStack_68 = *(undefined4 **)(unaff_EBP + -0x28);
          *(int **)(unaff_EBP + -0x20) = piVar1;
          iVar5 = (**(code **)(iVar5 + 0x90))
                            (piVar1,*(undefined4 *)(unaff_EBP + -0x1c),0,
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                             *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
          if (iVar5 < 0) {
            puStack_68 = (undefined4 *)&DAT_00963de8;
            iStack_6c = *(int *)(unaff_EBP + -0x20);
            FUN_00878e09(iVar5);
          }
          puStack_68 = (undefined4 *)0x431917;
          FUN_004125d9();
          puStack_68 = (undefined4 *)(unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_6c = 0x431924;
          puStack_68 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_68 < 0) {
            iStack_6c = 0x43192f;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          puStack_68 = (undefined4 *)(unaff_EBP + -0x34);
          iStack_6c = 0x43193c;
          puStack_68 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_68 < 0) {
            iStack_6c = 0x431947;
            FUN_00878dfb();
          }
          puStack_68 = &DAT_00980690;
          iStack_6c = 0x431955;
          FUN_00403191();
          puStack_68 = &DAT_00980690;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          iStack_6c = 0x431965;
          FUN_00403191();
          iVar6 = *(int *)(iVar6 + *(int *)(*(int *)(unaff_EBP + -0x18) + 0x10));
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar6 == 0) {
            puStack_68 = (undefined4 *)0x80004003;
            iStack_6c = 0x431981;
            FUN_00878dfb();
          }
          puStack_68 = (undefined4 *)(unaff_EBP + -100);
          iStack_6c = unaff_EBP + -0x54;
          FUN_00425139(0x20);
          puStack_68 = (undefined4 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_6c = 0x43199f;
          puStack_68 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_68 < 0) {
            iStack_6c = 0x4319aa;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          puStack_68 = (undefined4 *)(unaff_EBP + -100);
          iStack_6c = 0x4319b7;
          puStack_68 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_68 < 0) {
            iStack_6c = 0x4319c2;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          piVar1 = *(int **)(unaff_EBP + -0x18);
        } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x14));
      }
      *piVar1 = 0;
    }
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (0 < *(int *)(unaff_EBP + -0x14)) {
      do {
        puStack_68 = &DAT_00980690;
        iStack_6c = 0x4316ea;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar6 = *(int *)(unaff_EBP + -0x10) * 4;
        if (*(int *)(iVar6 + extraout_ECX[4]) == 0) {
          puStack_68 = (undefined4 *)0x80004003;
          iStack_6c = 0x431708;
          FUN_00878dfb();
        }
        puStack_68 = (undefined4 *)0x43170f;
        iStack_6c = FUN_0042a378();
        iStack_6c = iStack_6c + 500;
        puStack_68 = (undefined4 *)0x3;
        FUN_004031b7();
        iVar5 = extraout_ECX[4];
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(iVar6 + iVar5) == 0) {
          puStack_68 = (undefined4 *)0x80004003;
          iStack_6c = 0x431734;
          FUN_00878dfb();
        }
        puStack_68 = (undefined4 *)(unaff_EBP + -0x1c);
        iStack_6c = 0x431741;
        piVar1 = (int *)FUN_004113e5();
        iVar6 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar6 == 0) {
          puStack_68 = (undefined4 *)0x80004003;
          iStack_6c = 0x431756;
          FUN_00878dfb();
        }
        piVar1 = (int *)*piVar1;
        iVar6 = *piVar1;
        iStack_6c = *(int *)(unaff_EBP + -0x3c);
        puStack_68 = *(undefined4 **)(unaff_EBP + -0x38);
        *(int **)(unaff_EBP + 8) = piVar1;
        iVar6 = (**(code **)(iVar6 + 0x90))
                          (piVar1,0,0,*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                           *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40));
        if (iVar6 < 0) {
          puStack_68 = (undefined4 *)&DAT_00963de8;
          iStack_6c = *(int *)(unaff_EBP + 8);
          FUN_00878e09(iVar6);
        }
        puStack_68 = (undefined4 *)0x43179a;
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_68 = (undefined4 *)(unaff_EBP + -0x34);
        iStack_6c = 0x4317a7;
        puStack_68 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_68 < 0) {
          iStack_6c = 0x4317b2;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_68 = (undefined4 *)(unaff_EBP + -0x44);
        iStack_6c = 0x4317bf;
        puStack_68 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_68 < 0) {
          iStack_6c = 0x4317ca;
          FUN_00878dfb();
        }
        iVar6 = *(int *)(unaff_EBP + -0x10);
        puStack_68 = (undefined4 *)0x1f4;
        iStack_6c = iVar6;
        uVar2 = FUN_004255e1();
        *(int **)(unaff_EBP + 8) = &iStack_6c;
        FUN_0041160e(uVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00424e82();
        FUN_00427b38();
        iVar6 = iVar6 + 1;
        *(int *)(unaff_EBP + -0x10) = iVar6;
      } while (iVar6 < *(int *)(unaff_EBP + -0x14));
    }
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


