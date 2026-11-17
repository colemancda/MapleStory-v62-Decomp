/* FUN_007f21d2 - 0x007f21d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f21d2(void)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar6 = *(int *)(*(int *)(extraout_ECX + 0x110) + 0x28);
  fVar7 = (float10)FUN_005d0e60();
  *(double *)(unaff_EBP + -0x4c) = (double)fVar7;
  fVar7 = (float10)FUN_0087acc3(*(undefined8 *)(*(int *)(extraout_ECX + 0x110) + 0x38));
  *(double *)(unaff_EBP + -0x68) = (double)fVar7;
  *(double *)(unaff_EBP + -0x70) = (double)(fVar7 * fVar7);
  FUN_0087acc3();
  if (_DAT_008e8a80 <= *(double *)(*(int *)(extraout_ECX + 0x110) + 0x38)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  uVar4 = *(undefined4 *)(extraout_ECX + 0x108);
  *(int *)(unaff_EBP + -0x34) = extraout_ECX + 0xe0;
  fVar7 = (float10)FUN_004f1993(extraout_ECX + 0xf8,uVar4);
  *(double *)(unaff_EBP + -0x3c) = (double)fVar7;
  *(int *)(unaff_EBP + -0x2c) = iVar6 + 0x18;
  fVar7 = (float10)FUN_005d0e60();
  if ((fVar7 == (float10)_DAT_008e8a78) &&
     (fVar7 = (float10)FUN_005d0e60(), fVar7 == (float10)_DAT_008e8a80)) {
    iVar6 = *(int *)(extraout_ECX + 0x198);
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
    *(int *)(unaff_EBP + -0x1c) = iVar6 + 0x18;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    uVar4 = FUN_007f44ed(0x3ff0000000000000);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  pdVar2 = *(double **)(DAT_00978138 + 8);
  fVar7 = (float10)FUN_005d0e60();
  *(double *)(unaff_EBP + -0x78) = (double)fVar7;
  fVar7 = (float10)FUN_005d0e60();
  *(double *)(unaff_EBP + -0x80) = (double)fVar7;
  fVar7 = (float10)FUN_005d0e60();
  dVar9 = *pdVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(double *)(unaff_EBP + -0x78) =
       (double)(fVar7 * (float10)dVar9 * (float10)*(double *)(unaff_EBP + -0x80) *
               (float10)*(double *)(unaff_EBP + -0x78));
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
     *(int *)(unaff_EBP + -0x58) != 0)) {
    FUN_00402b41();
  }
  iVar6 = extraout_ECX + 0x144;
  uVar4 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  *(double *)(unaff_EBP + -0x5c) =
       (double)*(int *)(unaff_EBP + -0x1c) * *(double *)(unaff_EBP + -0x78);
  iVar5 = FUN_00614c6f();
  if (iVar5 != 0) {
    *(double *)(unaff_EBP + -0x5c) =
         *(double *)(unaff_EBP + -0x5c) * *(double *)(*(int *)(DAT_00978138 + 8) + 0x88);
  }
  fVar7 = (float10)FUN_005d0e60();
  *(double *)(unaff_EBP + -0x44) = (double)fVar7;
  if (fVar7 == (float10)_DAT_008e8a80) {
    uVar4 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
    dVar9 = *(double *)(unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    if ((double)*(int *)(unaff_EBP + -0x1c) * dVar9 <= _DAT_008e8a80) {
      dVar9 = 0.0;
    }
  }
  else {
    iVar5 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
    if (iVar5 == 0) {
      dVar9 = *(double *)(unaff_EBP + -0x44) * *(double *)(unaff_EBP + -0x78);
    }
    else {
      uVar4 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      if ((double)*(int *)(unaff_EBP + -0x1c) * *(double *)(unaff_EBP + -0x44) <= _DAT_008e8a80) {
        __ftol();
        uVar4 = FUN_0087a90a();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        dVar9 = _DAT_008e8d80 / (double)*(int *)(unaff_EBP + -0x1c);
      }
      else {
        __ftol();
        iVar5 = FUN_0087a90a();
        *(int *)(unaff_EBP + -0x1c) = iVar5 << 1;
        dVar9 = (double)*(int *)(unaff_EBP + -0x1c);
      }
      dVar9 = dVar9 * *(double *)(unaff_EBP + -0x5c);
    }
  }
  if (*(int *)(unaff_EBP + -0x18) < 1) {
    dVar1 = *(double *)(unaff_EBP + -0x70) + _DAT_008e8a78;
  }
  else {
    dVar1 = 1.0 - *(double *)(unaff_EBP + -0x70);
  }
  *(double *)(unaff_EBP + -0x5c) = dVar1 * dVar9;
  fVar7 = (float10)FUN_007f1f71();
  *(double *)(unaff_EBP + -0x54) = (double)fVar7;
  iVar5 = FUN_00614c6f();
  if (iVar5 != 0) {
    *(double *)(unaff_EBP + -0x54) =
         *(double *)(unaff_EBP + -0x54) * *(double *)(*(int *)(DAT_00978138 + 8) + 0x88);
  }
  if (*(double *)(unaff_EBP + -0x44) != _DAT_008e8a80) {
    iVar5 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
    if (iVar5 == 0) {
      __ftol();
      uVar4 = FUN_0087a90a();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      dVar9 = (double)*(int *)(unaff_EBP + -0x1c);
    }
    else {
      uVar4 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      if ((double)*(int *)(unaff_EBP + -0x1c) * *(double *)(unaff_EBP + -0x44) <= _DAT_008e8a80) {
        __ftol();
        uVar4 = FUN_0087a90a();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        dVar9 = _DAT_008e8d80 / (double)*(int *)(unaff_EBP + -0x1c);
      }
      else {
        __ftol();
        iVar5 = FUN_0087a90a();
        *(int *)(unaff_EBP + -0x1c) = iVar5 << 1;
        dVar9 = (double)*(int *)(unaff_EBP + -0x1c);
      }
    }
    *(double *)(unaff_EBP + -0x54) = dVar9 * *(double *)(unaff_EBP + -0x54);
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    FUN_007f44ed(0x3ff0000000000000);
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
  }
  fVar7 = (float10)FUN_005d0e60();
  *(double *)(unaff_EBP + -0x78) = (double)fVar7;
  fVar7 = (float10)FUN_005d0e60();
  *(double *)(unaff_EBP + -0x80) = (double)fVar7;
  fVar7 = (float10)FUN_005d0e60();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(double *)(unaff_EBP + -0x28) =
       (double)(fVar7 * (float10)*(double *)(unaff_EBP + -0x80) *
               (float10)*(double *)(unaff_EBP + -0x78));
  if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) && (*(int *)(unaff_EBP + -0x84) != 0)) {
    FUN_00402b41();
  }
  iVar5 = *(int *)(DAT_00978138 + 8);
  if (*(double *)(iVar5 + 0x78) < *(double *)(unaff_EBP + -0x28)) {
    *(undefined8 *)(unaff_EBP + -0x28) = *(undefined8 *)(iVar5 + 0x78);
  }
  if (*(double *)(unaff_EBP + -0x28) < *(double *)(iVar5 + 0x80)) {
    *(double *)(unaff_EBP + -0x28) = *(double *)(iVar5 + 0x80);
  }
  if (*(double *)(unaff_EBP + -0x28) < _DAT_008e8a78) {
    *(double *)(unaff_EBP + -0x28) = *(double *)(unaff_EBP + -0x28) * _DAT_008e89d0;
  }
  *(double *)(unaff_EBP + -0x14) = *(double *)(unaff_EBP + -0x28) * *(double *)(iVar5 + 0x10);
  dVar9 = _DAT_008e8a80;
  if (*(double *)(unaff_EBP + -0x28) == _DAT_008e8a80) {
    dVar1 = *(double *)(iVar5 + 0x10) * _DAT_008e8d80;
  }
  else {
    dVar1 = *(double *)(unaff_EBP + -0x14);
  }
  *(double *)(unaff_EBP + -0x20) = dVar1;
  *(double *)(unaff_EBP + -0x30) = (double)*(int *)(unaff_EBP + 8) * _DAT_008e8a90;
  if (*(double *)(unaff_EBP + -0x68) == dVar9) {
    if (dVar9 <= *(double *)(unaff_EBP + -0x54)) {
      dVar9 = *(double *)(unaff_EBP + -0x54);
      if (*(double *)(unaff_EBP + -0x3c) <= dVar9) {
        dVar9 = -dVar9;
        if ((*(double *)(unaff_EBP + -0x3c) < dVar9) &&
           (dVar1 = (*(double *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x4c)) *
                    *(double *)(unaff_EBP + -0x30) + *(double *)(unaff_EBP + -0x3c),
           *(double *)(unaff_EBP + -0x3c) = dVar1, dVar9 < dVar1)) goto LAB_007f2652;
      }
      else {
        dVar1 = *(double *)(unaff_EBP + -0x3c) -
                (*(double *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x4c)) *
                *(double *)(unaff_EBP + -0x30);
        *(double *)(unaff_EBP + -0x3c) = dVar1;
        if (dVar1 < dVar9) {
LAB_007f2652:
          *(double *)(unaff_EBP + -0x3c) = dVar9;
        }
      }
    }
    iVar6 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
    if ((iVar6 == 0) && (*(double *)(unaff_EBP + -0x44) == _DAT_008e8a80)) {
LAB_007f267b:
      dVar9 = _DAT_008e8a80;
      if (*(double *)(unaff_EBP + -0x3c) <= _DAT_008e8a80) {
        if ((_DAT_008e8a80 <= *(double *)(unaff_EBP + -0x3c)) ||
           (dVar1 = (*(double *)(unaff_EBP + -0x14) / *(double *)(unaff_EBP + -0x4c)) *
                    *(double *)(unaff_EBP + -0x30) + *(double *)(unaff_EBP + -0x3c),
           *(double *)(unaff_EBP + -0x3c) = dVar1, dVar1 <= dVar9)) goto LAB_007f2949;
      }
      else {
        dVar1 = *(double *)(unaff_EBP + -0x3c) -
                (*(double *)(unaff_EBP + -0x14) / *(double *)(unaff_EBP + -0x4c)) *
                *(double *)(unaff_EBP + -0x30);
        *(double *)(unaff_EBP + -0x3c) = dVar1;
        if (dVar9 <= dVar1) goto LAB_007f2949;
      }
      *(undefined8 *)(unaff_EBP + -0x3c) = 0;
      goto LAB_007f2949;
    }
    uVar10 = *(undefined8 *)(unaff_EBP + -0x30);
    dVar9 = *(double *)(unaff_EBP + -0x54);
LAB_007f281d:
    uVar8 = *(undefined8 *)(unaff_EBP + -0x4c);
    dVar1 = *(double *)(unaff_EBP + -0x5c);
  }
  else {
    *(double *)(unaff_EBP + -0x78) = *(double *)(unaff_EBP + -0x54);
    if (*(double *)(unaff_EBP + -0x54) < dVar9) {
      *(undefined8 *)(unaff_EBP + -0x78) = 0;
    }
    dVar1 = (*(double *)(unaff_EBP + -0x70) + _DAT_008e8a78) * *(double *)(unaff_EBP + -0x54);
    *(double *)(unaff_EBP + -0x70) = dVar1;
    if (dVar1 < dVar9) {
      dVar1 = 0.0;
      *(undefined8 *)(unaff_EBP + -0x70) = 0;
    }
    *(double *)(unaff_EBP + -0x54) = (double)*(int *)(unaff_EBP + -0x18);
    if (dVar9 < (double)*(int *)(unaff_EBP + -0x18) * *(double *)(unaff_EBP + -0x3c)) {
      dVar1 = *(double *)(unaff_EBP + -0x78);
    }
    *(double *)(unaff_EBP + -0x80) = dVar1;
    if (dVar9 <= dVar1) {
      dVar9 = *(double *)(unaff_EBP + -0x80);
      if (*(double *)(unaff_EBP + -0x3c) <= dVar9) {
        dVar9 = -dVar9;
        if ((*(double *)(unaff_EBP + -0x3c) < dVar9) &&
           (dVar1 = (*(double *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x4c)) *
                    *(double *)(unaff_EBP + -0x30) + *(double *)(unaff_EBP + -0x3c),
           *(double *)(unaff_EBP + -0x3c) = dVar1, dVar9 < dVar1)) goto LAB_007f2753;
      }
      else {
        dVar1 = *(double *)(unaff_EBP + -0x3c) -
                (*(double *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x4c)) *
                *(double *)(unaff_EBP + -0x30);
        *(double *)(unaff_EBP + -0x3c) = dVar1;
        if (dVar1 < dVar9) {
LAB_007f2753:
          *(double *)(unaff_EBP + -0x3c) = dVar9;
        }
      }
    }
    fVar7 = (float10)FUN_005d0e60();
    if ((float10)*(double *)(unaff_EBP + -0x68) <= fVar7) {
      if (*(double *)(unaff_EBP + -0x28) == _DAT_008e8a80) {
        *(double *)(unaff_EBP + -0x5c) =
             *(double *)(unaff_EBP + -0x5c) -
             *(double *)(unaff_EBP + -0x68) * *(double *)(*(int *)(DAT_00978138 + 8) + 0x18) *
             *(double *)(unaff_EBP + -0x54);
      }
      iVar6 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
      if (((iVar6 == 0) && (*(double *)(unaff_EBP + -0x28) != _DAT_008e8a80)) &&
         (*(double *)(unaff_EBP + -0x44) == _DAT_008e8a80)) goto LAB_007f267b;
      if (*(double *)(unaff_EBP + -0x54) * *(double *)(unaff_EBP + -0x5c) <= _DAT_008e8a80) {
        dVar9 = *(double *)(unaff_EBP + -0x70);
      }
      else {
        dVar9 = *(double *)(unaff_EBP + -0x78);
      }
      uVar10 = *(undefined8 *)(unaff_EBP + -0x30);
      goto LAB_007f281d;
    }
    iVar5 = *(int *)(DAT_00978138 + 8);
    dVar9 = *(double *)(iVar5 + 0x18);
    uVar4 = *(undefined4 *)(extraout_ECX + 0x14c);
    *(int *)(unaff_EBP + 8) = -*(int *)(unaff_EBP + -0x18);
    *(double *)(unaff_EBP + -0x78) =
         (double)*(int *)(unaff_EBP + 8) * *(double *)(unaff_EBP + -0x68) * dVar9;
    *(double *)(unaff_EBP + -0x68) = *(double *)(unaff_EBP + -0x68) * *(double *)(iVar5 + 0x20);
    iVar5 = FUN_00413367(iVar6,uVar4);
    if (iVar5 * *(int *)(unaff_EBP + -0x18) < 1) {
      iVar6 = FUN_00413367(iVar6,*(undefined4 *)(extraout_ECX + 0x14c));
      if ((iVar6 == 0) && (*(double *)(unaff_EBP + -0x44) == _DAT_008e8a80)) {
        dVar1 = *(double *)(unaff_EBP + -0x78);
        dVar9 = *(double *)(unaff_EBP + -0x68);
      }
      else {
        dVar1 = *(double *)(unaff_EBP + -0x78) + *(double *)(unaff_EBP + -0x5c);
        dVar9 = *(double *)(unaff_EBP + -0x68) + *(double *)(unaff_EBP + -0x70);
      }
    }
    else {
      dVar1 = *(double *)(unaff_EBP + -0x78) * _DAT_008e89d0;
      dVar9 = *(double *)(unaff_EBP + -0x68) * _DAT_008e89d0;
    }
    if (_DAT_008e8a80 < *(double *)(unaff_EBP + -0x54) * *(double *)(unaff_EBP + -0x3c)) {
      if (*(double *)(unaff_EBP + -0x3c) <= _DAT_008e8a80) {
        if ((*(double *)(unaff_EBP + -0x3c) < _DAT_008e8a80) &&
           (dVar3 = (*(double *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x4c)) *
                    *(double *)(unaff_EBP + -0x30) + *(double *)(unaff_EBP + -0x3c),
           *(double *)(unaff_EBP + -0x3c) = dVar3, _DAT_008e8a80 < dVar3)) goto LAB_007f291a;
      }
      else {
        dVar3 = *(double *)(unaff_EBP + -0x3c) -
                (*(double *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x4c)) *
                *(double *)(unaff_EBP + -0x30);
        *(double *)(unaff_EBP + -0x3c) = dVar3;
        if (dVar3 < _DAT_008e8a80) {
LAB_007f291a:
          *(undefined8 *)(unaff_EBP + -0x3c) = 0;
        }
      }
    }
    uVar10 = *(undefined8 *)(unaff_EBP + -0x30);
    uVar8 = *(undefined8 *)(unaff_EBP + -0x4c);
  }
  FUN_007f29ab(unaff_EBP + -0x3c,dVar1,uVar8,dVar9,uVar10);
LAB_007f2949:
  iVar6 = *(int *)(unaff_EBP + -0x34);
  fVar7 = (float10)FUN_004f1993(iVar6,*(undefined4 *)(iVar6 + 0x10));
  *(double *)(unaff_EBP + -0x80) = (double)fVar7;
  fVar7 = (float10)FUN_004f1993(iVar6 + 0x18,*(undefined4 *)(iVar6 + 0x28));
  uVar4 = FUN_004f1a11((double)((fVar7 + (float10)*(double *)(unaff_EBP + -0x3c)) *
                                (float10)*(double *)(unaff_EBP + -0x30) * (float10)_DAT_008e89d0 +
                               (float10)*(double *)(unaff_EBP + -0x80)));
  uVar10 = *(undefined8 *)(unaff_EBP + -0x3c);
  *(undefined4 *)(iVar6 + 0x10) = uVar4;
  uVar4 = FUN_004f1a11(uVar10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(iVar6 + 0x28) = uVar4;
  return;
}


