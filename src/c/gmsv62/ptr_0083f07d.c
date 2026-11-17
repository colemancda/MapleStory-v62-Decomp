/* ptr_0083f07d - 0x0083f07d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0083f07d(void)

{
  uint in_EAX;
  uint unaff_ESI;
  int *unaff_EDI;
  
  for (; in_EAX < unaff_ESI; in_EAX = in_EAX + 0x2a) {
    FUN_0082f98f();
  }
  FUN_00402b41(*unaff_EDI + -4);
  *unaff_EDI = 0;
  return;
}


