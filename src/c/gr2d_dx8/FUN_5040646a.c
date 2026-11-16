/* FUN_5040646a - 0x5040646a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


size_t * FUN_5040646a(int param_1)

{
  size_t *psVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    psVar1 = (size_t *)0x0;
  }
  else {
    uVar2 = (*DAT_50438bd0)(0,0,param_1,0xffffffff,0,0);
    psVar1 = FUN_5040539d(0,(uVar2 & 0x7fffffff) - 1);
    (*DAT_50438bd0)(0,0,param_1,0xffffffff,psVar1,0x3fffffff);
  }
  return psVar1;
}


