/* FUN_504079dd - 0x504079dd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_504079dd(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x34))(this,param_2,param_3,&param_3);
  if (iVar1 < 0) {
    FUN_5042a366(iVar1,this,&DAT_50435388);
  }
  *param_1 = param_3;
  return;
}


