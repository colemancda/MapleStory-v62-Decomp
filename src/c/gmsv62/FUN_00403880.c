/* FUN_00403880 - 0x00403880 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall
FUN_00403880(undefined4 *param_1,undefined4 param_2,int *param_3,char param_4)

{
  param_1[3] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_008f3e88;
  if ((param_3 != (int *)0x0) && (param_4 != '\0')) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  return param_1;
}


