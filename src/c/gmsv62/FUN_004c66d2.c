/* FUN_004c66d2 - 0x004c66d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_004c66d2(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_004c67a5(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    local_c = 0;
    local_8 = 0;
    if (DAT_009791a8 != 0) {
      if (((param_5 != 0) && (*(int *)(param_1 + 0x18) != -1)) && (*(int *)(param_1 + 0x1c) != -1))
      {
        FUN_00598d7b(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
        FUN_00598c09();
        FUN_0071f61a();
      }
      if ((param_4 != 0) || (iVar1 = FUN_0071f653(param_2,param_3,0,&local_c,&local_8), iVar1 != 0))
      {
        if ((*(int *)(param_1 + 0x18) != -1) && (*(int *)(param_1 + 0x1c) != -1)) {
          FUN_00598d7b(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
        }
        if (param_4 == 0) {
          FUN_00598e08(local_c,local_8,*(undefined4 *)(param_1 + 0x10));
        }
        FUN_00598c09();
        FUN_0071f61a();
        return 1;
      }
    }
  }
  return 0;
}


