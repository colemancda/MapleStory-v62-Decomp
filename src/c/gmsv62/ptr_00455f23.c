/* ptr_00455f23 - 0x00455f23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00455f23(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00979170;
  do {
    if (puVar1 == param_1) {
      return 1;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  return 0;
}


