/* FUN_007f744d - 0x007f744d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_007f744d(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  float10 fVar12;
  int local_d4 [12];
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined1 local_8c [16];
  undefined4 local_7c;
  int local_74 [6];
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined4 local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  int *local_8;
  
  local_40 = (double)param_5;
  local_8 = param_1;
  iVar4 = (**(code **)(*(int *)param_1[5] + 0xc))(&local_10);
  local_44 = *(undefined4 *)(iVar4 + 4);
  FUN_005d0fd7();
  if (param_1[0x44] == 0) {
    iVar4 = FUN_004f1a11((double)param_3);
    param_1[0x18] = iVar4;
    iVar4 = FUN_004f1a11((double)param_4);
    param_1[0x1e] = iVar4;
  }
  else {
    iVar4 = FUN_004f1a11((double)param_3);
    param_1[0x42] = iVar4;
    FUN_007f14d1(param_1 + 0x38,param_1[0x44]);
  }
  FUN_004e98b7();
  local_28 = (double)param_7;
  FUN_004f1993();
  iVar4 = __ftol();
  bVar3 = false;
LAB_007f7503:
  while( true ) {
    piVar11 = local_8;
    if (param_2 < 1) {
      return;
    }
    param_3 = 0x1e;
    if (param_2 < 0x1f) {
      param_3 = param_2;
    }
    param_2 = param_2 - param_3;
    if (param_1[0x44] != 0) break;
    if (param_1[0x8e] == 3) {
      piVar10 = param_1 + 8;
      piVar11 = piVar10;
      piVar9 = local_d4;
      for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar9 = piVar9 + 1;
      }
      if (param_6 == 3) {
        FUN_004f1993(piVar10,param_1[0xc]);
        uVar6 = __ftol();
        iVar5 = FUN_0087a90a(uVar6);
        if (iVar5 < param_9 + 0x28) {
          fVar12 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
          iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
          param_1[0x18] = iVar5;
        }
        fVar12 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
        param_7 = 100;
        if ((float10)param_8 <= fVar12) {
          param_7 = -100;
        }
        dVar2 = (double)param_7;
        goto LAB_007f7e22;
      }
      if (param_6 == 4) {
LAB_007f7d90:
        FUN_004f1993(piVar10,param_1[0xc]);
        uVar6 = __ftol();
        iVar5 = FUN_0087a90a(uVar6);
        iVar7 = param_9 + 0x28;
LAB_007f7d63:
        if (iVar5 < iVar7) {
          fVar12 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
          iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
          param_1[0x18] = iVar5;
        }
      }
      else {
        if (param_6 == 5) {
LAB_007f7d43:
          FUN_004f1993(piVar10,param_1[0xc]);
          uVar6 = __ftol();
          iVar5 = FUN_0087a90a(uVar6);
          iVar7 = param_9 + 100;
          goto LAB_007f7d63;
        }
        if (param_6 == 6) goto LAB_007f7d90;
        if ((6 < param_6) && (param_6 < 9)) goto LAB_007f7d43;
        fVar12 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
        local_18 = (double)fVar12;
        local_38 = (double)param_3 * _DAT_008e8a90;
        local_20 = local_38;
        fVar12 = (float10)FUN_005d0e60();
        local_10 = (double)fVar12;
        if (local_18 <= _DAT_008e8a80) {
          dVar2 = local_18;
          if ((local_18 < _DAT_008e8a80) &&
             (dVar2 = (local_40 / local_10) * local_38 + local_18, _DAT_008e8a80 < dVar2))
          goto LAB_007f7caf;
        }
        else {
          dVar2 = local_18 - (local_40 / local_10) * local_38;
          if (dVar2 < _DAT_008e8a80) {
LAB_007f7caf:
            dVar2 = 0.0;
          }
        }
        iVar5 = FUN_004f1a11(dVar2);
        param_1[0x18] = iVar5;
        fVar12 = (float10)FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
        local_18 = (double)fVar12;
        local_38 = local_20;
        fVar12 = (float10)FUN_005d0e60();
        local_10 = (double)fVar12;
        if (local_18 <= _DAT_008e8a80) {
          dVar2 = local_18;
          if ((local_18 < _DAT_008e8a80) &&
             (dVar2 = (local_40 / local_10) * local_38 + local_18, _DAT_008e8a80 < dVar2))
          goto LAB_007f7d37;
        }
        else {
          dVar2 = local_18 - (local_40 / local_10) * local_38;
          if (dVar2 < _DAT_008e8a80) {
LAB_007f7d37:
            dVar2 = 0.0;
          }
        }
LAB_007f7e22:
        iVar5 = FUN_004f1a11(dVar2);
        param_1[0x1e] = iVar5;
      }
      fVar12 = (float10)FUN_004f1993(piVar10,param_1[0xc]);
      local_10 = (double)fVar12;
      fVar12 = (float10)FUN_004f1993(param_1 + 0x14,param_1[0x18]);
      local_20 = (double)fVar12;
      local_30 = (double)param_3;
      fVar12 = (float10)FUN_004f1993(local_a4,local_94);
      iVar5 = FUN_004f1a11((double)((fVar12 + (float10)local_20) * (float10)local_30 *
                                    (float10)_DAT_008f23d8 + (float10)local_10));
      param_1[0xc] = iVar5;
      fVar12 = (float10)FUN_004f1993(param_1 + 0xe,param_1[0x12]);
      local_10 = (double)fVar12;
      fVar12 = (float10)FUN_004f1993(param_1 + 0x1a,param_1[0x1e]);
      local_20 = (double)fVar12;
      fVar12 = (float10)FUN_004f1993(local_8c,local_7c);
      iVar5 = FUN_004f1a11((double)((fVar12 + (float10)local_20) * (float10)local_30 *
                                    (float10)_DAT_008f23d8 + (float10)local_10));
      param_1[0x12] = iVar5;
      FUN_007f3fe4(local_d4,0);
      param_1 = local_8;
    }
    (**(code **)(*param_1 + 0x14))();
  }
  piVar8 = param_1 + 0x38;
  iVar5 = local_8[0xc];
  piVar9 = piVar8;
  piVar10 = local_74;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  piVar9 = piVar11 + 8;
  FUN_004f1993(piVar9,iVar5);
  piVar10 = local_8;
  if (param_6 == 3) {
    FUN_004f1993(piVar9,piVar11[0xc]);
    uVar6 = __ftol();
    iVar5 = FUN_0087a90a(uVar6);
    if (param_9 + 0x28 <= iVar5) goto LAB_007f76cd;
    fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
    iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
    param_1[0x42] = iVar5;
    fVar12 = (float10)FUN_004f1993(param_1 + 0x3e);
    piVar10 = local_8;
    if (fVar12 == (float10)_DAT_008e8a80) goto LAB_007f7a01;
    fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
    local_20 = (double)fVar12;
    fVar12 = (float10)FUN_004f1993(piVar9,piVar11[0xc]);
    local_10 = (double)fVar12;
    fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
    local_38 = (double)fVar12;
    fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
    local_30 = (double)fVar12;
    local_18 = *(double *)(local_8[0x44] + 0x30);
    uVar6 = __ftol();
    iVar5 = FUN_0087a90a(uVar6);
    local_10 = (double)(iVar5 - param_9) * local_38;
    fVar12 = (float10)FUN_0087acc3(local_30);
    fVar12 = ((float10)local_10 / fVar12) / (float10)local_18 + (float10)local_20;
LAB_007f79e2:
    iVar5 = FUN_004f1a11((double)fVar12);
    param_1[0x3c] = iVar5;
    piVar10 = local_8;
  }
  else {
    if (param_6 != 4) {
      if (param_6 == 5) goto LAB_007f77ec;
      if (param_6 == 6) goto LAB_007f76cd;
      if (6 < param_6) {
        if (param_6 < 9) goto LAB_007f77ec;
        if (param_6 != 9) goto LAB_007f790b;
        if (!bVar3) {
          local_30 = local_28 / *(double *)(local_8[0x44] + 0x30);
          fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
          iVar5 = FUN_004f1a11((double)(fVar12 + (float10)local_30));
          param_1[0x3c] = iVar5;
          iVar5 = FUN_004f1a11(local_30);
          param_1[0x42] = iVar5;
          bVar3 = true;
          goto LAB_007f7a01;
        }
        goto LAB_007f79ec;
      }
LAB_007f790b:
      fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
      local_18 = (double)fVar12;
      local_30 = (double)param_3;
      local_10 = (double)param_3 * _DAT_008e8a90;
      fVar12 = (float10)FUN_005d0e60();
      local_38 = (double)fVar12;
      if (local_18 <= _DAT_008e8a80) {
        dVar2 = local_18;
        if ((local_18 < _DAT_008e8a80) &&
           (dVar2 = (local_40 / local_38) * local_10 + local_18, _DAT_008e8a80 < dVar2))
        goto LAB_007f798c;
      }
      else {
        dVar2 = local_18 - (local_40 / local_38) * local_10;
        if (dVar2 < _DAT_008e8a80) {
LAB_007f798c:
          dVar2 = 0.0;
        }
      }
      iVar5 = FUN_004f1a11(dVar2);
      param_1[0x42] = iVar5;
      fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
      local_10 = (double)fVar12;
      fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
      local_20 = (double)fVar12;
      fVar12 = (float10)FUN_004f1993(local_5c,local_4c);
      fVar12 = (fVar12 + (float10)local_20) * (float10)local_30 * (float10)_DAT_008f23d8 +
               (float10)local_10;
      goto LAB_007f79e2;
    }
LAB_007f76cd:
    FUN_004f1993(piVar9,piVar11[0xc]);
    uVar6 = __ftol();
    iVar5 = FUN_0087a90a(uVar6);
    if ((9 < iVar5) &&
       (fVar12 = (float10)FUN_004f1993(piVar9,piVar11[0xc]),
       (float10)_DAT_008e8a80 < (fVar12 - (float10)local_28) * (float10)iVar4)) {
      FUN_004f1993(piVar9,piVar11[0xc]);
      uVar6 = __ftol();
      iVar5 = FUN_0087a90a(uVar6);
      if (iVar5 < 0x28) {
        fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
        iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
        param_1[0x42] = iVar5;
        fVar12 = (float10)FUN_004f1993(param_1 + 0x3e);
        piVar10 = local_8;
        if (fVar12 != (float10)_DAT_008e8a80) {
          fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
          local_18 = (double)fVar12;
          fVar12 = (float10)FUN_004f1993(piVar9,piVar11[0xc]);
          local_20 = (double)fVar12;
          fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
          local_10 = (double)fVar12;
          fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
          local_38 = (double)fVar12;
          local_30 = *(double *)(local_8[0x44] + 0x30);
          uVar6 = __ftol();
          iVar5 = FUN_0087a90a(uVar6);
          local_20 = (double)iVar5 * local_10;
          fVar12 = (float10)FUN_0087acc3(local_38);
          fVar12 = ((float10)local_20 / fVar12) / (float10)local_30 + (float10)local_18;
          goto LAB_007f79e2;
        }
        goto LAB_007f7a01;
      }
LAB_007f77ec:
      FUN_004f1993(piVar9,piVar11[0xc]);
      uVar6 = __ftol();
      iVar5 = FUN_0087a90a(uVar6);
      if ((9 < iVar5) &&
         (fVar12 = (float10)FUN_004f1993(piVar9,piVar11[0xc]),
         (float10)_DAT_008e8a80 < (fVar12 - (float10)local_28) * (float10)iVar4)) {
        FUN_004f1993(piVar9,piVar11[0xc]);
        uVar6 = __ftol();
        iVar5 = FUN_0087a90a(uVar6);
        if (iVar5 < 100) {
          fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
          iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
          param_1[0x42] = iVar5;
          fVar12 = (float10)FUN_004f1993(param_1 + 0x3e);
          piVar10 = local_8;
          if (fVar12 != (float10)_DAT_008e8a80) {
            fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
            local_18 = (double)fVar12;
            fVar12 = (float10)FUN_004f1993(piVar9,piVar11[0xc]);
            local_20 = (double)fVar12;
            fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
            local_10 = (double)fVar12;
            fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
            local_38 = (double)fVar12;
            local_30 = *(double *)(local_8[0x44] + 0x30);
            uVar6 = __ftol();
            iVar5 = FUN_0087a90a(uVar6);
            local_20 = (double)iVar5 * local_10;
            fVar12 = (float10)FUN_0087acc3(local_38);
            fVar12 = ((float10)local_20 / fVar12) / (float10)local_30 + (float10)local_18;
            goto LAB_007f79e2;
          }
          goto LAB_007f7a01;
        }
        goto LAB_007f790b;
      }
    }
LAB_007f79ec:
    iVar5 = FUN_004f1a11(0);
    param_1[0x42] = iVar5;
    piVar10 = local_8;
  }
LAB_007f7a01:
  fVar12 = (float10)FUN_004f1993(piVar8);
  if ((float10)_DAT_008e8a80 <= fVar12) {
    fVar12 = (float10)FUN_004f1993(piVar8);
    if ((float10)*(double *)(piVar10[0x44] + 0x40) < fVar12) {
      iVar5 = *(int *)(piVar10[0x44] + 0x50);
      if ((iVar5 != 0) && (_DAT_008e8a80 < *(double *)(iVar5 + 0x30))) {
        fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
        local_10 = (double)(fVar12 - (float10)*(double *)(piVar10[0x44] + 0x40));
        iVar5 = FUN_004f1a11(local_10);
        param_1[0x3c] = iVar5;
        if (*(double *)(*(int *)(piVar10[0x44] + 0x50) + 0x40) < local_10) {
          iVar5 = FUN_004f1a11(*(undefined8 *)(*(int *)(piVar10[0x44] + 0x50) + 0x40));
          param_1[0x3c] = iVar5;
        }
        FUN_007f14d1(piVar8,*(undefined4 *)(piVar10[0x44] + 0x50));
        iVar5 = *piVar10;
        uVar6 = *(undefined4 *)(piVar10[0x44] + 0x50);
        goto LAB_007f7b7e;
      }
      fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
      iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
      param_1[0x42] = iVar5;
      uVar1 = *(undefined8 *)(piVar10[0x44] + 0x40);
      goto LAB_007f7bb6;
    }
  }
  else {
    if ((*(int *)(piVar10[0x44] + 0x4c) != 0) &&
       (_DAT_008e8a80 < *(double *)(*(int *)(piVar10[0x44] + 0x4c) + 0x30))) {
      fVar12 = (float10)FUN_004f1993(piVar8,param_1[0x3c]);
      local_10 = (double)((float10)*(double *)(*(int *)(piVar10[0x44] + 0x4c) + 0x40) + fVar12);
      iVar5 = FUN_004f1a11(local_10);
      param_1[0x3c] = iVar5;
      if (local_10 < _DAT_008e8a80) {
        iVar5 = FUN_004f1a11(0);
        param_1[0x3c] = iVar5;
      }
      FUN_007f14d1(piVar8,*(undefined4 *)(piVar10[0x44] + 0x4c));
      iVar5 = *piVar10;
      uVar6 = *(undefined4 *)(piVar10[0x44] + 0x4c);
LAB_007f7b7e:
      (**(code **)(iVar5 + 0x10))(uVar6);
      param_1 = local_8;
      goto LAB_007f7503;
    }
    fVar12 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
    iVar5 = FUN_004f1a11((double)(fVar12 * (float10)_DAT_008f23e0));
    param_1[0x42] = iVar5;
    uVar1 = 0;
LAB_007f7bb6:
    iVar5 = FUN_004f1a11(uVar1);
    param_1[0x3c] = iVar5;
  }
  FUN_007f14d1(piVar8,piVar10[0x44]);
  (**(code **)(*piVar10 + 0x14))();
  param_1 = local_8;
  goto LAB_007f7503;
}


