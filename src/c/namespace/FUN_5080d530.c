/* FUN_5080d530 - 0x5080d530 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * __fastcall FUN_5080d530(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_5080dffb(iVar1,param_1,&DAT_5081e4e0);
  }
  return local_8;
}


