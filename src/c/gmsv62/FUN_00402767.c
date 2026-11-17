/* FUN_00402767 - 0x00402767 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00402767(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008e848c;
  FUN_00403672();
  if ((param_2 & 1) != 0) {
    FUN_00402b41(param_1);
  }
  return param_1;
}


