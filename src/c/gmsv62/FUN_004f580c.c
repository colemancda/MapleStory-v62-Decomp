/* FUN_004f580c - 0x004f580c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004f580c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008ead1c;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_008ead18;
  param_1[3] = &PTR_LAB_008ead14;
  return param_1;
}


