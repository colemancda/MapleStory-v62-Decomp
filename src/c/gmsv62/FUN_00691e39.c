/* FUN_00691e39 - 0x00691e39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00691e39(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  int *piVar4;
  undefined1 auStack_8c [4];
  int iStack_88;
  int *piStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_6c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0xb4) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(int *)(unaff_EBP + -0x1c) = iVar1 * 0x1c;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x58;
  do {
    if (*(int *)(extraout_ECX + 0xe8) == *(int *)(unaff_EBP + -0x14)) {
      uStack_6c = 0xff;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0xe0);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar4 == (int *)0x0) {
        uStack_6c = 0x691ea0;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      iStack_78 = *(int *)(unaff_EBP + -0x20);
      iStack_74 = *(int *)(unaff_EBP + -0x54);
      iStack_7c = *(int *)(unaff_EBP + -0x10) + -1;
      uStack_6c = *(uint *)(unaff_EBP + -0x4c);
      iStack_80 = 0x2c;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      iStack_88 = 0x691ec5;
      piStack_84 = piVar4;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        uStack_6c = *(uint *)(unaff_EBP + -0x24);
        iStack_74 = 0x691ed7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00691f56:
      uStack_6c = 0x691f5c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        uStack_6c = 0x691f67;
        FUN_00878dfb();
      }
    }
    else if (*(int *)(unaff_EBP + -0x14) < *(int *)(extraout_ECX + 0xf0)) {
      uStack_6c = 0xff;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0xe4);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar4 == (int *)0x0) {
        uStack_6c = 0x691f18;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      iStack_78 = *(int *)(unaff_EBP + -0x24);
      iStack_74 = *(int *)(unaff_EBP + -100);
      iStack_7c = *(int *)(unaff_EBP + -0x10) + -1;
      uStack_6c = *(uint *)(unaff_EBP + -0x5c);
      iStack_80 = 6;
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iStack_88 = 0x691f3d;
      piStack_84 = piVar4;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        uStack_6c = *(uint *)(unaff_EBP + -0x20);
        iStack_74 = 0x691f4f;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00691f56;
    }
    iVar1 = *(int *)(extraout_ECX + 0xcc);
    if ((iVar1 != 0) &&
       (uStack_6c = *(uint *)(unaff_EBP + -0x14), uStack_6c < *(uint *)(iVar1 + -4))) {
      piVar4 = (int *)(iVar1 + *(int *)(unaff_EBP + -0x1c));
      iVar1 = piVar4[6];
      *(uint **)(unaff_EBP + -0x24) = &uStack_6c;
      if (iVar1 != 0) {
        iStack_74 = 0x691fa3;
        InterlockedIncrement((LONG *)(iVar1 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      uStack_6c = FUN_0055540f();
      iStack_74 = 0;
      iStack_78 = 0;
      iStack_7c = 0x691fc0;
      piVar2 = (int *)FUN_0053793e();
      iStack_7c = 0x691fc7;
      iStack_7c = (**(code **)(*piVar2 + 4))();
      iStack_80 = *(int *)(unaff_EBP + -0x10) + 0x21;
      piStack_84 = (int *)&DAT_00000009;
      iStack_88 = *piVar4;
      *(undefined1 **)(unaff_EBP + -0x24) = auStack_8c;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      FUN_005558b0();
      if (piVar4[3] == 0) {
        uStack_6c = 0;
      }
      else {
        uStack_6c = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_00414edd();
      *(uint **)(unaff_EBP + -0x24) = &uStack_6c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_74 = 0x69202b;
      FUN_0046fcc9();
      iStack_74 = 0x692034;
      FUN_007d3a22();
      uStack_6c = 0x692043;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      uStack_6c = unaff_EBP - 0x44;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        uStack_6c = 0x69205d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_6c = 0x692067;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      uStack_6c = unaff_EBP - 0x34;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        uStack_6c = 0x692081;
        FUN_00878dfb();
      }
      uStack_6c = unaff_EBP - 0x34;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004458be();
      iStack_74 = 0x69209e;
      iStack_78 = FUN_00449713();
      *(int **)(unaff_EBP + -0x24) = &iStack_74;
      iStack_7c = 0x6920aa;
      iStack_74 = extraout_ECX_00;
      FUN_00448a17();
      iVar1 = *(int *)(unaff_EBP + -0x10);
      iStack_7c = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_80 = 0x6920bf;
      iStack_78 = iVar1;
      FUN_0044974c();
      iStack_80 = 0x6920c6;
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_6c = 0x6920d3;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        uStack_6c = 0x6920de;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_6c = 0x6920eb;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        uStack_6c = 0x6920f6;
        FUN_00878dfb();
      }
      iVar3 = *piVar4 / 1000000;
      if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) {
        (**(code **)(*(int *)piVar4[6] + 0x18))();
        *(uint **)(unaff_EBP + -0x24) = &uStack_6c;
        iStack_74 = 0x69212f;
        uStack_6c = extraout_ECX_01;
        FUN_00424dbc();
        iStack_74 = iVar1 + 0x13;
        iStack_78 = 7;
        iStack_80 = unaff_EBP + 8;
        *(int **)(unaff_EBP + -0x24) = &iStack_7c;
        piStack_84 = (int *)0x692145;
        iStack_7c = extraout_ECX_02;
        FUN_0046fc23();
        iStack_80 = 0x69214a;
        FUN_007d3201();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1c;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    if (0x11f < *(int *)(unaff_EBP + -0x10)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        uStack_6c = 0x692182;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


