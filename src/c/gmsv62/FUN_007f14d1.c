/* FUN_007f14d1 - 0x007f14d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f14d1(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_3 + 0xc);
  fVar3 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
  uVar2 = FUN_004f1a11((double)((float10)*(double *)(param_3 + 0x30) * fVar3 + (float10)iVar1));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar1 = *(int *)(param_3 + 0x10);
  fVar3 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
  uVar2 = FUN_004f1a11((double)((float10)*(double *)(param_3 + 0x38) * fVar3 + (float10)iVar1));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  fVar3 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
  uVar2 = FUN_004f1a11((double)((float10)*(double *)(param_3 + 0x30) * fVar3));
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  fVar3 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
  uVar2 = FUN_004f1a11((double)((float10)*(double *)(param_3 + 0x38) * fVar3));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}


