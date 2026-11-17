/* ptr_006921e8 - 0x006921e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006921e8(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 auStack_28 [4];
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_8;
  
  do {
    uVar1 = *(uint *)(unaff_ESI + 0xec);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (uVar1 == param_1) {
      uStack_8 = 0xff;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_ESI + 0xe0);
      piVar3 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar3 == (int *)0x0) {
        uStack_8 = 0x692227;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar3;
      iStack_14 = *(int *)(unaff_EBP + -0x24);
      iStack_10 = *(int *)(unaff_EBP + -0x5c);
      iStack_18 = *(int *)(unaff_EBP + -0x10) + -1;
      uStack_8 = *(uint *)(unaff_EBP + -0x54);
      iStack_1c = 0x111;
      *(int **)(unaff_EBP + -0x28) = piVar3;
      iStack_24 = 0x69224f;
      piStack_20 = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        uStack_8 = *(uint *)(unaff_EBP + -0x28);
        iStack_10 = 0x692261;
        FUN_00878e09();
      }
      param_1 = unaff_EBP - 0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_8 = 0x69226e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_8 = 0x692279;
        FUN_00878dfb();
        param_1 = extraout_ECX;
      }
      unaff_ESI = *(int *)(unaff_EBP + -0x20);
    }
    iVar2 = unaff_EBX[6];
    *(uint **)(unaff_EBP + -0x28) = &uStack_8;
    uStack_8 = param_1;
    if (iVar2 != 0) {
      iStack_10 = 0x692299;
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0048b97b();
    uStack_8 = FUN_0055540f();
    iStack_10 = 0;
    iStack_14 = 0;
    iStack_18 = 0x6922b6;
    piVar3 = (int *)FUN_0053793e();
    iStack_18 = 0x6922bd;
    iStack_18 = (**(code **)(*piVar3 + 4))();
    iStack_1c = *(int *)(unaff_EBP + -0x10) + 0x21;
    piStack_20 = (int *)0xee;
    iStack_24 = *unaff_EBX;
    *(undefined1 **)(unaff_EBP + -0x28) = auStack_28;
    FUN_0046fc23(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0048b97b();
    FUN_005558b0();
    if (unaff_EBX[3] == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = FUN_00409205();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414edd();
    *(uint **)(unaff_EBP + -0x28) = &uStack_8;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_10 = 0x692324;
    FUN_0046fcc9();
    iStack_10 = 0x69232d;
    FUN_007d3a22();
    uStack_8 = 0x69233c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    uStack_8 = unaff_EBP - 0x4c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      uStack_8 = 0x692356;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_8 = 0x692360;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    uStack_8 = unaff_EBP - 0x3c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      uStack_8 = 0x69237a;
      FUN_00878dfb();
    }
    uStack_8 = unaff_EBP - 0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004458be();
    iStack_10 = 0x692397;
    iStack_14 = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_10;
    iStack_18 = 0x6923a3;
    iStack_10 = extraout_ECX_00;
    FUN_00448a17();
    iVar2 = *(int *)(unaff_EBP + -0x10);
    iStack_18 = 0x117;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_1c = 0x6923bb;
    iStack_14 = iVar2;
    FUN_0044974c();
    iStack_1c = 0x6923c2;
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_8 = 0x6923cf;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      uStack_8 = 0x6923da;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_8 = 0x6923e7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      uStack_8 = 0x6923f2;
      FUN_00878dfb();
    }
    iVar4 = *unaff_EBX / 1000000;
    if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
      (**(code **)(*(int *)unaff_EBX[6] + 0x18))();
      *(uint **)(unaff_EBP + -0x28) = &uStack_8;
      iStack_10 = 0x69242b;
      uStack_8 = extraout_ECX_01;
      FUN_00424dbc();
      iStack_10 = iVar2 + 0x13;
      iStack_14 = 0xec;
      iStack_1c = unaff_EBP + 8;
      *(int **)(unaff_EBP + -0x28) = &iStack_18;
      piStack_20 = (int *)0x692444;
      iStack_18 = extraout_ECX_02;
      FUN_0046fc23();
      iStack_1c = 0x692449;
      FUN_007d3201();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    do {
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1c;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      if (0x11f < *(int *)(unaff_EBP + -0x10)) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          uStack_8 = 0x69248d;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      iVar2 = *(int *)(unaff_ESI + 0xd0);
    } while ((iVar2 == 0) ||
            (param_1 = *(uint *)(unaff_EBP + -0x18), *(uint *)(iVar2 + -4) <= param_1));
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    unaff_EBX = (int *)(*(int *)(unaff_EBP + -0x1c) + iVar2);
  } while( true );
}


