/* FUN_10008990 - 0x10008990 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined8 FUN_10008990(uint param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = param_3;
  uVar6 = param_2 >> 4 | param_2 << 0x1c;
  uVar2 = (param_1 ^ uVar6) & 0xf0f0f0f;
  uVar4 = param_1 ^ uVar2;
  uVar2 = uVar2 ^ uVar6;
  uVar2 = uVar2 >> 0xc | uVar2 << 0x14;
  uVar6 = (uVar4 ^ uVar2) & 0xffff0000;
  uVar4 = uVar4 ^ uVar6;
  uVar6 = uVar6 ^ uVar2;
  uVar6 = uVar6 >> 0x12 | uVar6 << 0xe;
  uVar2 = (uVar4 ^ uVar6) & 0x33333333;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar2 ^ uVar6;
  uVar2 = uVar2 >> 0x16 | uVar2 << 10;
  uVar6 = (uVar4 ^ uVar2) & 0xff00ff00;
  uVar4 = uVar4 ^ uVar6;
  uVar6 = uVar6 ^ uVar2;
  uVar6 = uVar6 >> 9 | uVar6 << 0x17;
  uVar2 = (uVar4 ^ uVar6) & 0x55555555;
  uVar6 = uVar2 ^ uVar6;
  uVar2 = uVar2 ^ uVar4;
  uVar4 = uVar6 << 2 | uVar6 >> 0x1e;
  uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  param_3 = (uint *)0x8;
  do {
    uVar5 = (*puVar7 ^ uVar2) & 0x3f3f3f3f;
    uVar6 = (uVar2 >> 4 | uVar2 << 0x1c) ^ puVar7[1];
    uVar3 = uVar6 & 0x3f3f3f3f;
    puVar1 = puVar7 + 2;
    uVar4 = uVar4 ^ (*(uint *)(&DAT_1000e2a0 + (uVar3 >> 0x18) * 4) |
                     *(uint *)(&DAT_1000e0a0 + (uVar3 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_1000dea0 + (uVar3 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_1000e1a0 + (uVar5 >> 0x18) * 4) |
                     *(uint *)(&DAT_1000dfa0 + (uVar5 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_1000dda0 + (uVar5 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_1000dca0 + (uVar6 & 0x3f) * 4) |
                    *(uint *)(&DAT_1000dba0 + ((*puVar7 ^ uVar2) & 0x3f) * 4));
    uVar5 = (*puVar1 ^ uVar4) & 0x3f3f3f3f;
    uVar6 = (uVar4 >> 4 | uVar4 << 0x1c) ^ puVar7[3];
    uVar3 = uVar6 & 0x3f3f3f3f;
    puVar7 = puVar7 + 4;
    uVar2 = uVar2 ^ (*(uint *)(&DAT_1000e2a0 + (uVar3 >> 0x18) * 4) |
                     *(uint *)(&DAT_1000e0a0 + (uVar3 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_1000dea0 + (uVar3 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_1000e1a0 + (uVar5 >> 0x18) * 4) |
                     *(uint *)(&DAT_1000dfa0 + (uVar5 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_1000dda0 + (uVar5 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_1000dca0 + (uVar6 & 0x3f) * 4) |
                    *(uint *)(&DAT_1000dba0 + ((*puVar1 ^ uVar4) & 0x3f) * 4));
    param_3 = (uint *)((int)param_3 + -1);
  } while (param_3 != (uint *)0x0);
  uVar4 = uVar4 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
  uVar6 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar2 = (uVar6 ^ uVar4) & 0x55555555;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar2 ^ uVar6;
  uVar2 = uVar2 << 9 | uVar2 >> 0x17;
  uVar6 = (uVar2 ^ uVar4) & 0xff00ff00;
  uVar4 = uVar4 ^ uVar6;
  uVar6 = uVar6 ^ uVar2;
  uVar6 = uVar6 << 0x16 | uVar6 >> 10;
  uVar2 = (uVar6 ^ uVar4) & 0x33333333;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar2 ^ uVar6;
  uVar2 = uVar2 << 0x12 | uVar2 >> 0xe;
  uVar6 = (uVar2 ^ uVar4) & 0xffff0000;
  uVar4 = uVar4 ^ uVar6;
  uVar6 = uVar6 ^ uVar2;
  uVar2 = uVar6 << 0xc | uVar6 >> 0x14;
  uVar3 = (uVar2 ^ uVar4) & 0xf0f0f0f;
  return CONCAT44((uVar3 ^ uVar2) << 4 | (uVar6 & 0xfffff) >> 0x10,uVar3 ^ uVar4);
}


