/* FUN_0043210d - 0x0043210d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __fastcall FUN_0043210d(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0xd4))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963df8);
  }
  return local_8;
}


