/* ptr_006be8cf - 0x006be8cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_006be8cf(void)

{
  int *unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  
  do {
    unaff_ESI = unaff_ESI + 8;
    FUN_006be96d();
  } while (unaff_ESI < *(uint *)(unaff_EBP + 0xc));
  if (*unaff_EBX != 0) {
    *(undefined4 *)(*unaff_EBX + -4) = *(undefined4 *)(unaff_EBP + 8);
  }
  return *unaff_EBX;
}


