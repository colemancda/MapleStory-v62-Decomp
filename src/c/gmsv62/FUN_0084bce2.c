/* FUN_0084bce2 - 0x0084bce2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084bce2(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


