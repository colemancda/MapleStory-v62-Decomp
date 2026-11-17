/* FUN_0045e2eb - 0x0045e2eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0045e2eb(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint unaff_EBX;
  byte *pbVar6;
  byte *local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  pbVar1 = *(byte **)(param_1 + 8);
  bVar4 = pbVar1[4];
  local_c = *(undefined4 *)pbVar1;
  local_8 = 0x9a65;
  local_10 = 4;
  pbVar6 = pbVar1;
  do {
    uVar3 = local_8;
    if (bVar4 == 0) {
      bVar4 = 0x2a;
    }
    bVar5 = *pbVar6 ^ bVar4;
    bVar4 = bVar4 + *pbVar6 + 0x2a;
    pbVar6[(int)&local_c - (int)pbVar1] = bVar5;
    uVar2 = unaff_EBX >> 8;
    unaff_EBX = local_8 << 3;
    local_8 = (uVar3 >> 0xd & 7) + (CONCAT31((int3)uVar2,bVar4) & 0xffff00ff) | unaff_EBX;
    pbVar6 = pbVar6 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  if ((((short)local_8 == *(short *)(pbVar1 + 8)) && (*param_1 == pbVar1[5])) &&
     (param_1[4] == pbVar1[6])) {
    DAT_009795c8 = DAT_009795c8 + 1;
    if (DAT_009795c8 % 0x37 == 0) {
      local_14 = param_1;
      FUN_0045e3a0(local_c);
    }
    return local_c;
  }
  local_14 = (byte *)0x5;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_14,&DAT_008f9b80);
}


