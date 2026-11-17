/* FUN_0046ffc6 - 0x0046ffc6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_0046ffc6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))
                    (param_1,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3],*param_5,
                     param_5[1],param_5[2],param_5[3]);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963cc8);
  }
  return iVar1;
}


