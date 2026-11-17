/* ptr_0060e7be - 0x0060e7be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0060e7be(void)

{
  int iVar1;
  char cVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 != extraout_ECX[0x30]) {
    if (extraout_ECX[0x30] == 0) {
      uStack_24 = 0;
      uStack_28 = 0x60e7f3;
      (**(code **)(*(int *)(extraout_ECX[iVar1 * 2 + 0x7c] + 4) + 0x24))();
      extraout_ECX[iVar1 + 0x6b] = 0;
    }
    uStack_24 = 0;
    uStack_28 = 0x60e802;
    FUN_008161f1();
    goto LAB_0060e939;
  }
  uStack_24 = 0x60e80f;
  cVar2 = FUN_0042452b();
  uStack_24 = 8;
  uStack_28 = 0x60e81b;
  (**(code **)(*extraout_ECX + 0x34))();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar2 == '\x01') {
    uStack_28 = 0x19f;
    iStack_2c = unaff_EBP + -0x1c;
    uStack_30 = 0x60e8fa;
    uStack_28 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_2c = 0x60e907;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0060e90d:
    uStack_28 = 0x60e912;
    FUN_00414ebb();
  }
  else {
    if (cVar2 == '\x03') {
      uStack_28 = 0x1af;
      iStack_2c = unaff_EBP + -0x18;
      uStack_30 = 0x60e8d2;
      uStack_28 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_2c = 0x60e8df;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0060e90d;
    }
    if (cVar2 == '\x05') {
      uStack_28 = 0x1bc;
      iStack_2c = unaff_EBP + -0x14;
      uStack_30 = 0x60e8aa;
      uStack_28 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_2c = 0x60e8b7;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0060e90d;
    }
    if (cVar2 == '\n') {
      uStack_28 = 0x1b0;
      iStack_2c = unaff_EBP + -0x10;
      uStack_30 = 0x60e882;
      uStack_28 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_2c = 0x60e88f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0060e90d;
    }
    if (cVar2 == '\v') {
      uStack_28 = 0x1bd;
      iStack_2c = unaff_EBP + 0xc;
      uStack_30 = 0x60e857;
      uStack_28 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_2c = 0x60e864;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0060e90d;
    }
  }
  uStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  *(undefined1 **)(unaff_EBP + -0x20) = auStack_38;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_28 = 0x60e939;
  FUN_00414ebb();
LAB_0060e939:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


