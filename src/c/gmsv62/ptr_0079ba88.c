/* ptr_0079ba88 - 0x0079ba88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_0079ba88(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = 0x3c;
  do {
    FUN_0079bb28();
    if (iVar1 == 1) {
      *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x1824) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3d);
  return *(int *)(unaff_EBP + -4) + 0x1da4;
}


