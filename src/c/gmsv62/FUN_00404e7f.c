/* FUN_00404e7f - 0x00404e7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00404e7f(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963cc8);
  }
  *param_2 = local_8;
  return;
}


