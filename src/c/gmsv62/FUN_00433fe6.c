/* FUN_00433fe6 - 0x00433fe6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00433fe6(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))
                    (param_1,*param_3,param_3[1],param_3[2],param_3[3],*param_4,param_4[1],
                     param_4[2],param_4[3],&param_4);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_009640c0);
  }
  *param_2 = param_4;
  return;
}


