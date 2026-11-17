/* ptr_00421700 - 0x00421700 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00421700(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int in_EAX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_EDI;
  
  uVar1 = (&DAT_009778dc)[param_1 >> 0x18];
  uVar10 = param_2 ^ (&DAT_009774dc)[unaff_ESI] ^ (&DAT_00976cdc)[param_1 & 0xff] ^
           *(uint *)(in_EAX + 8);
  *(undefined4 *)(unaff_EBP + -0x1c) = unaff_EDI;
  uVar13 = uVar1 ^ (&DAT_009774dc)[*(uint *)(unaff_EBP + -0xc) >> 0x10 & 0xff] ^
           (&DAT_009770dc)[*(uint *)(unaff_EBP + -0x10) >> 8 & 0xff] ^
           (&DAT_00976cdc)[*(byte *)(unaff_EBP + -4)] ^ *(uint *)(in_EAX + 0xc);
  *(uint *)(unaff_EBP + -0x10) =
       (&DAT_009778dc)[uVar13 >> 0x18] ^ (&DAT_009774dc)[uVar10 >> 0x10 & 0xff] ^
       (&DAT_009770dc)[*(uint *)(unaff_EBP + -0x1c) >> 8 & 0xff] ^
       (&DAT_00976cdc)[*(byte *)(unaff_EBP + -0x20)] ^ *(uint *)(in_EAX + 0x10);
  uVar1 = (&DAT_009774dc)[uVar13 >> 0x10 & 0xff];
  uVar2 = (&DAT_009770dc)[uVar10 >> 8 & 0xff];
  uVar3 = (&DAT_009778dc)[*(uint *)(unaff_EBP + -0x20) >> 0x18];
  uVar4 = (&DAT_00976cdc)[*(byte *)(unaff_EBP + -0x1c)];
  uVar11 = (&DAT_009770dc)[uVar13 >> 8 & 0xff];
  uVar14 = *(uint *)(in_EAX + 0x14);
  *(uint *)(unaff_EBP + -0x14) = uVar13;
  uVar13 = (&DAT_009778dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x18];
  *(uint *)(unaff_EBP + -0xc) = uVar1 ^ uVar2 ^ uVar3 ^ uVar4 ^ uVar14;
  uVar11 = uVar11 ^ uVar13 ^ (&DAT_009774dc)[*(uint *)(unaff_EBP + -0x20) >> 0x10 & 0xff] ^
           (&DAT_00976cdc)[uVar10 & 0xff] ^ *(uint *)(in_EAX + 0x18);
  uVar14 = (&DAT_009778dc)[uVar10 >> 0x18] ^
           (&DAT_009774dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x10 & 0xff] ^
           (&DAT_009770dc)[*(uint *)(unaff_EBP + -0x20) >> 8 & 0xff] ^
           (&DAT_00976cdc)[*(byte *)(unaff_EBP + -0x14)] ^ *(uint *)(in_EAX + 0x1c);
  *(uint *)(unaff_EBP + -0x20) =
       (&DAT_009778dc)[uVar14 >> 0x18] ^ (&DAT_009774dc)[uVar11 >> 0x10 & 0xff] ^
       (&DAT_009770dc)[*(uint *)(unaff_EBP + -0xc) >> 8 & 0xff] ^
       (&DAT_00976cdc)[*(byte *)(unaff_EBP + -0x10)] ^ *(uint *)(in_EAX + 0x20);
  uVar1 = (&DAT_009770dc)[uVar14 >> 8 & 0xff];
  uVar2 = (&DAT_009778dc)[*(uint *)(unaff_EBP + -0xc) >> 0x18];
  uVar3 = (&DAT_009774dc)[*(uint *)(unaff_EBP + -0x10) >> 0x10 & 0xff];
  uVar13 = (&DAT_009774dc)[uVar14 >> 0x10 & 0xff] ^ (&DAT_009770dc)[uVar11 >> 8 & 0xff] ^
           (&DAT_009778dc)[*(uint *)(unaff_EBP + -0x10) >> 0x18] ^
           (&DAT_00976cdc)[*(byte *)(unaff_EBP + -0xc)] ^ *(uint *)(in_EAX + 0x24);
  uVar4 = (&DAT_009778dc)[uVar11 >> 0x18];
  *(uint *)(unaff_EBP + -4) = uVar14;
  *(uint *)(unaff_EBP + -0x1c) = uVar13;
  uVar9 = uVar1 ^ uVar2 ^ uVar3 ^ (&DAT_00976cdc)[uVar11 & 0xff] ^ *(uint *)(in_EAX + 0x28);
  uVar12 = uVar4 ^ (&DAT_009774dc)[*(uint *)(unaff_EBP + -0xc) >> 0x10 & 0xff] ^
           (&DAT_009770dc)[*(uint *)(unaff_EBP + -0x10) >> 8 & 0xff] ^
           (&DAT_00976cdc)[*(byte *)(unaff_EBP + -4)] ^ *(uint *)(in_EAX + 0x2c);
  uVar1 = (&DAT_009758dc)[uVar12 >> 0x18];
  uVar2 = (&DAT_009754dc)[uVar9 >> 0x10 & 0xff];
  uVar3 = (&DAT_009750dc)[uVar13 >> 8 & 0xff];
  uVar4 = (&DAT_00974cdc)[*(byte *)(unaff_EBP + -0x20)];
  *(uint *)(unaff_EBP + -0xc) =
       (&DAT_009754dc)[uVar12 >> 0x10 & 0xff] ^ (&DAT_009750dc)[uVar9 >> 8 & 0xff] ^
       (&DAT_009758dc)[*(uint *)(unaff_EBP + -0x20) >> 0x18] ^
       (&DAT_00974cdc)[*(byte *)(unaff_EBP + -0x1c)] ^ *(uint *)(in_EAX + 0x34);
  uVar11 = *(uint *)(in_EAX + 0x30);
  uVar14 = (&DAT_009758dc)[uVar9 >> 0x18];
  uVar13 = (&DAT_009754dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x10 & 0xff];
  uVar10 = (&DAT_009750dc)[*(uint *)(unaff_EBP + -0x20) >> 8 & 0xff];
  uVar5 = (&DAT_00974cdc)[uVar12 & 0xff];
  uVar6 = *(uint *)(unaff_EBP + -0xc);
  uVar7 = *(uint *)(in_EAX + 0x3c);
  puVar8 = *(uint **)(unaff_EBP + 0xc);
  puVar8[2] = (&DAT_009750dc)[uVar12 >> 8 & 0xff] ^
              (&DAT_009758dc)[*(uint *)(unaff_EBP + -0x1c) >> 0x18] ^
              (&DAT_009754dc)[*(uint *)(unaff_EBP + -0x20) >> 0x10 & 0xff] ^
              (&DAT_00974cdc)[uVar9 & 0xff] ^ *(uint *)(in_EAX + 0x38);
  *puVar8 = uVar1 ^ uVar2 ^ uVar3 ^ uVar4 ^ uVar11;
  puVar8[1] = uVar6;
  puVar8[3] = uVar14 ^ uVar13 ^ uVar10 ^ uVar5 ^ uVar7;
  return;
}


