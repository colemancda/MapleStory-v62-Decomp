/* FUN_00404321 - 0x00404321 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00404321(undefined4 param_1,byte param_2)

{
  FUN_004043aa();
  if ((param_2 & 1) != 0) {
    FUN_00403ab7(param_1);
  }
  return param_1;
}


