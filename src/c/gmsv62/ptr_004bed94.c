/* ptr_004bed94 - 0x004bed94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char ptr_004bed94(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    return '\x1b';
  }
  return (-(*(int *)(unaff_EBP + 8) != 1) & 8U) + 0x24;
}


