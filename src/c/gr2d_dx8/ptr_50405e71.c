/* ptr_50405e71 - 0x50405e71 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall ptr_50405e71(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  param_1[1] = *(undefined4 *)(param_2 + 4);
  piVar1 = *(int **)(param_2 + 8);
  param_1[3] = 0;
  param_1[2] = piVar1;
  *param_1 = &PTR_FUN_50430914;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


