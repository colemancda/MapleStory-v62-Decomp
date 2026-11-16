/* FUN_51809394 - 0x51809394 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __fastcall FUN_51809394(int *param_1)

{
  uint *puVar1;
  
  if (param_1[1] == 0) {
    puVar1 = FUN_518093be(*param_1);
    param_1[1] = (int)puVar1;
    if ((puVar1 == (uint *)0x0) && (*param_1 != 0)) {
      FUN_5180e990(0x8007000e);
    }
  }
  return param_1[1];
}


