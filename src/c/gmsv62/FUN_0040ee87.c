/* FUN_0040ee87 - 0x0040ee87 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_0040ee87(undefined2 *param_1,int *param_2,char param_3)

{
  *param_1 = 0xd;
  *(int **)(param_1 + 4) = param_2;
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return param_1;
}


