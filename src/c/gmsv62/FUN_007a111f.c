/* FUN_007a111f - 0x007a111f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_007a111f(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008f1900;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_008f18fc;
  param_1[3] = &PTR_LAB_008f18f8;
  return param_1;
}


