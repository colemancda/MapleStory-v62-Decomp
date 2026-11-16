/* FUN_518093be - 0x518093be in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint * FUN_518093be(int param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    (*DAT_5181fb04)(0,0,param_1,0xffffffff,0,0,0,0);
    puVar1 = FUN_518019c0();
    (*DAT_5181fb04)(0,0,param_1,0xffffffff,puVar1,0x3fffffff,0,0);
  }
  return puVar1;
}


