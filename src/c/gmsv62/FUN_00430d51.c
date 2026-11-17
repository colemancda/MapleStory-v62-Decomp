/* FUN_00430d51 - 0x00430d51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00430d51(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 == extraout_ECX[9] || iVar3 - extraout_ECX[9] < 0) {
    if (-1 < iVar3 - extraout_ECX[8]) {
      extraout_ECX[8] = extraout_ECX[6] + extraout_ECX[8];
      iVar3 = extraout_ECX[3];
      iVar5 = extraout_ECX[2] - iVar3;
      uVar2 = 4;
      iVar6 = extraout_ECX[4];
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(int *)(unaff_EBP + -0x1c) = iVar5;
      extraout_ECX[3] = (iVar3 * 3) / 4;
      iVar3 = extraout_ECX[5];
      iVar6 = iVar6 - iVar3;
      iVar1 = extraout_ECX[7];
      *(int *)(unaff_EBP + -0x20) = iVar6;
      extraout_ECX[5] = (iVar3 * 3) / 4;
      if (0 < iVar1) {
        *(int *)(unaff_EBP + -0x10) = iVar6 - (iVar6 >> 0x1f);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) >> 1;
        *(int *)(unaff_EBP + -0x14) = iVar5 - (iVar5 >> 0x1f);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) >> 1;
        while( true ) {
          piStack_50 = (int *)0xff;
          iStack_54 = 0xc00614a4;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
          iStack_5c = 0;
          iStack_60 = 0x430dfa;
          uStack_58 = uVar2;
          FUN_00424e0a();
          iStack_5c = extraout_ECX[1] - *(int *)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          iStack_64 = 0x430e0b;
          iStack_60 = iVar6;
          iStack_5c = FUN_0042517f();
          iStack_60 = *extraout_ECX - *(int *)(unaff_EBP + -0x14);
          uStack_68 = 0x430e1a;
          iStack_64 = iVar5;
          uVar2 = FUN_0042517f();
          iStack_64 = iStack_60;
          *(int **)(unaff_EBP + -0x28) = &iStack_64;
          uStack_68 = 0;
          uStack_6c = 0x430e2b;
          iStack_60 = uVar2;
          FUN_00424dd7();
          uStack_68 = 0;
          uStack_6c = 0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uVar2 = FUN_00434401();
          uStack_6c = FUN_0042517f(uVar2);
          uVar2 = FUN_00437287();
          *(undefined4 **)(unaff_EBP + -0x28) = &uStack_6c;
          FUN_00424dbc(uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0042e5bf(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          piStack_50 = (int *)0x430e7a;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
          piStack_50 = (int *)(unaff_EBP + -0x48);
          iStack_54 = 0x430e89;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x430e95;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_50 = (int *)0x430e9f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
          piStack_50 = (int *)(unaff_EBP + -0x38);
          iStack_54 = 0x430ea9;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x430eb5;
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piVar4 == (int *)0x0) {
            piStack_50 = (int *)0x430eca;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + 8);
          }
          uStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
          iStack_54 = *(int *)(unaff_EBP + -0x44);
          iVar3 = *piVar4;
          piStack_50 = *(int **)(unaff_EBP + -0x40);
          uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
          iStack_64 = *(int *)(unaff_EBP + -0x34);
          iStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
          uStack_6c = 0;
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
          iVar3 = (**(code **)(iVar3 + 0x110))(piVar4);
          if (iVar3 < 0) {
            piStack_50 = *(int **)(unaff_EBP + -0x24);
            uStack_58 = 0x430f05;
            iStack_54 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_50 = (int *)0x430f12;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x430f1d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_50 = (int *)0x430f2a;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x430f35;
            FUN_00878dfb();
          }
          piStack_50 = *(int **)(unaff_EBP + 8);
          *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffffb4;
          if (piStack_50 != (int *)0x0) {
            iStack_54 = 0x430f4d;
            (**(code **)(*piStack_50 + 4))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_50 = (int *)0x430f56;
          FUN_00424e82();
          piStack_50 = (int *)0x430f5d;
          FUN_00427af9();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = extraout_ECX_00;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            piStack_50 = (int *)0x430f6e;
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
            uVar2 = extraout_ECX_01;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          if (extraout_ECX[7] <= *(int *)(unaff_EBP + -0x18)) break;
          iVar5 = *(int *)(unaff_EBP + -0x1c);
          iVar6 = *(int *)(unaff_EBP + -0x20);
        }
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


