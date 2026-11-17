/* FUN_005a7a5a - 0x005a7a5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a7a5a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_a4;
  undefined8 local_a0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x38) = extraout_ECX + 0xe8;
  local_a0 = (double)CONCAT44(0x5a7a7d,(int)local_a0);
  FUN_005aa733();
  iVar1 = *(int *)(extraout_ECX + 0x7c);
  if (iVar1 == 0) {
LAB_005a7ebb:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar2 = *(int *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4);
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0xc);
    *(int *)(unaff_EBP + -0x2c) = *(int *)(iVar1 + 4);
    *(uint *)(unaff_EBP + -0x30) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    local_a0 = (double)CONCAT44(0x5a7abf,(int)local_a0);
    FUN_00424ed4();
    local_a0 = 6.36598737289582e-314;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_a4 = 0x5a7acd;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      local_a0 = -3.4773147956207e-310;
      FUN_00878dfb();
    }
    local_a0 = (double)CONCAT44(unaff_EBP + -0x68,unaff_EBP + -0x1c);
    iStack_a4 = 0x5a7af0;
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_a0 = (double)CONCAT44(unaff_EBP + -0x68,0x5a7afd);
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_a0 = (double)CONCAT44(iVar1,0x5a7b08);
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      local_a0 = -3.47731479562342e-310;
      FUN_00878dfb();
    }
    local_a0 = (double)CONCAT44(unaff_EBP + -0x20,0x5a7b23);
    FUN_00404e7f();
    local_a0 = 0.0;
    *(int **)(unaff_EBP + -0x24) = &iStack_a4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00679e4e(&iStack_a4,0x3ba);
    iVar1 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d(iVar1);
    FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_a4 = 0x5a7b63;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x34) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      local_a0 = (double)CONCAT44(unaff_EBP + -0x34,0x5a7b79);
      iVar1 = FUN_0041a4e5();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        local_a0 = (double)CONCAT44(iVar1,0x5a7b8a);
        FUN_00878dfb();
      }
    }
    local_a0._4_4_ = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    local_a0._0_4_ = 0x5a7b97;
    iVar2 = FUN_00402bc3();
    iVar1 = local_a0._4_4_;
    if (iVar2 < 0) {
      local_a0 = (double)CONCAT44(iVar2,0x5a7ba2);
      FUN_00878dfb();
      iVar1 = extraout_ECX_00;
    }
    local_a0 = 0.0;
    *(int **)(unaff_EBP + -0x24) = &iStack_a4;
    iStack_a4 = iVar1;
    FUN_00679e4e(&iStack_a4,0x3bb);
    iVar1 = unaff_EBP + -0x98;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040263d(iVar1);
    FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_a4 = 0x5a7bdc;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x3c) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      local_a0 = (double)CONCAT44(unaff_EBP + -0x3c,0x5a7bf2);
      iVar1 = FUN_0041a4e5();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        local_a0 = (double)CONCAT44(iVar1,0x5a7c03);
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_a0 = (double)CONCAT44(unaff_EBP + -0x98,0x5a7c13);
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_a0 = (double)CONCAT44(iVar1,0x5a7c1e);
      FUN_00878dfb();
    }
    if ((*(int *)(unaff_EBP + -0x14) != 0) && (*(int *)(unaff_EBP + -0x10) != 0)) {
      local_a0 = (double)CONCAT44(0x5a7c39,(int)local_a0);
      uVar3 = FUN_00404a94();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      local_a0 = (double)CONCAT44(0x5a7c45,(int)local_a0);
      iVar1 = FUN_00404a94();
      iVar1 = *(int *)(unaff_EBP + -0x24) - iVar1;
      if (iVar1 < 5) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          local_a0 = -3.47731479563957e-310;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          local_a0 = -3.47731479564031e-310;
          FUN_00878dfb();
        }
        local_a0 = (double)CONCAT44(0x5a7c78,(int)local_a0);
        uVar3 = FUN_00404abb();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
        local_a0 = (double)CONCAT44(0x5a7c84,(int)local_a0);
        iVar1 = FUN_00404abb();
        iVar1 = *(int *)(unaff_EBP + -0x24) - iVar1;
        if (iVar1 < 5) goto LAB_005a7e86;
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x1c);
      if (iVar2 == 0) {
        local_a0._4_4_ = 0;
        *(undefined8 **)(unaff_EBP + -0x24) = &local_a0;
        iStack_a4 = 0x5e3;
        local_a0._0_4_ = iVar1;
        FUN_00679e4e(&local_a0);
        iStack_a4 = unaff_EBP + -0x88;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_0040263d();
        uVar3 = FUN_004048a4();
        local_a0 = (double)CONCAT44(local_a0._4_4_,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_a4 = 0x5a7cd4;
        iVar2 = FUN_00412550();
        iStack_a4 = unaff_EBP + -0x88;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          local_a0 = (double)CONCAT44(iVar1,0x5a7cf3);
          FUN_00878dfb();
        }
        if (iVar2 != 0) goto LAB_005a7cff;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
      }
      else {
LAB_005a7cff:
        *(int *)(unaff_EBP + -0x24) = (3 - iVar2) * 0x1e;
        local_a0 = (double)*(int *)(unaff_EBP + -0x24);
        *(double *)(unaff_EBP + -0x28) = local_a0;
        iStack_a4 = 0x5a7d1a;
        FUN_0087ae74();
        iStack_a4 = 0x5a7d25;
        uVar3 = __ftol();
        local_a0 = *(double *)(unaff_EBP + -0x28);
        *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
        iStack_a4 = 0x5a7d33;
        FUN_0087adc4();
        local_a0 = (double)CONCAT44(0x5a7d40,(int)local_a0);
        uVar3 = __ftol();
        *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0x10) == 0) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          local_a0 = -3.47731479565835e-310;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            local_a0 = -3.47731479565889e-310;
            FUN_00878dfb();
          }
        }
        local_a0 = (double)CONCAT44(0x5a7def,(int)local_a0);
        local_a0._4_4_ = FUN_00404abb();
        local_a0._0_4_ = 0x5a7df7;
        uVar3 = FUN_00404a94();
        local_a0 = (double)CONCAT44(local_a0._4_4_,uVar3);
        iStack_a4 = 0x5a7e00;
        FUN_00424df4();
        iStack_a4 = 0x5a7e07;
        iStack_a4 = FUN_00404abb();
        FUN_00424df4();
        uVar3 = FUN_00404a94();
        (*DAT_0097b504)(unaff_EBP + -0x58,uVar3);
      }
      else {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          local_a0 = -3.47731479565202e-310;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          local_a0 = -3.47731479565276e-310;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          local_a0 = -3.4773147956536e-310;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          local_a0 = -3.47731479565454e-310;
          FUN_00878dfb();
        }
        local_a0 = (double)CONCAT44(0x5a7d97,(int)local_a0);
        local_a0._4_4_ = FUN_00404abb();
        local_a0._0_4_ = 0x5a7d9f;
        iVar1 = FUN_00404a94();
        local_a0 = (double)CONCAT44(local_a0._4_4_,-iVar1);
        iStack_a4 = 0x5a7da9;
        iStack_a4 = FUN_00404abb();
        iVar1 = FUN_00404a94();
        (*DAT_0097b504)(unaff_EBP + -0x58,-iVar1);
        *(int *)(unaff_EBP + -0x48) = -*(int *)(unaff_EBP + -0x48);
      }
      FUN_00424e27();
      iVar1 = FUN_00404abb();
      FUN_004115d9();
      iVar2 = FUN_0040eed0();
      FUN_00424e27(iVar1 + iVar2);
      iVar1 = FUN_00404a94();
      FUN_004115d9();
      iVar2 = FUN_0040eea9();
      (*DAT_0097b54c)(unaff_EBP + -0x58,iVar1 + iVar2);
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x2c);
      local_a0 = (double)CONCAT44(0xffffffff,unaff_EBP + -0x58);
      iStack_a4 = 0x5a7e86;
      FUN_005a9f43();
    }
LAB_005a7e86:
    local_a0 = (double)CONCAT44(0x5a7e8e,(int)local_a0);
    FUN_004125d9();
    local_a0 = (double)CONCAT44(0x5a7e96,(int)local_a0);
    FUN_004125d9();
    local_a0 = (double)CONCAT44(0x5a7e9e,(int)local_a0);
    FUN_004027eb();
    local_a0 = (double)CONCAT44(0x5a7ea6,(int)local_a0);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_a0 = (double)CONCAT44(0x5a7eb2,(int)local_a0);
    FUN_00412600();
    if (*(int *)(unaff_EBP + -0x30) == 0) goto LAB_005a7ebb;
    iVar1 = *(int *)(unaff_EBP + -0x30);
  } while( true );
}


