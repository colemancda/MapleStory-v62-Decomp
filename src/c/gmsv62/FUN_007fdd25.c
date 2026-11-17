/* FUN_007fdd25 - 0x007fdd25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007fdd25(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  DWORD DVar10;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar11;
  float10 fVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_00978138;
  if (extraout_ECX[5] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = extraout_ECX[5] + -4;
  }
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar1 + 0x84);
  piVar2 = (int *)FUN_00486ada();
  uVar11 = -(uint)(*piVar2 != 0) & *piVar2 - 0xcU;
  *(uint *)(unaff_EBP + -0x18) = uVar11;
  FUN_004125d9();
  iVar1 = uVar11 + 0x11c;
  *(int *)(unaff_EBP + -0x30) = iVar1;
  iVar3 = FUN_0048bb31(iVar1);
  if ((iVar3 != 0) && (iVar3 = FUN_0048bb31(extraout_ECX + 0x47), iVar3 != 0)) {
    iVar1 = FUN_004f1a11(0);
    extraout_ECX[0x1e] = iVar1;
    iVar1 = FUN_004f1a11(0);
    extraout_ECX[0x18] = iVar1;
    FUN_007fe8af(unaff_EBP + 8,unaff_EBP + -0x2c);
    iVar1 = FUN_004133b5();
    extraout_ECX[0x53] = iVar1;
LAB_007fdfd5:
    iVar1 = FUN_004133b5();
    extraout_ECX[0x56] = iVar1;
    FUN_007fe8e9();
    goto LAB_007fe89b;
  }
  iVar1 = FUN_0048bb31(iVar1);
  if (iVar1 != 0) {
    FUN_004f1993(extraout_ECX + 8);
    uVar4 = __ftol();
    iVar1 = extraout_ECX[0x12];
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    FUN_004f1993(extraout_ECX + 0xe,iVar1);
    uVar4 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
    piVar2 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x20);
    piVar8 = extraout_ECX + 8;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    }
    FUN_004f1993(extraout_ECX + 8,extraout_ECX[0xc]);
    uVar4 = __ftol();
    iVar1 = extraout_ECX[0x12];
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    FUN_004f1993(extraout_ECX + 0xe,iVar1);
    uVar4 = __ftol();
    iVar1 = extraout_ECX[0x1e];
    uVar11 = extraout_ECX[0x50];
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    fVar12 = (float10)FUN_004f1993(extraout_ECX + 0x1a,iVar1);
    *(double *)(unaff_EBP + -0x40) = (double)fVar12;
    fVar12 = (float10)FUN_004f1993(extraout_ECX + 0x14,extraout_ECX[0x18]);
    *(double *)(unaff_EBP + -0x48) = (double)fVar12;
    fVar12 = (float10)FUN_004f1993(extraout_ECX + 0xe,extraout_ECX[0x12]);
    *(double *)(unaff_EBP + -0x50) = (double)fVar12;
    fVar12 = (float10)FUN_004f1993(extraout_ECX + 8,extraout_ECX[0xc]);
    *(double *)(unaff_EBP + -0x58) = (double)fVar12;
    uVar4 = FUN_0048bb31(extraout_ECX + 0x47);
    uVar14 = (ulonglong)uVar11;
    uVar5 = __ftol(uVar11);
    uVar6 = __ftol();
    uVar13 = CONCAT44(uVar5,uVar6);
    uVar5 = __ftol(uVar6);
    uVar6 = __ftol();
    FUN_005e475b(5,extraout_ECX[0x44],0,uVar4,uVar6,uVar5,uVar13,uVar14);
    FUN_0061595d();
    FUN_0048bb31(*(undefined4 *)(unaff_EBP + -0x30));
    (**(code **)(*extraout_ECX + 0x10))();
    extraout_ECX[0x8f] = 0;
    goto LAB_007fe891;
  }
  iVar1 = FUN_0048bb31();
  if (iVar1 != 0) {
    extraout_ECX[0x8f] = extraout_ECX[0x8f] + 0x1e;
    if (199 < extraout_ECX[0x8f]) {
      FUN_007f7fd3(*(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1e34),0);
      goto LAB_007fdffe;
    }
    FUN_007fe8af(unaff_EBP + 8,unaff_EBP + -0x30);
    iVar1 = FUN_004133b5();
    extraout_ECX[0x53] = iVar1;
    goto LAB_007fdfd5;
  }
  if ((extraout_ECX[0x44] != 0) || (iVar1 = FUN_00614c6f(), iVar1 != 0)) {
    *(undefined4 *)(unaff_EBP + -0x78) = 0xffffffce;
    *(undefined4 *)(unaff_EBP + -0x74) = 0xffffffce;
    *(undefined4 *)(unaff_EBP + -0x70) = 0x32;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0x32;
    *(undefined4 *)(unaff_EBP + -0x68) = 0xfffffed4;
    *(undefined4 *)(unaff_EBP + -100) = 0xffffff38;
    *(undefined4 *)(unaff_EBP + -0x60) = 300;
    *(undefined4 *)(unaff_EBP + -0x5c) = 200;
    fVar12 = (float10)FUN_004f1993(extraout_ECX + 0xe);
    *(double *)(unaff_EBP + -0x58) = (double)fVar12;
    FUN_004f1993(extraout_ECX + 8);
    __ftol();
    __ftol();
    (*DAT_0097b54c)();
    piVar2 = (int *)(*(int *)(unaff_EBP + -0x1c) + 4);
    puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0x10))();
    iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x68,*puVar7,puVar7[1]);
    if (iVar1 == 0) {
      puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x1c) = *puVar7;
      iVar1 = (**(code **)(*piVar2 + 0x10))();
      iVar3 = *(int *)(iVar1 + 4) + -10;
      *(int *)(unaff_EBP + -0x24) = iVar3;
      iVar1 = FUN_00614c6f();
      if (iVar1 == 0) {
        FUN_00861327(*(undefined4 *)(unaff_EBP + -0x1c),iVar3,unaff_EBP + -0x24,0x7fffffff);
      }
      iVar1 = unaff_EBP + -0x78;
      uVar13 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x1c));
      (*DAT_0097b54c)();
      puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0x10))();
      iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x78,*puVar7,puVar7[1],iVar1,uVar13);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(extraout_ECX[3] + 0x40))();
        if (iVar1 < 0) {
          FUN_00878e09();
        }
        FUN_004e98b7();
        FUN_0061595d();
      }
    }
    else {
      iVar1 = FUN_00614c6f();
      if (iVar1 == 0) {
        fVar12 = (float10)FUN_004f1993(extraout_ECX + 0x38,extraout_ECX[0x3c]);
        *(double *)(unaff_EBP + -0x58) = (double)fVar12;
        uVar4 = FUN_00413367(extraout_ECX + 0x51,extraout_ECX[0x53]);
        uVar13 = _DAT_008ed880;
        *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
        iVar1 = FUN_0085f405((double)*(int *)(unaff_EBP + -0x30),*(undefined8 *)(unaff_EBP + -0x58),
                             uVar13);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        if (((iVar1 == 0) || (iVar1 = FUN_00413367(), iVar1 == 0)) ||
           (_DAT_008e8a80 < *(double *)(*(int *)(unaff_EBP + -0x18) + 0x30))) goto LAB_007fe352;
        uVar4 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
        if (_DAT_008e8a80 <=
            (double)*(int *)(unaff_EBP + -0x30) * *(double *)(*(int *)(unaff_EBP + -0x18) + 0x38))
        goto LAB_007fe352;
        iVar1 = FUN_00413367(extraout_ECX + 0x51);
        if (iVar1 < 0) {
          iVar1 = *(int *)(extraout_ECX[0x44] + 0x4c);
          *(int *)(unaff_EBP + -0x18) = iVar1;
        }
        else {
          iVar1 = *(int *)(extraout_ECX[0x44] + 0x50);
          *(int *)(unaff_EBP + -0x18) = iVar1;
        }
        if ((iVar1 != 0) && (*(double *)(iVar1 + 0x30) <= _DAT_008e8a80)) {
          uVar4 = FUN_00413367(extraout_ECX + 0x51);
          *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
          if (((double)*(int *)(unaff_EBP + -0x30) * *(double *)(*(int *)(unaff_EBP + -0x18) + 0x38)
               < _DAT_008e8a80) &&
             (((iVar1 = FUN_00413367(extraout_ECX + 0x51), iVar1 < 0 &&
               (fVar12 = (float10)FUN_004f1993(extraout_ECX + 0x38), fVar12 < (float10)_DAT_008e8a78
               )) || ((iVar1 = FUN_00413367(extraout_ECX + 0x51), 0 < iVar1 &&
                      (fVar12 = (float10)FUN_004f1993(extraout_ECX + 0x38),
                      (float10)*(double *)(extraout_ECX[0x44] + 0x40) - (float10)_DAT_008e8a78 <
                      fVar12)))))) {
            iVar1 = FUN_00413367(extraout_ECX + 0x51);
            FUN_007f7fd3(-iVar1,0);
            goto LAB_007fe352;
          }
        }
LAB_007fdffe:
        extraout_ECX[0x57] = 1;
      }
      else {
LAB_007fe352:
        iVar1 = FUN_00614c6f();
        if (iVar1 == 0) {
LAB_007fe47b:
          if (extraout_ECX[0x44] != 0) {
            *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(extraout_ECX[0x44] + 0x20);
            iVar1 = (**(code **)(*piVar2 + 0x18))();
            if (*(int *)(unaff_EBP + -0x30) != iVar1) {
              fVar12 = (float10)FUN_004f1993();
              *(double *)(unaff_EBP + -0x58) = (double)fVar12;
              iVar1 = (**(code **)(*piVar2 + 0x10))();
              if ((double)*(int *)(iVar1 + 4) < *(double *)(unaff_EBP + -0x58)) {
                iVar1 = (**(code **)(*piVar2 + 0x18))();
                fVar12 = (float10)FUN_004f1993();
                if (((float10)*(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 0x34) + iVar1 * 8) <
                     fVar12) &&
                   (fVar12 = (float10)FUN_004f1993(),
                   fVar12 < (float10)*(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 0x34) + 4 +
                                             iVar1 * 8))) {
                  if (extraout_ECX[0x97] == 0) {
                    fVar12 = (float10)FUN_004f1993(extraout_ECX + 8);
                    *(double *)(unaff_EBP + -0x58) = (double)fVar12;
                    piVar8 = (int *)(**(code **)(*piVar2 + 0x10))();
                    if ((double)*piVar8 == *(double *)(unaff_EBP + -0x58)) {
                      iVar1 = (-(uint)((*(uint *)(*(int *)(unaff_EBP + -0x1c) + 0x52c) & 1) != 0) &
                              0xfffffffe) + 1;
                    }
                    else {
                      fVar12 = (float10)FUN_004f1993(extraout_ECX + 8);
                      *(double *)(unaff_EBP + -0x58) = (double)fVar12;
                      piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
                      if (*(double *)(unaff_EBP + -0x58) <= (double)*piVar2) {
                        iVar1 = 1;
                      }
                      else {
                        iVar1 = -1;
                      }
                    }
                    FUN_007f7fd3(iVar1,0);
                  }
                  _memset(extraout_ECX + 0x97,0,8);
                  goto LAB_007fdffe;
                }
              }
            }
          }
        }
        else {
          fVar12 = (float10)FUN_004f1993();
          *(double *)(unaff_EBP + -0x58) = (double)fVar12;
          iVar1 = (**(code **)(*piVar2 + 0x10))();
          if (*(double *)(unaff_EBP + -0x58) - (double)*(int *)(iVar1 + 4) <= _DAT_008f23e8)
          goto LAB_007fe47b;
          extraout_ECX[0x57] = 1;
        }
        iVar1 = *piVar2;
        iVar3 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x18) = 0x50;
        puVar7 = (undefined4 *)(**(code **)(iVar1 + 0x10))();
        uVar4 = *puVar7;
        *(undefined4 *)(unaff_EBP + -0x24) = puVar7[1];
        uVar11 = *(uint *)(*(int *)(unaff_EBP + -0x1c) + 0x52c);
        *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
        if ((uVar11 & 1) == 0) {
LAB_007fe3dd:
          if ((extraout_ECX[0x94] == 2) || (extraout_ECX[0x94] == 4)) {
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0xa0;
          }
        }
        else {
          if ((extraout_ECX[0x94] == 1) || (extraout_ECX[0x94] == 3)) {
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + -0xa0;
          }
          if ((uVar11 & 1) == 0) goto LAB_007fe3dd;
        }
        if ((uVar11 & 1) == 0) {
          if (extraout_ECX[0x94] == 3) {
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + -0x28;
            *(undefined4 *)(unaff_EBP + -0x18) = 0x46;
          }
          if ((uVar11 & 1) != 0) goto LAB_007fe40b;
        }
        else {
LAB_007fe40b:
          if (extraout_ECX[0x94] == 4) {
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x28;
            *(undefined4 *)(unaff_EBP + -0x18) = 0x46;
          }
        }
        if (extraout_ECX[0x94] == 5) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0x3c;
        }
        FUN_004f1993(extraout_ECX + 8);
        *(double *)(unaff_EBP + -0x40) = (double)*(int *)(unaff_EBP + -0x28);
        __ftol();
        uVar4 = FUN_0087a90a();
        piVar2 = (int *)(iVar3 + 4);
        *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
        puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x1c) = *puVar7;
        if (*(int *)(unaff_EBP + -0x28) == extraout_ECX[0x90]) {
          DVar10 = extraout_ECX[0x91];
        }
        else {
          DVar10 = timeGetTime();
        }
        extraout_ECX[0x91] = DVar10;
        iVar9 = FUN_004cd670(iVar3 + 0x13c);
        iVar1 = extraout_ECX[0x95];
        *(uint *)(unaff_EBP + -0x2c) = (-(uint)(iVar9 != 0) & 0x5a) + 0x3c;
        if ((((iVar1 == 0) && (extraout_ECX[0x94] != 0)) && (extraout_ECX[0x93] == 0)) &&
           ((*(int *)(unaff_EBP + -0x1c) != extraout_ECX[0x92] &&
            (iVar1 = _rand(), iVar1 % 1000 == 0)))) {
          (**(code **)(*piVar2 + 0xc))();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          fVar12 = (float10)FUN_005d0e60();
          FUN_005d0f1a((double)(fVar12 + fVar12));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            FUN_004d2023();
          }
          DVar10 = timeGetTime();
          iVar3 = *(int *)(unaff_EBP + -0x10);
          extraout_ECX[0x95] = DVar10;
          extraout_ECX[0x57] = 1;
        }
        if (((extraout_ECX[0x95] == 0) && (extraout_ECX[0x94] != 0)) &&
           ((extraout_ECX[0x93] == 0 &&
            ((*(int *)(unaff_EBP + -0x1c) != extraout_ECX[0x92] &&
             (iVar1 = _rand(), iVar1 % 700 == 0)))))) {
          (**(code **)(*piVar2 + 0xc))();
          *(undefined4 *)(unaff_EBP + -4) = 1;
          fVar12 = (float10)FUN_005d0e60();
          FUN_005d0f1a((double)(fVar12 + fVar12));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            FUN_004d2023();
          }
          DVar10 = timeGetTime();
          iVar3 = *(int *)(unaff_EBP + -0x10);
          extraout_ECX[0x95] = DVar10;
          extraout_ECX[0x96] = 100;
        }
        if ((extraout_ECX[0x95] != 0) &&
           (DVar10 = timeGetTime(), extraout_ECX[0x95] + 700U < DVar10)) {
          (**(code **)(*piVar2 + 0xc))();
          *(undefined4 *)(unaff_EBP + -4) = 2;
          fVar12 = (float10)FUN_005d0e60();
          FUN_005d0f1a((double)(fVar12 * (float10)_DAT_008e89d0));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_004d2023();
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          extraout_ECX[0x95] = 0;
          extraout_ECX[0x96] = 0;
        }
        iVar1 = *(int *)(unaff_EBP + -0x30) + extraout_ECX[0x96];
        if (iVar1 < *(int *)(unaff_EBP + -0x18)) {
          extraout_ECX[0x97] = 0;
        }
        else if ((extraout_ECX[0x93] != 0) ||
                (((*(int *)(unaff_EBP + -0x1c) == extraout_ECX[0x92] &&
                  (*(int *)(unaff_EBP + -0x18) < iVar1)) ||
                 (*(int *)(unaff_EBP + -0x2c) + 0x14 < iVar1)))) {
          fVar12 = (float10)FUN_004f1993();
          if (fVar12 <= (float10)*(double *)(unaff_EBP + -0x40)) {
            iVar1 = 1;
          }
          else {
            iVar1 = -1;
          }
          extraout_ECX[0x97] = iVar1;
        }
        if (((((DAT_00978358 != 0) && (FUN_004b8d24(DAT_00978358 + 0x2420), extraout_ECX[0x93] != 0)
              ) && ((DVar10 = timeGetTime(), extraout_ECX[0x91] + 100U < DVar10 &&
                    ((iVar3 != 0 && (iVar1 = FUN_00614a21(), iVar1 == 0)))))) &&
            (iVar1 = FUN_004cd670(iVar3 + 0x148), iVar1 != 0)) &&
           ((iVar1 = FUN_004cd670(iVar3 + 0x124), iVar1 != 0 ||
            (iVar1 = FUN_004cd670(iVar3 + 0x118), iVar1 != 0)))) {
          extraout_ECX[0x97] = extraout_ECX[0x93];
        }
        FUN_007f7fd3(extraout_ECX[0x97],0);
        extraout_ECX[0x90] = *(int *)(unaff_EBP + -0x28);
        extraout_ECX[0x92] = *(int *)(unaff_EBP + -0x1c);
      }
    }
  }
LAB_007fe891:
  FUN_007f1845();
LAB_007fe89b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


