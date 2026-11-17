/* FUN_005f0f5e - 0x005f0f5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005f0f5e(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  do {
    do {
      iVar1 = local_8;
      if (iVar1 == 0) {
        return 0;
      }
      local_8 = *(int *)(iVar1 + 4);
      iVar2 = FUN_005f3a71(**(undefined4 **)(*(int *)(iVar1 + 0x10) + 0x98));
    } while ((((iVar2 != 0) && (*(int *)(iVar2 + 0x9c) != 0)) &&
             (*(int *)(*(int *)(iVar1 + 0x10) + 0x7c) == 0)) ||
            (*(int *)(*(int *)(iVar1 + 0x10) + 0x124) == 0));
    puVar3 = (undefined4 *)FUN_005ec7d6();
    local_18 = *puVar3;
    uStack_14 = puVar3[1];
    uStack_10 = puVar3[2];
    uStack_c = puVar3[3];
    puVar3 = (undefined4 *)FUN_005ec821();
    local_28 = *puVar3;
    uStack_24 = puVar3[1];
    uStack_20 = puVar3[2];
    uStack_1c = puVar3[3];
    iVar2 = (*DAT_0097b57c)(&local_18,*param_2,param_2[1]);
  } while ((iVar2 == 0) && (iVar2 = (*DAT_0097b57c)(&local_28,*param_2,param_2[1]), iVar2 == 0));
  return *(undefined4 *)(iVar1 + 0x10);
}


