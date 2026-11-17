/* FUN_0076060a - 0x0076060a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076060a(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(DAT_0097951c + 0x6ac) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_0097951c + 0x6ac) + -4);
  }
  FUN_004ad003(iVar1 + -2);
  FUN_008161f1(0);
  return;
}


