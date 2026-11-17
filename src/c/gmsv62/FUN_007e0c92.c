/* FUN_007e0c92 - 0x007e0c92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e0c92(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  int iStack_48;
  int local_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  local_44 = 0x7e0caf;
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  local_44 = 0x7e0cc0;
  FUN_00414f8b();
  puStack_4c = (undefined1 *)&local_44;
  *(int **)(unaff_EBP + -0x18) = &local_44;
  iStack_48 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_50 = 0x7e0cd3;
  FUN_007d4a9a();
  iStack_48 = unaff_EBP + 8;
  puStack_4c = (undefined1 *)0x7e0cde;
  FUN_007d3a22();
  local_44 = 0x7e0ced;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  local_44 = unaff_EBP + -0x3c;
  iStack_48 = 0x7e0cfc;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    local_44 = 0x7e0d08;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_44 = 0x7e0d12;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  local_44 = unaff_EBP + -0x2c;
  iStack_48 = 0x7e0d1c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    local_44 = 0x7e0d28;
    FUN_00878dfb();
  }
  local_44 = 0;
  iStack_48 = 0xffffffff;
  puStack_4c = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_50 = 0;
  uStack_54 = 0;
  piStack_58 = (int *)0x7e0d3b;
  (*DAT_0097b4c8)();
  piStack_58 = (int *)0x7e0d48;
  FUN_0087a1b0();
  piStack_58 = (int *)(unaff_EBP + -0x3c);
  iStack_5c = unaff_EBP + -0x2c;
  iStack_64 = unaff_EBP + -0x18;
  uStack_60 = 1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_60 = 0x7e0d6a;
  uStack_60 = FUN_00449749();
  iStack_64 = -1;
  uVar2 = FUN_00449713(&uStack_54);
  uVar2 = FUN_00456ad5(uVar2);
  *(int **)(unaff_EBP + -0x1c) = &iStack_64;
  FUN_004033a1(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00448dc6(unaff_EBP + -0x14);
  uVar3 = 0x21;
  uVar2 = 0x69;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(0x69,0x21);
  FUN_00448e3a(uVar2,uVar3);
  piStack_58 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_58 != (int *)0x0) {
    iStack_5c = 0x7e0dc0;
    (**(code **)(*piStack_58 + 8))();
  }
  piStack_58 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_58 != (int *)0x0) {
    iStack_5c = 0x7e0dd1;
    (**(code **)(*piStack_58 + 8))();
  }
  piStack_58 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_5c = 0x7e0dde;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x7e0de9;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_5c = 0x7e0df5;
  piStack_58 = (int *)FUN_00402bc3();
  if ((int)piStack_58 < 0) {
    iStack_5c = 0x7e0e00;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_58 = (int *)0x7e0e0c;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


