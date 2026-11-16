/* FUN_50c0156c - 0x50c0156c in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c0156c(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar11 = *param_2 ^ *(uint *)(param_1 + 4);
  uVar12 = param_2[1] ^ *(uint *)(param_1 + 8);
  uVar15 = param_2[2] ^ *(uint *)(param_1 + 0xc);
  uVar17 = param_2[3] ^ *(uint *)(param_1 + 0x10);
  uVar16 = (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x18);
  uVar13 = (&DAT_50c1c1e4)[uVar17 >> 0x18] ^ (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x14);
  uVar9 = (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar12 >> 0x18] ^
          (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
          *(uint *)(param_1 + 0x1c);
  uVar12 = (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0x20);
  uVar15 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar16 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar13 & 0xff] ^
           *(uint *)(param_1 + 0x24);
  uVar17 = (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar13 >> 0x18] ^ (&DAT_50c1b5e4)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x28);
  uVar11 = (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar16 >> 0x18] ^
           (&DAT_50c1bde4)[uVar13 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x2c);
  uVar9 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar16 >> 0x10 & 0xff] ^
          (&DAT_50c1b9e4)[uVar13 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0x30);
  uVar13 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x34);
  uVar16 = (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0x38);
  uVar12 = (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar17 >> 0x18] ^
           (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x3c);
  uVar11 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x40);
  uVar15 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar16 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar13 & 0xff] ^
           *(uint *)(param_1 + 0x44);
  uVar17 = (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar13 >> 0x18] ^ (&DAT_50c1b5e4)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x48);
  uVar9 = (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar16 >> 0x18] ^
          (&DAT_50c1bde4)[uVar13 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0x4c);
  uVar12 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar13 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x50);
  uVar13 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x54);
  uVar16 = (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0x58);
  uVar11 = (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar17 >> 0x18] ^
           (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x5c);
  uVar9 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^
          (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0x60);
  uVar15 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar16 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar13 & 0xff] ^
           *(uint *)(param_1 + 100);
  uVar17 = (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar13 >> 0x18] ^ (&DAT_50c1b5e4)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x68);
  uVar12 = (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar16 >> 0x18] ^
           (&DAT_50c1bde4)[uVar13 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x6c);
  uVar11 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar13 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x70);
  uVar13 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x74);
  uVar16 = (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0x78);
  uVar9 = (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar17 >> 0x18] ^
          (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0x7c);
  uVar12 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x80);
  uVar15 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar16 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar13 & 0xff] ^
           *(uint *)(param_1 + 0x84);
  uVar17 = (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar13 >> 0x18] ^ (&DAT_50c1b5e4)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x88);
  uVar11 = (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar16 >> 0x18] ^
           (&DAT_50c1bde4)[uVar13 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x8c);
  uVar9 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar16 >> 0x10 & 0xff] ^
          (&DAT_50c1b9e4)[uVar13 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0x90);
  uVar13 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x94);
  uVar16 = (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0x98);
  uVar12 = (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar17 >> 0x18] ^
           (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x9c);
  uVar11 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0xa0);
  uVar15 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar16 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar13 & 0xff] ^
           *(uint *)(param_1 + 0xa4);
  uVar17 = (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar13 >> 0x18] ^ (&DAT_50c1b5e4)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0xa8);
  uVar9 = (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar16 >> 0x18] ^
          (&DAT_50c1bde4)[uVar13 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0xac);
  uVar12 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar13 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0xb0);
  uVar13 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0xb4);
  uVar16 = (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0xb8);
  uVar11 = (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar17 >> 0x18] ^
           (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0xbc);
  uVar12 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0xc0);
  uVar15 = (&DAT_50c1c1e4)[uVar12 >> 0x18] ^ (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar16 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar13 & 0xff] ^
           *(uint *)(param_1 + 0xc4);
  uVar17 = (&DAT_50c1bde4)[uVar12 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar13 >> 0x18] ^ (&DAT_50c1b5e4)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 200);
  uVar9 = (&DAT_50c1b9e4)[uVar12 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar16 >> 0x18] ^
          (&DAT_50c1bde4)[uVar13 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0xcc);
  uVar11 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar13 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0xd0);
  uVar18 = (&DAT_50c1c1e4)[uVar11 >> 0x18] ^ (&DAT_50c1bde4)[uVar9 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar17 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0xd4);
  uVar19 = (&DAT_50c1bde4)[uVar11 >> 0x10 & 0xff] ^ (&DAT_50c1b9e4)[uVar9 >> 8 & 0xff] ^
           (&DAT_50c1c1e4)[uVar15 >> 0x18] ^ (&DAT_50c1b5e4)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0xd8);
  uVar10 = (&DAT_50c1b9e4)[uVar11 >> 8 & 0xff] ^ (&DAT_50c1c1e4)[uVar17 >> 0x18] ^
           (&DAT_50c1bde4)[uVar15 >> 0x10 & 0xff] ^ (&DAT_50c1b5e4)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0xdc);
  uVar14 = (&DAT_50c1c1e4)[uVar9 >> 0x18] ^ (&DAT_50c1bde4)[uVar17 >> 0x10 & 0xff] ^
           (&DAT_50c1b9e4)[uVar15 >> 8 & 0xff] ^ (&DAT_50c1b5e4)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0xe0);
  uVar9 = (&DAT_50c1a1e4)[uVar14 >> 0x18];
  uVar11 = (&DAT_50c19de4)[uVar10 >> 0x10 & 0xff];
  uVar12 = (&DAT_50c199e4)[uVar19 >> 8 & 0xff];
  uVar13 = (&DAT_50c195e4)[uVar18 & 0xff];
  uVar15 = (&DAT_50c19de4)[uVar14 >> 0x10 & 0xff];
  uVar16 = (&DAT_50c199e4)[uVar10 >> 8 & 0xff];
  uVar17 = (&DAT_50c1a1e4)[uVar18 >> 0x18];
  uVar1 = (&DAT_50c195e4)[uVar19 & 0xff];
  uVar2 = *(uint *)(param_1 + 0xe8);
  uVar3 = *(uint *)(param_1 + 0xe4);
  uVar4 = (&DAT_50c1a1e4)[uVar10 >> 0x18];
  uVar5 = (&DAT_50c19de4)[uVar19 >> 0x10 & 0xff];
  uVar6 = (&DAT_50c199e4)[uVar18 >> 8 & 0xff];
  uVar7 = (&DAT_50c195e4)[uVar14 & 0xff];
  uVar8 = *(uint *)(param_1 + 0xf0);
  param_2[2] = (&DAT_50c199e4)[uVar14 >> 8 & 0xff] ^ (&DAT_50c1a1e4)[uVar19 >> 0x18] ^
               (&DAT_50c19de4)[uVar18 >> 0x10 & 0xff] ^ (&DAT_50c195e4)[uVar10 & 0xff] ^
               *(uint *)(param_1 + 0xec);
  *param_2 = uVar9 ^ uVar11 ^ uVar12 ^ uVar13 ^ uVar3;
  param_2[1] = uVar15 ^ uVar16 ^ uVar17 ^ uVar1 ^ uVar2;
  param_2[3] = uVar4 ^ uVar5 ^ uVar6 ^ uVar7 ^ uVar8;
  return;
}


