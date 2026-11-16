/* FUN_5000ec39 - 0x5000ec39 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_5000ec39(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x1c))(this,&local_8);
  if (iVar1 < 0) {
    FUN_50012ca5(iVar1,this,&DAT_50019518);
  }
  *param_1 = local_8;
  return;
}


