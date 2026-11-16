/* FUN_50813956 - 0x50813956 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_50813956(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  (**(code **)(*param_1 + 0x28))(*param_4,0);
  FUN_5081399d(param_1,param_2,param_3,iVar1 - param_2);
  (**(code **)(*param_1 + 0x28))(iVar1,0);
  *param_4 = 0;
  return;
}


