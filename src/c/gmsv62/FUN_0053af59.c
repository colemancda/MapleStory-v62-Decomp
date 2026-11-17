/* FUN_0053af59 - 0x0053af59 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053af59(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x564) = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x70) + 0x34) = 0xd0;
  iStack_78 = 0x53afd5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_78 = unaff_EBP + -0x40;
  iStack_7c = 0x53afe4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_78 = 0x53aff0;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_78 = 0x53affd;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_78 = unaff_EBP + -0x30;
  puStack_84 = &DAT_00980690;
  iStack_7c = 0x53b007;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_78 = 0x53b015;
    FUN_00878dfb();
    puStack_84 = extraout_ECX_00;
  }
  iStack_78 = 0;
  iStack_7c = unaff_EBP + -0x40;
  iStack_80 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_84;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&puStack_84,0x4e9);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_7c = 0x53b061;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_78 = 0x53b073;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_78 = 0x53b084;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x53b091;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_78 = 0x53b09c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_78 = 0x53b0a9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_78 = 0x53b0b4;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_78 = 0x53b0c1;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_78 = 0x53b0cc;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_78 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  iStack_7c = 0x53b0f3;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_78 = 0x53b100;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  iStack_78 = 0x53b11b;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x53b13e;
  FUN_00450382();
  iStack_78 = 0;
  iStack_7c = 9;
  iStack_80 = 0x9f;
  puStack_84 = (undefined4 *)0x3e8;
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))(extraout_ECX);
  *(undefined4 *)(extraout_ECX + 0x560) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


