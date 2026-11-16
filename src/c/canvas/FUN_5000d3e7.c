/* FUN_5000d3e7 - 0x5000d3e7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void * __thiscall FUN_5000d3e7(void *this,void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 local_18 [8];
  undefined4 local_8;
  
  local_8 = 0;
  Ordinal_8(local_18);
  iVar1 = (**(code **)(*(int *)this + 0x1c))(this,param_2,local_18);
  if (iVar1 < 0) {
    FUN_50012ca5(iVar1,this,&DAT_500183f8);
  }
  FUN_5000d431(param_1,local_18,'\0');
  return param_1;
}


