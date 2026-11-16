/* FUN_5041aeb2 - 0x5041aeb2 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Removing unreachable block (ram,0x5041af15) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041aeb2(void *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  
  fVar2 = _DAT_5042e1b8;
  puVar3 = (uint *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                   + *(int *)((int)this + 0x18));
  puVar1 = puVar3 + *(int *)((int)this + 0x1058);
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    *param_3 = (float)*(byte *)((int)puVar3 + 2) * fVar2;
    param_3[1] = (float)*(byte *)((int)puVar3 + 1) * fVar2;
    param_3[2] = (float)(*puVar3 & 0xff) * fVar2;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


