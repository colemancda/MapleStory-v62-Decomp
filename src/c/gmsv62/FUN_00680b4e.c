/* FUN_00680b4e - 0x00680b4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00680b4e(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_008ee984;
  return param_1;
}


