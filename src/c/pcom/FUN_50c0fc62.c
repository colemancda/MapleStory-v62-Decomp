/* FUN_50c0fc62 - 0x50c0fc62 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c0fc62(ushort param_1)

{
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return param_1 - 0x30;
  }
  if ((0x40 < param_1) && (param_1 < 0x47)) {
    return param_1 - 0x41;
  }
  if ((0x60 < param_1) && (param_1 < 0x67)) {
    return param_1 - 0x61;
  }
  return -1;
}


