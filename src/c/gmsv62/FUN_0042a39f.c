/* FUN_0042a39f - 0x0042a39f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0042a39f(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
            undefined4 *param_9)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x60))
                    (param_1,param_3,param_4,param_5,param_6,param_7,*param_8,param_8[1],param_8[2],
                     param_8[3],*param_9,param_9[1],param_9[2],param_9[3],&param_9);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00964018);
  }
  *param_2 = param_9;
  return;
}


