/* FUN_006f9c0d - 0x006f9c0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f9c0d(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00978368 + 0x2c94);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 != 3) {
      *(int *)(DAT_00978368 + 0x2c94) = 3;
      FUN_0083c66d();
      FUN_0085b06d();
      FUN_008161f1(0);
    }
  }
  return;
}


