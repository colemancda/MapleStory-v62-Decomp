/* FUN_00428874 - 0x00428874 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00428874(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  undefined1 auStack_5c [4];
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  
  FUN_00879bb8();
  piStack_4c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_50 = 0x428899;
  FUN_00403191();
  piStack_4c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_50 = 0x4288a6;
  FUN_00403191();
  piStack_4c = (int *)0x0;
  uStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar4 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_54 = 0x4288e8;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 != 0) {
    piStack_4c = (int *)(unaff_EBP + -0x14);
    uStack_50 = 0x4288fe;
    piStack_4c = (int *)FUN_00404b30();
    if (((int)piStack_4c < 0) && (piStack_4c != (int *)0x80004002)) {
      uStack_50 = 0x42890f;
      FUN_00878dfb();
    }
  }
  piStack_4c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_50 = 0x42891c;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    uStack_50 = 0x428927;
    FUN_00878dfb();
  }
  piStack_4c = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_50 = 0x428934;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    uStack_50 = 0x42893f;
    FUN_00878dfb();
  }
  piStack_4c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_50 = 0x42894c;
  piStack_4c = (int *)FUN_00402bc3();
  if ((int)piStack_4c < 0) {
    uStack_50 = 0x428957;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_4c = (int *)0x428965;
    iVar5 = FUN_007d1e08();
    piStack_4c = (int *)0x428972;
    piVar6 = (int *)FUN_00436baa();
    piVar1 = *(int **)(unaff_EBP + 0x10);
    *piVar6 = *piVar1;
    piVar6[1] = piVar1[1];
    iVar4 = piVar1[2];
    iVar2 = *piVar1;
    piVar6[2] = iVar4 - iVar2;
    piVar6[3] = ((iVar4 - iVar2) * 5) / 6;
    iVar4 = piVar1[3];
    iVar2 = piVar1[1];
    piVar6[4] = iVar4 - iVar2;
    piVar6[8] = iVar5;
    piVar6[5] = ((iVar4 - iVar2) * 5) / 6;
    piVar6[6] = *(int *)(unaff_EBP + 0x14);
    piVar6[7] = *(int *)(unaff_EBP + 0x18);
    piStack_4c = (int *)(unaff_EBP + 0xc);
    piVar6[9] = iVar5 + *(int *)(unaff_EBP + 0x20);
    uStack_50 = 0x4289cc;
    FUN_00419192();
    piVar6[0xb] = 0;
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      uStack_50 = 0x4289e0;
      piStack_4c = piVar1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar1 != (int *)0x0) {
      piVar3 = (int *)piVar6[0xc];
      if (piVar3 != piVar1) {
        piVar6[0xc] = (int)piVar1;
        piStack_4c = (int *)0x4289f8;
        FUN_004125cc();
        if (piVar3 != (int *)0x0) {
          uStack_50 = 0x428a02;
          piStack_4c = piVar3;
          (**(code **)(*piVar3 + 8))();
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar1 != (int *)0x0) {
      uStack_50 = 0x428a10;
      piStack_4c = piVar1;
      (**(code **)(*piVar1 + 8))();
    }
    piStack_4c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_4c != (int *)0x0) {
      uStack_50 = 0x428a21;
      (**(code **)(*piStack_4c + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_4c = (int *)0x428a2d;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


