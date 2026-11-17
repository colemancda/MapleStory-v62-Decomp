/* FUN_007d261b - 0x007d261b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007d261b(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 8);
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_8);
  }
  FUN_00402ee6(local_8,0);
  return param_2;
}


