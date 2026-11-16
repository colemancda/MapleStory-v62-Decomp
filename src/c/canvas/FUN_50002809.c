/* FUN_50002809 - 0x50002809 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


size_t * FUN_50002809(int param_1)

{
  size_t *psVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    psVar1 = (size_t *)0x0;
  }
  else {
    uVar2 = (*DAT_50081c20)(0,0,param_1,0xffffffff,0,0);
    psVar1 = FUN_50002850(0,(uVar2 & 0x7fffffff) - 1);
    (*DAT_50081c20)(0,0,param_1,0xffffffff,psVar1,0x3fffffff);
  }
  return psVar1;
}


