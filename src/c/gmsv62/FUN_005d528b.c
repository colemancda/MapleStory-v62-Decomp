/* FUN_005d528b - 0x005d528b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall
FUN_005d528b(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  int local_c;
  uint local_8;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  local_8 = 0;
  local_c = 0;
joined_r0x005d52a1:
  do {
    if ((uVar5 == 0) || (param_4 <= (int)local_8)) {
      return local_c << 0x10 | local_8;
    }
    iVar2 = *(int *)(uVar5 + 4);
    iVar3 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    uVar5 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    iVar3 = FUN_004cd670(iVar2 + 0xf8,*(undefined4 *)(iVar2 + 0x100));
  } while ((iVar3 == 0) ||
          (iVar3 = FUN_004cd670(iVar2 + 0x3d0,*(undefined4 *)(iVar2 + 0x3d8)), iVar3 != 0));
  if (param_5 != 0) goto code_r0x005d5316;
  goto LAB_005d534b;
code_r0x005d5316:
  iVar3 = FUN_004b8c9b(iVar2 + 0x150,*(undefined4 *)(iVar2 + 0x158));
  iVar4 = FUN_004b8c9b(param_5 + 0x150,*(undefined4 *)(param_5 + 0x158));
  if (iVar3 != iVar4) {
LAB_005d534b:
    if (((((param_6 == 0) ||
          (iVar3 = FUN_004b8c9b(iVar2 + 0x150,*(undefined4 *)(iVar2 + 0x158)), iVar3 == param_6)) &&
         ((param_8 == 0 ||
          (iVar3 = FUN_004b8c9b(*(int *)(iVar2 + 0x15c) + 0xc,
                                *(undefined4 *)(*(int *)(iVar2 + 0x15c) + 0x14)), param_8 == iVar3))
         )) && ((*(int *)(*(int *)(iVar2 + 0x15c) + 0x1d8) == 0 &&
                (iVar3 = FUN_005d04ff(), iVar3 == 0)))) &&
       ((param_9 != 0 || (*(int *)(iVar2 + 0x2f8) == 0)))) {
      FUN_005c5b12(local_1c,1);
      iVar3 = (*DAT_0097b5a4)(local_1c);
      if ((iVar3 == 0) && (iVar3 = (*DAT_0097b5a0)(local_2c,local_1c,param_2), iVar3 != 0)) {
        local_8 = local_8 + 1;
        piVar1 = param_3 + 1;
        *param_3 = iVar2;
        param_3 = piVar1;
        if ((param_7 != 0) && (*(int *)(iVar2 + 0x220) == param_7)) {
          local_c = local_c + 1;
        }
      }
    }
  }
  goto joined_r0x005d52a1;
}


