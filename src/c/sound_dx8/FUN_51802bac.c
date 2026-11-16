/* FUN_51802bac - 0x51802bac in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


size_t * FUN_51802bac(int param_1)

{
  size_t *psVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    psVar1 = (size_t *)0x0;
  }
  else {
    uVar2 = (*DAT_5181fb00)(0,0,param_1,0xffffffff,0,0);
    psVar1 = FUN_51802bf3(0,(uVar2 & 0x7fffffff) - 1);
    (*DAT_5181fb00)(0,0,param_1,0xffffffff,psVar1,0x3fffffff);
  }
  return psVar1;
}


