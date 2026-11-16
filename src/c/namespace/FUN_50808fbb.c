/* FUN_50808fbb - 0x50808fbb in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __thiscall FUN_50808fbb(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5080966d();
  *(uint *)(iVar1 + 8) = -(uint)(param_1 != 0) & param_1 - 0x10U;
  *(uint *)(iVar1 + 4) = -(uint)(param_2 != 0) & param_2 - 0x10U;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return -(uint)(iVar1 != 0) & iVar1 + 0x10U;
}


