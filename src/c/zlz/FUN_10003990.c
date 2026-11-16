/* FUN_10003990 - 0x10003990 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl
FUN_10003990(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *local_4;
  
  uVar4 = param_1[8];
  bVar1 = false;
  *param_5 = uVar4 + param_3;
  if (0xf < uVar4 + param_3) {
    if (param_2 == param_4) {
      local_4 = malloc(param_3);
      puVar6 = local_4;
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *param_2;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar6 = (char)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      bVar1 = true;
      param_2 = local_4;
    }
    uVar3 = 0x10 - uVar4;
    puVar6 = param_2;
    puVar7 = (uint *)(uVar4 + 0x10 + (int)param_1);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar7 = (char)*puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    puVar6 = (uint *)((int)param_2 + uVar3);
    uVar4 = (param_3 - 0x10) + uVar4;
    FUN_100019d0((int)(param_1 + 9),param_1);
    *param_4 = *param_1 ^ param_1[4];
    param_4[1] = param_1[5] ^ param_1[1];
    param_4[2] = param_1[6] ^ param_1[2];
    param_4[3] = param_1[7] ^ param_1[3];
    if (0xf < uVar4) {
      param_3 = uVar4 >> 4;
      do {
        FUN_100019d0((int)(param_1 + 9),param_1);
        param_4[4] = *param_1 ^ *puVar6;
        param_4[5] = puVar6[1] ^ param_1[1];
        param_4[6] = puVar6[2] ^ param_1[2];
        param_4[7] = puVar6[3] ^ param_1[3];
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 0x10;
        param_3 = param_3 - 1;
        param_4 = param_4 + 4;
      } while (param_3 != 0);
    }
    puVar7 = param_1 + 4;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar7 = (char)*puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    param_1[8] = (param_1[8] & 0xf0000000) + uVar4;
    uVar2 = (undefined3)(uVar4 >> 8);
    *param_5 = *param_5 - uVar4;
    if (bVar1) {
      free(local_4);
      uVar2 = extraout_var;
    }
    return CONCAT31(uVar2,1);
  }
  puVar6 = (uint *)(uVar4 + 0x10 + (int)param_1);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar6 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  uVar4 = param_1[8];
  param_1[8] = uVar4 + param_3;
  *param_5 = 0;
  return CONCAT31((int3)(uVar4 + param_3 >> 8),1);
}


