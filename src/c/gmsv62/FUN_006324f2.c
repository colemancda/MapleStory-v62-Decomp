/* FUN_006324f2 - 0x006324f2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006324f2(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff;
    return param_1;
  }
  return (undefined4 *)0x0;
}


