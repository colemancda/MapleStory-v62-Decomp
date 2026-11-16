/* FUN_5080529f - 0x5080529f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __fastcall FUN_5080529f(int *param_1)

{
  int iVar1;
  
  if (((int *)*param_1 != (int *)0x0) && (iVar1 = *(int *)*param_1, iVar1 != 0)) {
    return *(uint *)(iVar1 + -4) >> 1;
  }
  return 0;
}


