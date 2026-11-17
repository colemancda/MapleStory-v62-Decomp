/* FUN_004229fa - 0x004229fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_004229fa(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *local_8;
  
  uVar2 = param_2[8];
  *param_6 = uVar2 + param_4;
  if (uVar2 + param_4 < 0x11) {
    FUN_00879c20(uVar2 + 0x10 + (int)param_2,param_3,param_4);
    param_2[8] = param_2[8] + param_4;
    *param_6 = 0;
  }
  else {
    bVar3 = param_3 == param_5;
    local_8 = param_1;
    if (bVar3) {
      local_8 = _malloc(param_4);
      FUN_00879c20(local_8,param_3,param_4);
      param_3 = local_8;
    }
    *param_6 = param_4 + uVar2;
    FUN_00879c20(uVar2 + 0x10 + (int)param_2,param_3,0x10 - uVar2);
    param_3 = (uint *)((int)param_3 + (0x10 - uVar2));
    uVar2 = (param_4 - 0x10) + uVar2;
    FUN_00420cd2(param_2 + 9,param_2);
    *param_5 = param_2[4] ^ *param_2;
    param_5[1] = param_2[5] ^ param_2[1];
    param_5[2] = param_2[6] ^ param_2[2];
    param_5[3] = param_2[7] ^ param_2[3];
    if (0x10 < uVar2) {
      param_4 = uVar2 - 1 >> 4;
      do {
        FUN_00420cd2(param_2 + 9,param_2);
        puVar1 = param_3 + 4;
        param_5[4] = *param_2 ^ *param_3;
        param_5[5] = param_3[1] ^ param_2[1];
        uVar2 = uVar2 - 0x10;
        param_5[6] = param_3[2] ^ param_2[2];
        param_4 = param_4 - 1;
        param_5[7] = param_3[3] ^ param_2[3];
        param_5 = param_5 + 4;
        param_3 = puVar1;
      } while (param_4 != 0);
    }
    FUN_00879c20(param_2 + 4,param_3,uVar2);
    param_2[8] = (param_2[8] & 0xf0000000) + uVar2;
    *param_6 = *param_6 - uVar2;
    if (bVar3) {
      FUN_0087aa78(local_8);
    }
  }
  return 1;
}


