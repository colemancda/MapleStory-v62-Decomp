/* FUN_00865eb5 - 0x00865eb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00865eb5(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte local_8 [4];
  
  local_8[0] = 0xf2;
  local_8[1] = 0x53;
  local_8[2] = 0x50;
  local_8[3] = 0xc6;
  pbVar2 = param_4;
  if (param_4 == (byte *)0x0) {
    pbVar2 = local_8;
  }
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    param_4 = (byte *)param_3;
    do {
      bVar1 = (((&DAT_0096ccb8)[*pbVar2] ^ param_1[param_2]) & 0xd5) << 1 |
              ((&DAT_0096ccb8)[*pbVar2] ^ param_1[param_2]) >> 1 & 0x55;
      bVar1 = bVar1 >> 4 | bVar1 << 4;
      *param_1 = bVar1;
      FUN_00865df0(pbVar2,bVar1);
      param_1 = param_1 + 1;
      param_4 = (byte *)((int)param_4 + -1);
    } while (param_4 != (byte *)0x0);
  }
  return;
}


