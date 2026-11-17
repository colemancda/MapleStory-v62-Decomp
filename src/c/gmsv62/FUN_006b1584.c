/* FUN_006b1584 - 0x006b1584 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b1584(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  undefined *puStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_30;
  int *piStack_2c;
  
  FUN_00879bb8();
  piStack_2c = *(int **)(unaff_EBP + 8);
  piStack_30 = (int *)0x6b159e;
  FUN_0081622a();
  iVar1 = DAT_00978368;
  piStack_2c = (int *)(unaff_EBP + -0x28);
  piStack_30 = (int *)0x6b15af;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar2 + 4);
  piStack_2c = (int *)0x6b15bd;
  FUN_0045e4a2();
  piStack_2c = (int *)(unaff_EBP + 8);
  piStack_30 = (int *)0x6b15c8;
  FUN_00448dc6();
  iVar2 = *(int *)(iVar1 + 0x2d70);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = *(int *)(iVar1 + 0x2d68);
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2e9c;
  if (iVar2 != 0) {
    piStack_2c = (int *)0x6b15f3;
    iVar2 = FUN_0045e2eb();
    if ((iVar2 / 100000 == 0xe) && (iVar4 == 0)) {
      piStack_40 = *(int **)(unaff_EBP + 8);
      if (piStack_40 == (int *)0x0) {
        piStack_2c = (int *)0x80004003;
        piStack_30 = (int *)0x6b1615;
        FUN_00878dfb();
        piStack_40 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piStack_40;
      piStack_2c = (int *)0x40ff0000;
      piStack_30 = (int *)0x20;
      uStack_38 = DAT_0096a8b4;
      *(int **)(unaff_EBP + -0x18) = piStack_40;
      uStack_3c = DAT_0096a8b0;
      puStack_44 = (undefined *)0x6b163a;
      iVar2 = (**(code **)(iVar2 + 0x8c))();
      if (iVar2 < 0) {
        piStack_2c = (int *)&DAT_00963cc8;
        piStack_30 = *(int **)(unaff_EBP + -0x18);
        uStack_38 = 0x6b164c;
        FUN_00878e09();
      }
    }
  }
  iVar2 = *(int *)(iVar1 + 0x2ec8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x2d40);
  }
  iVar4 = *(int *)(iVar1 + 0x2ed0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar1 + 0x2d48);
  }
  if (iVar2 != 0) {
    piStack_2c = (int *)0x6b1673;
    iVar2 = FUN_0045e2eb();
    if ((iVar2 / 10000 == 0x69) && (iVar4 == 0)) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_2c = (int *)0x80004003;
        piStack_30 = (int *)0x6b1693;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      piStack_2c = (int *)0x40ff0000;
      piStack_30 = (int *)0x20;
      uStack_38 = DAT_0096a894;
      uStack_3c = DAT_0096a890;
      puStack_44 = (undefined *)0x6b16b0;
      piStack_40 = piVar3;
      iVar2 = (**(code **)(*piVar3 + 0x8c))();
      if (iVar2 < 0) {
        piStack_2c = (int *)&DAT_00963cc8;
        uStack_38 = 0x6b16c0;
        piStack_30 = piVar3;
        FUN_00878e09();
      }
    }
  }
  if (DAT_00973a98 != 0) {
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x3ec;
    uStack_38 = 0x6b16dd;
    iVar2 = FUN_00650dae();
    if (iVar2 == 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_2c = (int *)0x80004003;
        piStack_30 = (int *)0x6b16f4;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      piStack_2c = (int *)0x40ff0000;
      piStack_30 = (int *)0x20;
      uStack_38 = DAT_0096a8f4;
      uStack_3c = DAT_0096a8f0;
      puStack_44 = (undefined *)0x6b1711;
      piStack_40 = piVar3;
      iVar2 = (**(code **)(*piVar3 + 0x8c))();
      if (iVar2 < 0) {
        puStack_44 = &DAT_00963cc8;
        uStack_50 = 0x6b1721;
        iStack_4c = iVar2;
        piStack_48 = piVar3;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_44 = (undefined *)0x80004003;
        piStack_48 = (int *)0x6b1731;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      puStack_44 = (undefined *)0x40ff0000;
      piStack_48 = (int *)0x20;
      iStack_4c = 0x20;
      uStack_50 = DAT_0096a8fc;
      iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3,DAT_0096a8f8);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3,DAT_0096a900,DAT_0096a904,0x20,0x20,0x40ff0000);
      if (iVar2 < 0) {
        piStack_2c = (int *)&DAT_00963cc8;
        uStack_38 = 0x6b179b;
        piStack_30 = piVar3;
        FUN_00878e09();
      }
    }
  }
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x267);
  piStack_30 = (int *)(iVar1 + 0x2d20);
  iVar2 = *(int *)(unaff_EBP + -0x1c) - (iVar1 + 0x2d14);
  puVar6 = &DAT_0096a868;
  *(int **)(unaff_EBP + -0x18) = piStack_30;
  *(int **)(unaff_EBP + -0x14) = piVar3;
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  while( true ) {
    if ((puVar6 != &DAT_0096a8d0) && (((int)puVar6 < 0x96a901 || (0x96a9e0 < (int)puVar6)))) {
      piVar5 = (int *)piVar3[-0x62];
      if ((int *)*piVar3 == (int *)0x0) {
        iVar2 = *piStack_30;
      }
      else {
        iVar2 = *(int *)(iVar2 + (int)piStack_30);
        piVar5 = (int *)*piVar3;
      }
      *(uint *)(unaff_EBP + -0x10) = (uint)(iVar2 != 0);
      if (piVar5 != (int *)0x0) {
        *(int ***)(unaff_EBP + -0x20) = &piStack_30;
        uStack_38 = 0x6b181b;
        piStack_2c = piVar5;
        InterlockedIncrement(piVar5 + 1);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        piStack_30 = (int *)FUN_0055540f();
        piStack_2c = (int *)0x1;
        uStack_38 = 0;
        uStack_3c = 0;
        piStack_40 = (int *)0x6b1838;
        piStack_40 = (int *)(**(code **)(*piVar5 + 4))();
        puStack_44 = (undefined *)(puVar6[1] + 0x20);
        piStack_48 = (int *)*puVar6;
        iStack_4c = 0x6b184a;
        iStack_4c = thunk_FUN_0045e2eb();
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_50;
        uStack_50 = extraout_ECX;
        FUN_0046fc23(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0048b97b();
        FUN_005558b0();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_2c = (int *)0x80004003;
            piStack_30 = (int *)0x6b187e;
            FUN_00878dfb();
          }
          uStack_38 = puVar6[1];
          uStack_3c = *puVar6;
          piVar3 = *(int **)(unaff_EBP + 8);
          piStack_2c = (int *)0x40ff0000;
          piStack_30 = (int *)0x20;
          puStack_44 = (undefined *)0x6b189a;
          piStack_40 = piVar3;
          iVar2 = (**(code **)(*piVar3 + 0x8c))();
          if (iVar2 < 0) {
            piStack_2c = (int *)&DAT_00963cc8;
            uStack_38 = 0x6b18aa;
            piStack_30 = piVar3;
            FUN_00878e09();
          }
        }
      }
    }
    piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + 8);
    piStack_30 = (int *)(*(int *)(unaff_EBP + -0x18) + 8);
    puVar6 = puVar6 + 2;
    *(int **)(unaff_EBP + -0x14) = piVar3;
    *(int **)(unaff_EBP + -0x18) = piStack_30;
    if (0x96a9e0 < (int)puVar6) break;
    iVar2 = *(int *)(unaff_EBP + -0x1c);
  }
  piStack_2c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_2c != (int *)0x0) {
    piStack_30 = (int *)0x6b18dc;
    (**(code **)(*piStack_2c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


