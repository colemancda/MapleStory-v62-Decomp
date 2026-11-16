/* FUN_51813193 - 0x51813193 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51813193(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = 1;
    if ((param_2 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      piVar1 = *(int **)(param_1 + 0x18);
      param_2 = param_2 + -1;
      *param_3 = piVar1;
      param_3 = param_3 + 1;
      (**(code **)(*piVar1 + 4))(piVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      uVar2 = 0;
    }
    if (param_2 != 0) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
    }
  }
  return uVar2;
}


