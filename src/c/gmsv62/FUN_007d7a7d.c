/* FUN_007d7a7d - 0x007d7a7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007d7a7d(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  VARIANTARG local_18;
  undefined4 local_8;
  
  local_8 = 0;
  VariantInit(&local_18);
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_3,&local_18);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_0096c3a8);
  }
  FUN_0040491b(&local_18,0);
  return param_2;
}


