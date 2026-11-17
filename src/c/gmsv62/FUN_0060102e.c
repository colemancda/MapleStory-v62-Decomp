/* FUN_0060102e - 0x0060102e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x006010d0) */
/* WARNING: Removing unreachable block (ram,0x006010d2) */
/* WARNING: Removing unreachable block (ram,0x0060111e) */
/* WARNING: Removing unreachable block (ram,0x0060117b) */
/* WARNING: Removing unreachable block (ram,0x00601149) */

undefined4 __fastcall FUN_0060102e(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  uint local_8;
  
  uVar11 = (uint)*(ushort *)(param_1 + 0x10);
  local_8 = uVar11;
  if (0x5af < uVar11) {
    local_8 = 0x5b0;
  }
  if (uVar11 == 0) {
    uVar4 = 0;
  }
  else {
    iVar12 = *(int *)(param_1 + 8) + 4;
    while( true ) {
      FUN_004204ef(iVar12,iVar12,local_8,&stack0x00000004);
      iVar12 = iVar12 + local_8;
      uVar11 = uVar11 - local_8;
      if (uVar11 == 0) break;
      local_8 = uVar11;
      if (0x5b3 < uVar11) {
        local_8 = 0x5b4;
      }
    }
    iVar12 = *(int *)(param_1 + 8);
    uVar11 = (uint)*(ushort *)(param_1 + 0x10);
    iVar5 = 3;
    do {
      pbVar13 = (byte *)(iVar12 + 4 + uVar11);
      uVar6 = uVar11;
      bVar10 = 0;
      do {
        pbVar13 = pbVar13 + -1;
        bVar7 = (*pbVar13 << 3 | *pbVar13 >> 5) ^ 0x13;
        bVar10 = (bVar7 ^ bVar10) - (char)uVar6;
        *pbVar13 = bVar10 >> 4 | bVar10 * '\x10';
        uVar6 = uVar6 - 1;
        bVar10 = bVar7;
      } while (uVar6 != 0);
      uVar6 = uVar11;
      bVar10 = 0;
      do {
        bVar7 = *pbVar13;
        bVar14 = SBORROW1(bVar7,'H');
        bVar9 = (byte)uVar6;
        bVar8 = ~(bVar7 + 0xb8) << (bVar9 & 7) | (byte)~(bVar7 + 0xb8) >> 8 - (bVar9 & 7);
        bVar1 = (uVar6 & 0x1f) != 0;
        bVar2 = (bVar9 & 0x1f) == 1;
        bVar1 = (!bVar1 && bVar7 < 0x48 || bVar1 && (bVar8 & 1) != 0) != (char)bVar8 < '\0';
        bVar3 = !bVar2;
        do {
          if (bVar3 && bVar14 || bVar2 && bVar1) break;
        } while (bVar3 && bVar14 || bVar2 && bVar1);
        do {
          if (bVar3 && bVar14 || bVar2 && bVar1) break;
        } while (bVar3 && bVar14 || bVar2 && bVar1);
        bVar9 = (bVar8 ^ bVar10) - bVar9;
        *pbVar13 = bVar9 >> 3 | bVar9 * ' ';
        pbVar13 = pbVar13 + 1;
        uVar6 = uVar6 - 1;
        bVar10 = bVar8;
      } while (uVar6 != 0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar4 = 1;
  }
  return uVar4;
}


