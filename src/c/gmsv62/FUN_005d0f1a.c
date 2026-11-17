/* FUN_005d0f1a - 0x005d0f1a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005d0f1a(int param_1)

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
    uVar4 = FUN_004029b9(0x10);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_00879c20(uVar4,uVar3,0x10);
    FUN_00402b41(uVar3);
  }
  iVar5 = _rand();
  *(char *)(*(int *)(param_1 + 8) + 8) = (char)iVar5;
  pbVar6 = *(byte **)(param_1 + 8);
  bVar7 = pbVar6[8];
  iVar5 = -(int)pbVar6;
  pbVar6[0xc] = 0x65;
  pbVar6[0xd] = 0x9a;
  local_c = 8;
  do {
    if (bVar7 == 0) {
      bVar7 = 0x2a;
    }
    bVar1 = pbVar6[(int)(&stack0x00000004 + iVar5)];
    *pbVar6 = bVar1 ^ bVar7;
    bVar7 = bVar7 + (bVar1 ^ bVar7) + 0x2a;
    uVar2 = *(ushort *)(*(int *)(param_1 + 8) + 0xc);
    pbVar6 = pbVar6 + 1;
    local_c = local_c + -1;
    *(ushort *)(*(int *)(param_1 + 8) + 0xc) = (uVar2 >> 0xd) + (ushort)bVar7 | uVar2 << 3;
  } while (local_c != 0);
  return;
}


