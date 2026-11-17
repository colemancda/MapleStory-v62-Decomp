/* FUN_00446b89 - 0x00446b89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00446b89(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = &PTR_FUN_008e8674;
    return param_1;
  }
  return (undefined4 *)0x0;
}


