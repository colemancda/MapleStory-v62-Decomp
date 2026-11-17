/* FUN_0084e577 - 0x0084e577 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084e577(void)

{
  char cVar1;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  FUN_00879bb8();
  iStack_c = 0x84e58b;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\v') {
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_1c;
    uVar2 = 0xd42;
  }
  else {
    iStack_c = 0x84e59b;
    cVar1 = FUN_0042452b();
    if (cVar1 != '\0') {
      iStack_c = unaff_EBP + 8;
      uStack_10 = 0x84e5b0;
      FUN_0045cdbc();
      iStack_c = 0;
      uStack_10 = 1;
      uStack_14 = 0;
      uStack_18 = 0;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_1c;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_c = 0x84e5db;
      FUN_00414ebb();
      goto LAB_0084e612;
    }
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_1c;
    uVar2 = 0xdaa;
  }
  iStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_00679d22(auStack_1c,uVar2);
  FUN_007db3ad();
LAB_0084e612:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


