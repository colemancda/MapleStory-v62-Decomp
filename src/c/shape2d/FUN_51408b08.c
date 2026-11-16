/* FUN_51408b08 - 0x51408b08 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_51408b08(void *this,double *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(double *)((int)this + 8) == _DAT_5140d8c8) {
    iVar2 = *(int *)((int)this + 0x14);
    if (iVar2 == 0) {
      return 1;
    }
    dVar1 = ((double)((param_2 - *(int *)((int)this + 0x10)) % iVar2) * _DAT_5140d8c0) /
            (double)iVar2;
  }
  else if (param_2 - *(int *)((int)this + 0x14) < 0) {
    dVar1 = ((double)(param_2 - *(int *)((int)this + 0x10)) * *(double *)((int)this + 8)) /
            (double)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10));
  }
  else {
    dVar1 = *(double *)((int)this + 8);
    uVar3 = 1;
  }
  *param_1 = dVar1 + *param_1;
  return uVar3;
}


