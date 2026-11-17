/* ptr_0079ba7a - 0x0079ba7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_0079ba7a(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = 0x35;
  do {
    FUN_0079bb28();
    if (iVar1 == 1) {
      *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x1824) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3b);
  return *(int *)(unaff_EBP + -4) + 0x1cfc;
}


