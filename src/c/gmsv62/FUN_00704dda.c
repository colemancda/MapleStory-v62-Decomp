/* FUN_00704dda - 0x00704dda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00704dda(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_1c [4];
  int local_18;
  undefined1 local_14 [4];
  int local_10;
  uint local_c;
  int *local_8;
  
  if (param_2 == 0x201) {
    local_8 = (int *)0x0;
    puVar2 = (undefined4 *)(param_1 + 0x628);
    for (param_2 = 0;
        (*(int *)(param_1 + 0x620) != 0 && (param_2 < *(uint *)(*(int *)(param_1 + 0x620) + -4)));
        param_2 = param_2 + 1) {
      iVar1 = (*DAT_0097b57c)((int)local_8 + *(int *)(param_1 + 0x620),param_4,param_5);
      if (iVar1 != 0) {
        iVar1 = FUN_006defab(*(int *)(param_1 + 0x574) + param_2 * 4,0);
        if (iVar1 == 0) {
          *puVar2 = 0;
        }
        else {
          *puVar2 = 1;
          local_c = *(uint *)(*(int *)(param_1 + 0x574) + param_2 * 4);
          iVar1 = FUN_006defab(&local_c,0);
          if (iVar1 != 0) {
            FUN_007062dd(&local_c);
          }
          FUN_00705008(0);
        }
      }
      local_8 = (int *)((int)local_8 + 0x10);
      puVar2 = puVar2 + 1;
    }
  }
  else if (param_2 == 0x203) {
    uVar3 = 0;
    local_8 = (int *)(param_1 + 0x628);
    param_2 = 0;
    do {
      if (*(int *)(param_1 + 0x620) == 0) {
        return;
      }
      if (*(uint *)(*(int *)(param_1 + 0x620) + -4) <= uVar3) {
        return;
      }
      iVar1 = (*DAT_0097b57c)(param_2 + *(int *)(param_1 + 0x620),param_4,param_5);
      if ((iVar1 != 0) ||
         (iVar1 = (*DAT_0097b57c)(*(int *)(param_1 + 0x624) + param_2,param_4,param_5), iVar1 != 0))
      {
        if (*local_8 != 0) {
          return;
        }
        if (DAT_0097bdc0 != 0) {
          iVar1 = FUN_006fb663(local_14);
          iVar1 = *(int *)(iVar1 + 4);
          if (local_10 != 0) {
            FUN_00705e5b(0);
            local_10 = 0;
          }
          if (iVar1 != 0) {
            iVar1 = FUN_006fb663(local_1c);
            local_c = (uint)(*(uint *)(*(int *)(param_1 + 0x574) + uVar3 * 4) ==
                            (uint)**(ushort **)(iVar1 + 4));
            if (local_18 != 0) {
              FUN_00705e5b(0);
              local_18 = 0;
            }
            if (local_c != 0) {
              FUN_008324e4(6);
              goto LAB_00704fdb;
            }
          }
        }
        FUN_008324e4(6);
        FUN_008320df(6);
        FUN_00700569(0,CONCAT22((short)((uint)*(int *)(param_1 + 0x574) >> 0x10),
                                *(undefined2 *)(*(int *)(param_1 + 0x574) + uVar3 * 4)));
        FUN_00704ff0();
      }
LAB_00704fdb:
      param_2 = param_2 + 0x10;
      uVar3 = uVar3 + 1;
      local_8 = local_8 + 1;
    } while( true );
  }
  return;
}


