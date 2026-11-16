/* FUN_504104c2 - 0x504104c2 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __cdecl FUN_504104c2(undefined2 *param_1,int *param_2)

{
  int *piVar1;
  
  *param_1 = 0xd;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


