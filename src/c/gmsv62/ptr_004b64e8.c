/* ptr_004b64e8 - 0x004b64e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004b64e8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00449913(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


