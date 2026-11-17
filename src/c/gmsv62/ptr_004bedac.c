/* ptr_004bedac - 0x004bedac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char ptr_004bedac(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    return '\x1c';
  }
  return (-(*(int *)(unaff_EBP + 8) != 1) & 8U) + 0x25;
}


