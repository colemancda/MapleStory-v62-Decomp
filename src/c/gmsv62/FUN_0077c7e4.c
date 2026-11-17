/* FUN_0077c7e4 - 0x0077c7e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0077c7e4(undefined4 *param_1,undefined4 param_2)

{
  FUN_0087b2f0(param_1 + 1,4,0xe,&LAB_00450362,FUN_004115cc);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = param_2;
  *param_1 = &PTR_FUN_008f1544;
  return param_1;
}


