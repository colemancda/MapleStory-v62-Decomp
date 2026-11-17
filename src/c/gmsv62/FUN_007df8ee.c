/* FUN_007df8ee - 0x007df8ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007df8ee(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  int local_40;
  
  FUN_00879bb8();
  local_40 = 0x7df908;
  FUN_0081622a();
  local_40 = 0x7df913;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  local_40 = 0x7df92a;
  FUN_00414f8b();
  puStack_48 = (undefined1 *)&local_40;
  *(int **)(unaff_EBP + -0x14) = &local_40;
  iStack_44 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_4c = 0x7df93d;
  FUN_007d4a9a();
  iStack_44 = unaff_EBP + 8;
  puStack_48 = (undefined1 *)0x7df948;
  FUN_007d3a22();
  local_40 = 0x7df957;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  local_40 = unaff_EBP + -0x38;
  iStack_44 = 0x7df966;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    local_40 = 0x7df972;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_40 = 0x7df97c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  local_40 = unaff_EBP + -0x28;
  iStack_44 = 0x7df986;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    local_40 = 0x7df992;
    FUN_00878dfb();
  }
  local_40 = 0;
  iStack_44 = 0xffffffff;
  puStack_48 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_4c = 0;
  uStack_50 = 0;
  piStack_54 = (int *)0x7df9a5;
  (*DAT_0097b4c8)();
  piStack_54 = (int *)0x7df9b2;
  FUN_0087a1b0();
  piStack_54 = (int *)(unaff_EBP + -0x38);
  iStack_58 = unaff_EBP + -0x28;
  iStack_60 = unaff_EBP + -0x14;
  uStack_5c = 0;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_5c = 0x7df9d3;
  uStack_5c = FUN_00449749();
  iStack_60 = -1;
  uVar2 = FUN_00449713(&uStack_50);
  uVar2 = FUN_00456ad5(uVar2);
  *(int **)(unaff_EBP + -0x18) = &iStack_60;
  FUN_004033a1(uVar2);
  uVar3 = 6;
  uVar2 = 0xb;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004115d9(0xb,6);
  FUN_00448e3a(uVar2,uVar3);
  piStack_54 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x7dfa1a;
    (**(code **)(*piStack_54 + 8))();
  }
  piStack_54 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_58 = 0x7dfa27;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    iStack_58 = 0x7dfa32;
    FUN_00878dfb();
  }
  piStack_54 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_58 = 0x7dfa3f;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    iStack_58 = 0x7dfa4a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_54 = (int *)0x7dfa55;
  FUN_00414ebb();
  piStack_54 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x7dfa66;
    (**(code **)(*piStack_54 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


