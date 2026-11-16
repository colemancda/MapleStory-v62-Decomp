/* FUN_50805005 - 0x50805005 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


size_t * FUN_50805005(int param_1)

{
  size_t *psVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    psVar1 = (size_t *)0x0;
  }
  else {
    uVar2 = (*DAT_5081e730)(0,0,param_1,0xffffffff,0,0);
    psVar1 = FUN_50803a6e(0,(uVar2 & 0x7fffffff) - 1);
    (*DAT_5081e730)(0,0,param_1,0xffffffff,psVar1,0x3fffffff);
  }
  return psVar1;
}


