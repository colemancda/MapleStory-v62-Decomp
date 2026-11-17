/* ptr_0085c37e - 0x0085c37e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085c37e(void)

{
  int unaff_EBP;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_8 = 1;
  uStack_c = 0;
  uStack_10 = 0;
  *(undefined1 **)(unaff_EBP + 8) = auStack_14;
  FUN_00679d22(auStack_14,0x2db);
  FUN_007db3ad();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


