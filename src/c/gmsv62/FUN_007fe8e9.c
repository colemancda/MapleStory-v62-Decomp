/* FUN_007fe8e9 - 0x007fe8e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007fe8e9(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_0048bb31(param_1 + 0x47,param_1[0x49]);
  if (iVar1 == 0) goto LAB_007fea1e;
  fVar3 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
  iVar2 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
  iVar2 = FUN_004f1a11((double)iVar2 * _DAT_008ea308 + (double)fVar3);
  param_1[0x12] = iVar2;
  iVar2 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
  if (iVar2 < 0) {
    fVar3 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
    if ((float10)*(int *)(iVar1 + 0x10) <= fVar3) goto LAB_007fe9c1;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar1 = FUN_0048bb31(param_1 + 0x47,param_1[0x49]);
      iVar1 = FUN_004f1a11((double)*(int *)(iVar1 + 0x10));
      param_1[0x12] = iVar1;
      goto LAB_007fea1e;
    }
    iVar1 = *(int *)(iVar1 + 0x10) + -5;
  }
  else {
LAB_007fe9c1:
    iVar2 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
    if (iVar2 < 1) goto LAB_007fea1e;
    fVar3 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
    if (fVar3 <= (float10)*(int *)(iVar1 + 0x14)) goto LAB_007fea1e;
    iVar1 = *(int *)(iVar1 + 0x14) + 1;
  }
  iVar1 = FUN_004f1a11((double)iVar1);
  param_1[0x12] = iVar1;
  (**(code **)(*param_1 + 0x10))(0,0,0);
LAB_007fea1e:
  (**(code **)(*param_1 + 0x14))();
  return;
}


