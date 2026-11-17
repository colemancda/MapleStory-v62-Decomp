/* FUN_0055495a - 0x0055495a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0055495a(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  uint uVar4;
  undefined1 auStack_74 [4];
  int iStack_70;
  uint uStack_6c;
  undefined1 *puStack_68;
  int *piStack_64;
  
  FUN_00879bb8();
  piStack_64 = &DAT_00980690;
  puStack_68 = (undefined1 *)0x55497a;
  FUN_00403191();
  piStack_64 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_68 = (undefined1 *)0x554988;
  FUN_00403191();
  piStack_64 = (int *)0x0;
  puStack_68 = (undefined1 *)0x0;
  uStack_6c = unaff_EBP + -0x40;
  iStack_70 = unaff_EBP + -0x30;
  *(undefined1 **)(unaff_EBP + -0x1c) = auStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(auStack_74,0x1139);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_6c = 0x5549d2;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_64 = (int *)(unaff_EBP + -0x14);
    puStack_68 = (undefined1 *)0x5549e8;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      puStack_68 = (undefined1 *)0x5549f9;
      FUN_00878dfb();
    }
  }
  piStack_64 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_68 = (undefined1 *)0x554a06;
  piStack_64 = (int *)FUN_00402bc3();
  if ((int)piStack_64 < 0) {
    puStack_68 = (undefined1 *)0x554a11;
    FUN_00878dfb();
  }
  piStack_64 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_68 = (undefined1 *)0x554a1e;
  piStack_64 = (int *)FUN_00402bc3();
  if ((int)piStack_64 < 0) {
    puStack_68 = (undefined1 *)0x554a29;
    FUN_00878dfb();
  }
  piStack_64 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_68 = (undefined1 *)0x554a36;
  piStack_64 = (int *)FUN_00402bc3();
  if ((int)piStack_64 < 0) {
    puStack_68 = (undefined1 *)0x554a41;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_64 = (int *)0x554a51;
    iVar1 = FUN_0040cf4d();
    if (iVar1 != 0) {
      uVar4 = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_64 = (int *)0x80004003;
          puStack_68 = (undefined1 *)0x554a6a;
          FUN_00878dfb();
        }
        piStack_64 = (int *)0x554a72;
        uVar2 = FUN_0040cf4d();
        if (uVar2 <= uVar4) break;
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
        piStack_64 = (int *)0x554a85;
        FUN_0087a1b0();
        piStack_64 = (int *)0x0;
        iStack_70 = 0x554a8f;
        uStack_6c = uVar4;
        puStack_68 = &stack0xffffffa0;
        uStack_6c = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_68;
        iStack_70 = 0x554a9b;
        FUN_004033a1();
        uStack_6c = unaff_EBP + -0x60;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_70 = 0x554aab;
        FUN_0040263d();
        iStack_70 = 0x554ab2;
        puStack_68 = (undefined1 *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_6c = 0x554abc;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
        piStack_64 = (int *)(unaff_EBP + -0x18);
        puStack_68 = (undefined1 *)(unaff_EBP + -0x1c);
        uStack_6c = 0x554ad4;
        FUN_004b8f75();
        piStack_64 = (int *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_68 = (undefined1 *)0x554ae1;
        piStack_64 = (int *)FUN_00402bc3();
        if ((int)piStack_64 < 0) {
          puStack_68 = (undefined1 *)0x554aec;
          FUN_00878dfb();
        }
        uVar4 = uVar4 + 1;
      }
    }
    piStack_64 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_64 != (int *)0x0) {
      puStack_68 = (undefined1 *)0x554b03;
      (**(code **)(*piStack_64 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


