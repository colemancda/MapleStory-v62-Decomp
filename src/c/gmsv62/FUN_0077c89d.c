/* FUN_0077c89d - 0x0077c89d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0077c89d(undefined4 *param_1,undefined4 param_2)

{
  FUN_0087b2f0(param_1 + 1,4,6,&LAB_00450362,FUN_004115cc);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = param_2;
  *param_1 = &PTR_FUN_008f1548;
  return param_1;
}


