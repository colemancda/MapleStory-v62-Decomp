/* FUN_00473ba0 - 0x00473ba0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_00473ba0(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined2 *)(param_2 + 2);
  uVar2 = *(undefined4 *)(param_2 + 4);
  _memset(param_1,0,0x10);
  *(undefined4 *)(param_1 + 2) = uVar2;
  param_1[1] = uVar1;
  *param_1 = 2;
  return param_1;
}


