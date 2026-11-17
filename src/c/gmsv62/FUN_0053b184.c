/* FUN_0053b184 - 0x0053b184 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053b184(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int *piVar4;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int *piStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  iStack_3c = unaff_EBP + -0x10;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  uStack_40 = 0x53b1a2;
  FUN_00448dc6();
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  piVar4 = (int *)(*(int *)(extraout_ECX + 0x564) + 0x48);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x24) = piVar4;
  if (piStack_50 == (int *)0x0) {
    iStack_3c = 0x80004003;
    uStack_40 = 0x53b1c4;
    FUN_00878dfb();
    piStack_50 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *piStack_50;
  iStack_3c = 0xffffff;
  uStack_40 = 0x49;
  uStack_44 = 0xd3;
  uStack_48 = 0x1f;
  uStack_4c = 0x11;
  *(int **)(unaff_EBP + -0x20) = piStack_50;
  piStack_54 = (int *)0x53b1e3;
  iVar1 = (**(code **)(iVar1 + 0x8c))();
  if (iVar1 < 0) {
    piStack_54 = (int *)&DAT_00963cc8;
    iStack_58 = *(int *)(unaff_EBP + -0x20);
    iStack_60 = 0x53b1f5;
    iStack_5c = iVar1;
    FUN_00878e09();
  }
  if (-1 < (int)*(uint *)(extraout_ECX + 0x560)) {
    if (*piVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*piVar4 + -4);
    }
    if (*(uint *)(extraout_ECX + 0x560) < uVar2) goto LAB_0053b217;
  }
  *(undefined4 *)(extraout_ECX + 0x560) = 0xffffffff;
LAB_0053b217:
  if ((*piVar4 == 0) || (*(int *)(*piVar4 + -4) == 0)) {
    piStack_54 = (int *)0x0;
    iStack_58 = 0x53b22b;
    FUN_004ad003();
    piStack_54 = (int *)0x53b233;
    FUN_004125e6();
  }
  else {
    piStack_54 = (int *)0x53b23f;
    FUN_0053b87b();
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x70) + 0x38);
    uVar2 = iVar1 * 6;
    *(uint *)(unaff_EBP + -0x20) = uVar2;
    if ((int)uVar2 < (iVar1 * 3 + 6) * 2) {
      do {
        iVar1 = **(int **)(unaff_EBP + -0x24);
        if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar2)) break;
        *(uint *)(unaff_EBP + -0x1c) = iVar1 + uVar2 * 8;
        piStack_54 = (int *)0x53b28c;
        uVar3 = FUN_0045e2eb();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
        iStack_58 = unaff_EBP + -0x38;
        iStack_5c = 0x53b29c;
        piStack_54 = (int *)uVar2;
        FUN_0053b79b();
        piStack_54 = (int *)0x0;
        iStack_58 = 0;
        iStack_5c = 0;
        iStack_60 = 0;
        uStack_64 = 0;
        piStack_68 = (int *)0x0;
        puStack_6c = *(undefined **)(unaff_EBP + -0x2c);
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x38);
        iStack_74 = *(int *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x28) = &iStack_78;
        iStack_78 = extraout_ECX_00;
        FUN_0046fc23(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        if (uVar2 == *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x560)) {
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            piStack_54 = (int *)0x80004003;
            iStack_58 = 0x53b2e9;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          piStack_54 = (int *)0x401030cc;
          iStack_58 = 0x20;
          iStack_5c = 0x20;
          iStack_60 = *(int *)(unaff_EBP + -0x34);
          *(int **)(unaff_EBP + -0x28) = piVar4;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
          puStack_6c = (undefined *)0x53b307;
          piStack_68 = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))();
          if (iVar1 < 0) {
            puStack_6c = &DAT_00963cc8;
            uStack_70 = *(undefined4 *)(unaff_EBP + -0x28);
            iStack_78 = 0x53b319;
            iStack_74 = iVar1;
            FUN_00878e09();
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            puStack_6c = (undefined *)0x80004003;
            uStack_70 = 0x53b32a;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          puStack_6c = (undefined *)0xaa1030cc;
          uStack_70 = 2;
          iStack_74 = 0x20;
          iStack_78 = *(int *)(unaff_EBP + -0x34) + -1;
          *(int **)(unaff_EBP + -0x28) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))(piVar4,*(undefined4 *)(unaff_EBP + -0x38));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          *(int **)(unaff_EBP + -0x28) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))
                            (piVar4,*(undefined4 *)(unaff_EBP + -0x38),
                             *(int *)(unaff_EBP + -0x2c) + -1,0x20,2,0xaa1030cc);
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          *(int **)(unaff_EBP + -0x28) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))
                            (piVar4,*(int *)(unaff_EBP + -0x38) + -1,
                             *(undefined4 *)(unaff_EBP + -0x34),2,0x20,0xaa1030cc);
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          *(int **)(unaff_EBP + -0x28) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))
                            (piVar4,*(int *)(unaff_EBP + -0x30) + -1,
                             *(undefined4 *)(unaff_EBP + -0x34),2,0x20,0xaa1030cc);
          if (iVar1 < 0) {
            piStack_54 = (int *)&DAT_00963cc8;
            iStack_58 = *(int *)(unaff_EBP + -0x28);
            iStack_60 = 0x53b415;
            iStack_5c = iVar1;
            FUN_00878e09();
          }
        }
        if (*(short *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 4) + 0xc) != 0) {
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            piStack_54 = (int *)0x80004003;
            iStack_58 = 0x53b432;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          piStack_54 = (int *)0x72363636;
          iStack_58 = 0x20;
          iStack_5c = 0x20;
          iStack_60 = *(int *)(unaff_EBP + -0x34);
          *(int **)(unaff_EBP + -0x28) = piVar4;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
          puStack_6c = (undefined *)0x53b450;
          piStack_68 = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))();
          if (iVar1 < 0) {
            piStack_54 = (int *)&DAT_00963cc8;
            iStack_58 = *(int *)(unaff_EBP + -0x28);
            iStack_60 = 0x53b462;
            iStack_5c = iVar1;
            FUN_00878e09();
          }
        }
        iVar1 = *(int *)(unaff_EBP + -0x18) / 1000000;
        if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
          piStack_54 = (int *)0x53b48a;
          iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 4) + 0x18) + 0x18))
                            ();
          piStack_54 = (int *)0x0;
          iStack_5c = *(int *)(unaff_EBP + -0x14) + 0x55c;
          *(int **)(unaff_EBP + -0x28) = &iStack_58;
          iStack_60 = 0x53b4a1;
          iStack_58 = extraout_ECX_01;
          FUN_00424dbc();
          iStack_60 = *(int *)(unaff_EBP + -0x2c) + -0xc;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
          puStack_6c = (undefined *)(unaff_EBP + -0x10);
          *(int ***)(unaff_EBP + -0x28) = &piStack_68;
          uStack_70 = 0x53b4bb;
          piStack_68 = extraout_ECX_02;
          iStack_5c = iVar1;
          FUN_0046fc23();
          puStack_6c = (undefined *)0x53b4c0;
          FUN_007d3201();
          uVar2 = *(uint *)(unaff_EBP + -0x20);
        }
        iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x70) + 0x38);
        uVar2 = uVar2 + 1;
        *(uint *)(unaff_EBP + -0x20) = uVar2;
      } while ((int)uVar2 < (iVar1 * 3 + 6) * 2);
    }
    piStack_54 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_54 != (int *)0x0) {
      iStack_58 = 0x53b4f2;
      (**(code **)(*piStack_54 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


