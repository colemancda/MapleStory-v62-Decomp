/* FUN_008320df - 0x008320df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008320df(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 < 7) {
    if (iVar1 == 6) {
      if (*(int *)(extraout_ECX + 0x31dc) == 0) {
        iVar1 = FUN_004029b9(0x610);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_006fd57f();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0083d6bc(uVar2);
      }
    }
    else if (iVar1 == 0) {
      if (*(int *)(extraout_ECX + 0x31ac) == 0) {
        iVar1 = FUN_004029b9(0x5bc);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_006c0466();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0083d505(uVar2);
      }
    }
    else if (iVar1 == 1) {
      if (*(int *)(extraout_ECX + 0x31b4) == 0) {
        iVar1 = FUN_004029b9(0x590);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_006b0a31();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0083d54f(uVar2);
      }
    }
    else if (iVar1 == 2) {
      if (*(int *)(extraout_ECX + 0x31bc) == 0) {
        iVar1 = FUN_004029b9(0x5ec);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0072f48a(0);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0083d599(uVar2);
      }
    }
    else if (iVar1 == 3) {
      if (*(int *)(extraout_ECX + 0x31c4) == 0) {
        iVar1 = FUN_004029b9(0x5fc);
        *(int *)(unaff_EBP + 8) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_00720134(0);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0083d5e3(uVar2);
      }
    }
    else if ((iVar1 == 5) && (*(int *)(extraout_ECX + 0x31cc) == 0)) {
      iVar1 = FUN_004029b9(0xb94);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_006c5664();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0083d62d(uVar2);
    }
  }
  else if (iVar1 == 10) {
    if (*(int *)(extraout_ECX + 0x31e4) == 0) {
      iVar1 = FUN_004029b9(0xbac);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0076127e();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0083d706(uVar2);
    }
  }
  else if (iVar1 == 0xb) {
    if (*(int *)(extraout_ECX + 0x31f4) == 0) {
      iVar1 = FUN_004029b9(0x678);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_006b974e();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0083d755(uVar2);
    }
  }
  else if (iVar1 == 0x12) {
    if (*(int *)(extraout_ECX + 0x3204) == 0) {
      iVar1 = FUN_004029b9(0xb20);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 7;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_006eff8c();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0083d7a4(uVar2);
    }
  }
  else if (iVar1 == 0x14) {
    if (*(int *)(extraout_ECX + 0x320c) == 0) {
      iVar1 = FUN_004029b9(0x580);
      *(int *)(unaff_EBP + 8) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_006ad7df();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0083d7ee(uVar2);
    }
  }
  else if ((iVar1 == 0x16) && (*(int *)(extraout_ECX + 0x3224) == 0)) {
    iVar1 = FUN_004029b9(0x67c);
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(extraout_ECX + 0x31d4);
      *(int *)(unaff_EBP + 8) = iVar1 + 4;
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x18);
      iVar4 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x30))();
      iVar1 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x2c))(uVar2);
      iVar4 = FUN_0042fb0a();
      uVar2 = FUN_006f755d(iVar1 + iVar4,uVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    FUN_0083d84e(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
       (piVar3 = *(int **)(unaff_EBP + -0x18), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


