/* FUN_508096b2 - 0x508096b2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_508096b2(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *local_c;
  int *local_8;
  
  puVar1 = *(undefined4 **)this;
  local_c = this;
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = this;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_5081d1f0,&local_8);
    if (iVar2 < 0) {
      FUN_5080dfed(iVar2);
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (param_1 == (undefined4 *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)*param_1)(param_1,&DAT_5081d1f0,&local_c);
    if (iVar2 < 0) {
      FUN_5080dfed(iVar2);
    }
    (**(code **)(*local_c + 8))(local_c);
  }
  return (int)local_8 - (int)local_c >> 2;
}


