/* FUN_0081bfca - 0x0081bfca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0081bfca(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  undefined1 *puVar6;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  int *piStack_70;
  
  FUN_00879bb8();
  piStack_70 = (int *)0x0;
  puStack_74 = (undefined1 *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&puStack_78,0x8d8);
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_78 = (undefined1 *)0x81c018;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_70 = (int *)(unaff_EBP + -0x20);
    puStack_74 = (undefined1 *)0x81c02e;
    piStack_70 = (int *)FUN_00404b30();
    if (((int)piStack_70 < 0) && (piStack_70 != (int *)0x80004002)) {
      puStack_74 = (undefined1 *)0x81c03f;
      FUN_00878dfb();
    }
  }
  piStack_70 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_74 = (undefined1 *)0x81c04c;
  piStack_70 = (int *)FUN_00402bc3();
  if ((int)piStack_70 < 0) {
    puStack_74 = (undefined1 *)0x81c057;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_70 = (int *)0x81c067;
    iVar1 = FUN_0040cf4d();
    if (iVar1 != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_70 = (int *)0x80004003;
          puStack_74 = (undefined1 *)0x81c081;
          FUN_00878dfb();
        }
        piStack_70 = (int *)0x81c089;
        uVar2 = FUN_0040cf4d();
        if (uVar2 <= *(uint *)(unaff_EBP + -0x1c)) {
          piStack_70 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_70 != (int *)0x0) {
            puStack_74 = (undefined1 *)0x81c2e6;
            (**(code **)(*piStack_70 + 8))();
          }
          piStack_70 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_70 != (int *)0x0) {
            puStack_74 = (undefined1 *)0x81c2f7;
            (**(code **)(*piStack_70 + 8))();
          }
          goto LAB_0081c2c0;
        }
        piStack_70 = (int *)0x81c09a;
        FUN_0087a1b0();
        piStack_70 = (int *)0x0;
        puStack_74 = (undefined1 *)0x0;
        puStack_78 = &stack0xffffff94;
        uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x1c));
        *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_78;
        FUN_004033a1(uVar3);
        iVar1 = unaff_EBP + -0x4c;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        puStack_78 = (undefined1 *)0x81c0d5;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x24) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar1 != 0) {
          piStack_70 = (int *)(unaff_EBP + -0x24);
          puStack_74 = (undefined1 *)0x81c0eb;
          piStack_70 = (int *)FUN_00404b30();
          if (((int)piStack_70 < 0) && (piStack_70 != (int *)0x80004002)) {
            puStack_74 = (undefined1 *)0x81c0fc;
            FUN_00878dfb();
          }
        }
        piStack_70 = (int *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_74 = (undefined1 *)0x81c109;
        iVar1 = FUN_00402bc3();
        piVar5 = piStack_70;
        if (iVar1 < 0) {
          puStack_74 = (undefined1 *)0x81c114;
          piStack_70 = (int *)iVar1;
          FUN_00878dfb();
          piVar5 = (int *)extraout_ECX;
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) goto LAB_0081c2a8;
        piStack_70 = (int *)0x0;
        puStack_74 = (undefined1 *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_78;
        puStack_78 = (undefined1 *)piVar5;
        FUN_00679e4e(&puStack_78,0x8d9);
        iVar1 = unaff_EBP + -0x5c;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_78 = (undefined1 *)0x81c157;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x28) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar1 != 0) {
          piStack_70 = (int *)(unaff_EBP + -0x28);
          puStack_74 = (undefined1 *)0x81c16d;
          piStack_70 = (int *)FUN_00404b30();
          if (((int)piStack_70 < 0) && (piStack_70 != (int *)0x80004002)) {
            puStack_74 = (undefined1 *)0x81c17e;
            FUN_00878dfb();
          }
        }
        piStack_70 = (int *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        puStack_74 = (undefined1 *)0x81c18b;
        piStack_70 = (int *)FUN_00402bc3();
        if ((int)piStack_70 < 0) {
          puStack_74 = (undefined1 *)0x81c196;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) break;
        piStack_70 = (int *)0x81c1a6;
        iVar1 = FUN_0040cf4d();
        if (iVar1 == 0) break;
        puVar6 = (undefined1 *)0x0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_70 = (int *)0x80004003;
            puStack_74 = (undefined1 *)0x81c1bf;
            FUN_00878dfb();
          }
          piStack_70 = (int *)0x81c1c7;
          puVar4 = (undefined1 *)FUN_0040cf4d();
          if (puVar4 <= puVar6) break;
          piStack_70 = (int *)0x81c1d3;
          FUN_0087a1b0();
          piStack_70 = (int *)0x0;
          puStack_78 = puVar6;
          puStack_74 = &stack0xffffff94;
          puStack_78 = (undefined1 *)FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
          FUN_004033a1();
          puStack_78 = (undefined1 *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_0040263d();
          puStack_74 = (undefined1 *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_78 = (undefined1 *)0x81c20a;
          iVar1 = FUN_00412550();
          puStack_78 = (undefined1 *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_70 = (int *)FUN_00402bc3();
          if ((int)piStack_70 < 0) {
            puStack_74 = (undefined1 *)0x81c226;
            FUN_00878dfb();
          }
          if (iVar1 == *(int *)(unaff_EBP + 0xc)) {
            piStack_70 = *(int **)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (piStack_70 != (int *)0x0) {
              puStack_74 = (undefined1 *)0x81c269;
              (**(code **)(*piStack_70 + 8))();
            }
            piStack_70 = *(int **)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 4;
            if (piStack_70 != (int *)0x0) {
              puStack_74 = (undefined1 *)0x81c27a;
              (**(code **)(*piStack_70 + 8))();
            }
            piStack_70 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (piStack_70 != (int *)0x0) {
              puStack_74 = (undefined1 *)0x81c28a;
              (**(code **)(*piStack_70 + 8))();
            }
            piStack_70 = *(int **)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (piStack_70 != (int *)0x0) {
              puStack_74 = (undefined1 *)0x81c29b;
              (**(code **)(*piStack_70 + 8))();
            }
            uVar3 = 1;
            goto LAB_0081c2c2;
          }
          puVar6 = puVar6 + 1;
        }
        piStack_70 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piStack_70 != (int *)0x0) {
          puStack_74 = (undefined1 *)0x81c23f;
          (**(code **)(*piStack_70 + 8))();
        }
        piStack_70 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piStack_70 != (int *)0x0) {
          puStack_74 = (undefined1 *)0x81c250;
          (**(code **)(*piStack_70 + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      piStack_70 = (int *)0x81c2a8;
      FUN_004027eb();
LAB_0081c2a8:
      piStack_70 = (int *)0x81c2b0;
      FUN_004027eb();
    }
  }
  piStack_70 = (int *)0x81c2b8;
  FUN_004027eb();
  piStack_70 = (int *)0x81c2c0;
  FUN_004027eb();
LAB_0081c2c0:
  uVar3 = 0;
LAB_0081c2c2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


