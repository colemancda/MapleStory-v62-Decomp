/* ptr_0069dee8 - 0x0069dee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0069dee8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 uVar5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  iStack_c = unaff_EBP + -0x48;
  iStack_10 = unaff_EBP + -0x58;
  uStack_14 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_14;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_c = 0x69df4b;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(int **)(unaff_EBP + -0x18) = unaff_ESI;
  if (piVar1 != unaff_ESI) {
    iVar2 = FUN_0041a581();
    if ((iVar2 < (int)unaff_ESI) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar1 == unaff_ESI) {
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  uStack_14 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_10 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_c = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_28 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_30 = 0x69dfc4;
    iStack_2c = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_28 = 0x69dfd5;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_28 = 0x69dfe2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x69dfed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_28 = 0x69dffa;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x69e005;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_28 = 0x69e012;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x69e01d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_28 = 0x69e02a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x69e035;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_28 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_2c = 0x69e050;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_28 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_2c = unaff_EBP + -0x1c;
  iStack_30 = 0x69e070;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00414ebb();
  iStack_28 = 0x69e08b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_28 = unaff_EBP + -0x48;
  iStack_2c = 0x69e095;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_28 = 0x69e0a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_28 = 0x69e0ab;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_28 = unaff_EBP + -0x38;
  iStack_2c = 0x69e0b5;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_28 = 0x69e0c1;
    FUN_00878dfb();
  }
  iStack_28 = unaff_EBP + -0x38;
  iStack_30 = unaff_EBP + -0x28;
  iStack_2c = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_2c = 0x69e0e5;
  iStack_2c = FUN_00449749();
  iStack_30 = 0x69e0ee;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x24) = &iStack_30;
  FUN_00448a17(uVar4);
  uVar5 = 0xd6;
  uVar4 = 0x9a;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0x9a,0xd6);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_28 = 0x69e128;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_28 = 0x69e135;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x69e140;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_28 = 0x69e14d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x69e158;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_28 = 0x69e175;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


