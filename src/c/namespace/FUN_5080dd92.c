/* FUN_5080dd92 - 0x5080dd92 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080dd92(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_5080dfed(0x80004003);
  }
  (**(code **)(**(int **)((int)this + 0x20) + 0x40))
            (*(int **)((int)this + 0x20),param_2,param_3,&local_8);
  *param_1 = local_8;
  return;
}


