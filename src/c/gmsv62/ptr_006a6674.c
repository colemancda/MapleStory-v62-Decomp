/* ptr_006a6674 - 0x006a6674 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a6674(void)

{
  int unaff_EBP;
  
  FUN_004bc822(*(undefined4 *)(unaff_EBP + 8));
  if (*(int *)(unaff_EBP + 8) == 0xd) {
    FUN_006a66e9();
  }
  FUN_004bc822(*(undefined4 *)(unaff_EBP + 8));
  return;
}


