/* FUN_10001250 - 0x10001250 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void FUN_10001250(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar3;
  
  DAT_10016a07 = 0;
  uVar9 = 0;
  uVar4 = 1;
  do {
    (&DAT_10016900)[uVar9] = (char)uVar4;
    (&DAT_10016a00)[uVar4] = (char)uVar9;
    uVar4 = uVar4 ^ (byte)-((uVar4 & 0x80) != 0) & 0x1b ^ (uint)(byte)((char)uVar4 << 1);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x100);
  DAT_10016a01 = 0;
  uVar4 = 1;
  puVar10 = &DAT_100166d8;
  do {
    *puVar10 = uVar4;
    puVar10 = puVar10 + 1;
    uVar4 = (uint)(byte)((char)uVar4 << 1) ^ (byte)-((uVar4 & 0x80) != 0) & 0x1b;
  } while (puVar10 < &DAT_10016700);
  uVar4 = 0;
  do {
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(byte)(&DAT_100169ff)[-(uint)(byte)(&DAT_10016a00)[uVar4]];
    }
    uVar5 = uVar9 >> 7 | (uint)(byte)((byte)uVar9 << 1);
    bVar3 = (byte)uVar5;
    bVar2 = bVar3 << 1;
    bVar1 = ((byte)uVar9 & 0x7f) >> 6 | bVar2;
    bVar3 = (bVar3 & 0x7f) >> 6 | bVar1 << 1;
    uVar9 = (uint)(byte)((bVar2 & 0x7f) >> 6 | bVar3 << 1) ^
            uVar9 ^ uVar5 ^ (uint)bVar1 ^ (uint)bVar3 ^ 99;
    (&DAT_10016800)[uVar4] = (char)uVar9;
    (&DAT_10016700)[uVar9] = (char)uVar4;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  uVar4 = 0;
  do {
    bVar1 = (&DAT_10016800)[uVar4];
    uVar9 = (uint)bVar1;
    (&DAT_100136d8)[uVar4] = uVar9;
    (&DAT_10013ad8)[uVar4] = (uint)bVar1 << 8;
    (&DAT_10013ed8)[uVar4] = uVar9 << 0x10;
    (&DAT_100142d8)[uVar4] = uVar9 << 0x18;
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar8 = 0;
    }
    else {
      uVar5 = (uint)(byte)(&DAT_10016900)
                          [((uint)DAT_10016a02 + (uint)(byte)(&DAT_10016a00)[uVar9]) % 0xff];
      uVar8 = (uint)(byte)(&DAT_10016900)
                          [((uint)DAT_10016a03 + (uint)(byte)(&DAT_10016a00)[uVar9]) % 0xff];
    }
    uVar6 = uVar8 << 8 | uVar9;
    uVar9 = uVar6 << 8 | uVar9;
    uVar7 = uVar9 << 8 | uVar5;
    (&DAT_100156d8)[uVar4] = uVar7;
    (&DAT_10015ad8)[uVar4] = uVar7 << 8 | uVar8;
    (&DAT_10015ed8)[uVar4] = uVar7 << 0x10 | uVar6;
    (&DAT_100162d8)[uVar4] = uVar5 << 0x18 | uVar9;
    bVar1 = (&DAT_10016700)[uVar4];
    uVar9 = (uint)bVar1;
    (&DAT_100126d8)[uVar4] = uVar9;
    (&DAT_10012ad8)[uVar4] = (uint)bVar1 << 8;
    (&DAT_10012ed8)[uVar4] = uVar9 << 0x10;
    (&DAT_100132d8)[uVar4] = uVar9 << 0x18;
    if (uVar9 == 0) {
      uVar6 = 0;
      uVar8 = 0;
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(byte)(&DAT_10016a00)[uVar9];
      uVar6 = (uint)(byte)(&DAT_10016900)[(DAT_10016a0e + uVar9) % 0xff];
      uVar8 = (uint)(byte)(&DAT_10016900)[(DAT_10016a09 + uVar9) % 0xff];
      uVar5 = (uint)(byte)(&DAT_10016900)[(DAT_10016a0d + uVar9) % 0xff];
      uVar9 = (uint)(byte)(&DAT_10016900)[(DAT_10016a0b + uVar9) % 0xff];
    }
    uVar5 = uVar9 << 8 | uVar5;
    uVar8 = uVar5 << 8 | uVar8;
    uVar7 = uVar8 << 8 | uVar6;
    (&DAT_100146d8)[uVar4] = uVar7;
    (&DAT_10014ad8)[uVar4] = uVar7 << 8 | uVar9;
    (&DAT_10014ed8)[uVar4] = uVar7 << 0x10 | uVar5;
    (&DAT_100152d8)[uVar4] = uVar6 << 0x18 | uVar8;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  DAT_10016b00 = 1;
  return;
}


