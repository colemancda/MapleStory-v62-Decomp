/* FUN_004038b2 - 0x004038b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


_com_error * __thiscall FUN_004038b2(_com_error *param_1,byte param_2)

{
  _com_error::~_com_error(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00402b41(param_1);
  }
  return param_1;
}


