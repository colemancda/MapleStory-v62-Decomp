/* FUN_5180edfa - 0x5180edfa in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __cdecl FUN_5180edfa(undefined2 *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = param_2 >> 0x11 & 3;
  uVar3 = param_2 >> 9 & 1;
  uVar6 = param_2 >> 0x13 & 3;
  memset(param_1,0,0x1e);
  *param_1 = 0x55;
  param_1[1] = (((byte)param_2 & 0xc0) != 0xc0) + 1;
  uVar4 = FUN_5180ef56(uVar6,param_2 >> 10 & 3);
  *(undefined4 *)(param_1 + 2) = uVar4;
  iVar5 = FUN_5180eecc(uVar6,uVar2,param_2 >> 0xc & 0xf);
  *(int *)(param_1 + 4) = iVar5 * 0x7d;
  param_1[6] = 1;
  param_1[8] = 0xc;
  param_1[9] = 1;
  *(uint *)(param_1 + 10) = (uVar3 == 0) + 1;
  sVar1 = (short)uVar3;
  if (uVar2 == 3) {
    sVar1 = ((short)((uint)(iVar5 * 12000) / *(uint *)(param_1 + 2)) + sVar1) * 4;
  }
  else {
    sVar1 = (short)((uint)(iVar5 * 0x23280) / *(uint *)(param_1 + 2)) + sVar1;
  }
  param_1[0xe] = 0;
  param_1[0xc] = sVar1;
  param_1[0xd] = 1;
  return;
}


