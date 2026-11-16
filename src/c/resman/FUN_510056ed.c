/* FUN_510056ed - 0x510056ed in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 __thiscall FUN_510056ed(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x24))(this,&local_8);
  if (iVar1 < 0) {
    FUN_51005828(iVar1,this,&DAT_51009218);
  }
  FUN_5100511b();
  return param_1;
}


