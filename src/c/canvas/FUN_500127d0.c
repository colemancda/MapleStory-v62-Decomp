/* FUN_500127d0 - 0x500127d0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __thiscall FUN_500127d0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x18))(this,&local_8);
  if (iVar1 < 0) {
    FUN_50012ca5(iVar1,this,&DAT_500195c0);
  }
  FUN_50006407();
  return param_1;
}


