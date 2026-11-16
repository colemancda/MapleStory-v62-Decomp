/* ptr_50401ec3 - 0x50401ec3 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ptr_50401ec3(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FreeLibrary(*(HMODULE *)((int)&DAT_50438e80 + uVar1));
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x24);
  return;
}


