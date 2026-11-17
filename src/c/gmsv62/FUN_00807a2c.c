/* FUN_00807a2c - 0x00807a2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00807a2c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x57] != 0) {
    FUN_007f1fec();
    uVar1 = FUN_00413367(param_1 + 0x51,param_1[0x53]);
    *(undefined4 *)(DAT_00979114 + 0x1e34) = uVar1;
  }
  if (param_1[0x5e] != 0) {
    FUN_007f200a();
  }
  iVar2 = FUN_0048bb31(param_1 + 0x47,param_1[0x49]);
  if (iVar2 == 0) {
    return;
  }
  fVar4 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
  iVar3 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
  iVar3 = FUN_004f1a11((double)iVar3 * _DAT_008ea308 + (double)fVar4);
  param_1[0x12] = iVar3;
  iVar3 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
  if (iVar3 < 0) {
    fVar4 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
    if (fVar4 < (float10)*(int *)(iVar2 + 0x10)) {
      if (*(int *)(iVar2 + 8) == 0) {
        iVar2 = FUN_0048bb31(param_1 + 0x47,param_1[0x49]);
        iVar2 = FUN_004f1a11((double)*(int *)(iVar2 + 0x10));
        param_1[0x12] = iVar2;
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x10) + -5;
      goto LAB_00807b83;
    }
  }
  iVar3 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
  if (iVar3 < 1) {
    return;
  }
  fVar4 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
  if (fVar4 <= (float10)*(int *)(iVar2 + 0x14)) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x14) + 1;
LAB_00807b83:
  iVar2 = FUN_004f1a11((double)iVar2);
  param_1[0x12] = iVar2;
  (**(code **)(*param_1 + 0x10))(0,0,0);
  return;
}


