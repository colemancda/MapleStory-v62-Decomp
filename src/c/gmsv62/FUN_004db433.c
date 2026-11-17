/* FUN_004db433 - 0x004db433 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004db433(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != extraout_ECX[0x30]) {
    uStack_1c = 0;
    iStack_20 = 0x4db456;
    FUN_008161f1();
    goto LAB_004db57a;
  }
  uStack_1c = 0x4db463;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 == '\r') {
    uStack_1c = 8;
    iStack_20 = 0x4db528;
    (**(code **)(*extraout_ECX + 0x34))();
    uStack_1c = 0xd46;
    iStack_20 = unaff_EBP + -0x18;
    uStack_24 = 0x4db53b;
    uStack_1c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_20 = 0x4db548;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_004db54e:
    uStack_1c = 0x4db553;
    FUN_00414ebb();
LAB_004db553:
    uStack_1c = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    *(undefined1 **)(unaff_EBP + -0x1c) = auStack_2c;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
  }
  else {
    if (cVar1 == '\x0e') {
      uStack_1c = 1;
      iStack_20 = 0x4db4f7;
      (**(code **)(*extraout_ECX + 0x34))();
      uStack_1c = 0xd41;
      iStack_20 = unaff_EBP + -0x14;
      uStack_24 = 0x4db50a;
      uStack_1c = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_20 = 0x4db517;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_004db54e;
    }
    if (cVar1 == '\x0f') {
      uStack_1c = 1;
      iStack_20 = 0x4db4c6;
      (**(code **)(*extraout_ECX + 0x34))();
      uStack_1c = 0xd47;
      iStack_20 = unaff_EBP + -0x10;
      uStack_24 = 0x4db4d9;
      uStack_1c = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_20 = 0x4db4e6;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_004db54e;
    }
    if (cVar1 != '\x10') goto LAB_004db553;
    uStack_1c = 1;
    iStack_20 = 0x4db48d;
    (**(code **)(*extraout_ECX + 0x34))();
    uStack_1c = 0xd42;
    iStack_20 = unaff_EBP + 0xc;
    uStack_24 = 0x4db4a0;
    uStack_1c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_20 = 0x4db4ad;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_1c = 0x4db4b8;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1c = 0x4db57a;
  FUN_00414ebb();
LAB_004db57a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


