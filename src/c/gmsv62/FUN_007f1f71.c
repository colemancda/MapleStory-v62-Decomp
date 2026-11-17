/* FUN_007f1f71 - 0x007f1f71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007f1f71(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(DAT_00978138 + 8);
  fVar2 = (float10)FUN_005d0e60();
  fVar3 = (float10)FUN_005d0e60();
  fVar2 = fVar3 * (float10)*(double *)(iVar1 + 8) * (float10)(double)fVar2;
  if (param_3 != 0) {
    fVar2 = ((float10)*(double *)(param_1 + 0x38) * (float10)*(double *)(param_1 + 0x38) *
             (float10)param_3 + (float10)_DAT_008e8a78) * fVar2;
  }
  return fVar2;
}


