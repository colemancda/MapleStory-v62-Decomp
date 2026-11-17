/* FUN_005c5c52 - 0x005c5c52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005c5c52(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  uint local_14;
  int *local_10;
  int local_c;
  undefined1 local_5;
  
  if ((*(int *)(param_1 + 0x3ac) != 0) && (*(int *)(*(int *)(param_1 + 0x3ac) + -4) != 0)) {
    FUN_004fae8e(0,&local_5);
    FUN_005c5474();
    iVar1 = FUN_005c5474();
    local_10 = (int *)(param_1 + 0x3ac);
    if (iVar1 == 0) {
      local_10 = (int *)(param_1 + 0x3b0);
    }
    local_c = 0;
    for (local_14 = 0;
        (*(int *)(param_1 + 0x3ac) != 0 && (local_14 < *(uint *)(*(int *)(param_1 + 0x3ac) + -4)));
        local_14 = local_14 + 1) {
      local_18 = (undefined4 *)FUN_004f1aaa(0xffffffff);
      puVar2 = (undefined4 *)(*local_10 + local_c);
      *local_18 = *puVar2;
      local_18[1] = puVar2[1];
      local_18[2] = puVar2[2];
      local_18[3] = puVar2[3];
      (*DAT_0097b54c)(local_18,*(undefined4 *)(param_1 + 0x480),*(undefined4 *)(param_1 + 0x484));
      if (param_3 != 0) {
        puVar2 = (undefined4 *)(*local_10 + local_c);
        local_28 = *puVar2;
        uStack_24 = puVar2[1];
        uStack_20 = puVar2[2];
        uStack_1c = puVar2[3];
        (*DAT_0097b54c)(&local_28,*(undefined4 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x48c))
        ;
        (*DAT_0097b500)(local_18,local_18,&local_28);
      }
      local_c = local_c + 0x10;
    }
  }
  return;
}


