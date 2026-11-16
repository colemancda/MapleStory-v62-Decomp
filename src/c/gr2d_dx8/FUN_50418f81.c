/* FUN_50418f81 - 0x50418f81 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_50418f81(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  
  uVar1 = *(int *)((int)this + 0x1058) * 0x10 + param_1;
  if (param_1 < uVar1) {
    iVar2 = ((uVar1 - param_1) - 1 >> 4) + 1;
    pfVar3 = (float *)(param_1 + 8);
    do {
      if ((((pfVar3[-2] == *(float *)((int)this + 0x1c)) &&
           (pfVar3[-1] == *(float *)((int)this + 0x20))) &&
          (*pfVar3 == *(float *)((int)this + 0x24))) && (pfVar3[1] == *(float *)((int)this + 0x28)))
      {
        pfVar3[1] = 0.0;
        *pfVar3 = 0.0;
        pfVar3[-1] = 0.0;
        pfVar3[-2] = 0.0;
      }
      pfVar3 = pfVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


