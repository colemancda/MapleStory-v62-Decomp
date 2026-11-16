/* FUN_50407a15 - 0x50407a15 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_50407a15(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x100))
                    (this,*param_2,param_2[1],param_2[2],param_2[3],&param_2);
  if (iVar1 < 0) {
    FUN_5042a366(iVar1,this,&DAT_50435468);
  }
  *param_1 = param_2;
  return;
}


