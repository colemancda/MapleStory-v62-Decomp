/* FUN_006b3b32 - 0x006b3b32 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b3b32(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int *extraout_ECX_07;
  int extraout_ECX_08;
  int *extraout_ECX_09;
  int *piVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  piStack_3c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  piStack_40 = (int *)0x6b3b4d;
  FUN_0081622a();
  iVar2 = DAT_00978368;
  piStack_3c = (int *)(unaff_EBP + -0x30);
  piStack_40 = (int *)0x6b3b5e;
  iVar1 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x6b3b74;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  piStack_3c = (int *)(unaff_EBP + 8);
  piStack_40 = (int *)0x6b3b83;
  FUN_00448dc6();
  *(int *)(unaff_EBP + -0x1c) = iVar2 + 0x2d14;
  iVar1 = DAT_00978358;
  bVar9 = DAT_00978358 == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar2 + 0x2e9c;
  if (bVar9) goto LAB_006b3d6d;
  if (*(int *)(*(int *)(iVar1 + 0x1744) + 4) == 0) {
    piStack_50 = *(int **)(unaff_EBP + 8);
    if (piStack_50 == (int *)0x0) {
      piStack_3c = (int *)0x80004003;
      piStack_40 = (int *)0x6b3bc5;
      FUN_00878dfb();
      piStack_50 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piStack_50;
    piStack_3c = (int *)0x40ff0000;
    piStack_40 = (int *)0x20;
    iStack_44 = 0x20;
    uStack_48 = DAT_0096a8d4;
    *(int **)(unaff_EBP + -0x24) = piStack_50;
    uStack_4c = DAT_0096a8d0;
    puStack_54 = (undefined *)0x6b3beb;
    iVar2 = (**(code **)(iVar2 + 0x8c))();
    if (iVar2 < 0) {
      puStack_54 = &DAT_00963cc8;
      uStack_58 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_60 = 0x6b3bfd;
      iStack_5c = iVar2;
      FUN_00878e09();
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    if (piVar5 == (int *)0x0) {
      puStack_54 = (undefined *)0x80004003;
      uStack_58 = 0x6b3c0e;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar5;
    puStack_54 = (undefined *)0x40ff0000;
    uStack_58 = 0x20;
    iStack_5c = 0x20;
    iStack_60 = DAT_0096a90c;
    *(int **)(unaff_EBP + -0x24) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x8c))(piVar5,DAT_0096a908);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    uVar3 = DAT_0096a94c;
    iVar2 = *piVar5;
    *(int **)(unaff_EBP + -0x24) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x8c))(piVar5,DAT_0096a948,uVar3,0x20,0x20,0x40ff0000);
    iVar1 = DAT_00978358;
    if (iVar2 < 0) {
      piStack_3c = (int *)&DAT_00963cc8;
      piStack_40 = *(int **)(unaff_EBP + -0x24);
      uStack_48 = 0x6b3c7f;
      iStack_44 = iVar2;
      FUN_00878e09();
      iVar1 = DAT_00978358;
    }
  }
  if (iVar1 == 0) goto LAB_006b3d6d;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1744) + 4);
  if (iVar2 == 0) {
LAB_006b3cba:
    piVar5 = *(int **)(unaff_EBP + 8);
    if (piVar5 == (int *)0x0) {
      piStack_3c = (int *)0x80004003;
      piStack_40 = (int *)0x6b3ccb;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar5;
    piStack_3c = (int *)0x40ff0000;
    piStack_40 = (int *)0x20;
    iStack_44 = 0x20;
    uStack_48 = 0xb;
    uStack_4c = 0x2e;
    *(int **)(unaff_EBP + -0x24) = piVar5;
    puStack_54 = (undefined *)0x6b3ce1;
    piStack_50 = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x8c))();
    if (iVar2 < 0) {
      piStack_3c = (int *)&DAT_00963cc8;
      piStack_40 = *(int **)(unaff_EBP + -0x24);
      uStack_48 = 0x6b3cf3;
      iStack_44 = iVar2;
      FUN_00878e09();
    }
    piStack_3c = (int *)0x0;
    piStack_40 = (int *)0x6b3cff;
    FUN_0051c279();
  }
  else {
    piStack_3c = *(int **)(iVar2 + 0x15c);
    piStack_40 = (int *)(iVar2 + 0x154);
    iStack_44 = 0x6b3cb4;
    iVar2 = FUN_004cd670();
    if (iVar2 == 0) goto LAB_006b3cba;
  }
  iVar2 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4);
  if (iVar2 != 0) {
    piStack_3c = *(int **)(iVar2 + 0x168);
    piStack_40 = (int *)(iVar2 + 0x160);
    iStack_44 = 0x6b3d22;
    iVar2 = FUN_004cd670();
    if (iVar2 != 0) goto LAB_006b3d6d;
  }
  piVar5 = *(int **)(unaff_EBP + 8);
  if (piVar5 == (int *)0x0) {
    piStack_3c = (int *)0x80004003;
    piStack_40 = (int *)0x6b3d39;
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar5;
  piStack_3c = (int *)0x40ff0000;
  piStack_40 = (int *)0x20;
  iStack_44 = 0x20;
  uStack_48 = 0xb;
  uStack_4c = 0x70;
  *(int **)(unaff_EBP + -0x24) = piVar5;
  puStack_54 = (undefined *)0x6b3d4f;
  piStack_50 = piVar5;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    piStack_3c = (int *)&DAT_00963cc8;
    piStack_40 = *(int **)(unaff_EBP + -0x24);
    uStack_48 = 0x6b3d61;
    iStack_44 = iVar2;
    FUN_00878e09();
  }
  piStack_3c = (int *)0x0;
  piStack_40 = (int *)0x6b3d6d;
  FUN_0051c2e6();
LAB_006b3d6d:
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x20) + 0x267);
  piVar5 = (int *)(iVar2 + 0xc);
  puVar7 = &DAT_0096a868;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  *(int **)(unaff_EBP + -0x1c) = piVar6;
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - iVar2;
  do {
    if ((puVar7 == &DAT_0096a8d0) || ((0x96a900 < (int)puVar7 && ((int)puVar7 < 0x96a9e1)))) {
      if ((puVar7 != (undefined4 *)&DAT_0096a920) && (puVar7 != (undefined4 *)&DAT_0096a928)) {
        if ((puVar7 == &DAT_0096a8d0) ||
           (((0x96a907 < (int)puVar7 && ((int)puVar7 < 0x96a949)) ||
            (puVar7 == (undefined4 *)&DAT_0096a9d0)))) {
          iVar2 = *(int *)(unaff_EBP + -0x10);
          if (*(int *)(iVar2 + 0x56c) != 0) goto LAB_006b3eea;
        }
        else {
          iVar2 = *(int *)(unaff_EBP + -0x10);
        }
        if (((((0x96a94f < (int)puVar7) && ((int)puVar7 < 0x96a989)) ||
             (puVar7 == (undefined4 *)&DAT_0096a9d8)) && (*(int *)(iVar2 + 0x56c) != 1)) ||
           ((((0x96a98f < (int)puVar7 && ((int)puVar7 < 0x96a9c9)) ||
             (puVar7 == (undefined4 *)&DAT_0096a9e0)) && (*(int *)(iVar2 + 0x56c) != 2))))
        goto LAB_006b3eea;
      }
      piVar8 = (int *)piVar6[-0x62];
      if ((int *)*piVar6 == (int *)0x0) {
        iVar2 = *piVar5;
      }
      else {
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + (int)piVar5);
        piVar8 = (int *)*piVar6;
      }
      *(uint *)(unaff_EBP + -0x24) = (uint)(iVar2 != 0);
      if (piVar8 != (int *)0x0) {
        piStack_3c = (int *)0x6b3e70;
        uVar3 = FUN_0045e2eb();
        piStack_3c = (int *)0x0;
        piStack_40 = (int *)0x0;
        iStack_44 = 0;
        uStack_48 = 0;
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        uStack_4c = 0;
        piStack_50 = (int *)0x6b3e7f;
        piStack_50 = (int *)(**(code **)(*piVar8 + 4))();
        puStack_54 = (undefined *)(puVar7[1] + 0x20);
        uStack_58 = *puVar7;
        iStack_5c = *(int *)(unaff_EBP + -0x28);
        *(int **)(unaff_EBP + -0x28) = &iStack_60;
        iStack_60 = extraout_ECX_00;
        FUN_0046fc23(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_3c = (int *)0x80004003;
            piStack_40 = (int *)0x6b3ebe;
            FUN_00878dfb();
          }
          uStack_48 = puVar7[1];
          uStack_4c = *puVar7;
          piVar5 = *(int **)(unaff_EBP + 8);
          piStack_3c = (int *)0x40ff0000;
          piStack_40 = (int *)0x20;
          iStack_44 = 0x20;
          puStack_54 = (undefined *)0x6b3eda;
          piStack_50 = piVar5;
          iVar2 = (**(code **)(*piVar5 + 0x8c))();
          if (iVar2 < 0) {
            piStack_3c = (int *)&DAT_00963cc8;
            uStack_48 = 0x6b3eea;
            iStack_44 = iVar2;
            piStack_40 = piVar5;
            FUN_00878e09();
          }
        }
      }
    }
LAB_006b3eea:
    piVar6 = (int *)(*(int *)(unaff_EBP + -0x1c) + 8);
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 8);
    puVar7 = puVar7 + 2;
    *(int **)(unaff_EBP + -0x1c) = piVar6;
    *(int **)(unaff_EBP + -0x18) = piVar5;
    if (0x96a9e0 < (int)puVar7) {
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x3eb);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + -4);
      }
      iVar2 = iVar2 + -1;
      iVar1 = *(int *)(DAT_00979110 + 0x380);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(DAT_00979110 + 900);
      *(int *)(unaff_EBP + -0x28) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      if (0 < iVar2) {
        do {
          piStack_3c = *(int **)(unaff_EBP + -0x14);
          piStack_40 = (int *)0x2;
          iStack_44 = unaff_EBP + -0x38;
          uStack_48 = 0x6b3f5a;
          iVar2 = FUN_00458c4f();
          piVar5 = *(int **)(iVar2 + 4);
          iVar2 = extraout_ECX_01;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            piStack_3c = (int *)0x0;
            piStack_40 = (int *)0x6b3f6b;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            iVar2 = extraout_ECX_02;
          }
          if (piVar5 != (int *)0x0) {
            piStack_3c = (int *)0x6b3f7a;
            iVar2 = FUN_0045e2eb();
            if (iVar2 == iVar1) {
              piStack_3c = (int *)0x6b3f85;
              iVar2 = (**(code **)(*piVar5 + 4))();
              if (iVar2 == 0) {
                piStack_3c = (int *)0x6b3f90;
                iVar2 = (**(code **)(*piVar5 + 0x18))();
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + iVar2;
              }
            }
            piStack_3c = (int *)0x6b3f9b;
            iVar4 = FUN_0045e2eb();
            iVar2 = extraout_ECX_03;
            if (iVar4 == *(int *)(unaff_EBP + -0x24)) {
              piStack_3c = (int *)0x6b3fa7;
              iVar4 = (**(code **)(*piVar5 + 4))();
              iVar2 = extraout_ECX_04;
              if (iVar4 == 0) {
                piStack_3c = (int *)0x6b3fb2;
                iVar2 = (**(code **)(*piVar5 + 0x18))();
                *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + iVar2;
                iVar2 = extraout_ECX_05;
              }
            }
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        } while (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + -0x28));
      }
      if (iVar1 != 0) {
        piStack_3c = (int *)0x0;
        piStack_40 = (int *)0x0;
        iStack_44 = 0;
        uStack_48 = 0;
        uStack_4c = 0;
        piStack_50 = (int *)0x0;
        puStack_54 = (undefined *)0x2b;
        uStack_58 = 0x2e;
        *(int **)(unaff_EBP + -0x28) = &iStack_60;
        iStack_60 = iVar2;
        iStack_5c = iVar1;
        FUN_0046fc23(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        iVar2 = extraout_ECX_06;
        if (-1 < *(int *)(unaff_EBP + -0x18)) {
          piStack_3c = (int *)0x0;
          iStack_44 = *(int *)(unaff_EBP + -0x10) + 0x570;
          *(int ***)(unaff_EBP + -0x28) = &piStack_40;
          uStack_48 = 0x6b4007;
          FUN_00424dbc();
          iStack_44 = *(int *)(unaff_EBP + -0x18);
          puStack_54 = (undefined *)(unaff_EBP + 8);
          uStack_48 = 0x1f;
          uStack_4c = 0x2e;
          *(int ***)(unaff_EBP + -0x28) = &piStack_50;
          uStack_58 = 0x6b401d;
          piStack_50 = extraout_ECX_07;
          FUN_0046fc23();
          puStack_54 = (undefined *)0x6b4022;
          FUN_007d3201();
          iVar2 = extraout_ECX_08;
        }
      }
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        piStack_3c = (int *)0x0;
        piStack_40 = (int *)0x0;
        iStack_44 = 0;
        uStack_48 = 0;
        uStack_4c = 0;
        piStack_50 = (int *)0x0;
        puStack_54 = (undefined *)0x2b;
        uStack_58 = 0x70;
        iStack_5c = *(int *)(unaff_EBP + -0x24);
        *(int **)(unaff_EBP + -0x28) = &iStack_60;
        iStack_60 = iVar2;
        FUN_0046fc23(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        if (-1 < *(int *)(unaff_EBP + -0x1c)) {
          piStack_3c = (int *)0x0;
          iStack_44 = *(int *)(unaff_EBP + -0x10) + 0x570;
          *(int ***)(unaff_EBP + -0x28) = &piStack_40;
          uStack_48 = 0x6b406f;
          FUN_00424dbc();
          iStack_44 = *(int *)(unaff_EBP + -0x1c);
          puStack_54 = (undefined *)(unaff_EBP + 8);
          uStack_48 = 0x1f;
          uStack_4c = 0x70;
          *(int ***)(unaff_EBP + -0x28) = &piStack_50;
          uStack_58 = 0x6b4085;
          piStack_50 = extraout_ECX_09;
          FUN_0046fc23();
          puStack_54 = (undefined *)0x6b408a;
          FUN_007d3201();
        }
      }
      piStack_3c = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_3c != (int *)0x0) {
        piStack_40 = (int *)0x6b409e;
        (**(code **)(*piStack_3c + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


