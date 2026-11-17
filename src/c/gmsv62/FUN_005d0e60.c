/* FUN_005d0e60 - 0x005d0e60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005d0e60(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint unaff_EBX;
  byte *pbVar7;
  undefined8 local_18;
  byte *local_10;
  int local_c;
  uint local_8;
  
  pbVar1 = *(byte **)(param_1 + 8);
  local_18 = *(undefined8 *)pbVar1;
  bVar5 = pbVar1[8];
  local_8 = 0x9a65;
  local_c = 8;
  pbVar7 = pbVar1;
  local_10 = param_1;
  do {
    uVar3 = local_8;
    if (bVar5 == 0) {
      bVar5 = 0x2a;
    }
    bVar6 = *pbVar7 ^ bVar5;
    bVar5 = bVar5 + *pbVar7 + 0x2a;
    pbVar7[(int)&local_18 - (int)pbVar1] = bVar6;
    uVar2 = unaff_EBX >> 8;
    unaff_EBX = local_8 << 3;
    local_8 = (uVar3 >> 0xd & 7) + (CONCAT31((int3)uVar2,bVar5) & 0xffff00ff) | unaff_EBX;
    pbVar7 = pbVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if ((((short)local_8 == *(short *)(pbVar1 + 0xc)) && (*local_10 == pbVar1[9])) &&
     (local_10[4] == pbVar1[10])) {
    DAT_009795c8 = DAT_009795c8 + 1;
    iVar4 = DAT_009795c8 / 0x37;
    if (DAT_009795c8 % 0x37 == 0) {
      iVar4 = FUN_005d0f1a(local_18);
    }
    return iVar4;
  }
  local_10 = (byte *)0x5;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10,&DAT_008f9b80);
}


