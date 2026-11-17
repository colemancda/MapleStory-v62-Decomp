/* FUN_004e4c4d - 0x004e4c4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004e4c4d(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_4c;
  int iStack_48;
  int *piStack_44;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  piStack_44 = *(int **)(unaff_EBP + 0xc);
  iStack_48 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x4e4c77;
  FUN_004e61ea();
  iStack_4c = (int)piStack_44;
  piStack_44 = (int *)0x0;
  iStack_48 = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&iStack_4c,0x3b4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004048a4(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_4c = 0x4e4cbd;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (iVar2 != 0) {
    piStack_44 = (int *)(unaff_EBP + -0x1c);
    iStack_48 = 0x4e4cd3;
    piStack_44 = (int *)FUN_00404b30();
    if (((int)piStack_44 < 0) && (piStack_44 != (int *)0x80004002)) {
      iStack_48 = 0x4e4ce4;
      FUN_00878dfb();
    }
  }
  piStack_44 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_48 = 0x4e4cf1;
  iVar2 = FUN_00402bc3();
  iStack_48 = (int)piStack_44;
  if (iVar2 < 0) {
    iStack_48 = 0x4e4cfc;
    piStack_44 = (int *)iVar2;
    FUN_00878dfb();
    iStack_48 = extraout_ECX;
  }
  piStack_44 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  iStack_4c = 0x6c5;
  FUN_00679e4e(&iStack_48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_4c = 0x4e4d1c;
  FUN_0040263d();
  iStack_4c = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_4c = 0x4e4d35;
  iVar2 = FUN_00412550();
  piStack_44 = (int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_48 = 0x4e4d49;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e4d54;
    FUN_00878dfb();
  }
  piStack_44 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_44 != (int *)0x0) {
    iStack_48 = 0x4e4d65;
    (**(code **)(*piStack_44 + 8))();
  }
  piStack_44 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_44 != (int *)0x0) {
    iStack_48 = 0x4e4d75;
    (**(code **)(*piStack_44 + 8))();
    iVar2 = FUN_004e4d82();
    return iVar2;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar2 < 0x3d) {
    if (iVar2 == 0x3c) {
      piStack_44 = (int *)0x748;
      iStack_48 = 0x4e4f79;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x12;
      if (iVar2 != 0) {
        piStack_44 = (int *)0x4e4f92;
        iVar2 = FUN_00514868();
        goto LAB_004e503e;
      }
    }
    else if (iVar2 < 9) {
      if (iVar2 == 8) {
        piStack_44 = (int *)0x768;
        iStack_48 = 0x4e4e7f;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
        if (iVar2 != 0) {
          piStack_44 = (int *)0x4e4e98;
          iVar2 = FUN_004e5691();
          goto LAB_004e503e;
        }
      }
      else if (iVar2 == 1) {
        piStack_44 = (int *)0x810;
        iStack_48 = 0x4e4e52;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 9;
        if (iVar2 != 0) {
          piStack_44 = (int *)0x4e4e6b;
          iVar2 = FUN_004e5073();
          goto LAB_004e503e;
        }
      }
      else if (iVar2 == 2) {
        piStack_44 = (int *)0x778;
        iStack_48 = 0x4e4e25;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 10;
        if (iVar2 != 0) {
          piStack_44 = (int *)0x4e4e3e;
          iVar2 = FUN_004e5330();
          goto LAB_004e503e;
        }
      }
      else if (iVar2 == 3) {
        piStack_44 = (int *)0x22b0;
        iStack_48 = 0x4e4df8;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        if (iVar2 != 0) {
          piStack_44 = (int *)0x4e4e11;
          iVar2 = FUN_004e549e();
          goto LAB_004e503e;
        }
      }
      else {
        if (iVar2 != 4) goto LAB_004e4fa8;
        piStack_44 = (int *)0xa68;
        iStack_48 = 0x4e4dcb;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
        if (iVar2 != 0) {
          piStack_44 = (int *)0x4e4de4;
          iVar2 = FUN_004e559f();
          goto LAB_004e503e;
        }
      }
    }
    else if (iVar2 == 9) {
      piStack_44 = (int *)0x750;
      iStack_48 = 0x4e4f4c;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0xe;
      if (iVar2 != 0) {
        piStack_44 = (int *)0x4e4f65;
        iVar2 = FUN_004e5882();
        goto LAB_004e503e;
      }
    }
    else if (iVar2 == 10) {
      piStack_44 = (int *)0x740;
      iStack_48 = 0x4e4f1f;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0xf;
      if (iVar2 != 0) {
        piStack_44 = (int *)0x4e4f38;
        iVar2 = FUN_004e59ae();
        goto LAB_004e503e;
      }
    }
    else if (iVar2 == 0xb) {
      piStack_44 = (int *)0x728;
      iStack_48 = 0x4e4ef2;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x10;
      if (iVar2 != 0) {
        piStack_44 = (int *)0x4e4f0b;
        iVar2 = FUN_004e5a1d();
        goto LAB_004e503e;
      }
    }
    else {
      if (iVar2 != 0xd) goto LAB_004e4fa8;
      piStack_44 = (int *)0x738;
      iStack_48 = 0x4e4ec5;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x11;
      if (iVar2 != 0) {
        piStack_44 = (int *)0x4e4ede;
        iVar2 = FUN_004e5a6c();
        goto LAB_004e503e;
      }
    }
  }
  else if (iVar2 == 0x3d) {
    piStack_44 = (int *)0x728;
    iStack_48 = 0x4e5025;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    if (iVar2 != 0) {
      piStack_44 = (int *)0x4e503a;
      iVar2 = FUN_004e5b67();
      goto LAB_004e503e;
    }
  }
  else if (iVar2 == 0x51) {
    piStack_44 = (int *)0x728;
    iStack_48 = 0x4e5003;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x14;
    if (iVar2 != 0) {
      piStack_44 = (int *)0x4e5014;
      iVar2 = FUN_00509bb9();
      goto LAB_004e503e;
    }
  }
  else if (iVar2 == 0x52) {
    piStack_44 = (int *)0x728;
    iStack_48 = 0x4e4fdd;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x15;
    if (iVar2 != 0) {
      piStack_44 = (int *)0x4e4ff2;
      iVar2 = FUN_005126de();
      goto LAB_004e503e;
    }
  }
  else {
LAB_004e4fa8:
    piStack_44 = (int *)0x728;
    iStack_48 = 0x4e4fb7;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x16;
    if (iVar2 != 0) {
      piStack_44 = (int *)0x4e4fcc;
      iVar2 = FUN_004e5bd6();
      goto LAB_004e503e;
    }
  }
  iVar2 = 0;
LAB_004e503e:
  iVar1 = *(int *)(unaff_EBP + 8);
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0xcU;
  *(uint *)(iVar1 + 4) = -(uint)(uVar3 != 0) & uVar3 - 0xc;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_44 = (int *)0x4e5062;
  FUN_004f17e5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


