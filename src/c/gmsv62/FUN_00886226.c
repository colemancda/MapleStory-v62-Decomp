/* FUN_00886226 - 0x00886226 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte FUN_00886226(uint param_1)

{
  if (DAT_00980fe0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00980ee0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


