/* FUN_007d7bb4 - 0x007d7bb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007d7bb4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_3,param_4,&param_4);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963cc8);
  }
  *param_2 = param_4;
  return;
}


