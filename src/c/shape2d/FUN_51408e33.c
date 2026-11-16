/* FUN_51408e33 - 0x51408e33 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_51408e33(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(double)CONCAT44(param_3,param_2);
  if ((float10)_DAT_5140d978 < fVar1) {
    fVar2 = (float10)(*(int *)(param_1 + 8) * 1000);
    fVar1 = (fVar2 * fVar1) / ((float10)(param_4 - *(int *)(param_1 + 0x20)) * fVar1 + fVar2);
    if (fVar1 < (float10)_DAT_5140d8c8) {
      fVar1 = (float10)0;
    }
  }
  return fVar1;
}


