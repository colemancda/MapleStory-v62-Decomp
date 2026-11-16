/* FUN_51402d74 - 0x51402d74 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


size_t * FUN_51402d74(int param_1)

{
  size_t *psVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    psVar1 = (size_t *)0x0;
  }
  else {
    uVar2 = (*DAT_51411710)(0,0,param_1,0xffffffff,0,0);
    psVar1 = FUN_51402dbb(0,(uVar2 & 0x7fffffff) - 1);
    (*DAT_51411710)(0,0,param_1,0xffffffff,psVar1,0x3fffffff);
  }
  return psVar1;
}


