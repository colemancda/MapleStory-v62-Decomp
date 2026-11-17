/* FUN_00510131 - 0x00510131 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00510131(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 0x510148;
  uVar1 = FUN_0042452b();
  uVar1 = uVar1 & 0xff;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar1 == 2) {
    uStack_1c = 0x9aa;
    iStack_20 = unaff_EBP + -0x18;
    iStack_24 = 0x5101d5;
    uStack_1c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_20 = 0x5101e2;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (uVar1 == 4) {
    uStack_1c = 0x9a9;
    iStack_20 = unaff_EBP + -0x14;
    iStack_24 = 0x5101ad;
    uStack_1c = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_20 = 0x5101ba;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if ((uVar1 != 8) && (uVar1 != 0x10)) goto LAB_005101ed;
    uStack_1c = 0x9a8;
    iStack_20 = unaff_EBP + -0x10;
    iStack_24 = 0x51017e;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_20 = *puVar2;
    iStack_24 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_28 = 0x51018f;
    uStack_1c = uVar1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  uStack_1c = 0x5101ed;
  FUN_00414ebb();
LAB_005101ed:
  uStack_1c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  uStack_28 = 0;
  *(undefined1 **)(unaff_EBP + -0x1c) = auStack_2c;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1c = 0x510214;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


