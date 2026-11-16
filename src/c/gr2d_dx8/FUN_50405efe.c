/* FUN_50405efe - 0x50405efe in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint __thiscall FUN_50405efe(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_504073f9();
  *(uint *)(iVar1 + 8) = -(uint)(param_1 != 0) & param_1 - 0x10U;
  *(uint *)(iVar1 + 4) = -(uint)(param_2 != 0) & param_2 - 0x10U;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return -(uint)(iVar1 != 0) & iVar1 + 0x10U;
}


