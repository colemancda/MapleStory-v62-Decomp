/* FUN_10004110 - 0x10004110 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl FUN_10004110(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    *param_2 = 0x40;
    return 0x10;
  case 1:
    *param_2 = 0x20;
    return 0x20;
  case 2:
    *param_2 = 0x10;
    return 0x40;
  case 3:
    *param_2 = 8;
    return 0x80;
  default:
    *param_2 = 0;
    return 0;
  }
}


