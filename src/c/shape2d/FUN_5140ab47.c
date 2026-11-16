/* FUN_5140ab47 - 0x5140ab47 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void * __thiscall FUN_5140ab47(void *this,void *param_1)

{
  int iVar1;
  undefined2 local_18 [8];
  undefined4 local_8;
  
  local_8 = 0;
  Ordinal_8(local_18);
  iVar1 = (**(code **)(*(int *)this + 0x60))(this,local_18);
  if (iVar1 < 0) {
    FUN_5140ac55(iVar1,this,&DAT_514101c0);
  }
  FUN_5140ab8e(param_1,local_18,'\0');
  return param_1;
}


