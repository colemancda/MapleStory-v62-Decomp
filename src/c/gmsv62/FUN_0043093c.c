/* FUN_0043093c - 0x0043093c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0043093c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_a8;
  uint uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  if (iVar5 == extraout_ECX[0xc] || iVar5 - extraout_ECX[0xc] < 0) {
    iVar1 = extraout_ECX[0xb];
    if (-1 < iVar5 - iVar1) {
      iVar5 = extraout_ECX[10];
      extraout_ECX[0xb] = extraout_ECX[9] + iVar1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (0 < iVar5) {
        do {
          piStack_88 = (int *)0x0;
          iStack_8c = 0;
          iStack_90 = 0xc00614a4;
          *(int **)(unaff_EBP + -0x24) = &iStack_94;
          iStack_98 = 0;
          iStack_9c = 0x43099a;
          iStack_94 = iVar1;
          FUN_00424e0a();
          iStack_9c = extraout_ECX[4] - extraout_ECX[2];
          iStack_98 = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          iStack_a0 = 0x4309aa;
          iStack_98 = FUN_0042517f();
          iStack_98 = iStack_98 + extraout_ECX[2];
          iStack_a0 = extraout_ECX[3] - extraout_ECX[1];
          iStack_9c = 0;
          uStack_a4 = 0x4309bd;
          iVar1 = FUN_0042517f();
          iVar5 = extraout_ECX[1];
          iStack_a0 = iStack_9c;
          *(int **)(unaff_EBP + -0x1c) = &iStack_a0;
          uStack_a4 = 0;
          uStack_a8 = 0x4309cf;
          iStack_9c = iVar1 + iVar5;
          FUN_00424dd7();
          uStack_a4 = (uint)(*extraout_ECX == 0);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_a8 = 0;
          uVar2 = FUN_00434401();
          uStack_a8 = FUN_0042517f(uVar2);
          uVar2 = FUN_00437287();
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_a8;
          FUN_00424dbc(uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0042e5bf(unaff_EBP + 8);
          *(int *)(unaff_EBP + -0x14) = extraout_ECX[6];
          iVar5 = extraout_ECX[5];
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (iVar5 != 0) {
            piStack_88 = (int *)0x430a33;
            uVar3 = FUN_004133f0();
            *(int *)(unaff_EBP + -0x14) =
                 (int)((extraout_ECX[5] - (uVar3 % 0x29 + iVar5 + -0x14)) * extraout_ECX[5]) /
                 extraout_ECX[6] + extraout_ECX[6];
          }
          iVar5 = extraout_ECX[8];
          piStack_88 = (int *)0x430a64;
          uVar3 = FUN_004133f0();
          piStack_88 = &DAT_00980690;
          iVar5 = uVar3 % 300 + iVar5 + -0x96;
          *(int *)(unaff_EBP + -0x24) = iVar5;
          iStack_8c = 0x430a81;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_88 = (int *)0x80004003;
            iStack_8c = 0x430a95;
            FUN_00878dfb();
          }
          piStack_88 = (int *)0x430a9d;
          iStack_8c = FUN_0042a378();
          iStack_8c = iStack_8c + iVar5;
          piStack_88 = (int *)0x3;
          iStack_90 = 0x430aaa;
          FUN_004031b7();
          iVar5 = *extraout_ECX;
          iVar1 = extraout_ECX[5];
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (iVar5 != 0) {
            iVar1 = -iVar1;
          }
          *(int *)(unaff_EBP + -0x18) = iVar1;
          piVar4 = *(int **)(unaff_EBP + 8);
          if (piVar4 == (int *)0x0) {
            piStack_88 = (int *)0x80004003;
            iStack_8c = 0x430acc;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + 8);
          }
          iStack_94 = *(int *)(unaff_EBP + -100);
          iStack_90 = *(int *)(unaff_EBP + -0x60);
          iVar5 = *piVar4;
          iStack_8c = *(int *)(unaff_EBP + -0x5c);
          piStack_88 = *(int **)(unaff_EBP + -0x58);
          uStack_a8 = *(undefined4 *)(unaff_EBP + -0x14);
          uStack_a4 = *(undefined4 *)(unaff_EBP + -0x54);
          iStack_a0 = *(int *)(unaff_EBP + -0x50);
          iStack_9c = *(undefined4 *)(unaff_EBP + -0x4c);
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iStack_98 = *(undefined4 *)(unaff_EBP + -0x48);
          iVar5 = (**(code **)(iVar5 + 0x94))(piVar4,*(undefined4 *)(unaff_EBP + -0x18));
          if (iVar5 < 0) {
            FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar5 = FUN_00402bc3(unaff_EBP + -100);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
          iVar5 = FUN_00402e32(unaff_EBP + -0x34,&DAT_00980690);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_004031b7(0x96,3);
          iVar5 = extraout_ECX[7];
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar5 == 0) {
            uVar3 = FUN_004133f0();
            iVar5 = (uVar3 & 0x3f) + 0x80;
          }
          *(int *)(unaff_EBP + -0x18) = iVar5;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar4 = (int *)FUN_004113e5(unaff_EBP + -0x20);
          iVar5 = *piVar4;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (iVar5 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar4 = (int *)*piVar4;
          iVar5 = *piVar4;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iVar5 = (**(code **)(iVar5 + 0x90))
                            (piVar4,*(undefined4 *)(unaff_EBP + -0x18),0,
                             *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                             *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                             *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                             *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
          if (iVar5 < 0) {
            FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
          }
          piVar4 = *(int **)(unaff_EBP + -0x20);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar5 = FUN_00402bc3(unaff_EBP + -0x34);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          iVar5 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
          if (iVar5 < 0) {
            FUN_00878dfb(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00403191(&DAT_00980690);
          piVar4 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (piVar4 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar4 = *(int **)(unaff_EBP + 8);
          }
          iVar5 = *piVar4;
          *(int **)(unaff_EBP + -0x1c) = piVar4;
          iVar5 = (**(code **)(iVar5 + 0x110))
                            (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x84),
                             *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c),
                             *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x44),
                             *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                             *(undefined4 *)(unaff_EBP + -0x38));
          if (iVar5 < 0) {
            piStack_88 = (int *)&DAT_00963df8;
            iStack_8c = *(int *)(unaff_EBP + -0x1c);
            iStack_94 = 0x430cc9;
            iStack_90 = iVar5;
            FUN_00878e09();
          }
          piStack_88 = (int *)(unaff_EBP + -0x84);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_8c = 0x430cd9;
          piStack_88 = (int *)FUN_00402bc3();
          if ((int)piStack_88 < 0) {
            iStack_8c = 0x430ce4;
            FUN_00878dfb();
          }
          piStack_88 = (int *)(unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_8c = 0x430cf1;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_8c = 0x430cfc;
            piStack_88 = (int *)iVar5;
            FUN_00878dfb();
            piStack_88 = (int *)extraout_ECX_00;
          }
          uVar2 = *(undefined4 *)(unaff_EBP + -0x24);
          iStack_90 = unaff_EBP + 8;
          *(int **)(unaff_EBP + -0x24) = &iStack_8c;
          iStack_94 = 0x430d0e;
          iStack_8c = (int)piStack_88;
          piStack_88 = (int *)uVar2;
          FUN_0041160e();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_90 = 0x430d17;
          FUN_00424e82();
          iStack_90 = 0x430d1e;
          FUN_00427b38();
          piStack_88 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar1 = extraout_ECX_01;
          if (piStack_88 != (int *)0x0) {
            iStack_8c = 0x430d2f;
            (**(code **)(*piStack_88 + 8))();
            iVar1 = extraout_ECX_02;
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < extraout_ECX[10]);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


