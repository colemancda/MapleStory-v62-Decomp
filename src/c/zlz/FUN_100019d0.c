/* FUN_100019d0 - 0x100019d0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_100019d0(int param_1,uint *param_2)

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
  
  uVar16 = *param_2 ^ *(uint *)(param_1 + 4);
  uVar10 = param_2[2] ^ *(uint *)(param_1 + 0xc);
  uVar14 = param_2[1] ^ *(uint *)(param_1 + 8);
  uVar17 = param_2[3] ^ *(uint *)(param_1 + 0x10);
  uVar8 = (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar16 & 0xff] ^
          *(uint *)(param_1 + 0x14);
  uVar11 = (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar16 >> 0x18] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x18);
  uVar18 = (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar14 >> 0x18] ^
           (&DAT_10015ed8)[uVar16 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 0x1c);
  uVar10 = (&DAT_100162d8)[uVar10 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar16 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
           *(uint *)(param_1 + 0x20);
  uVar17 = (&DAT_100162d8)[uVar10 >> 0x18] ^ (&DAT_10015ed8)[uVar18 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 0x24);
  uVar19 = (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar18 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x28);
  uVar14 = (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar11 >> 0x18] ^
           (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar18 & 0xff] ^
           *(uint *)(param_1 + 0x2c);
  uVar11 = (&DAT_100162d8)[uVar18 >> 0x18] ^ (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 0x30);
  uVar8 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar19 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
          *(uint *)(param_1 + 0x34);
  uVar10 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_100156d8)[uVar19 & 0xff] ^
           *(uint *)(param_1 + 0x38);
  uVar16 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar19 >> 0x18] ^
           (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x3c);
  uVar11 = (&DAT_100162d8)[uVar14 >> 0x18] ^ (&DAT_10015ed8)[uVar19 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x40);
  uVar17 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 0x44);
  uVar18 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar16 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 0x48);
  uVar14 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar10 >> 0x18] ^
           (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x4c);
  uVar11 = (&DAT_100162d8)[uVar16 >> 0x18] ^ (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x50);
  uVar8 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar18 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
          *(uint *)(param_1 + 0x54);
  uVar10 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_100156d8)[uVar18 & 0xff] ^
           *(uint *)(param_1 + 0x58);
  uVar16 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar18 >> 0x18] ^
           (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x5c);
  uVar11 = (&DAT_100162d8)[uVar14 >> 0x18] ^ (&DAT_10015ed8)[uVar18 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x60);
  uVar17 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 100);
  uVar18 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar16 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 0x68);
  uVar14 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar10 >> 0x18] ^
           (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x6c);
  uVar11 = (&DAT_100162d8)[uVar16 >> 0x18] ^ (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x70);
  uVar8 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar18 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
          *(uint *)(param_1 + 0x74);
  uVar10 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_100156d8)[uVar18 & 0xff] ^
           *(uint *)(param_1 + 0x78);
  uVar16 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar18 >> 0x18] ^
           (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x7c);
  uVar11 = (&DAT_100162d8)[uVar14 >> 0x18] ^ (&DAT_10015ed8)[uVar18 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x80);
  uVar17 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 0x84);
  uVar18 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar16 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 0x88);
  uVar14 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar10 >> 0x18] ^
           (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0x8c);
  uVar11 = (&DAT_100162d8)[uVar16 >> 0x18] ^ (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0x90);
  uVar8 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar18 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
          *(uint *)(param_1 + 0x94);
  uVar10 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_100156d8)[uVar18 & 0xff] ^
           *(uint *)(param_1 + 0x98);
  uVar16 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar18 >> 0x18] ^
           (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0x9c);
  uVar11 = (&DAT_100162d8)[uVar14 >> 0x18] ^ (&DAT_10015ed8)[uVar18 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0xa0);
  uVar17 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 0xa4);
  uVar18 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar16 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 0xa8);
  uVar14 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar10 >> 0x18] ^
           (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0xac);
  uVar11 = (&DAT_100162d8)[uVar16 >> 0x18] ^ (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0xb0);
  uVar8 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar18 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
          *(uint *)(param_1 + 0xb4);
  uVar10 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_100156d8)[uVar18 & 0xff] ^
           *(uint *)(param_1 + 0xb8);
  uVar16 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar18 >> 0x18] ^
           (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0xbc);
  uVar11 = (&DAT_100162d8)[uVar14 >> 0x18] ^ (&DAT_10015ed8)[uVar18 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
           *(uint *)(param_1 + 0xc0);
  uVar17 = (&DAT_100162d8)[uVar11 >> 0x18] ^ (&DAT_10015ed8)[uVar16 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar10 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 0xc4);
  uVar18 = (&DAT_10015ed8)[uVar11 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar16 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_100156d8)[uVar10 & 0xff] ^
           *(uint *)(param_1 + 200);
  uVar14 = (&DAT_10015ad8)[uVar11 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar10 >> 0x18] ^
           (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar16 & 0xff] ^
           *(uint *)(param_1 + 0xcc);
  uVar8 = (&DAT_100162d8)[uVar16 >> 0x18] ^ (&DAT_10015ed8)[uVar10 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar11 & 0xff] ^
          *(uint *)(param_1 + 0xd0);
  uVar9 = (&DAT_100162d8)[uVar8 >> 0x18] ^ (&DAT_10015ed8)[uVar14 >> 0x10 & 0xff] ^
          (&DAT_10015ad8)[uVar18 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar17 & 0xff] ^
          *(uint *)(param_1 + 0xd4);
  uVar12 = (&DAT_10015ed8)[uVar8 >> 0x10 & 0xff] ^ (&DAT_10015ad8)[uVar14 >> 8 & 0xff] ^
           (&DAT_100162d8)[uVar17 >> 0x18] ^ (&DAT_100156d8)[uVar18 & 0xff] ^
           *(uint *)(param_1 + 0xd8);
  uVar13 = (&DAT_10015ad8)[uVar8 >> 8 & 0xff] ^ (&DAT_100162d8)[uVar18 >> 0x18] ^
           (&DAT_10015ed8)[uVar17 >> 0x10 & 0xff] ^ (&DAT_100156d8)[uVar14 & 0xff] ^
           *(uint *)(param_1 + 0xdc);
  uVar15 = (&DAT_100162d8)[uVar14 >> 0x18] ^ (&DAT_10015ed8)[uVar18 >> 0x10 & 0xff] ^
           (&DAT_10015ad8)[uVar17 >> 8 & 0xff] ^ (&DAT_100156d8)[uVar8 & 0xff] ^
           *(uint *)(param_1 + 0xe0);
  uVar8 = (&DAT_100142d8)[uVar15 >> 0x18];
  uVar10 = (&DAT_10013ed8)[uVar13 >> 0x10 & 0xff];
  uVar11 = (&DAT_10013ad8)[uVar12 >> 8 & 0xff];
  uVar14 = (&DAT_100136d8)[uVar9 & 0xff];
  uVar16 = *(uint *)(param_1 + 0xe4);
  uVar17 = (&DAT_10013ed8)[uVar15 >> 0x10 & 0xff];
  uVar18 = (&DAT_10013ad8)[uVar13 >> 8 & 0xff];
  uVar19 = (&DAT_100142d8)[uVar9 >> 0x18];
  uVar1 = (&DAT_100136d8)[uVar12 & 0xff];
  uVar2 = *(uint *)(param_1 + 0xe8);
  uVar3 = (&DAT_100142d8)[uVar13 >> 0x18];
  uVar4 = (&DAT_10013ed8)[uVar12 >> 0x10 & 0xff];
  uVar5 = (&DAT_10013ad8)[uVar9 >> 8 & 0xff];
  uVar6 = *(uint *)(param_1 + 0xf0);
  uVar7 = (&DAT_100136d8)[uVar15 & 0xff];
  param_2[2] = (&DAT_10013ad8)[uVar15 >> 8 & 0xff] ^ (&DAT_100142d8)[uVar12 >> 0x18] ^
               (&DAT_10013ed8)[uVar9 >> 0x10 & 0xff] ^ (&DAT_100136d8)[uVar13 & 0xff] ^
               *(uint *)(param_1 + 0xec);
  param_2[3] = uVar3 ^ uVar4 ^ uVar5 ^ uVar7 ^ uVar6;
  *param_2 = uVar8 ^ uVar10 ^ uVar11 ^ uVar14 ^ uVar16;
  param_2[1] = uVar17 ^ uVar18 ^ uVar19 ^ uVar1 ^ uVar2;
  return;
}


