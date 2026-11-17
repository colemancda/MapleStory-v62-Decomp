/* ptr_004e4d7d - 0x004e4d7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_004e4d7d(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar2 < 0x3d) {
    if (iVar2 == 0x3c) {
      iVar2 = FUN_004029b9(0x748);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x12;
      if (iVar2 != 0) {
        iVar2 = FUN_00514868();
        goto LAB_004e503e;
      }
    }
    else if (iVar2 < 9) {
      if (iVar2 == 8) {
        iVar2 = FUN_004029b9(0x768);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
        if (iVar2 != 0) {
          iVar2 = FUN_004e5691();
          goto LAB_004e503e;
        }
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_004029b9(0x810);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 9;
        if (iVar2 != 0) {
          iVar2 = FUN_004e5073();
          goto LAB_004e503e;
        }
      }
      else if (iVar2 == 2) {
        iVar2 = FUN_004029b9(0x778);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 10;
        if (iVar2 != 0) {
          iVar2 = FUN_004e5330();
          goto LAB_004e503e;
        }
      }
      else if (iVar2 == 3) {
        iVar2 = FUN_004029b9(0x22b0);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        if (iVar2 != 0) {
          iVar2 = FUN_004e549e();
          goto LAB_004e503e;
        }
      }
      else {
        if (iVar2 != 4) goto LAB_004e4fa8;
        iVar2 = FUN_004029b9(0xa68);
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
        if (iVar2 != 0) {
          iVar2 = FUN_004e559f();
          goto LAB_004e503e;
        }
      }
    }
    else if (iVar2 == 9) {
      iVar2 = FUN_004029b9(0x750);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0xe;
      if (iVar2 != 0) {
        iVar2 = FUN_004e5882();
        goto LAB_004e503e;
      }
    }
    else if (iVar2 == 10) {
      iVar2 = FUN_004029b9(0x740);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0xf;
      if (iVar2 != 0) {
        iVar2 = FUN_004e59ae();
        goto LAB_004e503e;
      }
    }
    else if (iVar2 == 0xb) {
      iVar2 = FUN_004029b9(0x728);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x10;
      if (iVar2 != 0) {
        iVar2 = FUN_004e5a1d();
        goto LAB_004e503e;
      }
    }
    else {
      if (iVar2 != 0xd) goto LAB_004e4fa8;
      iVar2 = FUN_004029b9(0x738);
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x11;
      if (iVar2 != 0) {
        iVar2 = FUN_004e5a6c();
        goto LAB_004e503e;
      }
    }
  }
  else if (iVar2 == 0x3d) {
    iVar2 = FUN_004029b9(0x728);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    if (iVar2 != 0) {
      iVar2 = FUN_004e5b67();
      goto LAB_004e503e;
    }
  }
  else if (iVar2 == 0x51) {
    iVar2 = FUN_004029b9(0x728);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x14;
    if (iVar2 != 0) {
      iVar2 = FUN_00509bb9();
      goto LAB_004e503e;
    }
  }
  else if (iVar2 == 0x52) {
    iVar2 = FUN_004029b9(0x728);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x15;
    if (iVar2 != 0) {
      iVar2 = FUN_005126de();
      goto LAB_004e503e;
    }
  }
  else {
LAB_004e4fa8:
    iVar2 = FUN_004029b9(0x728);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x16;
    if (iVar2 != 0) {
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
  FUN_004f17e5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


