/* ptr_0085c2e1 - 0x0085c2e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085c2e1(void)

{
  char cVar1;
  int unaff_EBP;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x85c2e8;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    iStack_4 = 0;
    uStack_8 = 1;
    uStack_c = 0;
    uStack_10 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_14;
    FUN_00679d22(auStack_14,0x2d7);
    FUN_007db3ad();
  }
  else {
    iStack_4 = unaff_EBP + -0x10;
    uStack_8 = 0x85c2fc;
    FUN_0045cdbc();
    iStack_4 = 0;
    uStack_8 = 1;
    uStack_c = 0;
    uStack_10 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_14;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    FUN_00450368(unaff_EBP + -0x10);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_4 = 0x85c32b;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


