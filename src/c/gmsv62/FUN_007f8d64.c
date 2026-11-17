/* FUN_007f8d64 - 0x007f8d64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007f8d64(int param_1,undefined4 *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  int local_c;
  int local_8;
  
  iVar5 = DAT_00978138;
  puVar7 = (undefined4 *)(param_1 + 0xe0);
  fVar8 = (float10)FUN_004f1993(puVar7);
  fVar9 = (float10)FUN_004f1993(param_2,param_2[4]);
  dVar1 = (double)((float10)(double)fVar8 - fVar9);
  if ((float10)(double)fVar8 - fVar9 == (float10)_DAT_008e8a80) goto LAB_007f9125;
  if (*(int *)(param_1 + 0x238) == 1) {
    iVar5 = *(int *)(param_1 + 0x110);
    if (dVar1 <= _DAT_008e8a80) {
      iVar4 = *(int *)(iVar5 + 0x4c);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x50);
    }
    if (((iVar4 != 0) && (_DAT_008e8a80 < *(double *)(iVar4 + 0x30))) ||
       (((dVar1 <= _DAT_008e8a80 ||
         (dVar2 = *(double *)(iVar5 + 0x40),
         fVar8 = (float10)FUN_004f1993(puVar7,*(undefined4 *)(param_1 + 0xf0)),
         (float10)_DAT_008ed788 <= (float10)dVar2 - fVar8)) &&
        ((_DAT_008e8a80 <= dVar1 ||
         (fVar8 = (float10)FUN_004f1993(puVar7,*(undefined4 *)(param_1 + 0xf0)),
         (float10)_DAT_008ed788 <= fVar8)))))) goto LAB_007f9125;
    dVar2 = _DAT_008ed788;
    if (_DAT_008e8a80 < dVar1) {
      dVar2 = *(double *)(*(int *)(param_1 + 0x110) + 0x40) - _DAT_008ed788;
    }
    uVar3 = FUN_004f1a11(dVar2);
    *(undefined4 *)(param_1 + 0xf0) = uVar3;
    dVar2 = *(double *)(*(int *)(param_1 + 0x110) + 0x40);
    fVar8 = (float10)FUN_004f1993(puVar7,*(undefined4 *)(param_1 + 0xf0));
    if ((float10)_DAT_008e8a80 <= fVar8) {
      if ((float10)dVar2 < fVar8) {
        fVar8 = (float10)dVar2;
      }
    }
    else {
      fVar8 = (float10)0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x238) != 2) goto LAB_007f9125;
    iVar5 = *(int *)(iVar5 + 0x34);
    iVar4 = *(int *)(*(int *)(param_1 + 0x110) + 0x20);
    local_c = *(int *)(iVar5 + iVar4 * 8);
    local_8 = *(int *)(iVar5 + 4 + iVar4 * 8);
    iVar4 = *(int *)(iVar5 + *(int *)(param_1 + 0x23c) * 8);
    iVar5 = *(int *)(iVar5 + 4 + *(int *)(param_1 + 0x23c) * 8);
    if (iVar4 <= local_c) {
      local_c = iVar4;
    }
    if (local_8 <= iVar5) {
      local_8 = iVar5;
    }
    if (0x28 < local_8 - local_c) {
      local_c = local_c + 0x14;
      local_8 = local_8 + -0x14;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0xc);
    fVar8 = (float10)FUN_004f1993(puVar7);
    iVar4 = *(int *)(param_1 + 0x110);
    fVar8 = (float10)*(double *)(iVar4 + 0x30) * fVar8 + (float10)iVar5;
    if ((fVar8 <= (float10)local_8) && ((float10)local_c <= fVar8)) {
      if ((_DAT_008e8a80 <= dVar1) ||
         (fVar8 = (float10)FUN_004f1993(), (float10)_DAT_008e8a80 <= fVar8)) {
LAB_007f8fa1:
        if (dVar1 <= _DAT_008e8a80) goto LAB_007f9125;
        fVar8 = (float10)FUN_004f1993();
        if (fVar8 <= (float10)*(double *)(*(int *)(param_1 + 0x110) + 0x40)) goto LAB_007f9125;
        iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x50);
        if (iVar5 != 0) {
          if (_DAT_008e8a80 < *(double *)(iVar5 + 0x30)) goto LAB_007f9125;
          goto LAB_007f8fef;
        }
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x4c);
        if (iVar5 != 0) {
          if (_DAT_008e8a80 < *(double *)(iVar5 + 0x30)) goto LAB_007f8fa1;
LAB_007f8fef:
          if (((_DAT_008e8a80 < *(double *)(iVar5 + 0x38) * dVar1) &&
              ((*(int **)(param_1 + 0x240) == (int *)0x0 ||
               (iVar5 = *(int *)(param_1 + 300),
               iVar4 = (**(code **)(**(int **)(param_1 + 0x240) + 0x18))(), iVar4 == iVar5)))) &&
             (((dVar1 < _DAT_008e8a80 && (local_c < *(int *)(*(int *)(param_1 + 0x110) + 0xc))) ||
              ((_DAT_008e8a80 < dVar1 && (*(int *)(*(int *)(param_1 + 0x110) + 0x14) < local_8))))))
          goto LAB_007f9125;
        }
      }
      if (*(int *)(param_1 + 0x240) == 0) {
LAB_007f909e:
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *param_2;
          param_2 = param_2 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_007f8828();
        return 0;
      }
      fVar8 = (float10)FUN_004f1993();
      iVar5 = (**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
      if (((double)*(int *)(iVar5 + 4) <= (double)fVar8) ||
         (uVar6 = FUN_004133f0(), (uVar6 & 1) == 0)) goto LAB_007f909e;
      goto LAB_007f9125;
    }
    if (fVar8 <= (float10)local_8) {
      local_8 = local_c;
    }
    fVar8 = (float10)(local_8 - *(int *)(iVar4 + 0xc)) / (float10)*(double *)(iVar4 + 0x30);
  }
  uVar3 = FUN_004f1a11((double)fVar8);
  *(undefined4 *)(param_1 + 0xf0) = uVar3;
  uVar3 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  if (*(int *)(param_1 + 0x474) != 0) {
    if (dVar1 <= _DAT_008e8a80) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    FUN_007f7fd3(uVar3,0);
  }
  FUN_007f9482();
LAB_007f9125:
  uVar3 = FUN_007f39f4(param_2,param_3);
  return uVar3;
}


