/* FUN_00865e4d - 0x00865e4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00865e4d(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte local_8 [4];
  
  local_8[0] = 0xf2;
  local_8[1] = 0x53;
  local_8[2] = 0x50;
  local_8[3] = 0xc6;
  pbVar3 = param_4;
  if (param_4 == (byte *)0x0) {
    pbVar3 = local_8;
  }
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    param_4 = (byte *)param_3;
    do {
      bVar1 = param_1[param_2];
      bVar2 = bVar1 >> 4 | bVar1 << 4;
      *param_1 = ((bVar2 & 0xd5) << 1 | bVar2 >> 1 & 0x55) ^ (&DAT_0096ccb8)[*pbVar3];
      FUN_00865df0(pbVar3,bVar1);
      param_1 = param_1 + 1;
      param_4 = (byte *)((int)param_4 + -1);
    } while (param_4 != (byte *)0x0);
  }
  return;
}


