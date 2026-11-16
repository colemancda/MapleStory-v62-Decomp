/* FUN_50c04a3f - 0x50c04a3f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c04a3f(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004003;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    if ((param_2 == 0) ||
       ((((*param_3 == 0 && (param_3[1] == 0)) && (param_3[2] == 0xc0)) &&
        (param_3[3] == 0x46000000)))) {
      uVar1 = (**(code **)(param_1 + 0x10))(param_2,param_3,param_4);
    }
    else {
      uVar1 = 0x80040110;
    }
  }
  return uVar1;
}


