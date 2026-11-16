/* FUN_5041b9f0 - 0x5041b9f0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041b9f0(void *this,int param_1,int param_2,float *param_3)

{
  char *pcVar1;
  float fVar2;
  char *pcVar3;
  
  fVar2 = _DAT_5042e21c;
  pcVar3 = (char *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                   + *(int *)((int)this + 0x18));
  pcVar1 = pcVar3 + *(int *)((int)this + 0x1058) * 4;
  for (; pcVar3 < pcVar1; pcVar3 = pcVar3 + 4) {
    *param_3 = (float)(int)*pcVar3 * fVar2;
    param_3[1] = (float)(int)pcVar3[1] * fVar2;
    param_3[2] = (float)(int)pcVar3[2] * fVar2;
    param_3[3] = (float)(int)pcVar3[3] * fVar2;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


