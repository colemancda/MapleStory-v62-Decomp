/* FUN_007f13de - 0x007f13de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007f13de(int param_1,int param_2,int param_3)

{
  double dVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)FUN_0087acc3(*(undefined8 *)(param_3 + 0x30));
  if (fVar3 <= (float10)_DAT_008e89d0) {
    fVar3 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
    fVar3 = fVar3 - (float10)*(int *)(param_3 + 0x10);
    dVar1 = *(double *)(param_3 + 0x38);
  }
  else {
    fVar3 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
    fVar3 = fVar3 - (float10)*(int *)(param_3 + 0xc);
    dVar1 = *(double *)(param_3 + 0x30);
  }
  uVar2 = FUN_004f1a11((double)(fVar3 / (float10)dVar1));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  fVar3 = (float10)FUN_004f1993(param_2 + 0x30,*(undefined4 *)(param_2 + 0x40));
  dVar1 = *(double *)(param_3 + 0x30);
  fVar4 = (float10)FUN_004f1993(param_2 + 0x48,*(undefined4 *)(param_2 + 0x58));
  uVar2 = FUN_004f1a11((double)((float10)(double)fVar3 * (float10)dVar1 +
                               (float10)*(double *)(param_3 + 0x38) * fVar4));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  dVar1 = *(double *)(param_3 + 0x40);
  fVar3 = (float10)FUN_004f1993(param_1,*(undefined4 *)(param_1 + 0x10));
  if ((float10)_DAT_008e8a80 <= fVar3) {
    if ((float10)dVar1 < fVar3) {
      fVar3 = (float10)dVar1;
    }
  }
  else {
    fVar3 = (float10)0;
  }
  uVar2 = FUN_004f1a11((double)fVar3);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}


