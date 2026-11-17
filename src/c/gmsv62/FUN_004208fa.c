/* FUN_004208fa - 0x004208fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004208fa(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_40 [3];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_14;
  uint *local_10;
  uint *local_8;
  
  *(undefined4 *)(param_2 + 0x24) = 8;
  FUN_00420ba8(param_1,&local_114);
  *(undefined4 *)(param_2 + 0x28) = local_34;
  *(undefined4 *)(param_2 + 0x2c) = local_30;
  *(undefined4 *)(param_2 + 0x30) = local_2c;
  *(undefined4 *)(param_2 + 0x34) = local_28;
  local_8 = (uint *)(param_2 + 0x40);
  local_10 = local_40;
  local_14 = 0xd;
  do {
    uVar3 = local_10[-1];
    uVar4 = (uVar3 >> 7 & 0x1010101) * 0x1b ^ (uVar3 & 0xff7f7f7f) << 1;
    uVar2 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0xff7f7f7f) << 1;
    uVar1 = (uVar2 >> 7 & 0x1010101) * 0x1b ^ (uVar2 & 0xff7f7f7f) << 1;
    uVar3 = uVar3 ^ uVar1;
    local_8[-2] = uVar1 ^ uVar2 ^ uVar4;
    uVar1 = FUN_0087a024(uVar3 ^ uVar2,0x10);
    uVar2 = FUN_0087a024(uVar3 ^ uVar4,8);
    uVar3 = FUN_0087a024(uVar3,0x18);
    local_8[-2] = local_8[-2] ^ uVar1 ^ uVar2 ^ uVar3;
    uVar3 = *local_10;
    uVar4 = (uVar3 >> 7 & 0x1010101) * 0x1b ^ (uVar3 & 0xff7f7f7f) << 1;
    uVar2 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0xff7f7f7f) << 1;
    uVar1 = (uVar2 >> 7 & 0x1010101) * 0x1b ^ (uVar2 & 0xff7f7f7f) << 1;
    uVar3 = uVar3 ^ uVar1;
    local_8[-1] = uVar1 ^ uVar2 ^ uVar4;
    uVar1 = FUN_0087a024(uVar3 ^ uVar2,0x10);
    uVar2 = FUN_0087a024(uVar3 ^ uVar4,8);
    uVar3 = FUN_0087a024(uVar3,0x18);
    local_8[-1] = local_8[-1] ^ uVar1 ^ uVar2 ^ uVar3;
    uVar3 = local_10[1];
    uVar4 = (uVar3 >> 7 & 0x1010101) * 0x1b ^ (uVar3 & 0xff7f7f7f) << 1;
    uVar2 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0xff7f7f7f) << 1;
    uVar1 = (uVar2 >> 7 & 0x1010101) * 0x1b ^ (uVar2 & 0xff7f7f7f) << 1;
    uVar3 = uVar3 ^ uVar1;
    *local_8 = uVar1 ^ uVar2 ^ uVar4;
    uVar1 = FUN_0087a024(uVar3 ^ uVar2,0x10);
    uVar2 = FUN_0087a024(uVar3 ^ uVar4,8);
    uVar3 = FUN_0087a024(uVar3,0x18);
    *local_8 = *local_8 ^ uVar1 ^ uVar2 ^ uVar3;
    uVar3 = local_10[2];
    uVar4 = (uVar3 >> 7 & 0x1010101) * 0x1b ^ (uVar3 & 0xff7f7f7f) << 1;
    uVar2 = (uVar4 >> 7 & 0x1010101) * 0x1b ^ (uVar4 & 0xff7f7f7f) << 1;
    uVar1 = (uVar2 >> 7 & 0x1010101) * 0x1b ^ (uVar2 & 0xff7f7f7f) << 1;
    uVar3 = uVar3 ^ uVar1;
    local_8[1] = uVar1 ^ uVar2 ^ uVar4;
    uVar1 = FUN_0087a024(uVar3 ^ uVar2,0x10);
    uVar2 = FUN_0087a024(uVar3 ^ uVar4,8);
    uVar3 = FUN_0087a024(uVar3,0x18);
    local_10 = local_10 + -4;
    local_8[1] = local_8[1] ^ uVar1 ^ uVar2 ^ uVar3;
    local_8 = local_8 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined4 *)(param_2 + 0x108) = local_114;
  *(undefined4 *)(param_2 + 0x10c) = local_110;
  *(undefined4 *)(param_2 + 0x110) = local_10c;
  *(undefined4 *)(param_2 + 0x114) = local_108;
  return;
}


