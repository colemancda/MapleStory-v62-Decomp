/* ptr_0084a188 - 0x0084a188 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0084a188(void)

{
  char *unaff_EBX;
  int unaff_EBP;
  undefined1 auStack_14 [4];
  
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00434e21();
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + -0x10) != unaff_EBX) &&
     (**(char **)(unaff_EBP + -0x10) != (char)unaff_EBX)) {
    *(undefined1 **)(unaff_EBP + 8) = auStack_14;
    FUN_00450368(unaff_EBP + -0x10);
    FUN_007db3ad();
  }
  FUN_00414f29();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


