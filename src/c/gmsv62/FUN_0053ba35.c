/* FUN_0053ba35 - 0x0053ba35 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053ba35(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  int *piVar4;
  uint uVar5;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined *puStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  iStack_34 = unaff_EBP + -0x10;
  uStack_38 = 0x53ba50;
  FUN_00448dc6();
  iVar2 = *(int *)(extraout_ECX + 0x55c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = (int *)(iVar2 + 0x4c);
  *(int **)(unaff_EBP + -0x18) = piVar4;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_34 = 0x80004003;
    uStack_38 = 0x53ba70;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iStack_34 = 0xffffff;
  uStack_38 = 0x49;
  uStack_3c = 0xd3;
  uStack_40 = 0x1d;
  uStack_44 = 0x11;
  piStack_4c = (int *)0x53ba8c;
  piStack_48 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar2 < 0) {
    piStack_4c = (int *)&DAT_00963cc8;
    iStack_58 = 0x53ba9c;
    iStack_54 = iVar2;
    piStack_50 = piVar1;
    FUN_00878e09();
  }
  if (-1 < (int)*(uint *)(extraout_ECX + 0x558)) {
    uVar5 = 0;
    if (*piVar4 != 0) {
      uVar5 = *(uint *)(*piVar4 + -4);
    }
    if (*(uint *)(extraout_ECX + 0x558) < uVar5) goto LAB_0053baba;
  }
  *(undefined4 *)(extraout_ECX + 0x558) = 0xffffffff;
LAB_0053baba:
  if ((*piVar4 == 0) || (*(int *)(*piVar4 + -4) == 0)) {
    piStack_4c = (int *)0x0;
    piStack_50 = (int *)0x53bad0;
    FUN_004ad003();
    piStack_4c = (int *)0x53bad8;
    FUN_004125e6();
  }
  else {
    piStack_4c = (int *)0x53bae4;
    FUN_0053c15e();
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x68) + 0x38);
    uVar5 = iVar2 * 6;
    if ((int)uVar5 < (iVar2 * 3 + 6) * 2) {
      do {
        iVar2 = **(int **)(unaff_EBP + -0x18);
        if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= uVar5)) break;
        *(uint *)(unaff_EBP + -0x20) = iVar2 + uVar5 * 8;
        piStack_4c = (int *)0x53bb2e;
        uVar3 = FUN_0045e2eb();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
        piStack_50 = (int *)(unaff_EBP + -0x30);
        iStack_54 = 0x53bb3d;
        piStack_4c = (int *)uVar5;
        FUN_0053c07c();
        piStack_4c = (int *)0x0;
        piStack_50 = (int *)0x0;
        iStack_54 = 0;
        iStack_58 = 0;
        uStack_5c = 0;
        piStack_60 = (int *)0x0;
        puStack_64 = *(undefined **)(unaff_EBP + -0x24);
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x30);
        iStack_6c = *(int *)(unaff_EBP + -0x14);
        *(int **)(unaff_EBP + -0x1c) = &iStack_70;
        iStack_70 = extraout_ECX_00;
        FUN_0046fc23(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        if (uVar5 == *(uint *)(extraout_ECX + 0x558)) {
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            piStack_4c = (int *)0x80004003;
            piStack_50 = (int *)0x53bb8a;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          piStack_4c = (int *)0x401030cc;
          piStack_50 = (int *)0x20;
          iStack_54 = 0x20;
          iStack_58 = *(int *)(unaff_EBP + -0x2c);
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          uStack_5c = *(undefined4 *)(unaff_EBP + -0x30);
          puStack_64 = (undefined *)0x53bba8;
          piStack_60 = piVar4;
          iVar2 = (**(code **)(iVar2 + 0x8c))();
          if (iVar2 < 0) {
            puStack_64 = &DAT_00963cc8;
            uStack_68 = *(undefined4 *)(unaff_EBP + -0x1c);
            iStack_70 = 0x53bbba;
            iStack_6c = iVar2;
            FUN_00878e09();
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            puStack_64 = (undefined *)0x80004003;
            uStack_68 = 0x53bbcb;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          puStack_64 = (undefined *)0xaa1030cc;
          uStack_68 = 2;
          iStack_6c = 0x20;
          iStack_70 = *(int *)(unaff_EBP + -0x2c) + -1;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iVar2 = (**(code **)(iVar2 + 0x8c))(piVar4,*(undefined4 *)(unaff_EBP + -0x30));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iVar2 = (**(code **)(iVar2 + 0x8c))
                            (piVar4,*(undefined4 *)(unaff_EBP + -0x30),
                             *(int *)(unaff_EBP + -0x24) + -1,0x20,2,0xaa1030cc);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iVar2 = (**(code **)(iVar2 + 0x8c))
                            (piVar4,*(int *)(unaff_EBP + -0x30) + -1,
                             *(undefined4 *)(unaff_EBP + -0x2c),2,0x20,0xaa1030cc);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iVar2 = (**(code **)(iVar2 + 0x8c))
                            (piVar4,*(int *)(unaff_EBP + -0x28) + -1,
                             *(undefined4 *)(unaff_EBP + -0x2c),2,0x20,0xaa1030cc);
          if (iVar2 < 0) {
            piStack_4c = (int *)&DAT_00963cc8;
            piStack_50 = *(int **)(unaff_EBP + -0x1c);
            iStack_58 = 0x53bcb6;
            iStack_54 = iVar2;
            FUN_00878e09();
          }
        }
        iVar2 = *(int *)(unaff_EBP + -0x14) / 1000000;
        if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
          piStack_4c = (int *)0x53bcde;
          uVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(unaff_EBP + -0x20) + 4) + 0x18) + 0x18))
                            ();
          piStack_4c = (int *)0x0;
          *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
          iStack_54 = extraout_ECX + 0x554;
          *(int ***)(unaff_EBP + -0x1c) = &piStack_50;
          iStack_58 = 0x53bcf5;
          piStack_50 = extraout_ECX_01;
          FUN_00424dbc();
          iStack_54 = *(int *)(unaff_EBP + -0x20);
          iStack_58 = *(int *)(unaff_EBP + -0x24) + -0xc;
          uStack_5c = *(undefined4 *)(unaff_EBP + -0x30);
          puStack_64 = (undefined *)(unaff_EBP + -0x10);
          *(int ***)(unaff_EBP + -0x20) = &piStack_60;
          uStack_68 = 0x53bd11;
          piStack_60 = extraout_ECX_02;
          FUN_0046fc23();
          puStack_64 = (undefined *)0x53bd16;
          FUN_007d3201();
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (*(int *)(*(int *)(extraout_ECX + 0x68) + 0x38) * 3 + 6) * 2);
    }
    piStack_4c = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_4c != (int *)0x0) {
      piStack_50 = (int *)0x53bd3f;
      (**(code **)(*piStack_4c + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


