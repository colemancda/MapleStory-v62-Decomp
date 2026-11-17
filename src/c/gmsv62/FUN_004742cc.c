/* FUN_004742cc - 0x004742cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004742cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_00475b89(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


