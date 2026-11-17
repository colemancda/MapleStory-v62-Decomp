/* ptr_004038d2 - 0x004038d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall ptr_004038d2(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  param_1[1] = *(undefined4 *)(param_2 + 4);
  piVar1 = *(int **)(param_2 + 8);
  param_1[3] = 0;
  param_1[2] = piVar1;
  *param_1 = &PTR_FUN_008f3e88;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


