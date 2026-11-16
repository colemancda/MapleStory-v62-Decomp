/* ptr_51804ceb - 0x51804ceb in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void ptr_51804ceb(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FreeLibrary(*(HMODULE *)((int)&DAT_5181f8e8 + uVar1));
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x24);
  return;
}


