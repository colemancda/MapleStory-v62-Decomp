/* FUN_0079d0da - 0x0079d0da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0079d0da(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if (puVar1 == (undefined *)0x312609) {
      return param_1[9];
    }
    if ((puVar1 == &DAT_004c4f2b) || (puVar1 == (undefined *)0x4f7f90)) {
      return 0x5a;
    }
    if (puVar1 == (undefined *)0x4faa8f) {
      return 0xb4;
    }
    if (puVar1 == (undefined *)0x4faa90) {
      return 600;
    }
  }
  return param_2;
}


