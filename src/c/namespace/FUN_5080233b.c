/* FUN_5080233b - 0x5080233b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_5080233b(void *this,int param_1)

{
  FUN_5080b18c(param_1);
  if (*(int *)((int)this + 4) != 0) {
    FUN_508032a9((int)this);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (int)this;
}


