/* FUN_006571ae - 0x006571ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006571ae(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}


