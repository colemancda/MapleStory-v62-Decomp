/* FUN_00420ba8 - 0x00420ba8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00420ba8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if (DAT_00978104 == '\0') {
    FUN_00420565();
  }
  *param_2 = *param_1;
  param_2[1] = param_1[4];
  param_2[2] = param_1[8];
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[0x10];
  param_2[5] = param_1[0x14];
  param_2[6] = param_1[0x18];
  uVar4 = param_1[0x1c];
  param_2[7] = uVar4;
  param_1 = &DAT_00977cdc;
  puVar5 = param_2 + 1;
  do {
    uVar1 = FUN_0087a024(uVar4,8);
    uVar2 = FUN_0087a024(uVar4,8);
    uVar1 = (&DAT_009758dc)[uVar1 >> 0x18];
    uVar2 = (&DAT_009754dc)[uVar2 >> 0x10 & 0xff];
    uVar3 = FUN_0087a024(uVar4,8);
    uVar3 = (&DAT_009750dc)[uVar3 >> 8 & 0xff];
    uVar4 = FUN_0087a024(uVar4,8);
    uVar4 = uVar1 ^ uVar2 ^ uVar3 ^ (&DAT_00974cdc)[uVar4 & 0xff] ^ *param_1 ^ puVar5[-1];
    param_1 = param_1 + 1;
    puVar5[7] = uVar4;
    uVar4 = uVar4 ^ *puVar5;
    puVar5[8] = uVar4;
    uVar4 = uVar4 ^ puVar5[1];
    puVar5[9] = uVar4;
    uVar4 = uVar4 ^ puVar5[2];
    puVar5[10] = uVar4;
    uVar4 = (&DAT_009758dc)[uVar4 >> 0x18] ^ (&DAT_009754dc)[uVar4 >> 0x10 & 0xff] ^
            (&DAT_009750dc)[uVar4 >> 8 & 0xff] ^ (&DAT_00974cdc)[uVar4 & 0xff] ^ puVar5[3];
    puVar5[0xb] = uVar4;
    uVar4 = uVar4 ^ puVar5[4];
    puVar5[0xc] = uVar4;
    uVar4 = uVar4 ^ puVar5[5];
    puVar5[0xd] = uVar4;
    uVar4 = uVar4 ^ puVar5[6];
    puVar5[0xe] = uVar4;
    puVar5 = puVar5 + 8;
  } while (param_1 < &DAT_00977cf8);
  return;
}


