/* ptr_50413abd - 0x50413abd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * ptr_50413abd(void)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int unaff_EBP;
  int *unaff_ESI;
  float *pfVar5;
  
  thunk_FUN_5041193b();
  thunk_FUN_50411e47();
  piVar1 = *(int **)(unaff_EBP + 0x10);
  if (piVar1 == unaff_ESI) {
    pfVar5 = *(float **)(unaff_EBP + 8);
  }
  else {
    fVar3 = (float)*piVar1;
    if (*piVar1 < 0) {
      fVar3 = fVar3 + _DAT_5042e134;
    }
    pfVar2 = *(float **)(unaff_EBP + 0xc);
    fVar4 = (float)piVar1[2];
    if (piVar1[2] < 0) {
      fVar4 = fVar4 + _DAT_5042e134;
    }
    fVar4 = (*pfVar2 - fVar3) / fVar4;
    pfVar5 = *(float **)(unaff_EBP + 8);
    *pfVar5 = (fVar4 + fVar4) - _DAT_5042e130;
    fVar3 = (float)piVar1[1];
    if (piVar1[1] < 0) {
      fVar3 = fVar3 + _DAT_5042e134;
    }
    fVar4 = (float)piVar1[3];
    if (piVar1[3] < 0) {
      fVar4 = fVar4 + _DAT_5042e134;
    }
    fVar4 = (pfVar2[1] - fVar3) / fVar4;
    pfVar5[1] = -((fVar4 + fVar4) - _DAT_5042e130);
    pfVar5[2] = (pfVar2[2] - (float)piVar1[4]) / ((float)piVar1[5] - (float)piVar1[4]);
  }
  thunk_FUN_50411348();
  return pfVar5;
}


