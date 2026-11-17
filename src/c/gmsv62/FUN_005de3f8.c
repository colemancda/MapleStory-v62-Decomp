/* FUN_005de3f8 - 0x005de3f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005de3f8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_LAB_008e84a0;
    _memset(param_1,0,0xc);
    *param_1 = &PTR_FUN_008ecbf0;
    puVar1 = param_1;
  }
  return puVar1;
}


