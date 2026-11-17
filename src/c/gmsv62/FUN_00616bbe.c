/* FUN_00616bbe - 0x00616bbe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00616bbe(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  int *piStack_50;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if ((*(int *)(unaff_EBP + 8) < 0) || (*(int *)(*(int *)(extraout_ECX + 0x84) + 0x4e0) != 0)) {
    FUN_00616a87();
    FUN_00616a87();
  }
  else {
    piVar1 = (int *)FUN_00616a66();
    if (*piVar1 != *(int *)(unaff_EBP + 8)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_50 = (int *)0x616c2f;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      *piVar1 = *(int *)(unaff_EBP + 8);
      piStack_50 = (int *)0x616c59;
      FUN_0043f93c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00424e27();
      FUN_0043210d();
      piStack_50 = (int *)0x616c74;
      uVar2 = FUN_00411641();
      *(int ***)(unaff_EBP + -0x20) = &piStack_50;
      piStack_50 = extraout_ECX_00;
      FUN_004033a1(uVar2);
      uVar2 = FUN_00617699();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        FUN_00616a87();
      }
      else {
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00403191();
        iVar3 = piVar1[5];
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar3 == 0) {
          FUN_00878dfb();
        }
        piVar1 = (int *)piVar1[5];
        piStack_50 = *(int **)(unaff_EBP + -0x30);
        iVar3 = *piVar1;
        *(int **)(unaff_EBP + -0x20) = piVar1;
        iVar3 = (**(code **)(iVar3 + 0x110))
                          (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34));
        if (iVar3 < 0) {
          piStack_50 = (int *)0x616d0c;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
      }
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_50 = (int *)(unaff_EBP + -0x10);
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      puVar4 = (undefined4 *)FUN_00616a66();
      *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
      piStack_50 = (int *)0x616d9e;
      FUN_0043f93c();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00424e27();
      FUN_0043210d();
      piStack_50 = (int *)0x616db9;
      uVar2 = FUN_00411641();
      *(int ***)(unaff_EBP + -0x1c) = &piStack_50;
      piStack_50 = extraout_ECX_01;
      FUN_004033a1(uVar2);
      uVar2 = FUN_00617699();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        FUN_00616a87();
      }
      else {
        *puVar4 = 0;
        puVar4[3] = 1;
        if (puVar4[5] == 0) {
          FUN_00878dfb();
        }
        piVar1 = (int *)puVar4[5];
        iVar3 = (**(code **)(*piVar1 + 0xb4))();
        if (iVar3 < 0) {
          piStack_50 = piVar1;
          FUN_00878e09(iVar3);
        }
        puVar4[2] = *(undefined4 *)(unaff_EBP + 0xc);
        puVar4[1] = *(undefined4 *)(unaff_EBP + 8);
        if (*(int *)(unaff_EBP + -0x14) < 0) {
          piStack_50 = (int *)0x616ef2;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          piStack_50 = (int *)(unaff_EBP + -0x40);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x616f0c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_50 = (int *)0x616f16;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
          piStack_50 = (int *)(unaff_EBP + -0x30);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x616f30;
            FUN_00878dfb();
          }
          iVar3 = puVar4[5];
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar3 == 0) {
            piStack_50 = (int *)0x616f43;
            FUN_00878dfb();
          }
          piVar1 = (int *)puVar4[5];
          iVar3 = *piVar1;
          piStack_50 = *(int **)(unaff_EBP + -0x38);
          *(int **)(unaff_EBP + 8) = piVar1;
          iVar3 = (**(code **)(iVar3 + 0x110))
                            (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x30),
                             *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                             *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar3 < 0) {
            piStack_50 = (int *)0x616f7e;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          piStack_50 = *(int **)(unaff_EBP + -0x14);
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_50 = (int *)0x616e4e;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
          piStack_50 = (int *)(unaff_EBP + -0x30);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_50 = (int *)0x616e68;
            FUN_00878dfb();
          }
          iVar3 = puVar4[5];
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar3 == 0) {
            piStack_50 = (int *)0x616e7b;
            FUN_00878dfb();
          }
          piVar1 = (int *)puVar4[5];
          iVar3 = *piVar1;
          piStack_50 = *(int **)(unaff_EBP + -0x38);
          *(int **)(unaff_EBP + 8) = piVar1;
          iVar3 = (**(code **)(iVar3 + 0x110))
                            (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x30),
                             *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                             *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar3 < 0) {
            piStack_50 = (int *)0x616eb6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        FUN_00616ff4();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


