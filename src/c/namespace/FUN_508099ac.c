/* FUN_508099ac - 0x508099ac in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_508099ac(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x14))(this,&local_8);
  if (iVar1 < 0) {
    FUN_5080dffb(iVar1,this,&DAT_5081d210);
  }
  *param_1 = local_8;
  return;
}


