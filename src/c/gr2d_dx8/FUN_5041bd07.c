/* FUN_5041bd07 - 0x5041bd07 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Removing unreachable block (ram,0x5041bd4d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041bd07(void *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  
  fVar3 = _DAT_5042e214;
  puVar4 = (uint *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                   + *(int *)((int)this + 0x18));
  puVar1 = puVar4 + *(int *)((int)this + 0x1058);
  for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    fVar2 = (float)(*puVar4 & 0xffff) * fVar3;
    param_3[2] = fVar2;
    param_3[1] = fVar2;
    *param_3 = fVar2;
    param_3[3] = (float)*(ushort *)((int)puVar4 + 2) * fVar3;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


