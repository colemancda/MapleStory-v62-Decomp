/* FUN_50c01442 - 0x50c01442 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c01442(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (DAT_50c1ca0c == '\0') {
    FUN_50c010ec();
  }
  *param_2 = *param_1;
  param_2[1] = param_1[4];
  param_2[2] = param_1[8];
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[0x10];
  param_2[5] = param_1[0x14];
  param_2[6] = param_1[0x18];
  uVar5 = param_1[0x1c];
  param_2[7] = uVar5;
  param_1 = &DAT_50c1c5e4;
  puVar7 = param_2 + 1;
  do {
    uVar3 = _lrotr(uVar5,8);
    uVar4 = _lrotr(uVar5,8);
    uVar6 = (&DAT_50c1a1e4)[uVar3 >> 0x18];
    uVar1 = (&DAT_50c19de4)[uVar4 >> 0x10 & 0xff];
    uVar3 = _lrotr(uVar5,8);
    uVar2 = (&DAT_50c199e4)[uVar3 >> 8 & 0xff];
    uVar5 = _lrotr(uVar5,8);
    uVar6 = uVar6 ^ uVar1 ^ uVar2 ^ (&DAT_50c195e4)[uVar5 & 0xff] ^ *param_1 ^ puVar7[-1];
    param_1 = param_1 + 1;
    puVar7[7] = uVar6;
    uVar6 = uVar6 ^ *puVar7;
    puVar7[8] = uVar6;
    uVar6 = uVar6 ^ puVar7[1];
    puVar7[9] = uVar6;
    uVar6 = uVar6 ^ puVar7[2];
    puVar7[10] = uVar6;
    uVar6 = (&DAT_50c1a1e4)[uVar6 >> 0x18] ^ (&DAT_50c19de4)[uVar6 >> 0x10 & 0xff] ^
            (&DAT_50c199e4)[uVar6 >> 8 & 0xff] ^ (&DAT_50c195e4)[uVar6 & 0xff] ^ puVar7[3];
    puVar7[0xb] = uVar6;
    uVar6 = uVar6 ^ puVar7[4];
    puVar7[0xc] = uVar6;
    uVar6 = uVar6 ^ puVar7[5];
    puVar7[0xd] = uVar6;
    uVar5 = uVar6 ^ puVar7[6];
    puVar7[0xe] = uVar5;
    puVar7 = puVar7 + 8;
  } while (param_1 < &DAT_50c1c600);
  return;
}


