/* ptr_0042220f - 0x0042220f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0042220f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_EAX;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBX;
  uint uVar11;
  int unaff_EBP;
  uint uVar12;
  uint uVar13;
  int unaff_EDI;
  
  *(uint *)(unaff_EBP + -8) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[unaff_EBX] ^ *(uint *)(in_EAX + 8);
  uVar12 = (&DAT_009760dc)[*(uint *)(unaff_EBP + -0x18) >> 8 & 0xff] ^
           (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x10 & 0xff] ^
           (&DAT_009768dc)[param_1 >> 0x18] ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x14)] ^
           *(uint *)(in_EAX + 0xc);
  puVar5 = (uint *)(in_EAX + unaff_EDI);
  *(uint *)(unaff_EBP + -4) = uVar12;
  uVar7 = (&DAT_009760dc)[uVar12 >> 8 & 0xff] ^
          (&DAT_009764dc)[*(uint *)(unaff_EBP + -8) >> 0x10 & 0xff] ^
          (&DAT_009768dc)[*(uint *)(unaff_EBP + -0xc) >> 0x18] ^ (&DAT_00975cdc)[param_2 & 0xff] ^
          *puVar5;
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009764dc)[*(uint *)(unaff_EBP + -4) >> 0x10 & 0xff] ^
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -8) >> 0x18];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009760dc)[param_2 >> 8 & 0xff];
  *(uint *)(unaff_EBP + -0x1c) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0xc)] ^ puVar5[1];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -4) >> 0x18] ^
       (&DAT_009760dc)[*(uint *)(unaff_EBP + -0xc) >> 8 & 0xff];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009764dc)[param_2 >> 0x10 & 0xff];
  *(uint *)(unaff_EBP + -0x18) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -8)] ^ puVar5[2];
  uVar12 = (&DAT_009760dc)[*(uint *)(unaff_EBP + -8) >> 8 & 0xff] ^
           (&DAT_009764dc)[*(uint *)(unaff_EBP + -0xc) >> 0x10 & 0xff] ^
           (&DAT_009768dc)[param_2 >> 0x18] ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -4)] ^ puVar5[3]
  ;
  puVar5 = (uint *)((int)puVar5 + unaff_EDI);
  *(uint *)(unaff_EBP + -0x14) = uVar12;
  uVar12 = (&DAT_009760dc)[uVar12 >> 8 & 0xff];
  uVar10 = (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x18) >> 0x10 & 0xff];
  uVar13 = (&DAT_009768dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x18];
  uVar1 = (&DAT_00975cdc)[uVar7 & 0xff];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x14) >> 0x10 & 0xff] ^
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -0x18) >> 0x18];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009760dc)[uVar7 >> 8 & 0xff];
  uVar9 = uVar12 ^ uVar10 ^ uVar13 ^ uVar1 ^ *puVar5;
  *(uint *)(unaff_EBP + -0xc) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x1c)] ^ puVar5[1];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -0x14) >> 0x18] ^
       (&DAT_009760dc)[*(uint *)(unaff_EBP + -0x1c) >> 8 & 0xff];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009764dc)[uVar7 >> 0x10 & 0xff];
  *(uint *)(unaff_EBP + -8) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x18)] ^ puVar5[2];
  uVar12 = (&DAT_009760dc)[*(uint *)(unaff_EBP + -0x18) >> 8 & 0xff] ^
           (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar7 >> 0x18] ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x14)] ^
           puVar5[3];
  puVar5 = (uint *)((int)puVar5 + unaff_EDI);
  *(uint *)(unaff_EBP + -4) = uVar12;
  uVar12 = (&DAT_009760dc)[uVar12 >> 8 & 0xff];
  uVar10 = (&DAT_009764dc)[*(uint *)(unaff_EBP + -8) >> 0x10 & 0xff];
  uVar13 = (&DAT_009768dc)[*(uint *)(unaff_EBP + -0xc) >> 0x18];
  uVar1 = (&DAT_00975cdc)[uVar9 & 0xff];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009764dc)[*(uint *)(unaff_EBP + -4) >> 0x10 & 0xff] ^
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -8) >> 0x18];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009760dc)[uVar9 >> 8 & 0xff];
  *(uint *)(unaff_EBP + -0x1c) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0xc)] ^ puVar5[1];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -4) >> 0x18] ^
       (&DAT_009760dc)[*(uint *)(unaff_EBP + -0xc) >> 8 & 0xff];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009764dc)[uVar9 >> 0x10 & 0xff];
  uVar7 = uVar12 ^ uVar10 ^ uVar13 ^ uVar1 ^ *puVar5;
  *(uint *)(unaff_EBP + -0x18) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -8)] ^ puVar5[2];
  uVar12 = (&DAT_009760dc)[*(uint *)(unaff_EBP + -8) >> 8 & 0xff] ^
           (&DAT_009764dc)[*(uint *)(unaff_EBP + -0xc) >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar9 >> 0x18] ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -4)] ^ puVar5[3];
  *(uint *)(unaff_EBP + -0x14) = uVar12;
  uVar12 = (&DAT_009760dc)[uVar12 >> 8 & 0xff];
  uVar10 = (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x18) >> 0x10 & 0xff];
  uVar13 = (&DAT_009768dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x18];
  uVar1 = (&DAT_00975cdc)[uVar7 & 0xff];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x14) >> 0x10 & 0xff] ^
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -0x18) >> 0x18];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009760dc)[uVar7 >> 8 & 0xff];
  puVar6 = (uint *)((int)puVar5 + unaff_EDI);
  *(uint *)(unaff_EBP + -0xc) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x1c)] ^
       *(uint *)((int)puVar5 + unaff_EDI + 4);
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -0x14) >> 0x18] ^
       (&DAT_009760dc)[*(uint *)(unaff_EBP + -0x1c) >> 8 & 0xff];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009764dc)[uVar7 >> 0x10 & 0xff];
  *(uint *)(unaff_EBP + -8) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x18)] ^ puVar6[2];
  uVar10 = uVar12 ^ uVar10 ^ uVar13 ^ uVar1 ^ *puVar6;
  uVar13 = (&DAT_009760dc)[*(uint *)(unaff_EBP + -0x18) >> 8 & 0xff] ^
           (&DAT_009764dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x10 & 0xff] ^
           (&DAT_009768dc)[uVar7 >> 0x18] ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0x14)] ^
           puVar6[3];
  puVar6 = (uint *)((int)puVar6 + unaff_EDI);
  uVar12 = (&DAT_009760dc)[uVar13 >> 8 & 0xff];
  *(uint *)(unaff_EBP + -4) = uVar13;
  uVar8 = uVar12 ^ (&DAT_009764dc)[*(uint *)(unaff_EBP + -8) >> 0x10 & 0xff] ^
          (&DAT_009768dc)[*(uint *)(unaff_EBP + -0xc) >> 0x18] ^ (&DAT_00975cdc)[uVar10 & 0xff] ^
          *puVar6;
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009764dc)[*(uint *)(unaff_EBP + -4) >> 0x10 & 0xff] ^
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -8) >> 0x18];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009760dc)[uVar10 >> 8 & 0xff];
  *(uint *)(unaff_EBP + -0x1c) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -0xc)] ^ puVar6[1];
  *(undefined4 *)(unaff_EBP + 8) =
       (&DAT_009768dc)[*(uint *)(unaff_EBP + -4) >> 0x18] ^
       (&DAT_009760dc)[*(uint *)(unaff_EBP + -0xc) >> 8 & 0xff];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + 8) ^ (&DAT_009764dc)[uVar10 >> 0x10 & 0xff];
  *(uint *)(unaff_EBP + -0x18) =
       *(uint *)(unaff_EBP + 8) ^ (&DAT_00975cdc)[*(byte *)(unaff_EBP + -8)] ^ puVar6[2];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + -0xc) >> 0x10 & 0xff;
  uVar11 = (&DAT_009760dc)[*(uint *)(unaff_EBP + -8) >> 8 & 0xff] ^
           (&DAT_009764dc)[*(int *)(unaff_EBP + 8)] ^ (&DAT_009768dc)[uVar10 >> 0x18] ^
           (&DAT_00975cdc)[*(byte *)(unaff_EBP + -4)] ^ puVar6[3];
  puVar6 = (uint *)((int)puVar6 + unaff_EDI);
  uVar12 = (&DAT_009740dc)[uVar11 >> 8 & 0xff];
  uVar10 = (&DAT_009744dc)[*(uint *)(unaff_EBP + -0x18) >> 0x10 & 0xff];
  uVar13 = (&DAT_009748dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x18];
  uVar1 = (&DAT_00973cdc)[uVar8 & 0xff];
  uVar7 = *puVar6;
  *(uint *)(unaff_EBP + -0xc) =
       (&DAT_009744dc)[uVar11 >> 0x10 & 0xff] ^
       (&DAT_009748dc)[*(uint *)(unaff_EBP + -0x18) >> 0x18] ^ (&DAT_009740dc)[uVar8 >> 8 & 0xff] ^
       (&DAT_00973cdc)[*(byte *)(unaff_EBP + -0x1c)] ^ puVar6[1];
  *(uint *)(unaff_EBP + -8) =
       (&DAT_009748dc)[uVar11 >> 0x18] ^ (&DAT_009740dc)[*(uint *)(unaff_EBP + -0x1c) >> 8 & 0xff] ^
       (&DAT_009744dc)[uVar8 >> 0x10 & 0xff] ^ (&DAT_00973cdc)[*(byte *)(unaff_EBP + -0x18)] ^
       puVar6[2];
  *(uint *)(unaff_EBP + 8) = *(uint *)(unaff_EBP + -0x1c) >> 0x10 & 0xff;
  uVar9 = (&DAT_009740dc)[*(uint *)(unaff_EBP + -0x18) >> 8 & 0xff];
  uVar2 = (&DAT_009744dc)[*(int *)(unaff_EBP + 8)];
  uVar8 = (&DAT_009748dc)[uVar8 >> 0x18];
  uVar11 = (&DAT_00973cdc)[uVar11 & 0xff];
  uVar3 = *(uint *)(unaff_EBP + -0xc);
  uVar4 = puVar6[3];
  puVar5 = *(uint **)(unaff_EBP + 0xc);
  *puVar5 = uVar12 ^ uVar10 ^ uVar13 ^ uVar1 ^ uVar7;
  puVar5[1] = uVar3;
  puVar5[2] = *(uint *)(unaff_EBP + -8);
  puVar5[3] = uVar9 ^ uVar2 ^ uVar8 ^ uVar11 ^ uVar4;
  return;
}


