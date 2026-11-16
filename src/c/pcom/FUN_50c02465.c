/* FUN_50c02465 - 0x50c02465 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __thiscall
FUN_50c02465(void *this,uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  uint *extraout_EAX;
  uint uVar2;
  bool bVar3;
  uint *local_8;
  
  uVar2 = param_1[8];
  *param_5 = uVar2 + param_3;
  if (uVar2 + param_3 < 0x11) {
    memcpy((void *)(uVar2 + 0x10 + (int)param_1),param_2,param_3);
    param_1[8] = param_1[8] + param_3;
    *param_5 = 0;
  }
  else {
    bVar3 = param_2 == param_4;
    local_8 = this;
    if (bVar3) {
      local_8 = malloc(param_3);
      memcpy(local_8,param_2,param_3);
      param_2 = local_8;
    }
    *param_5 = param_3 + uVar2;
    memcpy((void *)(uVar2 + 0x10 + (int)param_1),param_2,0x10 - uVar2);
    param_2 = (uint *)((int)param_2 + (0x10 - uVar2));
    uVar2 = (param_3 - 0x10) + uVar2;
    FUN_50c0156c((int)(param_1 + 9),param_1);
    *param_4 = param_1[4] ^ *param_1;
    param_4[1] = param_1[5] ^ param_1[1];
    param_4[2] = param_1[6] ^ param_1[2];
    param_4[3] = param_1[7] ^ param_1[3];
    if (0x10 < uVar2) {
      param_3 = uVar2 - 1 >> 4;
      do {
        FUN_50c0156c((int)(param_1 + 9),param_1);
        puVar1 = param_2 + 4;
        param_4[4] = *param_1 ^ *param_2;
        param_4[5] = param_2[1] ^ param_1[1];
        uVar2 = uVar2 - 0x10;
        param_4[6] = param_2[2] ^ param_1[2];
        param_3 = param_3 - 1;
        param_4[7] = param_2[3] ^ param_1[3];
        param_4 = param_4 + 4;
        param_2 = puVar1;
      } while (param_3 != 0);
    }
    memcpy(param_1 + 4,param_2,uVar2);
    param_1[8] = (param_1[8] & 0xf0000000) + uVar2;
    *param_5 = *param_5 - uVar2;
    if (bVar3) {
      free(local_8);
      param_5 = extraout_EAX;
    }
  }
  return CONCAT31((int3)((uint)param_5 >> 8),1);
}


