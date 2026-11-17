/* FUN_005c5b12 - 0x005c5b12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005c5b12(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  puVar3 = (undefined4 *)(param_1 + 0x38c);
  iVar1 = (*DAT_0097b5a4)(puVar3);
  if (iVar1 == 0) {
    local_8 = FUN_005c5474();
    if (local_8 == 0) {
      puVar3 = (undefined4 *)(param_1 + 0x39c);
    }
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    (*DAT_0097b54c)(param_2,*(undefined4 *)(param_1 + 0x480),*(undefined4 *)(param_1 + 0x484));
    if (param_3 != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x38c);
      if (local_8 == 0) {
        puVar3 = (undefined4 *)(param_1 + 0x39c);
      }
      local_18 = *puVar3;
      uStack_14 = puVar3[1];
      uStack_10 = puVar3[2];
      uStack_c = puVar3[3];
      (*DAT_0097b54c)(&local_18,*(undefined4 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x48c));
      (*DAT_0097b500)(param_2,param_2,&local_18);
    }
    uVar2 = 1;
  }
  else {
    (*DAT_0097b508)(param_2);
    uVar2 = 0;
  }
  return uVar2;
}


