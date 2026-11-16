/* FUN_5180481d - 0x5180481d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __cdecl FUN_5180481d(undefined2 *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
  }
  else {
    *param_1 = 0xd;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


