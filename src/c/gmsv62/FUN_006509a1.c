/* FUN_006509a1 - 0x006509a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006509a1(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  int iStack_78;
  int iStack_74;
  undefined1 *puStack_70;
  int iStack_6c;
  int *piStack_68;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0x4c);
  iVar6 = *piVar1;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar2 = extraout_ECX;
  if (iVar6 != 0) {
    *(int **)(unaff_EBP + -0x14) = (int *)(extraout_ECX + 0x48);
    iVar6 = *(int *)(extraout_ECX + 0x48);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + -4);
    }
    if (*piVar1 == 0) {
      piStack_68 = (int *)0x80004003;
      iStack_6c = 0x6509e2;
      FUN_00878dfb();
    }
    piStack_68 = (int *)0x6509e9;
    iVar2 = FUN_0040cf4d();
    if (iVar6 != iVar2) {
      piStack_68 = &DAT_00980690;
      iStack_6c = 0x6509ff;
      FUN_00403191();
      piStack_68 = &DAT_00980690;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_6c = 0x650a0b;
      FUN_00403191();
      piStack_68 = (int *)0x0;
      iStack_6c = 0;
      puStack_70 = (undefined1 *)(unaff_EBP + -0x44);
      iStack_74 = unaff_EBP + -0x34;
      *(int **)(unaff_EBP + -0x18) = &iStack_78;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00679e4e(&iStack_78,0x8a3);
      iVar6 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00405a1d(iVar6);
      FUN_00402660();
      FUN_00404a02(iVar6);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puStack_70 = (undefined1 *)0x650a55;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x24) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (iVar6 != 0) {
        piStack_68 = (int *)(unaff_EBP + -0x24);
        iStack_6c = 0x650a6b;
        piStack_68 = (int *)FUN_00404b30();
        if (((int)piStack_68 < 0) && (piStack_68 != (int *)0x80004002)) {
          iStack_6c = 0x650a7c;
          FUN_00878dfb();
        }
      }
      piStack_68 = (int *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_6c = 0x650a89;
      piStack_68 = (int *)FUN_00402bc3();
      if ((int)piStack_68 < 0) {
        iStack_6c = 0x650a94;
        FUN_00878dfb();
      }
      piStack_68 = (int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_6c = 0x650aa1;
      piStack_68 = (int *)FUN_00402bc3();
      if ((int)piStack_68 < 0) {
        iStack_6c = 0x650aac;
        FUN_00878dfb();
      }
      piStack_68 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_6c = 0x650ab9;
      piStack_68 = (int *)FUN_00402bc3();
      if ((int)piStack_68 < 0) {
        iStack_6c = 0x650ac4;
        FUN_00878dfb();
      }
      if (*piVar1 == 0) {
        piStack_68 = (int *)0x80004003;
        iStack_6c = 0x650ad2;
        FUN_00878dfb();
      }
      piStack_68 = (int *)0x650ad9;
      iStack_6c = FUN_0040cf4d();
      piStack_68 = (int *)(unaff_EBP + -0xd);
      puStack_70 = (undefined1 *)0x650ae6;
      FUN_006547eb();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar6 = 0;
      while( true ) {
        if (*piVar1 == 0) {
          piStack_68 = (int *)0x80004003;
          iStack_6c = 0x650af9;
          FUN_00878dfb();
        }
        piStack_68 = (int *)0x650b00;
        uVar3 = FUN_0040cf4d();
        if (uVar3 <= *(uint *)(unaff_EBP + -0x18)) break;
        iVar2 = **(int **)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        *(undefined4 *)(iVar6 + 0x1c8 + iVar2) = 0;
        iVar6 = iVar6 + 0x1cc;
      }
      piStack_68 = *(int **)(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_68 != (int *)0x0) {
        iStack_6c = 0x650b2d;
        (**(code **)(*piStack_68 + 8))();
      }
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
  }
  iVar6 = *(int *)(unaff_EBP + 8);
  iVar4 = iVar6 * 0x1cc;
  *(int **)(unaff_EBP + -0x14) = (int *)(iVar2 + 0x48);
  iVar2 = *(int *)(iVar4 + -4 + *(int *)(iVar2 + 0x48));
  *(int *)(unaff_EBP + 8) = iVar4;
  if (iVar2 == 0) {
    piStack_68 = (int *)0x650b58;
    FUN_0087a1b0();
    piStack_68 = (int *)0x0;
    iStack_6c = 0;
    iStack_78 = 0x650b63;
    iStack_74 = iVar6;
    puStack_70 = &stack0xffffff9c;
    iStack_74 = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_70;
    iStack_78 = 0x650b6f;
    FUN_004033a1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_74 = unaff_EBP + -100;
    iStack_78 = 0x650b7e;
    FUN_0040263d();
    iStack_78 = 0x650b85;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 9;
    puStack_70 = (undefined1 *)0x650b93;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
    *(int ***)(unaff_EBP + -0x24) = &piStack_68;
    piStack_68 = (int *)0x0;
    iStack_74 = unaff_EBP + -0x18;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_70;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_78 = 0x650bb2;
    iStack_6c = iVar6;
    FUN_004251a3();
    iStack_74 = **(undefined4 **)(unaff_EBP + -0x1c);
    iStack_78 = iVar6 + -1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00654f95();
    iStack_78 = 0x650bcc;
    FUN_0064f6a6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_68 = (int *)(unaff_EBP + -100);
    iStack_6c = 0x650bd9;
    piStack_68 = (int *)FUN_00402bc3();
    if ((int)piStack_68 < 0) {
      iStack_6c = 0x650be4;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4 + -0x1cc + **(int **)(unaff_EBP + -0x14);
}


