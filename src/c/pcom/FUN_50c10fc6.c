/* FUN_50c10fc6 - 0x50c10fc6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c10fc6(short *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  size_t *psVar4;
  short *psVar5;
  short *psVar6;
  
  uVar3 = 0;
  bVar2 = false;
  sVar1 = *param_1;
  psVar6 = param_1;
  while (sVar1 != 0) {
    if (bVar2) {
      bVar2 = false;
    }
    else if (*psVar6 == 0x5c) {
      bVar2 = true;
    }
    else if (*psVar6 == 0x3d) break;
    psVar6 = psVar6 + 1;
    sVar1 = *psVar6;
  }
  if (*psVar6 == 0) {
    *param_3 = 0;
    if ((*param_1 == 0x7d) && (param_1[1] == 0)) {
      psVar4 = FUN_50c02a35(&DAT_50c17508,1);
    }
    else {
      if (param_1 != (short *)0x0) {
        uVar3 = *(uint *)(param_1 + -2) >> 1;
      }
      psVar4 = FUN_50c02a35(param_1,uVar3);
      psVar4 = (size_t *)FUN_50c110ea((short *)psVar4);
    }
    *param_2 = psVar4;
  }
  else {
    psVar4 = FUN_50c02a35(param_1,(int)psVar6 - (int)param_1 >> 1);
    psVar5 = FUN_50c10ec1((short *)psVar4);
    *param_2 = psVar5;
    if (((psVar5 == (short *)0x0) || (*psVar5 != 0x7d)) || (psVar5[1] != 0)) {
      psVar5 = FUN_50c110ea(psVar5);
      *param_2 = psVar5;
    }
    else {
      *psVar5 = 7;
    }
    if (param_1 == (short *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + -2) >> 1;
    }
    psVar4 = FUN_50c02a35(psVar6 + 1,(int)((uVar3 * 2 - (int)psVar6) + -2 + (int)param_1) >> 1);
    psVar6 = FUN_50c10ec1((short *)psVar4);
    *param_3 = psVar6;
    if (psVar6 != (short *)0x0) {
      if ((*psVar6 == 0x7b) && (psVar6[1] == 0)) {
        *psVar6 = 7;
        return;
      }
      if (*psVar6 == 0x40) {
        *psVar6 = 8;
        psVar6 = (short *)*param_3;
      }
    }
    psVar6 = FUN_50c110ea(psVar6);
    *param_3 = psVar6;
  }
  return;
}


