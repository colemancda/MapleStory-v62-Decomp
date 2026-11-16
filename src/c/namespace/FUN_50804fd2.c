/* FUN_50804fd2 - 0x50804fd2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50804fd2(void *this,int param_1)

{
  size_t *psVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  psVar1 = FUN_50805005(param_1);
  *(size_t **)this = psVar1;
  if ((psVar1 == (size_t *)0x0) && (param_1 != 0)) {
    FUN_5080dfed(0x8007000e);
  }
  return this;
}


