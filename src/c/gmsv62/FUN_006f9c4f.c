/* FUN_006f9c4f - 0x006f9c4f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f9c4f(void)

{
  if ((*(int *)(DAT_00978368 + 0x2c94) != 0) && (*(int *)(DAT_00978368 + 0x2c94) != 1)) {
    FUN_006f9059(1);
    FUN_0085cdbd();
    *(undefined4 *)(DAT_00978368 + 0x2c94) = 0;
    FUN_0083c6d2();
    FUN_0085b06d();
    return;
  }
  return;
}


