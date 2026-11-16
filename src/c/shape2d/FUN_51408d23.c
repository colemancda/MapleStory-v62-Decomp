/* FUN_51408d23 - 0x51408d23 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_51408d23(void *this,int *param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  float10 extraout_ST0;
  
  if (*(int *)((int)this + 0xc) == 0) {
    if (param_3 != 0) {
      *(double *)((int)this + 0x10) = (double)*param_1;
      iVar2 = param_1[1];
      *(int *)((int)this + 0x20) = param_2;
      *(undefined4 *)((int)this + 0xc) = 1;
      *(double *)((int)this + 0x18) = (double)iVar2;
    }
  }
  else {
    iVar2 = *param_1;
    dVar1 = (double)iVar2 - *(double *)((int)this + 0x10);
    if (dVar1 < _DAT_5140d8c8) {
      fVar3 = FUN_51408e33((int)this,SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20),param_2);
      fVar3 = fVar3 + (float10)*param_1;
    }
    else {
      fVar3 = FUN_51408e33((int)this,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),param_2);
      fVar3 = (float10)iVar2 - fVar3;
    }
    iVar2 = ftol();
    *param_1 = iVar2;
    dVar1 = (double)param_1[1] - *(double *)((int)this + 0x18);
    if (dVar1 < _DAT_5140d8c8) {
      FUN_51408e33((int)this,SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20),param_2);
    }
    else {
      FUN_51408e33((int)this,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),param_2);
    }
    iVar2 = ftol();
    param_1[1] = iVar2;
    if (param_3 != 0) {
      *(int *)((int)this + 0x20) = param_2;
      *(double *)((int)this + 0x10) = (double)fVar3;
      *(double *)((int)this + 0x18) = (double)extraout_ST0;
    }
  }
  return 0;
}


