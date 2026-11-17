/* FUN_005039eb - 0x005039eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_005039eb(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x8c))(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963cc8);
  }
  return iVar1;
}


