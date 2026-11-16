/* FUN_50011d72 - 0x50011d72 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __cdecl FUN_50011d72(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[3] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}


