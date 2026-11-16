/* FUN_518127d2 - 0x518127d2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_518127d2(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    iVar1 = FUN_5181348f();
    if (-1 < iVar1) {
      FUN_51812819();
      *param_2 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      iVar1 = 0;
    }
  }
  return iVar1;
}


