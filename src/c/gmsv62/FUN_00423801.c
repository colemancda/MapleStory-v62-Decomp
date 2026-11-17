/* FUN_00423801 - 0x00423801 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00423801(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iVar5;
  int iStack_9c;
  undefined4 *local_98;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x38) = 0;
  iVar5 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(unaff_EBP + -0x14)) {
    do {
      iVar5 = *(int *)(unaff_EBP + -0x10) * 4;
      if (*(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c) + iVar5) == 0) {
        local_98 = (undefined4 *)0x80004003;
        iStack_9c = 0x423861;
        FUN_00878dfb();
      }
      local_98 = (undefined4 *)0x423868;
      uVar1 = FUN_0042503d();
      if ((uVar1 & 0xff000000) == 0) {
        local_98 = (undefined4 *)0x3;
        iStack_9c = 0;
        FUN_004031b7();
        iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c) + iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar4 == 0) {
          local_98 = (undefined4 *)0x80004003;
          iStack_9c = 0x423898;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)(unaff_EBP + -0x44);
        iStack_9c = unaff_EBP + -0x2c;
        piVar2 = (int *)FUN_00425067();
        iVar4 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar4 == 0) {
          local_98 = (undefined4 *)0x80004003;
          iStack_9c = 0x4238bd;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)0x4238c4;
        uVar3 = FUN_0040eea9();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
        local_98 = (undefined4 *)0x4238cf;
        FUN_004125e6();
        local_98 = (undefined4 *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_9c = 0x4238db;
        local_98 = (undefined4 *)FUN_00402bc3();
        if ((int)local_98 < 0) {
          iStack_9c = 0x4238e6;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)0x3;
        iStack_9c = 0;
        FUN_004031b7();
        iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c) + iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar4 == 0) {
          local_98 = (undefined4 *)0x80004003;
          iStack_9c = 0x42390b;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)(unaff_EBP + -100);
        iStack_9c = unaff_EBP + -0x28;
        piVar2 = (int *)FUN_00425067();
        iVar4 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar4 == 0) {
          local_98 = (undefined4 *)0x80004003;
          iStack_9c = 0x423930;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)0x423937;
        uVar3 = FUN_0040eed0();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
        local_98 = (undefined4 *)0x423942;
        FUN_004125e6();
        local_98 = (undefined4 *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_9c = 0x42394e;
        local_98 = (undefined4 *)FUN_00402bc3();
        if ((int)local_98 < 0) {
          iStack_9c = 0x423959;
          FUN_00878dfb();
        }
        if (*(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c) + iVar5) == 0) {
          local_98 = (undefined4 *)0x80004003;
          iStack_9c = 0x42396f;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)0x423976;
        iVar4 = FUN_00424ee1();
        *(int *)(unaff_EBP + -0x34) = iVar4 + *(int *)(unaff_EBP + -0x24);
        if (*(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c) + iVar5) == 0) {
          local_98 = (undefined4 *)0x80004003;
          iStack_9c = 0x423992;
          FUN_00878dfb();
        }
        local_98 = (undefined4 *)0x423999;
        iVar5 = FUN_00424f08();
        *(int *)(unaff_EBP + -0x30) = iVar5 + *(int *)(unaff_EBP + -0x18);
        local_98 = *(undefined4 **)(unaff_EBP + 0xc);
        *(int **)(unaff_EBP + -0x18) = &iStack_9c;
        iStack_9c = extraout_ECX_00;
        FUN_00424fdb();
        iVar5 = FUN_00423b2d(unaff_EBP + -0x34);
        if (iVar5 == 0) {
          local_98 = &DAT_00980690;
          iStack_9c = 0x4239de;
          FUN_00403191();
          local_98 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_9c = 0x4239ee;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_98 = (undefined4 *)0x4239fc;
          uVar1 = FUN_004133f0();
          iVar5 = uVar1 % 100 + 100;
          if (*(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c) + *(int *)(unaff_EBP + -0x10) * 4)
              == 0) {
            local_98 = (undefined4 *)0x80004003;
            iStack_9c = 0x423a22;
            FUN_00878dfb();
          }
          local_98 = (undefined4 *)(unaff_EBP + -0x1c);
          iStack_9c = 0x423a2d;
          FUN_004113e5();
          local_98 = (undefined4 *)(unaff_EBP + -0x54);
          iStack_9c = unaff_EBP + -0x84;
          uVar3 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00424df4(iVar5,0);
          FUN_00424f2f(iVar5,uVar3);
          local_98 = (undefined4 *)0x423a54;
          FUN_004125d9();
          local_98 = (undefined4 *)(unaff_EBP + -0x84);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_9c = 0x423a64;
          local_98 = (undefined4 *)FUN_00402bc3();
          if ((int)local_98 < 0) {
            iStack_9c = 0x423a6f;
            FUN_00878dfb();
          }
          local_98 = (undefined4 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_9c = 0x423a7b;
          local_98 = (undefined4 *)FUN_00402bc3();
          if ((int)local_98 < 0) {
            iStack_9c = 0x423a86;
            FUN_00878dfb();
          }
          local_98 = &DAT_00980690;
          iStack_9c = 0x423a97;
          FUN_00424aee();
          local_98 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_9c = 0x423aa4;
          FUN_00424aee();
          local_98 = (undefined4 *)(unaff_EBP + -0x94);
          iStack_9c = unaff_EBP + -0x74;
          uVar3 = 0x20;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_00424e27(0x20);
          FUN_00425139(uVar3);
          local_98 = (undefined4 *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_9c = 0x423adc;
          local_98 = (undefined4 *)FUN_00402bc3();
          if ((int)local_98 < 0) {
            iStack_9c = 0x423ae7;
            FUN_00878dfb();
          }
          local_98 = (undefined4 *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_9c = 0x423af6;
          local_98 = (undefined4 *)FUN_00402bc3();
          if ((int)local_98 < 0) {
            iStack_9c = 0x423b01;
            FUN_00878dfb();
          }
        }
        else {
          *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x38) = 1;
        }
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_98 = (undefined4 *)0x423b1c;
  FUN_00424ff8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


