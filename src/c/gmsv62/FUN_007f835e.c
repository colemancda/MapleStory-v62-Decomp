/* FUN_007f835e - 0x007f835e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_007f835e(int param_1)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  
  uVar8 = DAT_00978138;
  uVar7 = DAT_00978138;
  if (*(int *)(param_1 + 0x110) == 0) goto LAB_007f881d;
  if (*(int *)(param_1 + 0x47c) != 0) {
    *(undefined4 *)(param_1 + 0x47c) = 0;
    iVar4 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
    if (iVar4 != 0) {
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
      iVar4 = __ftol();
      if (iVar4 == *(int *)(param_1 + 0x480)) {
        iVar4 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
        FUN_007f7fd3(-iVar4,0);
      }
    }
  }
  fVar11 = (float10)FUN_004f1993(param_1 + 0xe0,*(undefined4 *)(param_1 + 0xf0));
  iVar4 = param_1 + 0x144;
  iVar5 = FUN_00413367(iVar4,*(undefined4 *)(param_1 + 0x14c));
  iVar5 = FUN_0085f405((double)iVar5,(double)fVar11,_DAT_008ed880);
  uVar7 = 0;
  if (iVar5 != 0) {
    iVar6 = FUN_00413367();
    uVar7 = 0;
    if (iVar6 == 0) goto LAB_007f8598;
    dVar1 = *(double *)(iVar5 + 0x30);
    uVar7 = (uint)(ushort)((ushort)(dVar1 < _DAT_008e8a80) << 8 |
                           (ushort)(NAN(dVar1) || NAN(_DAT_008e8a80)) << 10 |
                          (ushort)(dVar1 == _DAT_008e8a80) << 0xe);
    if (dVar1 >= _DAT_008e8a80 && (dVar1 == _DAT_008e8a80) == 0) goto LAB_007f8598;
    iVar6 = FUN_00413367();
    dVar1 = *(double *)(iVar5 + 0x38) * (double)iVar6;
    uVar7 = (uint)(ushort)((ushort)(dVar1 < _DAT_008e8a80) << 8 |
                           (ushort)(NAN(dVar1) || NAN(_DAT_008e8a80)) << 10 |
                          (ushort)(dVar1 == _DAT_008e8a80) << 0xe);
    if (dVar1 >= _DAT_008e8a80) goto LAB_007f8598;
    iVar5 = FUN_00413367();
    uVar7 = *(uint *)(param_1 + 0x110);
    if (iVar5 < 0) {
      iVar5 = *(int *)(uVar7 + 0x4c);
    }
    else {
      iVar5 = *(int *)(uVar7 + 0x50);
    }
    if (iVar5 != 0) {
      dVar1 = *(double *)(iVar5 + 0x30);
      uVar7 = (uint)(ushort)((ushort)(dVar1 < _DAT_008e8a80) << 8 |
                             (ushort)(NAN(dVar1) || NAN(_DAT_008e8a80)) << 10 |
                            (ushort)(dVar1 == _DAT_008e8a80) << 0xe);
      if (dVar1 < _DAT_008e8a80 || (dVar1 == _DAT_008e8a80) != 0) {
        iVar6 = FUN_00413367();
        dVar1 = *(double *)(iVar5 + 0x38) * (double)iVar6;
        uVar7 = (uint)(ushort)((ushort)(dVar1 < _DAT_008e8a80) << 8 |
                               (ushort)(NAN(dVar1) || NAN(_DAT_008e8a80)) << 10 |
                              (ushort)(dVar1 == _DAT_008e8a80) << 0xe);
        if (dVar1 < _DAT_008e8a80) {
          iVar5 = FUN_00413367(iVar4);
          if ((iVar5 < 0) &&
             (fVar11 = (float10)FUN_004f1993(param_1 + 0xe0), fVar11 < (float10)_DAT_008e8a78)) {
LAB_007f856f:
            iVar4 = FUN_00413367(iVar4);
            uVar7 = FUN_007f7fd3(-iVar4,0);
            goto LAB_007f8598;
          }
          uVar7 = FUN_00413367();
          if (0 < (int)uVar7) {
            fVar11 = (float10)FUN_004f1993();
            fVar12 = (float10)*(double *)(*(int *)(param_1 + 0x110) + 0x40) - (float10)_DAT_008e8a78
            ;
            uVar7 = (uint)(ushort)((ushort)(fVar11 < fVar12) << 8 |
                                   (ushort)(NAN(fVar11) || NAN(fVar12)) << 10 |
                                  (ushort)(fVar11 == fVar12) << 0xe);
            if (fVar11 >= fVar12 && (fVar11 == fVar12) == 0) goto LAB_007f856f;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x478) < 1) goto LAB_007f8598;
LAB_007f866e:
    uVar7 = FUN_007f8828();
    goto LAB_007f881d;
  }
LAB_007f8598:
  if (*(int **)(param_1 + 0x240) == (int *)0x0) {
    if (*(int *)(param_1 + 0x478) < 1) {
      uVar7 = FUN_004133f0();
      if (uVar7 % 5 == 0) {
        uVar7 = FUN_007f1fec();
      }
      else {
        *(undefined4 *)(param_1 + 0x274) = 1;
        uVar7 = FUN_004133f0();
        *(uint *)(param_1 + 0x478) = (uVar7 % 2000 + 1000) / 0x5a;
        uVar7 = FUN_004133f0();
        *(uint *)(param_1 + 0x270) = uVar7;
        *(undefined4 *)(param_1 + 0x278) = 1;
        iVar4 = uVar7 % 3 - 1;
        *(int *)(param_1 + 0x474) = iVar4;
        FUN_007f7fd3(iVar4,0);
        uVar7 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
        *(uint *)(param_1 + 0x27c) = uVar7;
      }
    }
    goto LAB_007f881d;
  }
  if (0 < *(int *)(param_1 + 0x478)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x110) + 0x20);
    uVar7 = (**(code **)(**(int **)(param_1 + 0x240) + 0x18))();
    if (uVar2 != uVar7) {
      fVar11 = (float10)FUN_004f1993();
      dVar1 = (double)fVar11;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
      dVar3 = (double)*(int *)(iVar4 + 4);
      uVar7 = (uint)(ushort)((ushort)(dVar3 < dVar1) << 8 | (ushort)(NAN(dVar3) || NAN(dVar1)) << 10
                            | (ushort)(dVar3 == dVar1) << 0xe);
      if (dVar3 < dVar1) {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x240) + 0x18))();
        fVar11 = (float10)FUN_004f1993();
        fVar12 = (float10)*(int *)(iVar4 * 8 + *(int *)(uVar8 + 0x34));
        uVar7 = (uint)(ushort)((ushort)(fVar11 < fVar12) << 8 |
                               (ushort)(NAN(fVar11) || NAN(fVar12)) << 10 |
                              (ushort)(fVar11 == fVar12) << 0xe);
        if (fVar11 >= fVar12 && (fVar11 == fVar12) == 0) {
          fVar11 = (float10)FUN_004f1993();
          fVar12 = (float10)*(int *)(iVar4 * 8 + 4 + *(int *)(uVar8 + 0x34));
          uVar7 = (uint)(ushort)((ushort)(fVar11 < fVar12) << 8 |
                                 (ushort)(NAN(fVar11) || NAN(fVar12)) << 10 |
                                (ushort)(fVar11 == fVar12) << 0xe);
          if (fVar11 < fVar12) {
            uVar8 = FUN_004133f0();
            uVar7 = uVar8 / 3;
            if (uVar8 % 3 == 0) {
              _memset((void *)(param_1 + 0x474),0,0x14);
              goto LAB_007f866e;
            }
          }
        }
      }
    }
    if (0 < *(int *)(param_1 + 0x478)) goto LAB_007f881d;
  }
  uVar7 = FUN_004133f0();
  *(uint *)(param_1 + 0x478) = (uVar7 % 400 + 800) / 0x5a;
  if (*(int *)(param_1 + 0x474) == 0) {
LAB_007f8739:
    fVar11 = (float10)FUN_004f1993();
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
    if ((double)fVar11 <= (double)*piVar9) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x474) = uVar10;
  }
  else {
    iVar4 = param_1 + 0x20;
    FUN_004f1993(iVar4);
    (**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
    __ftol();
    iVar5 = FUN_0087a90a();
    if (99 < iVar5) goto LAB_007f8739;
    fVar11 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
    if (fVar11 == (float10)*(int *)(param_1 + 0x130)) {
      *(undefined4 *)(param_1 + 0x474) = 1;
    }
    else {
      fVar11 = (float10)FUN_004f1993(iVar4,*(undefined4 *)(param_1 + 0x30));
      if (fVar11 == (float10)*(int *)(param_1 + 0x138)) {
        *(undefined4 *)(param_1 + 0x474) = 0xffffffff;
      }
    }
  }
  uVar7 = FUN_007f7fd3(*(undefined4 *)(param_1 + 0x474),0);
LAB_007f881d:
  *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + -1;
  return uVar7;
}


