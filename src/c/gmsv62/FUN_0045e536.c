/* FUN_0045e536 - 0x0045e536 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0045e536(int param_1,byte param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  
  DAT_009795c8 = DAT_009795c8 + 1;
  if (DAT_009795c8 % 0x6f == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar4 = FUN_004029b9(6);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_00879c20(uVar4,uVar2,6);
    FUN_00402b41(uVar2);
  }
  iVar5 = _rand();
  *(char *)(*(int *)(param_1 + 8) + 1) = (char)iVar5;
  pbVar3 = *(byte **)(param_1 + 8);
  bVar6 = pbVar3[1];
  pbVar3[4] = 0x65;
  pbVar3[5] = 0x9a;
  if (bVar6 == 0) {
    bVar6 = 0x2a;
  }
  *pbVar3 = bVar6 ^ param_2;
  uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 4);
  *(ushort *)(*(int *)(param_1 + 8) + 4) =
       (uVar1 >> 0xd) + (ushort)(byte)(bVar6 + (bVar6 ^ param_2) + 0x2a) | uVar1 << 3;
  return;
}


