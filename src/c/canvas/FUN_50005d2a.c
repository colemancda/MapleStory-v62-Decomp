/* FUN_50005d2a - 0x50005d2a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __thiscall FUN_50005d2a(void *this,undefined4 *param_1)

{
  bool bVar1;
  
  if ((((*(int *)((int)this + 4) == param_1[1]) && (*(int *)((int)this + 8) == param_1[2])) &&
      (*(int *)((int)this + 0xc) == param_1[3])) && (bVar1 = FUN_500064dd(this,param_1), bVar1)) {
    return 1;
  }
  return 0;
}


