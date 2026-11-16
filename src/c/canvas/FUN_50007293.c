/* FUN_50007293 - 0x50007293 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_50007293(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint local_18;
  uint local_14;
  undefined4 local_c;
  int local_8;
  
  uVar7 = 0;
  do {
    uVar2 = (int)uVar7 >> 6;
    uVar4 = (int)uVar7 >> 0xb & 0x1f;
    (&DAT_50061ad0)[uVar7] =
         (char)((int)(((int)(uVar7 & 0xfc00 | uVar2 & 0x300) >> 8) * (0xf - (uVar7 & 0xf)) + 7 +
                     ((int)(uVar2 & 0xc | uVar7 & 0x3f0) >> 2) * (uVar7 & 0xf)) / 0xf);
    iVar3 = (uVar7 & 0x3f) * (uVar2 & 0x1f);
    local_8 = (int)((iVar3 + -0x7a1) * (0x1f - uVar4) * 0x3b1 + 0x3861a6f) / 0x3a3341;
    iVar5 = (0x7a1 - iVar3) * uVar4 + iVar3 * 0x1f;
    if (iVar5 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)((iVar3 * 0x1d1 + iVar5 / 2) / iVar5);
    }
    (&DAT_50071ad0)[uVar7] = (char)local_8 << 4 | bVar1;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x10000);
  uVar7 = 0;
  puVar6 = &DAT_5005dad0;
  do {
    uVar2 = FUN_500073e6(uVar7 | 0xf000);
    FUN_50007457(&local_18,uVar2);
    uVar7 = uVar7 + 1;
    *puVar6 = (local_18 << 8 | local_14) << 8 | local_18;
    puVar6 = puVar6 + 1;
  } while ((int)puVar6 < 0x50061ad0);
  uVar7 = 0;
  puVar6 = &DAT_5001dad0;
  do {
    uVar2 = FUN_5000741d(uVar7);
    FUN_50007457(&local_18,uVar2);
    uVar7 = uVar7 + 1;
    *puVar6 = (local_18 << 8 | local_14) << 8 | local_18;
    puVar6 = puVar6 + 1;
  } while ((int)puVar6 < 0x5005dad0);
  return local_c;
}


