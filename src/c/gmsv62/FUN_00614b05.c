/* FUN_00614b05 - 0x00614b05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00614b05(int *param_1,undefined4 param_2)

{
  int iVar1;
  VARIANTARG local_18;
  undefined4 local_8;
  
  local_8 = 0;
  VariantInit(&local_18);
  iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,&local_18);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963df8);
  }
  FUN_0040491b(&local_18,0);
  return param_2;
}


