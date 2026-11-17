/* FUN_0042d941 - 0x0042d941 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042d941(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (-2 < *(int *)(unaff_EBP + 0x1c)) {
    do {
      if (-1 < *(int *)(unaff_EBP + -0x14)) {
        FUN_0087a1b0();
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_58 = 0x42d988;
        piStack_50 = (int *)&stack0xffffffb8;
        FUN_0087a25a();
      }
      piStack_50 = (int *)(unaff_EBP + -0x1c);
      iStack_54 = 0x42d9a7;
      puVar1 = (undefined4 *)FUN_00679d86();
      iStack_54 = *puVar1;
      piStack_50 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_58 = unaff_EBP + -0x18;
      iStack_5c = 0x42d9bb;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      piStack_50 = (int *)0xff;
      iStack_54 = *(int *)(unaff_EBP + 0x20);
      iStack_5c = unaff_EBP + 0x14;
      *(int **)(unaff_EBP + -0x20) = &iStack_58;
      uStack_60 = 0x42d9e2;
      iStack_58 = extraout_ECX_00;
      FUN_0041160e();
      iStack_5c = 0;
      uStack_60 = 0;
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_64;
      uStack_64 = extraout_ECX_01;
      FUN_00433bdf(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar2 = FUN_00411641(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      piStack_50 = (int *)0x42da26;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      piStack_50 = (int *)(unaff_EBP + -0x38);
      iStack_54 = 0x42da34;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_50 = (int *)0x42da40;
        FUN_00878dfb();
      }
      piStack_50 = *(int **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_54 = 0x42da51;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piVar4 == (int *)0x0) {
        piStack_50 = (int *)0x42da66;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iStack_58 = *(int *)(unaff_EBP + -0x38);
      iStack_54 = *(int *)(unaff_EBP + -0x34);
      iVar3 = *piVar4;
      piStack_50 = *(int **)(unaff_EBP + -0x30);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
      iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0x48));
      if (iVar3 < 0) {
        piStack_50 = *(int **)(unaff_EBP + -0x20);
        iStack_58 = 0x42daa0;
        iStack_54 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_50 = (int *)0x42daad;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_50 = (int *)0x42dab8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_50 = (int *)0x42dac5;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_50 = (int *)0x42dad0;
        FUN_00878dfb();
      }
      piStack_50 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffffb4;
      if (piStack_50 != (int *)0x0) {
        iStack_54 = 0x42dae8;
        (**(code **)(*piStack_50 + 4))();
      }
      piStack_50 = (int *)0x42daf0;
      FUN_00427af9();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_50 = (int *)0x42db01;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + 0x1c));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    piStack_50 = (int *)0x42db2c;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
    piStack_50 = (int *)0x42db3d;
    (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


