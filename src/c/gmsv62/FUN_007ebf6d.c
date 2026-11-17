/* FUN_007ebf6d - 0x007ebf6d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ebf6d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  int iStack_d8;
  int iStack_d4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x654) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x65c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x664) + 0x20))();
  iStack_d4 = 0x7ec200;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_d4 = unaff_EBP + -0x44;
  iStack_d8 = 0x7ec20e;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec21a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_d4 = 0x7ec228;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_d4 = unaff_EBP + -0x34;
  puStack_e0 = &DAT_00980690;
  iStack_d8 = 0x7ec236;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec242;
    FUN_00878dfb();
    puStack_e0 = extraout_ECX_00;
  }
  iStack_d4 = 0;
  iStack_d8 = unaff_EBP + -0x44;
  puStack_dc = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00679e4e(&puStack_e0,0x8c2);
  iVar1 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_d8 = 0x7ec289;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_d4 = 0x7ec29b;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d4 = 0x7ec2ac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_d4 = 0x7ec2b9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec2c4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_d4 = 0x7ec2d1;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec2dc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_d4 = 0x7ec2e8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec2f3;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + -0x10;
  iStack_d8 = 0x7ec303;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_d8 = *puVar3;
  iStack_d4 = extraout_ECX + 0x684;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_dc = (undefined4 *)0x7ec317;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_d4 = 0x7ec32f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_d4 = unaff_EBP + -0x44;
  puVar3 = &DAT_00980690;
  iStack_d8 = 0x7ec33d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec349;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_d4 = 0xff000000;
  iStack_d8 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_dc = puVar3;
  FUN_00679e4e(&puStack_dc);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_e0 = (undefined4 *)0x7ec377;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x7ec37e;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_d4 = 0x7ec38a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x7ec395;
    FUN_00878dfb();
  }
  FUN_007ec709();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


