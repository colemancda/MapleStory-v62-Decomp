/* FUN_51404a52 - 0x51404a52 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __cdecl FUN_51404a52(undefined2 *param_1,int *param_2)

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


