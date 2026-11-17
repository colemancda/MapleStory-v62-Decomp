/* FUN_007fc0b7 - 0x007fc0b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007fc0b7(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 uVar8;
  int local_58 [6];
  undefined1 local_40 [16];
  undefined4 local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  int local_8;
  
  iVar3 = (**(code **)(*(int *)param_1[5] + 0xc))(&local_28);
  iVar3 = *(int *)(iVar3 + 4);
  FUN_005d0fd7();
  if (param_1[0x44] != 0) {
    iVar4 = FUN_004f1a11((double)param_3);
    param_1[0x42] = iVar4;
    FUN_007f14d1(param_1 + 0x38,param_1[0x44]);
    FUN_004e98b7();
    if (0 < param_2) {
      local_8 = iVar3 + 0xc;
      do {
        param_3 = 0x1e;
        if (param_2 < 0x1f) {
          param_3 = param_2;
        }
        param_2 = param_2 - param_3;
        iVar3 = param_1[0x42];
        piVar5 = param_1 + 0x38;
        piVar6 = local_58;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        piVar5 = param_1 + 0x38;
        fVar7 = (float10)FUN_004f1993(param_1 + 0x3e,iVar3);
        local_10 = (double)fVar7;
        local_28 = (double)param_3;
        local_20 = (double)param_3 * _DAT_008e8a90;
        fVar7 = (float10)FUN_005d0e60();
        local_18 = (double)fVar7;
        if (local_10 <= _DAT_008e8a80) {
          dVar2 = local_10;
          if ((local_10 < _DAT_008e8a80) &&
             (dVar2 = (_DAT_008f23f0 / local_18) * local_20 + local_10, _DAT_008e8a80 < dVar2))
          goto LAB_007fc1d8;
        }
        else {
          dVar2 = local_10 - (_DAT_008f23f0 / local_18) * local_20;
          if (dVar2 < _DAT_008e8a80) {
LAB_007fc1d8:
            dVar2 = 0.0;
          }
        }
        iVar3 = FUN_004f1a11(dVar2);
        param_1[0x42] = iVar3;
        fVar7 = (float10)FUN_004f1993(piVar5,param_1[0x3c]);
        local_18 = (double)fVar7;
        fVar7 = (float10)FUN_004f1993(param_1 + 0x3e,param_1[0x42]);
        local_20 = (double)fVar7;
        fVar7 = (float10)FUN_004f1993(local_40,local_30);
        iVar3 = FUN_004f1a11((double)((fVar7 + (float10)local_20) * (float10)local_28 *
                                      (float10)_DAT_008f23d8 + (float10)local_18));
        param_1[0x3c] = iVar3;
        fVar7 = (float10)FUN_004f1993(piVar5);
        if ((float10)_DAT_008e8a80 <= fVar7) {
          fVar7 = (float10)FUN_004f1993(piVar5);
          iVar3 = param_1[0x44];
          if ((float10)*(double *)(iVar3 + 0x40) < fVar7) {
            if ((*(int *)(iVar3 + 0x50) != 0) &&
               (_DAT_008e8a80 < *(double *)(*(int *)(iVar3 + 0x50) + 0x30))) {
              fVar7 = (float10)FUN_004f1993(piVar5,param_1[0x3c]);
              local_28 = (double)(fVar7 - (float10)*(double *)(param_1[0x44] + 0x40));
              iVar3 = FUN_004f1a11(local_28);
              param_1[0x3c] = iVar3;
              if (*(double *)(*(int *)(param_1[0x44] + 0x50) + 0x40) < local_28) {
                iVar3 = FUN_004f1a11(*(undefined8 *)(*(int *)(param_1[0x44] + 0x50) + 0x40));
                param_1[0x3c] = iVar3;
              }
              FUN_007f14d1(piVar5,*(undefined4 *)(param_1[0x44] + 0x50));
              iVar3 = *param_1;
              uVar8 = *(undefined4 *)(param_1[0x44] + 0x50);
              goto LAB_007fc397;
            }
            uVar1 = *(undefined8 *)(iVar3 + 0x40);
            goto LAB_007fc3a3;
          }
LAB_007fc3c2:
          FUN_007f14d1(piVar5,param_1[0x44]);
          (**(code **)(*param_1 + 0x14))();
        }
        else {
          if ((*(int *)(param_1[0x44] + 0x4c) == 0) ||
             (*(double *)(*(int *)(param_1[0x44] + 0x4c) + 0x30) <= _DAT_008e8a80)) {
            uVar1 = 0;
LAB_007fc3a3:
            iVar3 = FUN_004f1a11(uVar1);
            param_1[0x3c] = iVar3;
            iVar3 = FUN_004f1a11(0);
            param_1[0x42] = iVar3;
            goto LAB_007fc3c2;
          }
          fVar7 = (float10)FUN_004f1993(piVar5,param_1[0x3c]);
          local_28 = (double)((float10)*(double *)(*(int *)(param_1[0x44] + 0x4c) + 0x40) + fVar7);
          iVar3 = FUN_004f1a11(local_28);
          param_1[0x3c] = iVar3;
          if (local_28 < _DAT_008e8a80) {
            iVar3 = FUN_004f1a11(0);
            param_1[0x3c] = iVar3;
          }
          FUN_007f14d1(piVar5,*(undefined4 *)(param_1[0x44] + 0x4c));
          iVar3 = *param_1;
          uVar8 = *(undefined4 *)(param_1[0x44] + 0x4c);
LAB_007fc397:
          (**(code **)(iVar3 + 0x10))(uVar8);
        }
      } while (0 < param_2);
    }
  }
  return;
}


