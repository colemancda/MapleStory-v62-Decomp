/* FUN_007f2a1c - 0x007f2a1c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007f2a1c(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  double local_4c;
  double local_14;
  double local_c;
  
  fVar11 = (float10)FUN_005d0e60();
  dVar1 = (double)fVar11;
  fVar11 = (float10)FUN_004f1993(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60));
  local_14 = (double)fVar11;
  fVar11 = (float10)FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  local_c = (double)fVar11;
  iVar7 = *(int *)(DAT_00978138 + 8);
  fVar11 = (float10)FUN_005d0e60();
  iVar8 = *(int *)(DAT_00978138 + 8);
  dVar2 = (double)(fVar11 * (float10)*(double *)(iVar7 + 0x28));
  fVar11 = (float10)FUN_005d0e60();
  dVar3 = (double)(fVar11 * (float10)*(double *)(iVar8 + 0x30));
  dVar6 = (double)param_2 * _DAT_008e8a90;
  iVar7 = FUN_007bc4b2();
  if (iVar7 == 0) {
    fVar11 = (float10)FUN_005d0e60();
    fVar11 = (float10)FUN_0087acc3((double)fVar11);
    dVar3 = (double)fVar11;
    iVar7 = FUN_00614c6f();
    if (iVar7 == 0) {
      fVar11 = (float10)FUN_005d0e60();
      fVar13 = (float10)FUN_005d0e60();
      fVar13 = fVar13 * (float10)*(double *)(*(int *)(DAT_00978138 + 8) + 0x58);
    }
    else {
      fVar11 = (float10)FUN_005d0e60();
      fVar13 = (float10)FUN_005d0e60();
      fVar13 = fVar13 * (float10)*(double *)(*(int *)(DAT_00978138 + 8) + 0x48);
    }
    local_4c = (double)fVar11;
    dVar14 = (double)(fVar13 * (float10)dVar3);
    iVar7 = FUN_00614c6f();
    if (iVar7 == 0) {
      dVar4 = *(double *)(*(int *)(DAT_00978138 + 8) + 0x50);
    }
    else {
      dVar4 = *(double *)(*(int *)(DAT_00978138 + 8) + 0x40);
    }
    iVar7 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
    if (_DAT_008e8a80 <= dVar14) {
      if (local_14 <= dVar14) {
        dVar5 = -dVar14;
        if ((local_14 < dVar5) && (local_14 = (dVar2 / dVar1) * dVar6 + local_14, dVar5 < local_14))
        goto LAB_007f2dda;
      }
      else {
        local_14 = local_14 - (dVar2 / dVar1) * dVar6;
        dVar5 = dVar14;
        if (local_14 < dVar14) {
LAB_007f2dda:
          local_14 = dVar5;
        }
      }
    }
    iVar8 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
    if (iVar8 == 0) {
      if (local_14 <= _DAT_008e8a80) {
        if ((local_14 < _DAT_008e8a80) &&
           (local_14 = (dVar2 / dVar1) * dVar6 + local_14, _DAT_008e8a80 < local_14))
        goto LAB_007f2e6f;
      }
      else {
        local_14 = local_14 - (dVar2 / dVar1) * dVar6;
        if (local_14 < _DAT_008e8a80) {
LAB_007f2e6f:
          local_14 = 0.0;
        }
      }
    }
    else {
      FUN_007f29ab(&local_14,(double)iVar7 * dVar4 * local_4c * dVar3,dVar1,dVar14,dVar6);
    }
    if (_DAT_008e8a80 <= dVar14) {
      if (local_c <= dVar14) {
        dVar5 = -dVar14;
        if ((local_c < dVar5) && (local_c = (dVar2 / dVar1) * dVar6 + local_c, dVar5 < local_c))
        goto LAB_007f2ec7;
      }
      else {
        local_c = local_c - (dVar2 / dVar1) * dVar6;
        dVar5 = dVar14;
        if (local_c < dVar14) {
LAB_007f2ec7:
          local_c = dVar5;
        }
      }
    }
    local_4c = ((dVar4 / dVar1) / dVar3) * local_4c;
    iVar7 = FUN_00413367(param_1 + 0x150,*(undefined4 *)(param_1 + 0x158));
    if (iVar7 < 0) {
      dVar14 = dVar14 * _DAT_008ed700;
      if (dVar14 < local_c) {
LAB_007f2f65:
        local_c = local_c - local_4c * dVar6;
        if (local_c < dVar14) goto LAB_007f2fad;
      }
      else if (local_c < dVar14) goto LAB_007f2f3d;
    }
    else {
      iVar7 = FUN_00413367(param_1 + 0x150,*(undefined4 *)(param_1 + 0x158));
      if (iVar7 < 1) {
        local_4c = local_4c * dVar1;
        pdVar9 = &local_c;
        goto LAB_007f2fa0;
      }
      dVar14 = dVar14 * _DAT_008ed708;
      if (local_c <= dVar14) {
        if (dVar14 <= local_c) goto LAB_007f2fab;
        goto LAB_007f2f65;
      }
LAB_007f2f3d:
      local_c = local_4c * dVar6 * _DAT_008e89d0 + local_c;
      if (dVar14 < local_c) goto LAB_007f2fad;
    }
LAB_007f2fab:
    dVar14 = local_c;
  }
  else {
    iVar7 = *(int *)(DAT_00978138 + 8);
    fVar11 = (float10)FUN_005d0e60();
    fVar11 = fVar11 * (float10)*(double *)(iVar7 + 0x68);
    pdVar9 = *(double **)(DAT_00978138 + 8);
    dVar14 = (pdVar9[1] / *pdVar9) * dVar3;
    if (*(int *)(param_1 + 0x16c) == 0) {
      if ((_DAT_008e8a80 < local_c) && ((float10)_DAT_008e8a80 <= fVar11)) {
        if ((float10)local_c <= fVar11) {
          fVar13 = -fVar11;
          if (((float10)local_c < fVar13) &&
             (fVar12 = ((float10)dVar3 / (float10)dVar1) * (float10)dVar6 + (float10)local_c,
             local_c = (double)fVar12, fVar13 < fVar12)) {
            local_c = (double)fVar13;
          }
        }
        else {
          fVar13 = (float10)local_c - ((float10)dVar3 / (float10)dVar1) * (float10)dVar6;
          local_c = (double)fVar13;
          if (fVar13 < fVar11) {
            local_c = (double)fVar11;
          }
        }
      }
      pdVar9 = *(double **)(DAT_00978138 + 8);
LAB_007f2b70:
      fVar13 = (float10)FUN_005d0e60(dVar1,(double)fVar11,dVar6);
      FUN_007f29ab(&local_c,(double)(fVar13 * (float10)pdVar9[0xc] * (float10)dVar1));
    }
    else {
      if (local_c <= _DAT_008e8a80) goto LAB_007f2b70;
      local_c = (double)*(int *)(param_1 + 0x174) * pdVar9[0xe] * _DAT_008e8a90;
    }
    iVar7 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
    if (iVar7 != 0) {
      iVar7 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
      pdVar9 = &local_14;
      local_4c = (double)iVar7 * dVar3 + (double)iVar7 * dVar3;
LAB_007f2fa0:
      FUN_007f29ab(pdVar9,local_4c,dVar1,dVar14,dVar6);
      dVar14 = local_c;
      goto LAB_007f2fad;
    }
    dVar14 = local_c;
    if (local_c < (double)fVar11) {
      dVar3 = dVar3 * *(double *)(*(int *)(DAT_00978138 + 8) + 0x38);
      if (_DAT_008e8a80 < local_14) goto LAB_007f2c47;
joined_r0x007f2c5e:
      if (_DAT_008e8a80 <= local_14) goto LAB_007f2fab;
      local_14 = (dVar3 / dVar1) * dVar6 + local_14;
      if (local_14 <= _DAT_008e8a80) goto LAB_007f2fad;
    }
    else {
      if (local_14 <= _DAT_008e8a80) goto joined_r0x007f2c5e;
LAB_007f2c47:
      local_14 = local_14 - (dVar3 / dVar1) * dVar6;
      if (_DAT_008e8a80 <= local_14) goto LAB_007f2fad;
    }
    local_14 = 0.0;
  }
LAB_007f2fad:
  local_c = dVar14;
  fVar11 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
  fVar13 = (float10)FUN_004f1993(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60));
  uVar10 = FUN_004f1a11((double)((fVar13 + (float10)local_14) * (float10)dVar6 *
                                 (float10)_DAT_008e89d0 + (float10)(double)fVar11));
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  fVar11 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  fVar13 = (float10)FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  uVar10 = FUN_004f1a11((double)((fVar13 + (float10)local_c) * (float10)dVar6 *
                                 (float10)_DAT_008e89d0 + (float10)(double)fVar11));
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  uVar10 = FUN_004f1a11(local_14);
  *(undefined4 *)(param_1 + 0x60) = uVar10;
  uVar10 = FUN_004f1a11(local_c);
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  return;
}


