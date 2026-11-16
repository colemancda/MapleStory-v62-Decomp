/* FUN_5040d1a0 - 0x5040d1a0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void * __thiscall FUN_5040d1a0(void *this,void *param_1)

{
  int iVar1;
  undefined2 local_18 [8];
  undefined4 local_8;
  
  local_8 = 0;
  Ordinal_8(local_18);
  iVar1 = (**(code **)(*(int *)this + 0x60))(this,local_18);
  if (iVar1 < 0) {
    FUN_5042a366(iVar1,this,&DAT_50435298);
  }
  FUN_50407998(param_1,local_18,'\0');
  return param_1;
}


