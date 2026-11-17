/* FUN_0045e3a0 - 0x0045e3a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0045e3a0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  int local_c;
  
  DAT_009795c8 = DAT_009795c8 + 1;
  if (DAT_009795c8 % 0x6f == 0) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = FUN_004029b9(0xc);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_00879c20(uVar4,uVar3,0xc);
    FUN_00402b41(uVar3);
  }
  iVar5 = _rand();
  *(char *)(*(int *)(param_1 + 8) + 4) = (char)iVar5;
  pbVar6 = *(byte **)(param_1 + 8);
  bVar7 = pbVar6[4];
  iVar5 = -(int)pbVar6;
  pbVar6[8] = 0x65;
  pbVar6[9] = 0x9a;
  local_c = 4;
  do {
    if (bVar7 == 0) {
      bVar7 = 0x2a;
    }
    bVar1 = pbVar6[(int)(&stack0x00000004 + iVar5)];
    *pbVar6 = bVar1 ^ bVar7;
    bVar7 = bVar7 + (bVar1 ^ bVar7) + 0x2a;
    uVar2 = *(ushort *)(*(int *)(param_1 + 8) + 8);
    pbVar6 = pbVar6 + 1;
    local_c = local_c + -1;
    *(ushort *)(*(int *)(param_1 + 8) + 8) = (uVar2 >> 0xd) + (ushort)bVar7 | uVar2 << 3;
  } while (local_c != 0);
  return;
}


