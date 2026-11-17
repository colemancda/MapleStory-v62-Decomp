/* FUN_007b021d - 0x007b021d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_007b021d(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  uVar3 = *(uint *)(param_1 + 6000);
  while (uVar3 != 0) {
    uVar1 = *(undefined4 *)(uVar3 + 4);
    iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    FUN_0067b267(local_18,1);
    iVar2 = (*DAT_0097b5a4)(local_18);
    if ((iVar2 == 0) && (iVar2 = (*DAT_0097b5a0)(local_28,local_18,param_2), iVar2 != 0)) {
      local_8 = local_8 + 1;
      *param_3 = uVar1;
      param_3 = param_3 + 1;
    }
  }
  return local_8;
}


