/* FUN_00735f14 - 0x00735f14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00735f14(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_4c = 0x735f30;
  FUN_0081622a();
  iStack_4c = 0x735f3b;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4c = unaff_EBP + -0x10;
  uStack_50 = 0x735f4a;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4c = 0x735f5f;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 4);
  FUN_0045e4a2();
  if (*(int *)(extraout_ECX + 0xac) != 0x800) {
    iStack_4c = 0x735f8b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_4c = 0x735f98;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0087a1b0();
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x735fb6;
    uStack_50 = FUN_00449749();
    puStack_54 = &stack0xffffffbc;
    sVar1 = FUN_0073811a();
    uVar3 = FUN_0048b981((int)sVar1);
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_54;
    FUN_00448a17(uVar3);
    uVar5 = 0x48;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004115d9(0x3d,0x48);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_4c = 0x735ff9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x736004;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x736011;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x73601c;
      FUN_00878dfb();
    }
  }
  if (*(int *)(extraout_ECX + 0xac) != 0x2000) {
    iStack_4c = 0x736035;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_4c = 0x736042;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0087a1b0();
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x736060;
    uStack_50 = FUN_00449749();
    puStack_54 = &stack0xffffffbc;
    sVar1 = FUN_00738129();
    uVar3 = FUN_0048b981((int)sVar1);
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_54;
    FUN_00448a17(uVar3);
    uVar5 = 0x5a;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004115d9(0x3d,0x5a);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_4c = 0x7360a3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x7360ae;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x7360bb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x7360c6;
      FUN_00878dfb();
    }
  }
  if (*(int *)(extraout_ECX + 0xac) != 0x40) {
    iStack_4c = 0x7360dc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_4c = 0x7360e9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0087a1b0();
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x736107;
    uStack_50 = FUN_00449749();
    puStack_54 = &stack0xffffffbc;
    sVar1 = FUN_007380de();
    uVar3 = FUN_0048b981((int)sVar1);
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_54;
    FUN_00448a17(uVar3);
    uVar5 = 0x72;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004115d9(0x3d,0x72);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_4c = 0x73614a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x736155;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x736162;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x73616d;
      FUN_00878dfb();
    }
  }
  iVar2 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0xac) != 0x80) {
    iStack_4c = 0x736189;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    uStack_50 = 0x736193;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_4c = 0x73619f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_4c = 0x7361ac;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0087a1b0();
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x7361ca;
    uStack_50 = FUN_00449749();
    puStack_54 = &stack0xffffffbc;
    sVar1 = FUN_007380ed();
    uVar3 = FUN_0048b981((int)sVar1);
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_54;
    FUN_00448a17(uVar3);
    uVar5 = 0x84;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_004115d9(0x3d,0x84);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_4c = 0x736210;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x73621b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x736228;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x736233;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
  }
  if (*(int *)(iVar2 + 0xac) != 0x100) {
    iStack_4c = 0x73624c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x736256;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_4c = 0x736262;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_4c = 0x73626c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    uStack_50 = 0x736276;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_4c = 0x736282;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0087a1b0();
    iStack_4c = unaff_EBP + -0x34;
    uStack_50 = 0x7362a0;
    uStack_50 = FUN_00449749();
    puStack_54 = &stack0xffffffbc;
    sVar1 = FUN_007380fc();
    uVar3 = FUN_0048b981((int)sVar1);
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_54;
    FUN_00448a17(uVar3);
    uVar5 = 0x96;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_004115d9(0x3d,0x96);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_4c = 0x7362e6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x7362f1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x7362fe;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x736309;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
  }
  if (*(int *)(iVar2 + 0xac) != 0x200) {
    iStack_4c = 0x736322;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    uStack_50 = 0x73632c;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x736338;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_4c = 0x736342;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x73634c;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x736358;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_0087a1b0();
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x736376;
    uStack_50 = FUN_00449749();
    puStack_54 = &stack0xffffffbc;
    sVar1 = FUN_0073810b();
    uVar3 = FUN_0048b981((int)sVar1);
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_54;
    FUN_00448a17(uVar3);
    uVar5 = 0xa8;
    uVar3 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004115d9(0x3d,0xa8);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_4c = 0x7363bc;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_4c = 0x7363c7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_4c = 0x7363d4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_4c = 0x7363df;
      FUN_00878dfb();
    }
  }
  if (*(int *)(iVar2 + 0xac) != 0) {
    iStack_4c = 0x7363f1;
    FUN_00736427();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_4c = 0x736402;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_4c = 0x736413;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


