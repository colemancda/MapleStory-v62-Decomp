/* FUN_100018a0 - 0x100018a0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_100018a0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (DAT_10016b00 == '\0') {
    FUN_10001250();
  }
  *param_2 = *param_1;
  param_2[1] = param_1[4];
  puVar2 = param_2 + 1;
  param_2[2] = param_1[8];
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[0x10];
  param_2[5] = param_1[0x14];
  param_2[6] = param_1[0x18];
  uVar1 = param_1[0x1c];
  param_2[7] = uVar1;
  puVar3 = &DAT_100166d8;
  do {
    uVar1 = (&DAT_100142d8)[uVar1 & 0xff] ^ (&DAT_10013ed8)[uVar1 >> 0x18] ^
            (&DAT_10013ad8)[(uVar1 >> 8 & 0xff00) >> 8] ^ (&DAT_100136d8)[uVar1 >> 8 & 0xff] ^
            puVar2[-1] ^ *puVar3;
    puVar2[7] = uVar1;
    uVar1 = uVar1 ^ *puVar2;
    puVar2[8] = uVar1;
    uVar1 = uVar1 ^ puVar2[1];
    puVar2[9] = uVar1;
    uVar1 = uVar1 ^ puVar2[2];
    puVar2[10] = uVar1;
    uVar1 = (&DAT_100142d8)[uVar1 >> 0x18] ^ (&DAT_10013ed8)[uVar1 >> 0x10 & 0xff] ^
            (&DAT_10013ad8)[uVar1 >> 8 & 0xff] ^ (&DAT_100136d8)[uVar1 & 0xff] ^ puVar2[3];
    puVar2[0xb] = uVar1;
    uVar1 = uVar1 ^ puVar2[4];
    puVar2[0xc] = uVar1;
    uVar1 = uVar1 ^ puVar2[5];
    puVar2[0xd] = uVar1;
    uVar1 = uVar1 ^ puVar2[6];
    puVar2[0xe] = uVar1;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (puVar3 < &DAT_100166f4);
  return;
}


