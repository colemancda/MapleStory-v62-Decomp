/* ptr_00850ffc - 0x00850ffc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_00850ffc(void)

{
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00879c20();
  FUN_00402b41();
  *unaff_EBX = unaff_ESI;
  if (*unaff_EBX != 0) {
    *(undefined4 *)(*unaff_EBX + -4) = *(undefined4 *)(unaff_EBP + 8);
  }
  return *unaff_EBX;
}


