/* FUN_518094e6 - 0x518094e6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint __cdecl FUN_518094e6(uint param_1)

{
  return (param_1 >> 0x10 & 0xff) << 8 |
         (uint)CONCAT11((char)param_1,(char)(param_1 >> 8)) << 0x10 | param_1 >> 0x18;
}


