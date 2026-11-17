/* FUN_005d5575 - 0x005d5575 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005d5575(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  do {
    do {
      do {
        do {
          if (uVar3 == 0) {
            return local_8;
          }
          iVar1 = *(int *)(uVar3 + 4);
          iVar2 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
          uVar3 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
          iVar2 = FUN_004cd670(iVar1 + 0xf8,*(undefined4 *)(iVar1 + 0x100));
        } while ((iVar2 == 0) ||
                (iVar2 = FUN_004cd670(iVar1 + 0x3d0,*(undefined4 *)(iVar1 + 0x3d8)), iVar2 != 0));
        iVar2 = FUN_004cd670(*(int *)(iVar1 + 0x15c) + 0x140,
                             *(undefined4 *)(*(int *)(iVar1 + 0x15c) + 0x148));
      } while ((iVar2 == 0) ||
              (((*(int *)(*(int *)(iVar1 + 0x15c) + 0x1d8) != 0 ||
                (iVar2 = FUN_005d04ff(), iVar2 != 0)) || (*(int *)(iVar1 + 0x2f8) != 0))));
      FUN_005c5b12(local_18,1);
      iVar2 = (*DAT_0097b5a4)(local_18);
    } while ((iVar2 != 0) || (iVar2 = (*DAT_0097b5a0)(local_28,local_18,param_2), iVar2 == 0));
    local_8 = local_8 + 1;
    *param_3 = iVar1;
    param_3 = param_3 + 1;
  } while (local_8 < param_4);
  return local_8;
}


