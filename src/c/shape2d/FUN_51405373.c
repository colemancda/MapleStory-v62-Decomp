/* FUN_51405373 - 0x51405373 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


uint __thiscall FUN_51405373(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5140564d();
  *(uint *)(iVar1 + 8) = -(uint)(param_1 != 0) & param_1 - 0x10U;
  *(uint *)(iVar1 + 4) = -(uint)(param_2 != 0) & param_2 - 0x10U;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return -(uint)(iVar1 != 0) & iVar1 + 0x10U;
}


