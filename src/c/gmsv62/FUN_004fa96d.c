/* FUN_004fa96d - 0x004fa96d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fa96d(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  int iStack_d8;
  undefined1 *puStack_d4;
  int iStack_d0;
  undefined4 *puStack_cc;
  int iStack_c8;
  
  FUN_00879bb8();
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0xa64);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0xa60);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x18);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x1c) = piVar2;
  puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x80))();
  if ((int)puVar3 < 0) {
    iStack_c8 = *(int *)(unaff_EBP + -0x1c);
    iStack_d0 = 0x4faa30;
    puStack_cc = puVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_c8 = 0x4faa3d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_c8 = 0x4faa48;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_c8 = 0x4faa5d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c8 = 0x4faa6a;
  FUN_00403191();
  iStack_c8 = unaff_EBP + -0x80;
  puStack_d4 = (undefined1 *)&puStack_cc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_cc;
  iStack_d0 = 0xa96;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_d8 = 0x4faa8e;
  FUN_00679e4e();
  iStack_d0 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_d4 = (undefined1 *)0x4faa9e;
  FUN_00405a1d();
  puStack_d4 = (undefined1 *)0x4faaa5;
  FUN_00402660();
  puStack_d4 = (undefined1 *)0x4faaac;
  FUN_00404a02();
  iStack_c8 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_cc = (undefined4 *)0x4faaba;
  FUN_00412348();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_c8 = 0x4faac9;
  FUN_00417232();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    iStack_c8 = 0x4faada;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_c8 = 0x4faaea;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_c8 = 0x4faaf5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_c8 = 0x4fab02;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_c8 = 0x4fab0d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c8 = 0x4fab1a;
  iVar1 = unaff_EBP + -0x70;
  iVar4 = FUN_00402bc3();
  iStack_c8 = iVar1;
  if (iVar4 < 0) {
    iStack_c8 = 0x4fab25;
    FUN_00878dfb();
    iStack_c8 = extraout_ECX_00;
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x14) = &iStack_c8;
  iStack_d0 = 0x4fab36;
  FUN_00424dbc();
  puStack_cc = (undefined4 *)0xa8f;
  iStack_d0 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_d4 = (undefined1 *)0x4fab4b;
  FUN_00679d22();
  puStack_cc = *(undefined4 **)(extraout_ECX + 0x740);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_d0 = 0x4fab5c;
  iStack_d0 = FUN_00449713();
  puStack_d4 = (undefined1 *)(unaff_EBP + -0x20);
  iStack_d8 = 0x4fab66;
  iStack_d0 = FUN_00434e21();
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_cc;
  puStack_d4 = (undefined1 *)0x4fab73;
  FUN_00450368();
  iStack_d0 = 0x25;
  puStack_d4 = (undefined1 *)0x19;
  *(int **)(unaff_EBP + -0x14) = &iStack_d8;
  FUN_0046fc23(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_007d2fea();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  puStack_cc = (undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x14) = &iStack_c8;
  iStack_d0 = 0x4fabaf;
  iStack_c8 = extraout_ECX_01;
  FUN_00424dbc();
  puStack_cc = (undefined4 *)0xa8f;
  iStack_d0 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_d4 = (undefined1 *)0x4fabbf;
  FUN_00679d22();
  puStack_cc = *(undefined4 **)(extraout_ECX + 0x744);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_d0 = 0x4fabd0;
  iStack_d0 = FUN_00449713();
  puStack_d4 = (undefined1 *)(unaff_EBP + -0x20);
  iStack_d8 = 0x4fabda;
  iStack_d0 = FUN_00434e21();
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_cc;
  puStack_d4 = (undefined1 *)0x4fabe7;
  FUN_00450368();
  iStack_d0 = 0x25;
  puStack_d4 = (undefined1 *)0x96;
  *(int **)(unaff_EBP + -0x14) = &iStack_d8;
  FUN_0046fc23(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_007d2fea();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  if (*(int *)(extraout_ECX + 0x748) != 0) {
    iVar1 = FUN_007d1e08();
    iVar1 = (*(int *)(extraout_ECX + 0x748) - iVar1) / 1000;
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    iStack_c8 = 0x4fac4e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_c8 = unaff_EBP + -0x40;
    puStack_cc = (undefined4 *)0x4fac5d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_c8 = 0x4fac69;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_c8 = 0x4fac73;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iStack_c8 = unaff_EBP + -0x50;
    puVar3 = &DAT_00980690;
    puStack_cc = (undefined4 *)0x4fac7d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_c8 = 0x4fac89;
      FUN_00878dfb();
      puVar3 = extraout_ECX_02;
    }
    iStack_c8 = unaff_EBP + -0x50;
    puStack_d4 = (undefined1 *)&puStack_cc;
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_cc;
    iStack_d0 = 0xa97;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_d8 = 0x4faca8;
    puStack_cc = puVar3;
    FUN_00679e4e();
    iStack_d0 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_d4 = (undefined1 *)0x4facb8;
    FUN_00405a1d();
    puStack_d4 = (undefined1 *)0x4facbf;
    FUN_00402660();
    puStack_d4 = (undefined1 *)0x4facc6;
    FUN_00404a02();
    iStack_c8 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_cc = (undefined4 *)0x4facd4;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_c8 = 0x4face3;
    FUN_00417232();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_c8 = 0x4facf4;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_c8 = 0x4fad04;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_c8 = 0x4fad0f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_c8 = 0x4fad1c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_c8 = 0x4fad27;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_c8 = 0x4fad34;
    iVar1 = unaff_EBP + -0x40;
    iVar4 = FUN_00402bc3();
    iStack_c8 = iVar1;
    if (iVar4 < 0) {
      iStack_c8 = 0x4fad3f;
      FUN_00878dfb();
      iStack_c8 = extraout_ECX_03;
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x2c) = &iStack_c8;
    iStack_d0 = 0x4fad50;
    FUN_00424dbc();
    puStack_cc = (undefined4 *)0xa99;
    iStack_d0 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_d4 = (undefined1 *)0x4fad64;
    FUN_00679d22();
    puStack_cc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) % 0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_d0 = *(int *)(unaff_EBP + -0x1c) / 0x3c;
    puStack_d4 = (undefined1 *)0x4fad80;
    puStack_d4 = (undefined1 *)FUN_00449713();
    iStack_d8 = unaff_EBP + -0x20;
    iStack_d0 = FUN_00434e21();
    *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_cc;
    puStack_d4 = (undefined1 *)0x4fad98;
    FUN_00450368();
    iStack_d0 = 0x53;
    puStack_d4 = (undefined1 *)0x3c;
    *(int **)(unaff_EBP + -0x2c) = &iStack_d8;
    FUN_0046fc23(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_007d2fea();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_c8 = 0x4fadd3;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_c8 = 0x4fade4;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_c8 = 0x4fae01;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


