/* FUN_0067b267 - 0x0067b267 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0067b267(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  puVar3 = (undefined4 *)(param_1 + 0x108);
  iVar1 = (*DAT_0097b5a4)(puVar3);
  if (iVar1 == 0) {
    local_8 = FUN_0067b311();
    if (local_8 == 0) {
      puVar3 = (undefined4 *)(param_1 + 0x118);
    }
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    (*DAT_0097b54c)(param_2,*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144));
    if (param_3 != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x108);
      if (local_8 == 0) {
        puVar3 = (undefined4 *)(param_1 + 0x118);
      }
      local_18 = *puVar3;
      uStack_14 = puVar3[1];
      uStack_10 = puVar3[2];
      uStack_c = puVar3[3];
      (*DAT_0097b54c)(&local_18,*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
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


