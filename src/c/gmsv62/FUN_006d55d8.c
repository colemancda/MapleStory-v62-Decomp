/* FUN_006d55d8 - 0x006d55d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d55d8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_50;
  undefined *puStack_4c;
  
  FUN_00879bb8();
  puStack_4c = (undefined *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  piStack_50 = (int *)0x6d55f7;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_4c = (undefined *)0x0;
  piStack_50 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar4 = 0;
  puStack_4c = (undefined *)FUN_004538dc(&DAT_00964da4);
  *(undefined **)(unaff_EBP + -0x18) = puStack_4c;
  if ((int)puStack_4c < 0) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
    }
    puStack_4c = (undefined *)(iVar2 + -1);
    piStack_50 = (int *)(unaff_EBP + -0x20);
    puStack_4c = (undefined *)FUN_0045e070();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_50 = (int *)0x6d5645;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      piStack_50 = (int *)0x6d5659;
      FUN_00434e38();
    }
    puStack_4c = (undefined *)0x1;
    piStack_50 = (int *)(unaff_EBP + -0x20);
    FUN_0045e08c();
    puStack_4c = &DAT_00968204;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_50 = (int *)0x6d5678;
    iVar1 = FUN_004a3109();
    iVar2 = *(int *)(unaff_EBP + -0x20);
    uVar4 = (uint)(iVar1 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    piStack_50 = (int *)(unaff_EBP + -0x20);
    puStack_4c = (undefined *)FUN_0045e070();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_50 = (int *)0x6d56a3;
    FUN_00414f8b();
    iVar2 = *(int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (iVar2 != 0) {
    puStack_4c = (undefined *)(iVar2 + -0xc);
    piStack_50 = (int *)0x6d56b7;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xd4);
  do {
    puStack_4c = (undefined *)0x0;
    if (piVar5[-3] != 0) {
      if (*piVar5 != 0) {
        puStack_4c = (undefined *)0x6d56d6;
        puStack_4c = (undefined *)FUN_00409205();
      }
      piStack_50 = (int *)0x6d56df;
      iVar2 = FUN_004a3109();
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 100);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          iVar2 = *(int *)(unaff_EBP + -0x10) * 0x20 + *(int *)(unaff_EBP + -0x14);
          *(uint *)(iVar2 + 0xcc) = uVar4;
          if (*(int *)(iVar2 + 0xc4) == 0) {
            puStack_4c = (undefined *)0x80004003;
            piStack_50 = (int *)0x6d5729;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(iVar2 + 0xc4);
          puStack_4c = (undefined *)(-(uint)(uVar4 != 0) & 0xcfffffff);
          piStack_50 = piVar5;
          iVar1 = (**(code **)(*piVar5 + 0xe0))();
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,piVar5,&DAT_00963df8);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00403191(&DAT_00980690);
          iVar1 = *(int *)(iVar2 + 0xc4);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar1 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(iVar2 + 0xc4);
          iVar2 = *piVar5;
          *(int **)(unaff_EBP + -0x20) = piVar5;
          iVar2 = (**(code **)(iVar2 + 0x110))
                            (piVar5,-(uVar4 != 0) & 0x20,*(undefined4 *)(unaff_EBP + -0x38),
                             *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                             *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar2 < 0) {
            puStack_4c = &DAT_00963df8;
            piStack_50 = *(int **)(unaff_EBP + -0x20);
            FUN_00878e09(iVar2);
          }
          puStack_4c = (undefined *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          piStack_50 = (int *)0x6d57d8;
          puStack_4c = (undefined *)FUN_00402bc3();
          if ((int)puStack_4c < 0) {
            piStack_50 = (int *)0x6d57e3;
            FUN_00878dfb();
          }
          puStack_4c = (undefined *)(unaff_EBP + -0x48);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_50 = (int *)0x6d57f0;
          puStack_4c = (undefined *)FUN_00402bc3();
          if ((int)puStack_4c < 0) {
            piStack_50 = (int *)0x6d57fb;
            FUN_00878dfb();
          }
        }
        iVar2 = 0;
        puStack_4c = (undefined *)0x0;
        if (*(int *)(unaff_EBP + -0x18) < 0) {
          piStack_50 = (int *)0x6d5927;
          FUN_008161f1();
        }
        else {
          piStack_50 = (int *)0x0;
          puStack_4c = (undefined *)FUN_004538dc(&DAT_00964da4);
          piStack_50 = (int *)(unaff_EBP + -0x20);
          FUN_0045e070();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + 8) != 0) {
            iVar2 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
          }
          puStack_4c = (undefined *)0x0;
          piStack_50 = (int *)0x0;
          iVar1 = FUN_004538dc(&DAT_00964da4);
          puStack_4c = (undefined *)((iVar2 - iVar1) + -3);
          piStack_50 = (int *)(unaff_EBP + -0x18);
          FUN_0045e08c();
          puStack_4c = (undefined *)0x1;
          piStack_50 = (int *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          uVar3 = FUN_00415015(0x400,1);
          FUN_00471777(uVar3);
          puStack_4c = (undefined *)0xffffffff;
          piStack_50 = (int *)0x6d5879;
          FUN_004150c0();
          puStack_4c = *(undefined **)(unaff_EBP + -0x10);
          piStack_50 = (int *)&DAT_00964da4;
          FUN_004653c5(unaff_EBP + -0x24);
          piStack_50 = (int *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_0045e02d(unaff_EBP + -0x10);
          *(int ***)(unaff_EBP + -0x28) = &piStack_50;
          uVar6 = 0xffffffff;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          uVar3 = FUN_00449713(0xffffffff);
          FUN_004dbb20(uVar3,uVar6);
          FUN_006d2ea2();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x10) + -0xc);
            piStack_50 = (int *)0x6d58d3;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x24) + -0xc);
            piStack_50 = (int *)0x6d58e8;
            FUN_00434e38();
          }
          puStack_4c = (undefined *)0x1;
          piStack_50 = (int *)0x6d58f3;
          FUN_006d2e81();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x18) + -0xc);
            piStack_50 = (int *)0x6d5907;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
            piStack_50 = (int *)0x6d591c;
            FUN_00434e38();
          }
        }
        goto LAB_006d5927;
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    piVar5 = piVar5 + 8;
    if (2 < *(int *)(unaff_EBP + -0x10)) {
LAB_006d5927:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_4c = (undefined *)0x6d5933;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_4c = (undefined *)0x6d593f;
      FUN_00414ebb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


