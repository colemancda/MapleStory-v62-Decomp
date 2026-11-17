/* FUN_00421a2d - 0x00421a2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00421a2d(int param_1,uint *param_2)

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
  
  uVar14 = param_2[2] ^ *(uint *)(param_1 + 0xc);
  uVar12 = *param_2 ^ *(uint *)(param_1 + 4);
  uVar11 = param_2[1] ^ *(uint *)(param_1 + 8);
  uVar19 = param_2[3] ^ *(uint *)(param_1 + 0x10);
  uVar9 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0x14);
  uVar15 = (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar14 >> 0x18] ^
           (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x18);
  uVar16 = (&DAT_009768dc)[uVar19 >> 0x18] ^ (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x1c);
  uVar12 = (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0x20);
  uVar14 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar16 >> 0x18] ^
           (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x28);
  uVar19 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar15 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x2c);
  uVar11 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar15 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x24);
  uVar12 = (&DAT_009760dc)[uVar16 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar15 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x30);
  uVar9 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar14 >> 0x18] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0x34);
  uVar15 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar19 >> 0x18] ^
           (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x38);
  uVar16 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0x3c);
  uVar12 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x40);
  uVar11 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar15 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x44);
  uVar14 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar16 >> 0x18] ^
           (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x48);
  uVar19 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar15 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x4c);
  uVar12 = (&DAT_009760dc)[uVar16 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar15 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x50);
  uVar15 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar19 >> 0x18] ^
           (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x58);
  uVar9 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar14 >> 0x18] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0x54);
  uVar16 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0x5c);
  uVar12 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x60);
  uVar14 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar16 >> 0x18] ^
           (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x68);
  uVar19 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar15 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x6c);
  uVar11 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar15 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 100);
  uVar12 = (&DAT_009760dc)[uVar16 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar15 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x70);
  uVar15 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar19 >> 0x18] ^
           (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x78);
  uVar16 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0x7c);
  uVar9 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar14 >> 0x18] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0x74);
  uVar12 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x80);
  uVar11 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar15 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0x84);
  uVar14 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar16 >> 0x18] ^
           (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0x88);
  uVar19 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar15 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x8c);
  uVar12 = (&DAT_009760dc)[uVar16 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar15 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0x90);
  uVar9 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar14 >> 0x18] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0x94);
  uVar15 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar19 >> 0x18] ^
           (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x98);
  uVar16 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0x9c);
  uVar12 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0xa0);
  uVar14 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar16 >> 0x18] ^
           (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 0xa8);
  uVar11 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar15 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0xa4);
  uVar19 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar15 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0xac);
  uVar12 = (&DAT_009760dc)[uVar16 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar15 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0xb0);
  uVar15 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar19 >> 0x18] ^
           (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0xb8);
  uVar16 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0xbc);
  uVar9 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar14 >> 0x18] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0xb4);
  uVar12 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
           *(uint *)(param_1 + 0xc0);
  uVar14 = (&DAT_009764dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar16 >> 0x18] ^
           (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar15 & 0xff] ^
           *(uint *)(param_1 + 200);
  uVar19 = (&DAT_009768dc)[uVar12 >> 0x18] ^ (&DAT_009760dc)[uVar15 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0xcc);
  uVar11 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar15 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0xc4);
  uVar9 = (&DAT_009760dc)[uVar16 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar15 >> 0x10 & 0xff] ^
          (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[uVar12 & 0xff] ^
          *(uint *)(param_1 + 0xd0);
  uVar10 = (&DAT_009760dc)[uVar9 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar19 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar14 >> 0x18] ^ (&DAT_00975cdc)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0xd4);
  uVar17 = (&DAT_009764dc)[uVar9 >> 0x10 & 0xff] ^ (&DAT_009768dc)[uVar19 >> 0x18] ^
           (&DAT_009760dc)[uVar11 >> 8 & 0xff] ^ (&DAT_00975cdc)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0xd8);
  uVar18 = (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_009760dc)[uVar14 >> 8 & 0xff] ^
           (&DAT_009764dc)[uVar11 >> 0x10 & 0xff] ^ (&DAT_00975cdc)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0xdc);
  uVar13 = (&DAT_009760dc)[uVar19 >> 8 & 0xff] ^ (&DAT_009764dc)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar11 >> 0x18] ^ (&DAT_00975cdc)[uVar9 & 0xff] ^
           *(uint *)(param_1 + 0xe0);
  uVar9 = (&DAT_009744dc)[uVar13 >> 0x10 & 0xff];
  uVar11 = (&DAT_009748dc)[uVar18 >> 0x18];
  uVar12 = (&DAT_009740dc)[uVar10 >> 8 & 0xff];
  uVar14 = (&DAT_00973cdc)[uVar17 & 0xff];
  uVar15 = *(uint *)(param_1 + 0xe8);
  uVar16 = (&DAT_009748dc)[uVar13 >> 0x18];
  uVar19 = (&DAT_009740dc)[uVar17 >> 8 & 0xff];
  uVar1 = (&DAT_009744dc)[uVar10 >> 0x10 & 0xff];
  uVar2 = (&DAT_00973cdc)[uVar18 & 0xff];
  uVar3 = *(uint *)(param_1 + 0xec);
  uVar4 = (&DAT_009740dc)[uVar18 >> 8 & 0xff];
  uVar5 = (&DAT_009744dc)[uVar17 >> 0x10 & 0xff];
  uVar6 = (&DAT_009748dc)[uVar10 >> 0x18];
  uVar7 = (&DAT_00973cdc)[uVar13 & 0xff];
  uVar8 = *(uint *)(param_1 + 0xf0);
  *param_2 = (&DAT_009740dc)[uVar13 >> 8 & 0xff] ^ (&DAT_009744dc)[uVar18 >> 0x10 & 0xff] ^
             (&DAT_009748dc)[uVar17 >> 0x18] ^ (&DAT_00973cdc)[uVar10 & 0xff] ^
             *(uint *)(param_1 + 0xe4);
  param_2[1] = uVar9 ^ uVar11 ^ uVar12 ^ uVar14 ^ uVar15;
  param_2[2] = uVar16 ^ uVar19 ^ uVar1 ^ uVar2 ^ uVar3;
  param_2[3] = uVar4 ^ uVar5 ^ uVar6 ^ uVar7 ^ uVar8;
  return;
}


