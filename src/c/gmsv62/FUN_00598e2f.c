/* FUN_00598e2f - 0x00598e2f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00598e2f(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((((int)param_2 < 0) || (*(int *)(param_1 + 0x2c) == 0)) ||
      (*(uint *)(*(int *)(param_1 + 0x2c) + -4) <= param_2)) || ((param_3 < 0 || (2 < param_3)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 * 0x1d + param_3 * 4 + *(int *)(param_1 + 0x2c));
  }
  return uVar1;
}


