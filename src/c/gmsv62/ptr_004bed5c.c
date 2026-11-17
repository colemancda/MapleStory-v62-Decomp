/* ptr_004bed5c - 0x004bed5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char ptr_004bed5c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    return '\x17';
  }
  return (-(*(int *)(unaff_EBP + 8) != 1) & 8U) + 0x22;
}


