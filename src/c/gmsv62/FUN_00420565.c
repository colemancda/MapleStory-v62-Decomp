/* FUN_00420565 - 0x00420565 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00420565(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint local_4;
  
  DAT_0097800b = 0;
  uVar9 = 0;
  uVar5 = 1;
  do {
    (&DAT_00977f04)[uVar9] = (char)uVar5;
    (&DAT_00978004)[uVar5] = (char)uVar9;
    uVar5 = uVar5 ^ (byte)(-((uVar5 & 0x80) != 0) & 0x1bU ^ (char)uVar5 << 1);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x100);
  DAT_00978005 = 0;
  uVar5 = 1;
  puVar10 = &DAT_00977cdc;
  do {
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    uVar5 = (uint)(byte)((char)uVar5 << 1 ^ -((uVar5 & 0x80) != 0) & 0x1bU);
  } while (puVar10 < &DAT_00977d04);
  uVar5 = 0;
  do {
    if (uVar5 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (&DAT_00978003)[-(uint)(byte)(&DAT_00978004)[uVar5]];
    }
    bVar8 = bVar4 << 1;
    bVar1 = bVar4 >> 7 | bVar8;
    bVar2 = (bVar4 & 0x7f) >> 6 | bVar1 << 1;
    bVar3 = (bVar8 & 0x7f) >> 6 | bVar2 << 1;
    uVar9 = (byte)(((bVar8 & 0x3f) >> 5 | bVar3 << 1) ^ bVar4 ^ bVar1 ^ bVar2 ^ bVar3) ^ 99;
    (&DAT_00977e04)[uVar5] = (char)uVar9;
    (&DAT_00977d04)[uVar9] = (char)uVar5;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  uVar5 = 0;
  do {
    uVar9 = (uint)(byte)(&DAT_00977e04)[uVar5];
    (&DAT_00974cdc)[uVar5] = uVar9;
    uVar6 = FUN_0087a35a(uVar9,8);
    (&DAT_009750dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(uVar9,0x10);
    (&DAT_009754dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(uVar9,0x18);
    (&DAT_009758dc)[uVar5] = uVar6;
    if (uVar9 == 0) {
      uVar11 = 0;
      uVar7 = 0;
    }
    else {
      uVar11 = (uint)(byte)(&DAT_00977f04)
                           [((uint)(byte)(&DAT_00978004)[uVar9] + (uint)DAT_00978006) % 0xff];
      uVar7 = (uint)(byte)(&DAT_00977f04)
                          [((uint)(byte)(&DAT_00978004)[uVar9] + (uint)DAT_00978007) % 0xff];
    }
    uVar11 = ((uVar7 << 8 | uVar9) << 8 | uVar9) << 8 | uVar11;
    (&DAT_00976cdc)[uVar5] = uVar11;
    uVar6 = FUN_0087a35a(uVar11,8);
    (&DAT_009770dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(uVar11,0x10);
    (&DAT_009774dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(uVar11,0x18);
    uVar11 = (uint)(byte)(&DAT_00977d04)[uVar5];
    (&DAT_009778dc)[uVar5] = uVar6;
    (&DAT_00973cdc)[uVar5] = uVar11;
    uVar6 = FUN_0087a35a(uVar11,8);
    (&DAT_009740dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(uVar11,0x10);
    (&DAT_009744dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(uVar11,0x18);
    uVar9 = 0;
    (&DAT_009748dc)[uVar5] = uVar6;
    if (uVar11 == 0) {
      local_4 = 0;
      uVar7 = 0;
      uVar11 = 0;
    }
    else {
      local_4 = (uint)(byte)(&DAT_00977f04)
                            [((uint)(byte)(&DAT_00978004)[uVar11] + (uint)DAT_00978012) % 0xff];
      uVar9 = (uint)(byte)(&DAT_00977f04)
                          [((uint)(byte)(&DAT_00978004)[uVar11] + (uint)DAT_0097800d) % 0xff];
      uVar7 = (uint)(byte)(&DAT_00977f04)
                          [((uint)(byte)(&DAT_00978004)[uVar11] + (uint)DAT_00978011) % 0xff];
      uVar11 = (uint)(byte)(&DAT_00977f04)
                           [((uint)(byte)(&DAT_00978004)[uVar11] + (uint)DAT_0097800f) % 0xff];
    }
    local_4 = ((uVar11 << 8 | uVar7) << 8 | uVar9) << 8 | local_4;
    (&DAT_00975cdc)[uVar5] = local_4;
    uVar6 = FUN_0087a35a(local_4,8);
    (&DAT_009760dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(local_4,0x10);
    (&DAT_009764dc)[uVar5] = uVar6;
    uVar6 = FUN_0087a35a(local_4,0x18);
    uVar9 = uVar5 + 1;
    (&DAT_009768dc)[uVar5] = uVar6;
    uVar5 = uVar9;
  } while (uVar9 < 0x100);
  DAT_00978104 = 1;
  return;
}


