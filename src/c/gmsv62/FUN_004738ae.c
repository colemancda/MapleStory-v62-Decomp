/* FUN_004738ae - 0x004738ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_004738ae(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  FUN_00475c07(0x100,(int)&param_2 + 3);
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  return param_1;
}


