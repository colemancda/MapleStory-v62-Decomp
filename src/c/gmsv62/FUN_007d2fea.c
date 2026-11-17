/* FUN_007d2fea - 0x007d2fea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007d2fea(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  int *piStack_58;
  int *piStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  piVar3 = (int *)0x0;
  while( true ) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(unaff_EBP + 0x14) + -4);
    }
    if (iVar4 <= (int)piVar3) break;
    piVar1 = (int *)((int)piVar3 + 1);
    piStack_58 = piVar3;
    piStack_54 = piVar1;
    FUN_0045e053(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_54 = (int *)0x7d303b;
    piStack_58 = (int *)FUN_00449713();
    *(int ***)(unaff_EBP + -0x20) = &piStack_54;
    FUN_00432cfc();
    piStack_58 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    piStack_54 = (int *)FUN_004048a4();
    piStack_58 = (int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_54 = (int *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_58 = (int *)0x7d307b;
    FUN_004172b7();
    piStack_54 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piStack_54 != (int *)0x0) {
      piStack_58 = (int *)0x7d308c;
      (**(code **)(*piStack_54 + 8))();
    }
    piStack_54 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_58 = (int *)0x7d3099;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      piStack_58 = (int *)0x7d30a4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_54 = (int *)0x7d30b0;
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_54 = (int *)0x5;
      *(int ***)(unaff_EBP + -0x20) = &piStack_58;
      FUN_00679e4e(&piStack_58,0xa44);
      iVar4 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_0040263d(iVar4);
      piStack_58 = (int *)FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar4 = FUN_00412550();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar4 + *(int *)(unaff_EBP + 0x1c)
      ;
      piStack_54 = (int *)FUN_00402bc3(unaff_EBP + -0x50);
      if ((int)piStack_54 < 0) {
        piStack_58 = (int *)0x7d3113;
        FUN_00878dfb();
      }
    }
    else {
      piStack_54 = (int *)0x3;
      piStack_58 = (int *)0xff;
      FUN_004031b7();
      piVar3 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piVar3 == (int *)0x0) {
        piStack_54 = (int *)0x80004003;
        piStack_58 = (int *)0x7d313c;
        FUN_00878dfb();
      }
      piStack_58 = *(int **)(unaff_EBP + -0x28);
      piStack_54 = *(int **)(unaff_EBP + -0x24);
      iVar4 = (**(code **)(*piVar3 + 0x80))
                        (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar4 < 0) {
        piStack_54 = (int *)&DAT_00963cc8;
        piStack_58 = *(int **)(unaff_EBP + 8);
        FUN_00878e09(iVar4);
      }
      piStack_54 = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_58 = (int *)0x7d317b;
      piStack_54 = (int *)FUN_00402bc3();
      if ((int)piStack_54 < 0) {
        piStack_58 = (int *)0x7d3186;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_54 = (int *)0x80004003;
        piStack_58 = (int *)0x7d3196;
        FUN_00878dfb();
      }
      piStack_54 = (int *)0x7d319e;
      iVar4 = FUN_0040e48b();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar4 + *(int *)(unaff_EBP + 0x1c)
      ;
    }
    piStack_54 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piVar3 = piVar1;
    if (piStack_54 != (int *)0x0) {
      piStack_58 = (int *)0x7d31b5;
      (**(code **)(*piStack_54 + 8))();
    }
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piStack_54 = *(int **)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_54 != (int *)0x0) {
    piStack_58 = (int *)0x7d31d3;
    (**(code **)(*piStack_54 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_54 = (int *)0x7d31df;
  FUN_00414ebb();
  piStack_54 = *(int **)(unaff_EBP + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_54 != (int *)0x0) {
    piStack_58 = (int *)0x7d31f0;
    (**(code **)(*piStack_54 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4 - iVar2;
}


