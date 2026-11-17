/* ptr_0079ba57 - 0x0079ba57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_0079ba57(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = 7;
  do {
    FUN_0079bb28();
    if (iVar1 == 1) {
      *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x1824) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x13);
  return *(int *)(unaff_EBP + -4) + 0x18ac;
}


