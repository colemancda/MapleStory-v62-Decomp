/* ptr_00424f88 - 0x00424f88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00424f88(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0042500e(0);
    *(undefined4 *)(unaff_ESI + 4) = 0;
  }
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 4);
  return;
}


