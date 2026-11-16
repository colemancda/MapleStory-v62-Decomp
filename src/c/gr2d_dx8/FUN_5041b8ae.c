/* FUN_5041b8ae - 0x5041b8ae in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041b8ae(void *this,int param_1,int param_2,float *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  
  fVar3 = _DAT_5042e220;
  puVar4 = (ushort *)
           (*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2 +
           *(int *)((int)this + 0x18));
  puVar1 = puVar4 + *(int *)((int)this + 0x1058);
  for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar4;
    *param_3 = (float)(int)((char)((char)*puVar4 << 3) >> 3) * fVar3;
    param_3[1] = (float)(int)((char)((char)(uVar2 >> 5) << 3) >> 3) * fVar3;
    param_3[2] = 0.0;
    param_3[3] = (float)(*puVar4 >> 10) * _DAT_5042e200;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


