/* FUN_5041be21 - 0x5041be21 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Removing unreachable block (ram,0x5041bea0) */
/* WARNING: Removing unreachable block (ram,0x5041be7e) */
/* WARNING: Removing unreachable block (ram,0x5041beb9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041be21(void *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  puVar3 = (uint *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                   + *(int *)((int)this + 0x18));
  puVar1 = puVar3 + *(int *)((int)this + 0x1058) * 2;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 2) {
    uVar4 = __aullshr(0x20,puVar3[1]);
    fVar2 = _DAT_5042e214;
    *param_3 = (float)((uint)uVar4 & 0xffff) * _DAT_5042e214;
    param_3[1] = (float)(*puVar3 >> 0x10) * fVar2;
    param_3[2] = (float)(*puVar3 & 0xffff) * fVar2;
    param_3[3] = (float)*(ushort *)((int)puVar3 + 6) * fVar2;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


