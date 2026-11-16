/* ptr_51802ced - 0x51802ced in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall ptr_51802ced(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  param_1[1] = *(undefined4 *)(param_2 + 4);
  piVar1 = *(int **)(param_2 + 8);
  param_1[3] = 0;
  param_1[2] = piVar1;
  *param_1 = &PTR_FUN_51819f44;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


