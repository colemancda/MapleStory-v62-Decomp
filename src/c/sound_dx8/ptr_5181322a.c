/* ptr_5181322a - 0x5181322a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 ptr_5181322a(int param_1)

{
  *(uint *)(param_1 + 0x1c) = (uint)(*(int *)(param_1 + 0x18) != 0);
  return 0;
}


