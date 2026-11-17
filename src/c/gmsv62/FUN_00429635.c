/* FUN_00429635 - 0x00429635 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_00429635(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))
                    (param_1,*param_2,param_2[1],param_2[2],param_2[3],param_3,param_4,param_5,
                     param_6,*param_7,param_7[1],param_7[2],param_7[3]);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963de8);
  }
  return iVar1;
}


