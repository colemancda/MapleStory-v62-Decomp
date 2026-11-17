/* FUN_004896e6 - 0x004896e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004896e6(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar3;
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
  uStack_40 = 0x489701;
  FUN_00448dc6();
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  piVar4 = (int *)(*(int *)(extraout_ECX + 0x564) + 0x488);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x20) = piVar4;
  if (piStack_50 == (int *)0x0) {
    iStack_3c = 0x80004003;
    uStack_40 = 0x489726;
    FUN_00878dfb();
    piStack_50 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_40 = *(undefined4 *)(extraout_ECX + 0x20);
  iVar1 = *piStack_50;
  iStack_3c = 0xffffff;
  uStack_44 = 0xe5;
  uStack_48 = 0;
  uStack_4c = 0;
  *(int **)(unaff_EBP + -0x1c) = piStack_50;
  piStack_54 = (int *)0x489745;
  iVar1 = (**(code **)(iVar1 + 0x8c))();
  if (iVar1 < 0) {
    piStack_54 = (int *)&DAT_00963cc8;
    iStack_58 = *(int *)(unaff_EBP + -0x1c);
    iStack_60 = 0x489757;
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
    if (*(uint *)(extraout_ECX + 0x560) < uVar2) goto LAB_00489779;
  }
  *(undefined4 *)(extraout_ECX + 0x560) = 0xffffffff;
LAB_00489779:
  if ((*piVar4 == 0) || (*(int *)(*piVar4 + -4) == 0)) {
    piStack_54 = (int *)0x0;
    iStack_58 = 0x48978f;
    FUN_004ad003();
  }
  else {
    piStack_54 = (int *)0x48979b;
    FUN_00489eb4();
    iVar3 = *(int *)(*(int *)(extraout_ECX + 0x70) + 0x38);
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x70) + 0x38);
    piStack_54 = (int *)(iVar3 * 6);
    *(int **)(unaff_EBP + -0x14) = piStack_54;
    if ((int)piStack_54 < (iVar1 * 3 + 6) * 2) {
      iVar3 = iVar3 * 0x14a;
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      while ((iVar1 = **(int **)(unaff_EBP + -0x20), iVar1 != 0 &&
             (piStack_54 < *(uint *)(iVar1 + -4)))) {
        *(int *)(unaff_EBP + -0x28) = iVar1 + iVar3;
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + iVar3 + 0x10);
        iStack_58 = unaff_EBP + -0x38;
        iStack_5c = 0x4897fc;
        FUN_00489dd0();
        piStack_54 = (int *)0x0;
        iStack_58 = 0;
        iStack_5c = 0;
        iStack_60 = 0;
        uStack_64 = 0;
        piStack_68 = (int *)0x0;
        puStack_6c = *(undefined **)(unaff_EBP + -0x2c);
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x38);
        iStack_74 = *(int *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x24) = &iStack_78;
        iStack_78 = extraout_ECX_00;
        FUN_0046fc23(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        if (*(int *)(unaff_EBP + -0x14) == *(int *)(extraout_ECX + 0x560)) {
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            piStack_54 = (int *)0x80004003;
            iStack_58 = 0x489849;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          piStack_54 = (int *)0x401030cc;
          iStack_58 = 0x20;
          iStack_5c = 0x20;
          iStack_60 = *(int *)(unaff_EBP + -0x34);
          *(int **)(unaff_EBP + -0x24) = piVar4;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
          puStack_6c = (undefined *)0x489867;
          piStack_68 = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))();
          if (iVar1 < 0) {
            puStack_6c = &DAT_00963cc8;
            uStack_70 = *(undefined4 *)(unaff_EBP + -0x24);
            iStack_78 = 0x489879;
            iStack_74 = iVar1;
            FUN_00878e09();
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            puStack_6c = (undefined *)0x80004003;
            uStack_70 = 0x48988a;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          puStack_6c = (undefined *)0xaa1030cc;
          uStack_70 = 2;
          iStack_74 = 0x20;
          iStack_78 = *(int *)(unaff_EBP + -0x34) + -1;
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))(piVar4,*(undefined4 *)(unaff_EBP + -0x38));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))
                            (piVar4,*(undefined4 *)(unaff_EBP + -0x38),
                             *(int *)(unaff_EBP + -0x2c) + -1,0x20,2,0xaa1030cc);
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))
                            (piVar4,*(int *)(unaff_EBP + -0x38) + -1,
                             *(undefined4 *)(unaff_EBP + -0x34),2,0x20,0xaa1030cc);
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x8c))
                            (piVar4,*(int *)(unaff_EBP + -0x30) + -1,
                             *(undefined4 *)(unaff_EBP + -0x34),2,0x20,0xaa1030cc);
          if (iVar1 < 0) {
            piStack_54 = (int *)&DAT_00963cc8;
            iStack_58 = *(int *)(unaff_EBP + -0x24);
            iStack_60 = 0x489975;
            iStack_5c = iVar1;
            FUN_00878e09();
          }
        }
        piStack_54 = *(int **)(unaff_EBP + -0x18);
        iStack_58 = 0x48997d;
        iVar1 = FUN_0048b567();
        iStack_58 = (int)piStack_54;
        if (iVar1 == 0) {
          piStack_54 = *(int **)(unaff_EBP + -0x18);
          iStack_58 = 0x48998a;
          iVar1 = FUN_0048b8d9();
          iStack_58 = (int)piStack_54;
          if (iVar1 != 0) goto LAB_0048998f;
        }
        else {
LAB_0048998f:
          piStack_54 = (int *)0x0;
          *(uint *)(unaff_EBP + -0x28) = (uint)*(ushort *)(*(int *)(unaff_EBP + -0x28) + 0x18);
          iStack_5c = extraout_ECX + 0x55c;
          *(int **)(unaff_EBP + -0x24) = &iStack_58;
          iStack_60 = 0x4899ac;
          FUN_00424dbc();
          iStack_5c = *(int *)(unaff_EBP + -0x28);
          iStack_60 = *(int *)(unaff_EBP + -0x2c) + -0xc;
          uStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
          puStack_6c = (undefined *)(unaff_EBP + -0x10);
          *(int ***)(unaff_EBP + -0x28) = &piStack_68;
          uStack_70 = 0x4899c8;
          piStack_68 = extraout_ECX_01;
          FUN_0046fc23();
          puStack_6c = (undefined *)0x4899cd;
          FUN_007d3201();
        }
        iVar1 = *(int *)(*(int *)(extraout_ECX + 0x70) + 0x38);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x37;
        if ((iVar1 * 3 + 6) * 2 <= *(int *)(unaff_EBP + -0x14)) break;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        piStack_54 = *(int **)(unaff_EBP + -0x14);
      }
    }
  }
  piStack_54 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x4899fd;
    (**(code **)(*piStack_54 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


