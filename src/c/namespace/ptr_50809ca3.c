/* ptr_50809ca3 - 0x50809ca3 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void ptr_50809ca3(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FreeLibrary(*(HMODULE *)((int)&DAT_5081ea10 + uVar1));
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x24);
  return;
}


