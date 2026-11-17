/* FUN_0080efb3 - 0x0080efb3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080efb3(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  int extraout_ECX_03;
  int *piVar6;
  int unaff_EBP;
  undefined1 auStack_84 [4];
  int iStack_80;
  int *piStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_64;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x9c) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(int *)(unaff_EBP + -0x1c) = iVar2 * 0x1c;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x67;
  iVar2 = extraout_ECX;
  do {
    iVar4 = *(int *)(iVar2 + 0xac);
    if ((iVar4 != 0) &&
       (uStack_64 = *(uint *)(unaff_EBP + -0x18), uStack_64 < *(uint *)(iVar4 + -4))) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      piVar6 = (int *)(*(int *)(unaff_EBP + -0x1c) + iVar4);
      uVar1 = *(uint *)(iVar2 + 200);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (uVar1 == uStack_64) {
        uStack_64 = 0xff;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar2 + 0xbc);
        piVar3 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar3 == (int *)0x0) {
          uStack_64 = 0x80f047;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        iStack_70 = *(int *)(unaff_EBP + -0x24);
        iStack_6c = *(int *)(unaff_EBP + -0x5c);
        iStack_74 = *(int *)(unaff_EBP + -0x10) + -3;
        uStack_64 = *(uint *)(unaff_EBP + -0x54);
        iStack_78 = 0x112;
        *(int **)(unaff_EBP + -0x28) = piVar3;
        iStack_80 = 0x80f071;
        piStack_7c = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          uStack_64 = *(uint *)(unaff_EBP + -0x28);
          iStack_6c = 0x80f083;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_64 = 0x80f090;
        uVar1 = unaff_EBP - 0x5c;
        iVar2 = FUN_00402bc3();
        uStack_64 = uVar1;
        if (iVar2 < 0) {
          uStack_64 = 0x80f09b;
          FUN_00878dfb();
          uStack_64 = extraout_ECX_00;
        }
        iVar2 = *(int *)(unaff_EBP + -0x20);
      }
      iVar4 = piVar6[6];
      *(uint **)(unaff_EBP + -0x28) = &uStack_64;
      if (iVar4 != 0) {
        iStack_6c = 0x80f0bb;
        InterlockedIncrement((LONG *)(iVar4 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      uStack_64 = FUN_0055540f();
      iStack_6c = 0;
      iStack_70 = 0;
      iStack_74 = 0x80f0d8;
      piVar3 = (int *)FUN_0053793e();
      iStack_74 = 0x80f0df;
      iStack_74 = (**(code **)(*piVar3 + 4))();
      iStack_78 = *(int *)(unaff_EBP + -0x10) + 0x1f;
      piStack_7c = (int *)0xef;
      iStack_80 = *piVar6;
      *(undefined1 **)(unaff_EBP + -0x28) = auStack_84;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      FUN_005558b0();
      if (piVar6[3] == 0) {
        uStack_64 = 0;
      }
      else {
        uStack_64 = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00414edd();
      *(uint **)(unaff_EBP + -0x28) = &uStack_64;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_6c = 0x80f146;
      FUN_0046fcc9();
      iStack_6c = 0x80f14f;
      FUN_007d3a22();
      uStack_64 = 0x80f15e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      uStack_64 = unaff_EBP - 0x4c;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        uStack_64 = 0x80f178;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_64 = 0x80f182;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      uStack_64 = unaff_EBP - 0x3c;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        uStack_64 = 0x80f19c;
        FUN_00878dfb();
      }
      uStack_64 = unaff_EBP - 0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004458be();
      iStack_6c = 0x80f1b9;
      iStack_70 = FUN_00449713();
      *(int **)(unaff_EBP + -0x28) = &iStack_6c;
      iStack_74 = 0x80f1c5;
      iStack_6c = extraout_ECX_01;
      FUN_00448a17();
      iVar4 = *(int *)(unaff_EBP + -0x10);
      iStack_74 = 0x118;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_78 = 0x80f1dd;
      iStack_70 = iVar4;
      FUN_0044974c();
      iStack_78 = 0x80f1e4;
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_64 = 0x80f1f1;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_64 = 0x80f1fc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_64 = 0x80f209;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_64 = 0x80f214;
        FUN_00878dfb();
      }
      iVar5 = *piVar6 / 1000000;
      if (((iVar5 == 2) || (iVar5 == 3)) || (iVar5 == 4)) {
        (**(code **)(*(int *)piVar6[6] + 0x18))();
        *(uint **)(unaff_EBP + -0x28) = &uStack_64;
        iStack_6c = 0x80f24d;
        uStack_64 = extraout_ECX_02;
        FUN_00424dbc();
        iStack_6c = iVar4 + 0x11;
        iStack_70 = 0xed;
        iStack_78 = unaff_EBP + 8;
        *(int **)(unaff_EBP + -0x28) = &iStack_74;
        piStack_7c = (int *)0x80f266;
        iStack_74 = extraout_ECX_03;
        FUN_0046fc23();
        iStack_78 = 0x80f26b;
        FUN_007d3201();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1c;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 0x107);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_64 = 0x80f2af;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


