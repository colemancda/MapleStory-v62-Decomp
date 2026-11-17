/* FUN_0045e4b8 - 0x0045e4b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte __fastcall FUN_0045e4b8(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 local_8;
  
  pbVar1 = *(byte **)(param_1 + 8);
  bVar2 = pbVar1[1];
  if (bVar2 == 0) {
    bVar2 = 0x2a;
  }
  bVar3 = *pbVar1 ^ bVar2;
  local_8 = CONCAT31((int3)((uint)param_1 >> 8),bVar3);
  if ((((ushort)((byte)(bVar2 + *pbVar1 + 0x2a) + 4 | 0xd328) == *(ushort *)(pbVar1 + 4)) &&
      (*param_1 == pbVar1[2])) && (param_1[4] == pbVar1[3])) {
    DAT_009795c8 = DAT_009795c8 + 1;
    if (DAT_009795c8 % 0x37 == 0) {
      FUN_0045e536(local_8);
    }
    return bVar3;
  }
  local_8 = 5;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_008f9b80);
}


