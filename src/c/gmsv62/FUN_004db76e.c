/* FUN_004db76e - 0x004db76e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004db76e(void)

{
  int iVar1;
  char cVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00879bb8();
  uStack_28 = 0x4db788;
  cVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iVar1 = *extraout_ECX;
  uStack_28 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_2c = 0x4db79c;
  (**(code **)(iVar1 + 0x34))();
  if (cVar2 == '\0') {
    uStack_2c = 0xd50;
    iStack_30 = unaff_EBP + -0x20;
    uStack_34 = 0x4db86e;
    uStack_2c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_30 = 0x4db87b;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\x01') {
    uStack_2c = 0xd51;
    iStack_30 = unaff_EBP + -0x1c;
    uStack_34 = 0x4db846;
    uStack_2c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_30 = 0x4db853;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\x02') {
    uStack_2c = 0xd52;
    iStack_30 = unaff_EBP + -0x18;
    uStack_34 = 0x4db81e;
    uStack_2c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_30 = 0x4db82b;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\x03') {
    uStack_2c = 0xd53;
    iStack_30 = unaff_EBP + -0x14;
    uStack_34 = 0x4db7f6;
    uStack_2c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_30 = 0x4db803;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (cVar2 != '\x04') goto LAB_004db886;
    uStack_2c = 0xd54;
    iStack_30 = unaff_EBP + -0x10;
    uStack_34 = 0x4db7cb;
    uStack_2c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_30 = 0x4db7d8;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  uStack_2c = 0x4db886;
  FUN_00414ebb();
LAB_004db886:
  uStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  *(undefined1 **)(unaff_EBP + -0x24) = auStack_3c;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_2c = 0x4db8ad;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


