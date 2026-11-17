/* FUN_007f200a - 0x007f200a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007f200a(int *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  
  dVar1 = *(double *)(param_1 + 0x60);
  dVar2 = *(double *)(param_1 + 0x62);
  param_1[0x5e] = 0;
  if (param_1[0x44] == 0) {
    iVar4 = FUN_0048bb31(param_1 + 0x47,param_1[0x49]);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x10))(0,0,0);
    }
  }
  else {
    FUN_007f3ee6();
  }
  if (_DAT_008e8a80 <= dVar1) {
LAB_007f2099:
    if (_DAT_008e8a80 < dVar1) {
      fVar5 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
      if (fVar5 < (float10)dVar1) {
        fVar5 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
        fVar5 = fVar5 + (float10)dVar1;
        bVar3 = (float10)dVar1 < fVar5;
        goto LAB_007f20d3;
      }
    }
  }
  else {
    fVar5 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
    if (fVar5 <= (float10)dVar1) goto LAB_007f2099;
    fVar5 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
    fVar5 = fVar5 + (float10)dVar1;
    bVar3 = fVar5 < (float10)dVar1;
LAB_007f20d3:
    if (bVar3) {
      fVar5 = (float10)dVar1;
    }
    iVar4 = FUN_004f1a11((double)fVar5);
    param_1[0x18] = iVar4;
  }
  if (_DAT_008e8a80 <= dVar2) {
LAB_007f2127:
    if (dVar2 <= _DAT_008e8a80) goto LAB_007f217b;
    fVar5 = (float10)FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
    if ((float10)dVar2 <= fVar5) goto LAB_007f217b;
    fVar5 = (float10)FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
    fVar5 = fVar5 + (float10)dVar2;
    bVar3 = (float10)dVar2 < fVar5;
  }
  else {
    fVar5 = (float10)FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
    if (fVar5 <= (float10)dVar2) goto LAB_007f2127;
    fVar5 = (float10)FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
    fVar5 = fVar5 + (float10)dVar2;
    bVar3 = fVar5 < (float10)dVar2;
  }
  if (bVar3) {
    fVar5 = (float10)dVar2;
  }
  iVar4 = FUN_004f1a11((double)fVar5);
  param_1[0x1e] = iVar4;
LAB_007f217b:
  FUN_004f1993(param_1 + 0x14,param_1[0x18]);
  iVar4 = __ftol();
  iVar4 = FUN_004f1a11((double)iVar4);
  param_1[0x18] = iVar4;
  FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
  iVar4 = __ftol();
  iVar4 = FUN_004f1a11((double)iVar4);
  param_1[0x1e] = iVar4;
  FUN_004e98b7();
  return;
}


