/* FUN_007f3ee6 - 0x007f3ee6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007f3ee6(int *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x44] != 0) {
    dVar1 = *(double *)(param_1[0x44] + 0x40);
    fVar4 = (float10)FUN_004f1993(param_1 + 0x38,param_1[0x3c]);
    if ((float10)_DAT_008e8a80 <= fVar4) {
      if ((float10)dVar1 < fVar4) {
        fVar4 = (float10)dVar1;
      }
    }
    else {
      fVar4 = (float10)0;
    }
    iVar3 = FUN_004f1a11((double)fVar4);
    param_1[0x3c] = iVar3;
    FUN_007f14d1(param_1 + 0x38,param_1[0x44]);
    iVar3 = *(int *)(param_1[0x44] + 0x14);
    iVar2 = *(int *)(param_1[0x44] + 0xc);
    fVar4 = (float10)FUN_004f1993(param_1 + 8,param_1[0xc]);
    if ((float10)iVar2 <= fVar4) {
      if ((float10)iVar3 < fVar4) {
        fVar4 = (float10)iVar3;
      }
    }
    else {
      fVar4 = (float10)iVar2;
    }
    iVar3 = FUN_004f1a11((double)fVar4);
    param_1[0xc] = iVar3;
    fVar4 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
    fVar4 = (float10)FUN_0087c217((double)(fVar4 - (float10)_DAT_008e8a78));
    iVar3 = FUN_004f1a11((double)fVar4);
    param_1[0x12] = iVar3;
    (**(code **)(*param_1 + 0x10))(0,0,0);
  }
  return;
}


