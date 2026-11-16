/* FUN_5180ddb7 - 0x5180ddb7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5180ddb7(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,param_3,param_1);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return *param_1;
}


