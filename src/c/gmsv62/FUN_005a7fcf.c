/* FUN_005a7fcf - 0x005a7fcf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a7fcf(void)

{
  bool bVar1;
  int *piVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  undefined **ppuVar4;
  undefined *puStack_4c;
  int *piStack_48;
  int *piStack_44;
  undefined *puStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int *piStack_30;
  undefined *puStack_2c;
  
  FUN_00879bb8();
  bVar1 = false;
  iVar3 = *(int *)(extraout_ECX + 0x28);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar3 != 0) {
    iVar3 = *(int *)(DAT_00978134 + 0x58);
    if (iVar3 == 0) {
      iVar3 = 2;
      *(undefined4 *)(unaff_EBP + -0x10) = 3;
    }
    else if (iVar3 == 1) {
      iVar3 = 1;
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
    }
    else if (iVar3 == 2) {
      iVar3 = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
    }
    else {
      iVar3 = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    if (*(int *)(extraout_ECX + 200) != iVar3) {
      *(int *)(extraout_ECX + 200) = iVar3;
      puStack_2c = (undefined *)0x5a8041;
      FUN_0045f4fc();
      if (DAT_0097c1a8 == (int *)0x0) {
        puStack_2c = (undefined *)0x80004003;
        piStack_30 = (int *)0x5a8053;
        FUN_00878dfb();
      }
      piVar2 = DAT_0097c1a8;
      puStack_2c = (undefined *)0x0;
      piStack_30 = DAT_0097c1a8;
      iStack_34 = 0x5a8061;
      iVar3 = (**(code **)(*DAT_0097c1a8 + 0x24))();
      if (iVar3 < 0) {
        puStack_2c = &DAT_00963cf8;
        piStack_30 = piVar2;
        uStack_38 = 0x5a8071;
        iStack_34 = iVar3;
        FUN_00878e09();
      }
      bVar1 = true;
      *(undefined4 *)(extraout_ECX + 0xe4) = 1;
      puStack_2c = (undefined *)0x5a8083;
      FUN_005a0637();
      *(undefined4 *)(extraout_ECX + 0xe4) = 0;
    }
    if (*(int *)(extraout_ECX + 0xcc) != *(int *)(unaff_EBP + -0x10)) {
      *(int *)(extraout_ECX + 0xcc) = *(int *)(unaff_EBP + -0x10);
      puStack_2c = (undefined *)0x5a80a8;
      FUN_005aa6e2();
      if (!bVar1) {
        if (DAT_0097c1a8 == (int *)0x0) {
          puStack_2c = (undefined *)0x80004003;
          piStack_30 = (int *)0x5a80be;
          FUN_00878dfb();
        }
        piVar2 = DAT_0097c1a8;
        puStack_2c = (undefined *)0x0;
        piStack_30 = DAT_0097c1a8;
        iStack_34 = 0x5a80cc;
        iVar3 = (**(code **)(*DAT_0097c1a8 + 0x24))();
        if (iVar3 < 0) {
          puStack_2c = &DAT_00963cf8;
          piStack_30 = piVar2;
          uStack_38 = 0x5a80dc;
          iStack_34 = iVar3;
          FUN_00878e09();
        }
      }
      if (DAT_0097c1ac == 0) {
        puStack_2c = (undefined *)0x80004003;
        piStack_30 = (int *)0x5a80ef;
        FUN_00878dfb();
      }
      puStack_2c = (undefined *)(unaff_EBP + -0x10);
      piStack_30 = (int *)0x5a80fe;
      piVar2 = (int *)FUN_00429328();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*piVar2 == 0) {
        puStack_2c = (undefined *)0x80004003;
        piStack_30 = (int *)0x5a8113;
        FUN_00878dfb();
      }
      piVar2 = (int *)*piVar2;
      *(undefined4 *)(unaff_EBP + -0x28) = DAT_0097bb30;
      *(undefined4 *)(unaff_EBP + -0x24) = DAT_0097bb34;
      iVar3 = *piVar2;
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_0097bb38;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097bb3c;
      uStack_38 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_34 = *(undefined4 *)(unaff_EBP + -0x24);
      piStack_30 = *(int **)(unaff_EBP + -0x20);
      puStack_2c = *(undefined **)(unaff_EBP + -0x1c);
      puStack_40 = (undefined *)0x5a8133;
      piStack_3c = piVar2;
      iVar3 = (**(code **)(iVar3 + 100))();
      if (iVar3 < 0) {
        puStack_40 = &DAT_00963de8;
        puStack_4c = (undefined *)0x5a8145;
        piStack_48 = (int *)iVar3;
        piStack_44 = piVar2;
        FUN_00878e09();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_40 = (undefined *)0x5a8151;
      FUN_004125d9();
      if (DAT_0097c1ac == 0) {
        puStack_40 = (undefined *)0x80004003;
        piStack_44 = (int *)0x5a8163;
        FUN_00878dfb();
      }
      puStack_40 = (undefined *)(unaff_EBP + -0x14);
      piStack_44 = (int *)0x5a8172;
      piVar2 = (int *)FUN_00429328();
      iVar3 = *piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar3 == 0) {
        puStack_40 = (undefined *)0x80004003;
        piStack_44 = (int *)0x5a8189;
        FUN_00878dfb();
      }
      piVar2 = (int *)*piVar2;
      puStack_40 = (undefined *)0x0;
      piStack_44 = (int *)0x0;
      puStack_4c = (undefined *)0x5a8193;
      piStack_48 = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        puStack_4c = &DAT_00963d08;
        FUN_00878e09(iVar3,piVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_4c = (undefined *)0x5a81af;
      FUN_004125d9();
      puStack_4c = (undefined *)0x5a81b7;
      FUN_005a2315();
      ppuVar4 = &puStack_4c;
      *(undefined ***)(unaff_EBP + -0x18) = &puStack_4c;
      FUN_005a9f5e(&puStack_4c);
      FUN_00486ada(ppuVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00424e82();
      FUN_0042935a();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


