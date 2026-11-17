/* FUN_0050fd55 - 0x0050fd55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050fd55(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x50fd6b;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uStack_14 = 0x50fd84;
    uVar2 = FUN_0045e4b8();
    if ((uVar2 & 1) != 0) {
      uStack_14 = 0x50fd90;
      cVar1 = FUN_0042452b();
      if (cVar1 == '\0') {
        *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
        uVar4 = 0x380;
      }
      else {
        if (cVar1 != '\x01') goto LAB_0050fead;
        *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
        uVar4 = 0x37f;
      }
      uStack_14 = 0;
      iStack_18 = 0;
      iStack_1c = 0;
      uStack_20 = 0;
      FUN_00679d22(auStack_24,uVar4);
      FUN_007db3ad();
      goto LAB_0050fead;
    }
  }
  uStack_14 = 0x50fde0;
  uVar2 = FUN_0042452b();
  uVar2 = uVar2 & 0xff;
  if (uVar2 < 0x11) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (uVar2 == 1) {
      uStack_14 = 899;
      iStack_18 = unaff_EBP + -0x10;
      iStack_1c = 0x50fe12;
      uStack_14 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_18 = 0x50fe1f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else if (uVar2 == 2) {
      uStack_14 = 0x382;
      iStack_18 = unaff_EBP + -0x10;
      iStack_1c = 0x50fe3f;
      uStack_14 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_18 = 0x50fe4c;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      uStack_14 = 0x381;
      iStack_18 = unaff_EBP + -0x10;
      iStack_1c = 0x50fe67;
      puVar3 = (undefined4 *)FUN_00679d22();
      iStack_18 = *puVar3;
      iStack_1c = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_20 = 0x50fe78;
      uStack_14 = uVar2;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    uStack_14 = 0x50fe86;
    FUN_00414ebb();
    uStack_14 = 0;
    iStack_18 = 0;
    iStack_1c = 0;
    uStack_20 = 0;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_14 = 0x50fead;
    FUN_00414ebb();
  }
LAB_0050fead:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


