/* FUN_0081f418 - 0x0081f418 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0081f418(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  short *psVar6;
  int *piVar7;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  int *local_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x570) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX + 0x588;
  piStack_a0 = (int *)0x81f447;
  FUN_00820e38();
  piStack_a0 = (int *)0x0;
  puStack_a4 = (undefined *)0x0;
  *(int ***)(unaff_EBP + -0x2c) = &local_a8;
  FUN_00679e4e(&local_a8,0xf8d);
  iVar2 = unaff_EBP + -0x6c;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_a8 = (int *)0x81f482;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_a0 = (int *)(unaff_EBP + -0x3c);
    puStack_a4 = (undefined *)0x81f498;
    piStack_a0 = (int *)FUN_00404b30();
    if (((int)piStack_a0 < 0) && (piStack_a0 != (int *)0x80004002)) {
      puStack_a4 = (undefined *)0x81f4a9;
      FUN_00878dfb();
    }
  }
  piStack_a0 = (int *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_a4 = (undefined *)0x81f4b6;
  piStack_a0 = (int *)FUN_00402bc3();
  if ((int)piStack_a0 < 0) {
    puStack_a4 = (undefined *)0x81f4c1;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_a0 = (int *)0x81f4d1;
    iVar2 = FUN_0040cf4d();
    if (iVar2 != 0) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_a0 = (int *)0x80004003;
        puStack_a4 = (undefined *)0x81f4e8;
        FUN_00878dfb();
      }
      piStack_a0 = (int *)0x81f4f0;
      puStack_a4 = (undefined *)FUN_0040cf4d();
      piStack_a0 = (int *)(unaff_EBP + -0x25);
      local_a8 = (int *)0x81f4fc;
      FUN_00820e75();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_a0 = (int *)0x80004003;
          puStack_a4 = (undefined *)0x81f511;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)0x81f519;
        uVar3 = FUN_0040cf4d();
        if (uVar3 <= *(uint *)(unaff_EBP + -0x20)) {
          piStack_a0 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_a0 != (int *)0x0) {
            puStack_a4 = (undefined *)0x81f7dc;
            (**(code **)(*piStack_a0 + 8))();
          }
          piStack_a0 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_a0 != (int *)0x0) {
            puStack_a4 = (undefined *)0x81f7ed;
            (**(code **)(*piStack_a0 + 8))();
          }
          goto LAB_0081f7ff;
        }
        piStack_a0 = (int *)0x81f52a;
        FUN_0087a1b0();
        piStack_a0 = (int *)0x0;
        puStack_a4 = (undefined *)0x0;
        local_a8 = (int *)&stack0xffffff64;
        uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
        *(int ***)(unaff_EBP + -0x1c) = &local_a8;
        FUN_004033a1(uVar4);
        iVar2 = unaff_EBP + -0x4c;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        local_a8 = (int *)0x81f565;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x34) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar2 != 0) {
          piStack_a0 = (int *)(unaff_EBP + -0x34);
          puStack_a4 = (undefined *)0x81f57b;
          piStack_a0 = (int *)FUN_00404b30();
          if (((int)piStack_a0 < 0) && (piStack_a0 != (int *)0x80004002)) {
            puStack_a4 = (undefined *)0x81f58c;
            FUN_00878dfb();
          }
        }
        piStack_a0 = (int *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_a4 = (undefined *)0x81f599;
        piVar5 = (int *)FUN_00402bc3();
        if ((int)piVar5 < 0) {
          puStack_a4 = (undefined *)0x81f5a4;
          piStack_a0 = piVar5;
          FUN_00878dfb();
          piStack_a0 = extraout_ECX_00;
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) break;
        local_a8 = (int *)&piStack_a0;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_a0;
        puStack_a4 = (undefined *)0xf8e;
        FUN_00679e4e();
        puStack_a4 = (undefined *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        local_a8 = (int *)0x81f5db;
        FUN_0040263d();
        local_a8 = (int *)0x81f5e2;
        psVar6 = (short *)FUN_004048a4();
        sVar1 = *psVar6;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (sVar1 == 8) {
          puStack_a4 = *(undefined **)(psVar6 + 4);
        }
        else {
          puStack_a4 = &DAT_0097812c;
        }
        piStack_a0 = (int *)0xffffffff;
        local_a8 = (int *)0x81f600;
        FUN_00454081();
        piStack_a0 = (int *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_a4 = (undefined *)0x81f610;
        piVar7 = (int *)FUN_00402bc3();
        piVar5 = piStack_a0;
        if ((int)piVar7 < 0) {
          puStack_a4 = (undefined *)0x81f61b;
          piStack_a0 = piVar7;
          FUN_00878dfb();
          piVar5 = extraout_ECX_01;
        }
        piStack_a0 = (int *)0x0;
        puStack_a4 = (undefined *)0x0;
        *(int ***)(unaff_EBP + -0x1c) = &local_a8;
        local_a8 = piVar5;
        FUN_00679e4e(&local_a8,0x3b5);
        iVar2 = unaff_EBP + -0x5c;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        local_a8 = (int *)0x81f652;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x38) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar2 != 0) {
          piStack_a0 = (int *)(unaff_EBP + -0x38);
          puStack_a4 = (undefined *)0x81f668;
          piStack_a0 = (int *)FUN_00404b30();
          if (((int)piStack_a0 < 0) && (piStack_a0 != (int *)0x80004002)) {
            puStack_a4 = (undefined *)0x81f679;
            FUN_00878dfb();
          }
        }
        piStack_a0 = (int *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_a4 = (undefined *)0x81f686;
        piVar5 = (int *)FUN_00402bc3();
        if ((int)piVar5 < 0) {
          puStack_a4 = (undefined *)0x81f691;
          piStack_a0 = piVar5;
          FUN_00878dfb();
          piStack_a0 = extraout_ECX_02;
        }
        local_a8 = (int *)&piStack_a0;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_a0;
        puStack_a4 = (undefined *)0xf8f;
        FUN_00679e4e();
        puStack_a4 = (undefined *)(unaff_EBP + -0x7c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        local_a8 = (int *)0x81f6b4;
        FUN_0040263d();
        local_a8 = (int *)0x81f6bb;
        psVar6 = (short *)FUN_004048a4();
        sVar1 = *psVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (sVar1 == 8) {
          puStack_a4 = *(undefined **)(psVar6 + 4);
        }
        else {
          puStack_a4 = &DAT_0097812c;
        }
        piStack_a0 = (int *)0xffffffff;
        local_a8 = (int *)0x81f6da;
        FUN_004184ca();
        piStack_a0 = (int *)(unaff_EBP + -0x7c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_a4 = (undefined *)0x81f6e7;
        piVar5 = (int *)FUN_00402bc3();
        if ((int)piVar5 < 0) {
          puStack_a4 = (undefined *)0x81f6f2;
          piStack_a0 = piVar5;
          FUN_00878dfb();
          piStack_a0 = extraout_ECX_03;
        }
        local_a8 = (int *)&piStack_a0;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_a0;
        puStack_a4 = (undefined *)0xf90;
        FUN_00679e4e();
        puStack_a4 = (undefined *)(unaff_EBP + -0x9c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        local_a8 = (int *)0x81f718;
        FUN_0040263d();
        local_a8 = (int *)0x81f71f;
        piStack_a0 = (int *)FUN_004048a4();
        puStack_a4 = (undefined *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        local_a8 = (int *)0x81f72d;
        piStack_a0 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_a4 = (undefined *)0x81f73c;
        piStack_a0 = (int *)FUN_0041a485();
        if (((int)piStack_a0 < 0) && (piStack_a0 != (int *)0x80004002)) {
          puStack_a4 = (undefined *)0x81f74d;
          FUN_00878dfb();
        }
        piStack_a0 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        if (piStack_a0 != (int *)0x0) {
          puStack_a4 = (undefined *)0x81f75e;
          (**(code **)(*piStack_a0 + 8))();
        }
        piStack_a0 = (int *)(unaff_EBP + -0x9c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_a4 = (undefined *)0x81f76e;
        piStack_a0 = (int *)FUN_00402bc3();
        if ((int)piStack_a0 < 0) {
          puStack_a4 = (undefined *)0x81f779;
          FUN_00878dfb();
        }
        piStack_a0 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piStack_a0 != (int *)0x0) {
          puStack_a4 = (undefined *)0x81f78a;
          (**(code **)(*piStack_a0 + 8))();
        }
        piStack_a0 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piStack_a0 != (int *)0x0) {
          puStack_a4 = (undefined *)0x81f79b;
          (**(code **)(*piStack_a0 + 8))();
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0xc;
      }
      piStack_a0 = (int *)0x81f7af;
      FUN_004027eb();
      piStack_a0 = (int *)0x81f7b7;
      FUN_004027eb();
      piStack_a0 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_a0 != (int *)0x0) {
        puStack_a4 = (undefined *)0x81f7c8;
        (**(code **)(*piStack_a0 + 8))();
      }
      uVar4 = 0;
      goto LAB_0081f802;
    }
  }
  piStack_a0 = (int *)0x81f7f7;
  FUN_004027eb();
  piStack_a0 = (int *)0x81f7ff;
  FUN_004027eb();
LAB_0081f7ff:
  uVar4 = 1;
LAB_0081f802:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


