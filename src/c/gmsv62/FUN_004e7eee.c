/* FUN_004e7eee - 0x004e7eee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e7eee(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  piStack_50 = (int *)0x0;
  uStack_54 = 0;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_58;
  FUN_00679e4e(&puStack_58,0x6d7);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x3c;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_58 = (undefined1 *)0x4e7f3f;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    piStack_50 = (int *)(unaff_EBP + -0x24);
    uStack_54 = 0x4e7f55;
    piStack_50 = (int *)FUN_00404b30();
    if (((int)piStack_50 < 0) && (piStack_50 != (int *)0x80004002)) {
      uStack_54 = 0x4e7f66;
      FUN_00878dfb();
    }
  }
  piStack_50 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_54 = 0x4e7f73;
  piStack_50 = (int *)FUN_00402bc3();
  if ((int)piStack_50 < 0) {
    uStack_54 = 0x4e7f7e;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    piStack_50 = (int *)0x4e7f8e;
    uVar2 = FUN_0040cf4d();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    piStack_50 = (int *)(unaff_EBP + -0xd);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x20);
    puStack_58 = (undefined1 *)0x4e7fa5;
    FUN_004f1bc6();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (0 < *(int *)(unaff_EBP + -0x20)) {
      do {
        piStack_50 = (int *)0x4e7fbd;
        FUN_0087a1b0();
        iVar3 = *(int *)(unaff_EBP + -0x18);
        piStack_50 = (int *)0x0;
        uStack_54 = 0;
        puStack_58 = &stack0xffffffb4;
        uVar2 = FUN_00412335(iVar3);
        *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_58;
        FUN_004033a1(uVar2);
        iVar1 = unaff_EBP + -0x4c;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_58 = (undefined1 *)0x4e7ff9;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x28) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar1 != 0) {
          piStack_50 = (int *)(unaff_EBP + -0x28);
          uStack_54 = 0x4e800f;
          piStack_50 = (int *)FUN_0041a4e5();
          if (((int)piStack_50 < 0) && (piStack_50 != (int *)0x80004002)) {
            uStack_54 = 0x4e8020;
            FUN_00878dfb();
          }
        }
        piStack_50 = (int *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        uStack_54 = 0x4e802d;
        piStack_50 = (int *)FUN_00402bc3();
        if ((int)piStack_50 < 0) {
          uStack_54 = 0x4e8038;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_50 = (int *)0x80004003;
          uStack_54 = 0x4e8047;
          FUN_00878dfb();
        }
        iVar3 = iVar3 * 8;
        iVar1 = *(int *)(extraout_ECX + 0x138);
        piStack_50 = (int *)0x4e8056;
        uVar2 = FUN_00404a94();
        *(undefined4 *)(iVar3 + iVar1) = uVar2;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_50 = (int *)0x80004003;
          uStack_54 = 0x4e8068;
          FUN_00878dfb();
        }
        iVar1 = *(int *)(extraout_ECX + 0x138);
        piStack_50 = (int *)0x4e8072;
        uVar2 = FUN_00404abb();
        *(undefined4 *)(iVar3 + iVar1 + 4) = uVar2;
        piStack_50 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piStack_50 != (int *)0x0) {
          uStack_54 = 0x4e8086;
          (**(code **)(*piStack_50 + 8))();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x20));
    }
    piStack_50 = *(int **)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_50 != (int *)0x0) {
      uStack_54 = 0x4e80a8;
      (**(code **)(*piStack_50 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


