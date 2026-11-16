/* FUN_50407a5a - 0x50407a5a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void * __thiscall
FUN_50407a5a(void *this,void *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined2 local_18 [8];
  undefined4 local_8;
  
  local_8 = 0;
  Ordinal_8(local_18);
  iVar1 = (**(code **)(*(int *)this + 0x104))
                    (this,param_2,*param_3,param_3[1],param_3[2],param_3[3],*param_4,param_4[1],
                     param_4[2],param_4[3],*param_5,param_5[1],param_5[2],param_5[3],*param_6,
                     param_6[1],param_6[2],param_6[3],*param_7,param_7[1],param_7[2],param_7[3],
                     local_18);
  if (iVar1 < 0) {
    FUN_5042a366(iVar1,this,&DAT_50435468);
  }
  FUN_50407998(param_1,local_18,'\0');
  return param_1;
}


