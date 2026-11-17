/* FUN_008748d0 - 0x008748d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008748d0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar2 = param_1;
  puVar1 = param_1 + 2;
  uVar6 = 0;
  uVar3 = 0;
  puVar5 = puVar1;
  do {
    *puVar5 = uVar3;
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar3 < 0x100);
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = 0;
  param_1 = (uint *)0x40;
  do {
    puVar5 = puVar2 + 4;
    uVar3 = puVar2[2];
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    puVar2[2] = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    uVar3 = puVar2[3];
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    puVar2[3] = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    uVar3 = *puVar5;
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    *puVar5 = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    uVar3 = puVar2[5];
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    puVar2[5] = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    param_1 = (uint *)((int)param_1 + -1);
    puVar2 = puVar5;
  } while (param_1 != (uint *)0x0);
  return;
}


