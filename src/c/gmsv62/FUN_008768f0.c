/* FUN_008768f0 - 0x008768f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008768f0(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[10] << 8 |
          (uint)param_1[0xb];
  uVar5 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 |
          (uint)CONCAT11(param_1[0xe],param_1[0xf]);
  uVar6 = param_2[1] ^ uVar5;
  uVar2 = *param_2 ^ uVar6 ^ uVar1;
  uVar3 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar6 & 0xff) * 4);
  uVar3 = uVar3 + uVar2;
  uVar6 = *(uint *)(&DAT_0096fc14 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar3 & 0xff) * 4);
  uVar3 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
          (uint)param_1[3]) ^ uVar6;
  uVar6 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
          (uint)param_1[7]) ^ uVar2 + uVar6;
  uVar7 = param_2[3] ^ uVar6;
  uVar2 = param_2[2] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[5] ^ uVar5;
  uVar2 = param_2[4] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar7 = param_2[7] ^ uVar6;
  uVar2 = param_2[6] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[9] ^ uVar5;
  uVar2 = param_2[8] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar7 = param_2[0xb] ^ uVar6;
  uVar2 = param_2[10] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[0xd] ^ uVar5;
  uVar2 = param_2[0xc] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar7 = param_2[0xf] ^ uVar6;
  uVar2 = param_2[0xe] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[0x11] ^ uVar5;
  uVar2 = param_2[0x10] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar7 = param_2[0x13] ^ uVar6;
  uVar2 = param_2[0x12] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[0x15] ^ uVar5;
  uVar2 = param_2[0x14] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar7 = param_2[0x17] ^ uVar6;
  uVar2 = param_2[0x16] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[0x19] ^ uVar5;
  uVar2 = param_2[0x18] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar7 = param_2[0x1b] ^ uVar6;
  uVar2 = param_2[0x1a] ^ uVar7 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  uVar7 = param_2[0x1d] ^ uVar5;
  uVar2 = param_2[0x1c] ^ uVar7 ^ uVar1;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar7 = uVar7 + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar7 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar2 + uVar4;
  uVar2 = param_2[0x1e] ^ param_2[0x1f] ^ uVar6 ^ uVar3;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar2 = (param_2[0x1f] ^ uVar6) + uVar4;
  uVar2 = *(uint *)(&DAT_0096fc14 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar2 & 0xff) * 4);
  uVar4 = uVar4 + uVar2;
  uVar4 = *(uint *)(&DAT_0096fc14 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0096f814 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f414 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0096f014 + (uVar4 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar4;
  uVar5 = uVar5 ^ uVar2 + uVar4;
  *param_1 = (byte)(uVar1 >> 0x18);
  param_1[1] = (byte)(uVar1 >> 0x10);
  param_1[2] = (byte)(uVar1 >> 8);
  param_1[3] = (byte)uVar1;
  param_1[4] = (byte)(uVar5 >> 0x18);
  param_1[5] = (byte)(uVar5 >> 0x10);
  param_1[6] = (byte)(uVar5 >> 8);
  param_1[7] = (byte)uVar5;
  param_1[8] = (byte)(uVar3 >> 0x18);
  param_1[9] = (byte)(uVar3 >> 0x10);
  param_1[10] = (byte)(uVar3 >> 8);
  param_1[0xb] = (byte)uVar3;
  param_1[0xc] = (byte)(uVar6 >> 0x18);
  param_1[0xd] = (byte)(uVar6 >> 0x10);
  param_1[0xe] = (byte)(uVar6 >> 8);
  param_1[0xf] = (byte)uVar6;
  return;
}


