/* FUN_007f3054 - 0x007f3054 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007f3054(void)

{
  double dVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int extraout_ECX;
  int iVar14;
  int unaff_EBP;
  int iVar15;
  int iVar16;
  float10 fVar17;
  undefined8 uVar18;
  
  FUN_00879bb8();
  uVar8 = **(undefined4 **)(unaff_EBP + 0xc);
  iVar15 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  uVar7 = FUN_007f3fe4(iVar15,uVar8);
  iVar14 = DAT_00978138;
  uVar8 = *(undefined4 *)(iVar15 + 0x10);
  *(undefined4 *)(unaff_EBP + -0x74) = uVar7;
  *(int *)(unaff_EBP + -0x20) = iVar14;
  FUN_004f1993(iVar15,uVar8);
  uVar7 = __ftol();
  uVar8 = *(undefined4 *)(iVar15 + 0x28);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
  FUN_004f1993(iVar15 + 0x18,uVar8);
  uVar7 = __ftol();
  uVar8 = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
  FUN_004f1993(extraout_ECX + 0x20,uVar8);
  uVar7 = __ftol();
  uVar8 = *(undefined4 *)(extraout_ECX + 0x48);
  *(undefined4 *)(unaff_EBP + -0x34) = uVar7;
  *(int *)(unaff_EBP + -0x9c) = extraout_ECX + 0x38;
  FUN_004f1993(extraout_ECX + 0x38,uVar8);
  uVar8 = __ftol();
  *(undefined4 *)(unaff_EBP + -0x48) = uVar8;
  iVar9 = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x4c) = iVar9;
  *(int *)(unaff_EBP + -0x94) = iVar9;
  iVar9 = *(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x98) = iVar9;
  *(int *)(unaff_EBP + -0x6c) = iVar9;
  if ((*(int *)(unaff_EBP + -0x4c) == 0) && (iVar9 == 0)) {
    piVar2 = *(int **)(unaff_EBP + -0x10);
    **(int **)(unaff_EBP + 0xc) = **(int **)(unaff_EBP + 0xc) - *(int *)(unaff_EBP + -0x74);
    (**(code **)(*piVar2 + 0x14))();
    uVar8 = 0;
    goto LAB_007f3689;
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 1;
  *(undefined4 *)(unaff_EBP + -0x68) = 2;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined ***)(unaff_EBP + -0xb0) = &PTR_FUN_008ea328;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004cd31b(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x18),
               *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x48),
               unaff_EBP + -0xb0);
  iVar9 = *(int *)(unaff_EBP + -0xa4);
  if (iVar9 != 0) {
    do {
      dVar6 = _DAT_008e8a80;
      iVar16 = *(int *)(iVar9 + 4);
      dVar1 = *(double *)(iVar16 + 0x30);
      iVar9 = *(int *)((-(uint)(iVar9 != 0) & iVar9 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x8c) = -(uint)(iVar9 != 0) & iVar9 + 0x10U;
      if (((dVar6 < dVar1) || (*(int *)(iVar16 + 0x20) == *(int *)(iVar14 + 0x40))) ||
         (*(int *)(iVar16 + 0x20) == *(int *)(*(int *)(unaff_EBP + -0x10) + 300))) {
        iVar14 = *(int *)(iVar16 + 0xc);
        iVar15 = *(int *)(iVar16 + 0x14);
        iVar9 = *(int *)(iVar16 + 0x10);
        iVar10 = *(int *)(iVar16 + 0x18);
        *(int *)(unaff_EBP + -0x30) = iVar10;
        iVar10 = iVar10 - iVar9;
        *(int *)(unaff_EBP + -0x7c) = iVar14;
        *(int *)(unaff_EBP + -100) = iVar15;
        iVar15 = iVar15 - iVar14;
        *(int *)(unaff_EBP + -0x1c) = iVar10;
        *(int *)(unaff_EBP + -0x70) = iVar9;
        *(int *)(unaff_EBP + -0x78) = iVar10;
        iVar11 = (*(int *)(unaff_EBP + -0x18) + -iVar9) * iVar15 -
                 (*(int *)(unaff_EBP + -0x14) + -iVar14) * iVar10;
        iVar10 = *(int *)(unaff_EBP + -0x48);
        iVar14 = (-iVar9 + iVar10) * iVar15 -
                 (*(int *)(unaff_EBP + -0x34) + -iVar14) * *(int *)(unaff_EBP + -0x1c);
        *(int *)(unaff_EBP + -0x5c) = iVar15;
        if (((iVar11 < 1) && (-1 < iVar14)) && ((iVar11 != 0 || (iVar14 != 0)))) {
          iVar14 = (*(int *)(unaff_EBP + -0x70) - *(int *)(unaff_EBP + -0x18)) *
                   *(int *)(unaff_EBP + -0x94) -
                   (*(int *)(unaff_EBP + -0x7c) - *(int *)(unaff_EBP + -0x14)) *
                   *(int *)(unaff_EBP + -0x98);
          iVar15 = (*(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x18)) *
                   *(int *)(unaff_EBP + -0x94) -
                   (*(int *)(unaff_EBP + -100) - *(int *)(unaff_EBP + -0x14)) *
                   *(int *)(unaff_EBP + -0x98);
          if (((-1 < iVar14) || (-1 < iVar15)) && ((iVar14 < 1 || (iVar15 < 1)))) {
            if (iVar14 == 0) {
              iVar14 = *(int *)(iVar16 + 0x4c);
              if ((iVar14 == 0) ||
                 (iVar15 = FUN_007f393e(iVar14,iVar16,*(undefined4 *)(unaff_EBP + -0x34),iVar10),
                 iVar15 == 0)) goto LAB_007f34b9;
              *(int *)(unaff_EBP + -0x50) = iVar16;
              *(int *)(unaff_EBP + -0x60) = iVar14;
            }
            else if (iVar15 == 0) {
              iVar14 = *(int *)(iVar16 + 0x50);
              if ((iVar14 == 0) ||
                 (iVar15 = FUN_007f393e(iVar16,iVar14,*(undefined4 *)(unaff_EBP + -0x34),iVar10),
                 iVar15 == 0)) goto LAB_007f34b9;
              *(int *)(unaff_EBP + -0x50) = iVar14;
              *(int *)(unaff_EBP + -0x60) = iVar16;
            }
            else {
              *(int *)(unaff_EBP + -0x60) = iVar16;
              *(int *)(unaff_EBP + -0x50) = iVar16;
            }
            iVar14 = *(int *)(unaff_EBP + -0x78);
            iVar15 = *(int *)(unaff_EBP + -0x5c);
            iVar9 = *(int *)(unaff_EBP + -0x4c);
            iVar16 = *(int *)(unaff_EBP + -0x6c);
            uVar8 = FUN_0087a90a();
            iVar10 = *(int *)(unaff_EBP + -100);
            iVar11 = *(int *)(unaff_EBP + -0x70);
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar8;
            *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0x30) * *(int *)(unaff_EBP + -0x7c);
            uVar8 = FUN_0087a90a();
            *(undefined4 *)(unaff_EBP + -0x30) = uVar8;
            lVar5 = (longlong)*(int *)(unaff_EBP + -0x1c) * (longlong)*(int *)(unaff_EBP + -0x68);
            uVar12 = (uint)lVar5;
            uVar13 = *(int *)(unaff_EBP + -0x30) * *(int *)(unaff_EBP + -0x80);
            *(int *)(unaff_EBP + -0x38) = (int)((ulonglong)lVar5 >> 0x20);
            uVar3 = (uint)(uVar12 < uVar13);
            uVar4 = *(int *)(unaff_EBP + -0x38) - ((int)uVar13 >> 0x1f);
            if (((int)(uVar4 - uVar3) < 0) ||
               ((uVar4 == uVar3 ||
                 SBORROW4(*(int *)(unaff_EBP + -0x38),(int)uVar13 >> 0x1f) != SBORROW4(uVar4,uVar3)
                && (uVar12 == uVar13)))) {
              if (uVar12 == uVar13 && uVar4 == uVar3) {
                iVar14 = *(int *)(unaff_EBP + -0x40);
                if ((*(int *)(iVar14 + 0x14) - *(int *)(iVar14 + 0xc)) *
                    (*(int *)(*(int *)(unaff_EBP + -0x50) + 0x10) - *(int *)(iVar14 + 0x10)) -
                    (*(int *)(*(int *)(unaff_EBP + -0x50) + 0xc) - *(int *)(iVar14 + 0xc)) *
                    (*(int *)(iVar14 + 0x18) - *(int *)(iVar14 + 0x10)) < 0) {
                  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x50);
                }
                iVar14 = *(int *)(unaff_EBP + -0x44);
                iVar15 = *(int *)(unaff_EBP + -0x60);
                iVar9 = *(int *)(iVar15 + 0x18);
                iVar16 = *(int *)(iVar14 + 0x18);
                iVar10 = *(int *)(iVar15 + 0x14);
                *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar14 + 0x14);
                iVar11 = *(int *)(iVar14 + 0x10);
                iVar14 = *(int *)(iVar14 + 0xc);
                *(int *)(unaff_EBP + -0x30) = iVar11;
                if ((iVar9 - iVar11) * (*(int *)(unaff_EBP + -0x1c) - iVar14) -
                    (iVar10 - iVar14) * (iVar16 - *(int *)(unaff_EBP + -0x30)) < 0) {
                  *(int *)(unaff_EBP + -0x44) = iVar15;
                }
              }
            }
            else {
              *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x30);
              *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x50);
              *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x60);
              iVar14 = iVar15 * iVar16 - iVar14 * iVar9;
              uVar18 = __alldiv((longlong)(iVar10 * iVar11 - *(int *)(unaff_EBP + -100)) *
                                (longlong)*(int *)(unaff_EBP + -0x4c) +
                                (longlong)
                                (*(int *)(unaff_EBP + -0x48) * *(int *)(unaff_EBP + -0x14) -
                                *(int *)(unaff_EBP + -0x34) * *(int *)(unaff_EBP + -0x18)) *
                                (longlong)*(int *)(unaff_EBP + -0x5c),iVar14,iVar14 >> 0x1f);
              *(undefined8 *)(unaff_EBP + -0x2c) = uVar18;
              *(double *)(unaff_EBP + -0x88) = (double)*(longlong *)(unaff_EBP + -0x2c);
              if (*(int *)(unaff_EBP + -0x4c) == 0) {
                dVar1 = ((*(double *)(unaff_EBP + -0x88) - (double)*(int *)(unaff_EBP + -0x7c)) *
                        (double)*(int *)(unaff_EBP + -0x78)) / (double)*(int *)(unaff_EBP + -0x5c) +
                        (double)*(int *)(unaff_EBP + -0x70);
              }
              else {
                dVar1 = ((*(double *)(unaff_EBP + -0x88) - (double)*(int *)(unaff_EBP + -0x14)) *
                        (double)*(int *)(unaff_EBP + -0x6c)) / (double)*(int *)(unaff_EBP + -0x4c) +
                        (double)*(int *)(unaff_EBP + -0x18);
              }
              *(double *)(unaff_EBP + -0x58) = dVar1;
            }
          }
        }
LAB_007f34b9:
        iVar15 = *(int *)(unaff_EBP + 8);
      }
      if (*(int *)(unaff_EBP + -0x8c) == 0) goto code_r0x007f34c9;
      iVar9 = *(int *)(unaff_EBP + -0x8c);
      iVar14 = *(int *)(unaff_EBP + -0x20);
    } while( true );
  }
LAB_007f365d:
  uVar8 = 0;
  piVar2 = *(int **)(unaff_EBP + -0x10);
  **(int **)(unaff_EBP + 0xc) = **(int **)(unaff_EBP + 0xc) - *(int *)(unaff_EBP + -0x74);
  (**(code **)(*piVar2 + 0x14))();
  goto LAB_007f366e;
code_r0x007f34c9:
  if ((*(int *)(unaff_EBP + -0x40) == 0) || (*(int *)(unaff_EBP + -0x44) == 0)) goto LAB_007f365d;
  *(double *)(unaff_EBP + -0x24) =
       (double)*(int *)(unaff_EBP + -0x68) / (double)*(int *)(unaff_EBP + -0x80);
  uVar7 = __ftol();
  uVar8 = *(undefined4 *)(iVar15 + 0x40);
  *(undefined4 *)(unaff_EBP + 8) = uVar7;
  fVar17 = (float10)FUN_004f1993(iVar15 + 0x30,uVar8);
  *(double *)(unaff_EBP + -0x2c) = (double)fVar17;
  iVar9 = *(int *)(unaff_EBP + -0x10);
  fVar17 = (float10)FUN_004f1993(iVar9 + 0x50,*(undefined4 *)(iVar9 + 0x60));
  *(double *)(unaff_EBP + -0x3c) = (double)fVar17;
  fVar17 = (float10)FUN_004f1993(iVar15 + 0x30,*(undefined4 *)(iVar15 + 0x40));
  uVar8 = *(undefined4 *)(iVar15 + 0x58);
  *(double *)(unaff_EBP + -0x90) =
       (double)(((float10)*(double *)(unaff_EBP + -0x3c) - fVar17) *
                (float10)*(double *)(unaff_EBP + -0x24) + (float10)*(double *)(unaff_EBP + -0x2c));
  fVar17 = (float10)FUN_004f1993(iVar15 + 0x48,uVar8);
  uVar8 = *(undefined4 *)(iVar9 + 0x78);
  *(double *)(unaff_EBP + -0x2c) = (double)fVar17;
  fVar17 = (float10)FUN_004f1993(iVar9 + 0x68,uVar8);
  *(double *)(unaff_EBP + -0x3c) = (double)fVar17;
  fVar17 = (float10)FUN_004f1993(iVar15 + 0x48,*(undefined4 *)(iVar15 + 0x58));
  iVar15 = *(int *)(unaff_EBP + -0x10);
  uVar8 = *(undefined4 *)(iVar15 + 0x108);
  iVar14 = iVar15 + 0xe0;
  *(double *)(unaff_EBP + -0x24) =
       (double)(((float10)*(double *)(unaff_EBP + -0x3c) - fVar17) *
                (float10)*(double *)(unaff_EBP + -0x24) + (float10)*(double *)(unaff_EBP + -0x2c));
  fVar17 = (float10)FUN_004f1993(iVar15 + 0xf8,uVar8);
  iVar16 = *(int *)(unaff_EBP + -0x40);
  *(double *)(unaff_EBP + -0x3c) = (double)fVar17;
  iVar10 = *(int *)(unaff_EBP + -0x44);
  if (iVar16 == iVar10) {
    dVar1 = *(double *)(iVar16 + 0x30) * *(double *)(unaff_EBP + -0x90) +
            *(double *)(iVar16 + 0x38) * *(double *)(unaff_EBP + -0x24);
  }
  else {
    dVar1 = *(double *)(iVar16 + 0x30) * *(double *)(unaff_EBP + -0x90) +
            *(double *)(iVar16 + 0x38) * *(double *)(unaff_EBP + -0x24);
    dVar6 = *(double *)(iVar10 + 0x30) * *(double *)(unaff_EBP + -0x90) +
            *(double *)(iVar10 + 0x38) * *(double *)(unaff_EBP + -0x24);
    *(double *)(unaff_EBP + -0x2c) = dVar6;
    if ((dVar1 <= _DAT_008e8a90) || (dVar6 <= _DAT_008e8a90)) {
      if ((_DAT_008f21e0 <= dVar1) || (_DAT_008f21e0 <= *(double *)(unaff_EBP + -0x2c))) {
        if (*(int *)(iVar16 + 0x14) <= *(int *)(iVar16 + 0xc)) {
          iVar16 = iVar10;
        }
        dVar1 = 0.0;
      }
      else {
        dVar1 = *(double *)(unaff_EBP + -0x2c);
        iVar16 = iVar10;
      }
    }
  }
  uVar8 = FUN_004f1a11(dVar1);
  *(undefined4 *)(iVar15 + 0x108) = uVar8;
  iVar10 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x118);
  if ((iVar10 != 0) && (iVar10 == iVar16)) {
    uVar8 = FUN_004f1a11(*(undefined8 *)(unaff_EBP + -0x3c));
    *(undefined4 *)(iVar15 + 0x108) = uVar8;
    goto LAB_007f365d;
  }
  **(int **)(unaff_EBP + 0xc) = **(int **)(unaff_EBP + 0xc) - *(int *)(unaff_EBP + 8);
  fVar17 = (float10)FUN_0087acc3(*(undefined8 *)(iVar16 + 0x30));
  if (fVar17 <= (float10)_DAT_008e89d0) {
    dVar1 = *(double *)(iVar16 + 0x38);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar16 + 0x10);
    dVar6 = *(double *)(unaff_EBP + -0x58) - (double)*(int *)(unaff_EBP + -0x20);
  }
  else {
    dVar1 = *(double *)(iVar16 + 0x30);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar16 + 0xc);
    dVar6 = *(double *)(unaff_EBP + -0x88) - (double)*(int *)(unaff_EBP + -0x20);
  }
  uVar8 = FUN_004f1a11(dVar6 / dVar1);
  *(undefined4 *)(iVar15 + 0xf0) = uVar8;
  *(undefined8 *)(unaff_EBP + -0x2c) = *(undefined8 *)(iVar16 + 0x40);
  fVar17 = (float10)FUN_004f1993(iVar14,uVar8);
  *(double *)(unaff_EBP + -0x58) = (double)fVar17;
  if (_DAT_008e8a80 <= *(double *)(unaff_EBP + -0x58)) {
    if (*(double *)(unaff_EBP + -0x2c) < *(double *)(unaff_EBP + -0x58)) {
      fVar17 = (float10)*(double *)(unaff_EBP + -0x2c);
    }
  }
  else {
    fVar17 = (float10)0;
  }
  uVar8 = FUN_004f1a11((double)fVar17);
  *(undefined4 *)(iVar15 + 0xf0) = uVar8;
  if (_DAT_008e8a80 < *(double *)(iVar16 + 0x30)) {
    uVar7 = FUN_00413367(*(int *)(unaff_EBP + -0x10) + 0x144,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14c));
    uVar8 = *(undefined4 *)(iVar15 + 0x108);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar7;
    fVar17 = (float10)FUN_004f1993(iVar15 + 0xf8,uVar8);
    if ((float10)_DAT_008e8a80 <= (float10)*(int *)(unaff_EBP + 0xc) * fVar17) {
      fVar17 = (float10)FUN_004f1993(iVar15 + 0xf8,*(undefined4 *)(iVar15 + 0x108));
      fVar17 = fVar17 * (float10)_DAT_008e89d0;
    }
    else {
      fVar17 = (float10)0;
    }
    uVar8 = FUN_004f1a11((double)fVar17);
    *(undefined4 *)(iVar15 + 0x108) = uVar8;
    FUN_007f14d1(iVar14,iVar16);
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x10))();
  }
  else {
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_007f14d1(iVar14,iVar16);
    }
    else {
      fVar17 = (float10)FUN_004f1993(iVar9 + 0x50,*(undefined4 *)(iVar9 + 0x60));
      *(double *)(unaff_EBP + -0x58) = (double)fVar17;
      uVar8 = *(undefined4 *)(iVar9 + 0x78);
      *(undefined8 *)(unaff_EBP + -0x3c) = *(undefined8 *)(iVar16 + 0x30);
      fVar17 = (float10)FUN_004f1993(iVar9 + 0x68,uVar8);
      fVar17 = (float10)*(double *)(unaff_EBP + -0x3c) * (float10)*(double *)(unaff_EBP + -0x58) +
               (float10)*(double *)(iVar16 + 0x38) * fVar17;
      *(double *)(unaff_EBP + -0x3c) = (double)fVar17;
      *(double *)(unaff_EBP + -0x58) = (double)**(int **)(unaff_EBP + 0xc) * _DAT_008e8a90;
      uVar8 = FUN_004f1a11((double)(fVar17 * (float10)*(double *)(iVar16 + 0x30)));
      *(undefined4 *)(iVar9 + 0x60) = uVar8;
      uVar8 = FUN_004f1a11(*(double *)(iVar16 + 0x38) * *(double *)(unaff_EBP + -0x3c));
      *(undefined4 *)(iVar9 + 0x78) = uVar8;
      uVar8 = *(undefined4 *)(iVar15 + 0xf0);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar16 + 0xc);
      fVar17 = (float10)FUN_004f1993(iVar14,uVar8);
      *(double *)(unaff_EBP + -0x24) = (double)fVar17;
      uVar8 = *(undefined4 *)(iVar15 + 0x108);
      *(undefined8 *)(unaff_EBP + -0x88) = *(undefined8 *)(iVar16 + 0x30);
      fVar17 = (float10)FUN_004f1993(iVar15 + 0xf8,uVar8);
      *(double *)(unaff_EBP + -0x2c) = (double)fVar17;
      uVar8 = *(undefined4 *)(iVar9 + 0x60);
      *(undefined8 *)(unaff_EBP + -0x3c) = *(undefined8 *)(iVar16 + 0x30);
      fVar17 = (float10)FUN_004f1993(iVar9 + 0x50,uVar8);
      uVar8 = FUN_004f1a11((double)((float10)*(double *)(unaff_EBP + -0x88) *
                                    (float10)*(double *)(unaff_EBP + -0x24) +
                                    (float10)*(int *)(unaff_EBP + 0xc) +
                                   ((float10)*(double *)(unaff_EBP + -0x3c) *
                                    (float10)*(double *)(unaff_EBP + -0x2c) + fVar17) *
                                   (float10)*(double *)(unaff_EBP + -0x58) * (float10)_DAT_008e89d0)
                          );
      *(undefined4 *)(iVar9 + 0x30) = uVar8;
      uVar8 = *(undefined4 *)(iVar15 + 0xf0);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar16 + 0x10);
      fVar17 = (float10)FUN_004f1993(iVar14,uVar8);
      uVar8 = *(undefined4 *)(iVar15 + 0x108);
      *(double *)(unaff_EBP + -0x24) = (double)fVar17;
      *(undefined8 *)(unaff_EBP + -0x88) = *(undefined8 *)(iVar16 + 0x38);
      fVar17 = (float10)FUN_004f1993(iVar15 + 0xf8,uVar8);
      *(double *)(unaff_EBP + -0x2c) = (double)fVar17;
      uVar8 = *(undefined4 *)(iVar9 + 0x78);
      *(undefined8 *)(unaff_EBP + -0x3c) = *(undefined8 *)(iVar16 + 0x38);
      fVar17 = (float10)FUN_004f1993(iVar9 + 0x68,uVar8);
      uVar8 = FUN_004f1a11((double)((float10)*(double *)(unaff_EBP + -0x88) *
                                    (float10)*(double *)(unaff_EBP + -0x24) +
                                    (float10)*(int *)(unaff_EBP + 0xc) +
                                   ((float10)*(double *)(unaff_EBP + -0x3c) *
                                    (float10)*(double *)(unaff_EBP + -0x2c) + fVar17) *
                                   (float10)*(double *)(unaff_EBP + -0x58) * (float10)_DAT_008e89d0)
                          );
      *(undefined4 *)(iVar9 + 0x48) = uVar8;
    }
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x14))();
  }
  uVar8 = 1;
LAB_007f366e:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0xb0) = &PTR_FUN_008ea328;
  FUN_004cdcea();
LAB_007f3689:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


