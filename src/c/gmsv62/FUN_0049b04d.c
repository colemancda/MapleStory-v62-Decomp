/* FUN_0049b04d - 0x0049b04d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall
FUN_0049b04d(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_004b3795();
  param_1[0x12] = 0;
  param_1[0x14] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  param_1[0x10] = param_5;
  param_1[0x11] = param_6;
  param_1[0xf] = param_8;
  param_1[0x13] = param_7;
  *param_1 = &PTR_LAB_008e99e0;
  param_1[1] = &PTR_LAB_008e9994;
  param_1[2] = &PTR_FUN_008e9990;
  return param_1;
}


