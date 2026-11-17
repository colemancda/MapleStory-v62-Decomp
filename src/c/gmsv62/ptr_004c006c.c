/* ptr_004c006c - 0x004c006c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_004c006c(void)

{
  int unaff_EBP;
  undefined1 auStack_4 [4];
  
  *(undefined1 **)(unaff_EBP + 0xc) = auStack_4;
  FUN_00679d22(auStack_4,0x357);
  FUN_007db3ad();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


