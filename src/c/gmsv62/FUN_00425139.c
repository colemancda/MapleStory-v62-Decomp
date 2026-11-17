/* FUN_00425139 - 0x00425139 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00425139(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x110))
                    (param_1,param_2,*param_3,param_3[1],param_3[2],param_3[3],*param_4,param_4[1],
                     param_4[2],param_4[3]);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963df8);
  }
  return iVar1;
}


