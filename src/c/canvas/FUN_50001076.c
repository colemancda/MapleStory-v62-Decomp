/* FUN_50001076 - 0x50001076 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50001076(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint local_4;
  
  DAT_5001d933 = 0;
  uVar9 = 0;
  uVar5 = 1;
  do {
    (&DAT_5001d82c)[uVar9] = (char)uVar5;
    (&DAT_5001d92c)[uVar5] = (char)uVar9;
    uVar5 = uVar5 ^ (byte)(-((uVar5 & 0x80) != 0) & 0x1bU ^ (char)uVar5 << 1);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x100);
  DAT_5001d92d = 0;
  uVar5 = 1;
  puVar10 = &DAT_5001d604;
  do {
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    uVar5 = (uint)(byte)((char)uVar5 << 1 ^ -((uVar5 & 0x80) != 0) & 0x1bU);
  } while (puVar10 < &DAT_5001d62c);
  uVar5 = 0;
  do {
    if (uVar5 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (&DAT_5001d92b)[-(uint)(byte)(&DAT_5001d92c)[uVar5]];
    }
    bVar8 = bVar4 << 1;
    bVar1 = bVar4 >> 7 | bVar8;
    bVar2 = (bVar4 & 0x7f) >> 6 | bVar1 << 1;
    bVar3 = (bVar8 & 0x7f) >> 6 | bVar2 << 1;
    uVar9 = (byte)(((bVar8 & 0x3f) >> 5 | bVar3 << 1) ^ bVar4 ^ bVar1 ^ bVar2 ^ bVar3) ^ 99;
    (&DAT_5001d72c)[uVar5] = (char)uVar9;
    (&DAT_5001d62c)[uVar9] = (char)uVar5;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  uVar5 = 0;
  do {
    uVar9 = (uint)(byte)(&DAT_5001d72c)[uVar5];
    (&DAT_5001a604)[uVar5] = uVar9;
    uVar6 = _lrotl(uVar9,8);
    (&DAT_5001aa04)[uVar5] = uVar6;
    uVar6 = _lrotl(uVar9,0x10);
    (&DAT_5001ae04)[uVar5] = uVar6;
    uVar6 = _lrotl(uVar9,0x18);
    (&DAT_5001b204)[uVar5] = uVar6;
    if (uVar9 == 0) {
      uVar11 = 0;
      uVar7 = 0;
    }
    else {
      uVar11 = (uint)(byte)(&DAT_5001d82c)
                           [((uint)(byte)(&DAT_5001d92c)[uVar9] + (uint)DAT_5001d92e) % 0xff];
      uVar7 = (uint)(byte)(&DAT_5001d82c)
                          [((uint)(byte)(&DAT_5001d92c)[uVar9] + (uint)DAT_5001d92f) % 0xff];
    }
    uVar11 = ((uVar7 << 8 | uVar9) << 8 | uVar9) << 8 | uVar11;
    (&DAT_5001c604)[uVar5] = uVar11;
    uVar6 = _lrotl(uVar11,8);
    (&DAT_5001ca04)[uVar5] = uVar6;
    uVar6 = _lrotl(uVar11,0x10);
    (&DAT_5001ce04)[uVar5] = uVar6;
    uVar6 = _lrotl(uVar11,0x18);
    uVar11 = (uint)(byte)(&DAT_5001d62c)[uVar5];
    (&DAT_5001d204)[uVar5] = uVar6;
    (&DAT_50019604)[uVar5] = uVar11;
    uVar6 = _lrotl(uVar11,8);
    (&DAT_50019a04)[uVar5] = uVar6;
    uVar6 = _lrotl(uVar11,0x10);
    (&DAT_50019e04)[uVar5] = uVar6;
    uVar6 = _lrotl(uVar11,0x18);
    uVar9 = 0;
    (&DAT_5001a204)[uVar5] = uVar6;
    if (uVar11 == 0) {
      local_4 = 0;
      uVar7 = 0;
      uVar11 = 0;
    }
    else {
      local_4 = (uint)(byte)(&DAT_5001d82c)
                            [((uint)(byte)(&DAT_5001d92c)[uVar11] + (uint)DAT_5001d93a) % 0xff];
      uVar9 = (uint)(byte)(&DAT_5001d82c)
                          [((uint)(byte)(&DAT_5001d92c)[uVar11] + (uint)DAT_5001d935) % 0xff];
      uVar7 = (uint)(byte)(&DAT_5001d82c)
                          [((uint)(byte)(&DAT_5001d92c)[uVar11] + (uint)DAT_5001d939) % 0xff];
      uVar11 = (uint)(byte)(&DAT_5001d82c)
                           [((uint)(byte)(&DAT_5001d92c)[uVar11] + (uint)DAT_5001d937) % 0xff];
    }
    local_4 = ((uVar11 << 8 | uVar7) << 8 | uVar9) << 8 | local_4;
    (&DAT_5001b604)[uVar5] = local_4;
    uVar6 = _lrotl(local_4,8);
    (&DAT_5001ba04)[uVar5] = uVar6;
    uVar6 = _lrotl(local_4,0x10);
    (&DAT_5001be04)[uVar5] = uVar6;
    uVar6 = _lrotl(local_4,0x18);
    uVar9 = uVar5 + 1;
    (&DAT_5001c204)[uVar5] = uVar6;
    uVar5 = uVar9;
  } while (uVar9 < 0x100);
  DAT_5001da2c = 1;
  return;
}


