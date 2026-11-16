/* FUN_50408bc1 - 0x50408bc1 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __fastcall FUN_50408bc1(int *param_1)

{
  uint *puVar1;
  
  if (param_1[1] == 0) {
    puVar1 = FUN_50408beb(*param_1);
    param_1[1] = (int)puVar1;
    if ((puVar1 == (uint *)0x0) && (*param_1 != 0)) {
      FUN_5042a358(0x8007000e);
    }
  }
  return param_1[1];
}


