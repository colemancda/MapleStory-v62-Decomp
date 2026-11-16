/* FUN_5140abfd - 0x5140abfd in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __thiscall
FUN_5140abfd(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x90))
                    (this,param_1,param_2,*param_3,param_3[1],param_3[2],param_3[3],*param_4,
                     param_4[1],param_4[2],param_4[3]);
  if (iVar1 < 0) {
    FUN_5140ac55(iVar1,this,&DAT_514101c0);
  }
  return iVar1;
}


