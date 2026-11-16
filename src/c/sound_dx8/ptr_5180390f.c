/* ptr_5180390f - 0x5180390f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 ptr_5180390f(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_5181f8a0);
  }
  else {
    InterlockedIncrement(&DAT_5181f8a0);
  }
  return 0;
}


