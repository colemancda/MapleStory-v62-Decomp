/* FUN_51005727 - 0x51005727 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 __thiscall FUN_51005727(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(this,&local_8);
  if (iVar1 < 0) {
    FUN_51005828(iVar1,this,&DAT_51009218);
  }
  FUN_5100511b();
  return param_1;
}


