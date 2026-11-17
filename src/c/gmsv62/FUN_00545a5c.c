/* FUN_00545a5c - 0x00545a5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_00545a5c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  VARIANTARG local_18;
  undefined4 local_8;
  
  local_8 = 0;
  VariantInit(&local_18);
  iVar1 = (**(code **)(*param_1 + 0x7c))
                    (param_1,param_3,param_4,param_5,param_6,*param_7,param_7[1],param_7[2],
                     param_7[3],&local_18);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963cc8);
  }
  FUN_0040491b(&local_18,0);
  return param_2;
}


