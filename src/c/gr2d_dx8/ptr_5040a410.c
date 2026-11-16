/* ptr_5040a410 - 0x5040a410 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_5040a410(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x38);
    *param_2 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    uVar2 = 0;
  }
  return uVar2;
}


