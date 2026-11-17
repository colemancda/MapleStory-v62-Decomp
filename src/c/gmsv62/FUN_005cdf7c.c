/* FUN_005cdf7c - 0x005cdf7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cdf7c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  LONG *lpAddend;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  uint uVar10;
  undefined4 extraout_ECX_00;
  int iVar11;
  int unaff_EBP;
  bool bVar12;
  float10 fVar13;
  undefined4 uVar14;
  int *piStack_64;
  int iStack_60;
  int *piStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x160);
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if ((((iVar2 != 0) || (*(int *)(extraout_ECX + 0x204) != 0)) ||
      (*(int *)(extraout_ECX + 0x210) != 0)) ||
     ((*(int *)(extraout_ECX + 0x280) != 0 || (*(int *)(extraout_ECX + 0x22c) != 0))))
  goto LAB_005ce6cb;
  _piStack_58 = (double)CONCAT44(0x5cdfd4,piStack_58);
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iVar2 = *(int *)(unaff_EBP + 8) + -0xc;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  _piStack_58 = (double)CONCAT44(iVar2,0x5cdfec);
  iVar3 = FUN_004e67c9();
  if (iVar3 == 0) goto LAB_005ce6cb;
  if ((*(int **)(iVar3 + 0x74) == (int *)0x0) || (iVar5 = **(int **)(iVar3 + 0x74), iVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar5 + -4) >> 1;
  }
  if (uVar4 != 0) {
    if (*(int *)(iVar3 + 0x74) != 0) {
      lpAddend = (LONG *)(*(int *)(iVar3 + 0x74) + 8);
      _piStack_58 = (double)CONCAT44(lpAddend,0x5ce027);
      InterlockedIncrement(lpAddend);
    }
    _piStack_58 = (double)CONCAT44(0x5ce02e,piStack_58);
    FUN_00402fa6();
    iVar5 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(iVar3 + 0x74);
    *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(unaff_EBP + 0xc);
    iVar5 = *(int *)(iVar3 + 0x88) + iVar5;
    *(int *)(extraout_ECX + 0x78) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(extraout_ECX + 0x78) = 1;
    }
  }
  iVar7 = DAT_00978358;
  iVar5 = *(int *)(iVar3 + 0xc);
  if (iVar5 == 1) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + 0x10) & 3;
    uVar4 = *(uint *)(iVar7 + 0xd78);
    uVar10 = *(uint *)(unaff_EBP + 0x10) >> 2;
    *(uint *)(unaff_EBP + -0x1c) = uVar10;
    *(undefined4 *)(unaff_EBP + 8) = 1;
    if (uVar10 == (uVar4 & 0x3fffffff)) {
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        _piStack_58 = (double)CONCAT44(unaff_EBP + -0x3c,0x5ce0b5);
        iVar2 = FUN_00455c59();
        uVar1 = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        _piStack_58 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),uVar1);
        piStack_5c = (int *)0x5ce0c5;
        uVar1 = FUN_00653cc5();
        _piStack_58 = (double)CONCAT44(uVar1,unaff_EBP + -0x34);
        piStack_5c = (int *)0x5ce0d3;
        iVar5 = FUN_00794f23();
        iVar5 = *(int *)(iVar5 + 4);
        _piStack_58 = (double)CONCAT44(0x5ce0de,piStack_58);
        FUN_005d0fed();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          _piStack_58 = 3.00732719153979e-317;
          FUN_0045e7c2();
        }
        if (iVar5 != 0) {
          _piStack_58 = (double)(ulonglong)(unaff_EBP - 0x2c);
          piStack_5c = (int *)0x5ce103;
          FUN_0067b267();
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        goto LAB_005ce107;
      }
      _piStack_58 = (double)(ulonglong)(unaff_EBP - 0x2c);
      piStack_5c = (int *)0x5ce0a1;
      FUN_0043f3d6();
LAB_005ce130:
      *(undefined4 *)(unaff_EBP + 8) = 1;
    }
    else {
LAB_005ce107:
      if (*(int *)(unaff_EBP + -0x18) == 3) {
        _piStack_58 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x1c),0x5ce11b);
        iVar2 = FUN_004308f4();
        if (iVar2 == 0) goto LAB_005ce6cb;
        _piStack_58 = (double)(ulonglong)(unaff_EBP - 0x2c);
        piStack_5c = (int *)0x5ce130;
        FUN_005c5b12();
        goto LAB_005ce130;
      }
    }
    iVar2 = *(int *)(iVar3 + 0x28);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar2 = -iVar2;
    }
    *(int *)(unaff_EBP + -0x18) = iVar2;
    _piStack_58 = (double)CONCAT44(0x5ce14f,piStack_58);
    piVar6 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(int *)(unaff_EBP + -0x3c) = *piVar6 + *(int *)(unaff_EBP + -0x18);
    _piStack_58 = (double)CONCAT44(0x5ce15e,piStack_58);
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    iVar2 = *(int *)(iVar2 + 4) + *(int *)(iVar3 + 0x2c);
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x3c);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar7 = (*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x2c)) / 2;
      iVar11 = *(int *)(unaff_EBP + -0x2c) + 10;
      bVar12 = SBORROW4(iVar11,iVar7);
      iVar5 = iVar11 - iVar7;
    }
    else {
      iVar7 = (*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x24)) / 2;
      iVar11 = *(int *)(unaff_EBP + -0x24) + -10;
      bVar12 = SBORROW4(iVar7,iVar11);
      iVar5 = iVar7 - iVar11;
    }
    if (bVar12 != iVar5 < 0) {
      iVar7 = iVar11;
    }
    if (iVar2 < *(int *)(unaff_EBP + -0x28)) {
      iVar5 = *(int *)(unaff_EBP + -0x28);
    }
    else {
      iVar5 = iVar2;
      if (*(int *)(unaff_EBP + -0x20) < iVar2) {
        iVar5 = *(int *)(unaff_EBP + -0x20);
      }
    }
    *(int *)(unaff_EBP + -0x1c) = iVar7 - *(int *)(unaff_EBP + -0x3c);
    iVar7 = *(int *)(unaff_EBP + -0x1c);
    *(int *)(unaff_EBP + -0x1c) = iVar5 - iVar2;
    _piStack_58 = (double)iVar7 * (double)iVar7 +
                  (double)*(int *)(unaff_EBP + -0x1c) * (double)*(int *)(unaff_EBP + -0x1c);
    piStack_5c = (int *)0x5ce1dd;
    fVar13 = (float10)FUN_0087af44();
    *(double *)(unaff_EBP + -0x3c) = (double)fVar13;
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar5 = *(int *)(iVar3 + 0x30);
    }
    else {
      _piStack_58 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x30),0x5ce1f0);
      iVar5 = FUN_0087a90a();
    }
    *(int *)(unaff_EBP + 8) = iVar5 + 10;
    if ((double)*(int *)(unaff_EBP + 8) < *(double *)(unaff_EBP + -0x3c)) goto LAB_005ce6cb;
    _piStack_58 = (double)CONCAT44(0x5ce216,piStack_58);
    piVar6 = (int *)FUN_005d1704();
    *piVar6 = *(int *)(iVar3 + 0x8c) + *(int *)(unaff_EBP + -0x10);
    piVar6[1] = *(int *)(iVar3 + 0xc);
    piVar6[2] = *(int *)(unaff_EBP + 0x10);
    piVar6[6] = *(int *)(unaff_EBP + 0xc);
    piVar6[7] = *(int *)(unaff_EBP + -0x14);
  }
  else if (iVar5 == 2) {
    *(int **)(unaff_EBP + -0x18) = (int *)(iVar3 + 0x7c);
    piVar6 = *(int **)(iVar3 + 0x7c);
    if ((piVar6 == (int *)0x0) || (iVar7 = *piVar6, iVar7 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar7 + -4) >> 1;
    }
    if (uVar4 == 0) goto LAB_005ce409;
    iVar2 = *(int *)(iVar3 + 0x28);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar2 = -iVar2;
    }
    *(int *)(unaff_EBP + 8) = iVar2;
    _piStack_58 = (double)CONCAT44(0x5ce281,piStack_58);
    piVar6 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(int *)(unaff_EBP + -0x3c) = *piVar6 + *(int *)(unaff_EBP + 8);
    _piStack_58 = (double)CONCAT44(0x5ce290,piStack_58);
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    iVar5 = (int)*(short *)(unaff_EBP + 0x12);
    *(int *)(unaff_EBP + -0x38) = *(int *)(iVar2 + 4) + *(int *)(iVar3 + 0x2c);
    *(int *)(unaff_EBP + -0x34) = (int)*(short *)(unaff_EBP + 0x10);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar7 = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x3c);
      iVar2 = *(int *)(unaff_EBP + -0x3c);
      *(int *)(unaff_EBP + 0x10) = iVar7;
    }
    else {
      iVar2 = *(int *)(unaff_EBP + -0x3c);
      iVar7 = iVar2 - *(short *)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + 0x10) = iVar7;
    }
    *(int *)(unaff_EBP + 8) = iVar5 - *(int *)(unaff_EBP + -0x38);
    if (iVar7 < 1) {
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = iVar2 + -1;
      }
      iVar5 = *(int *)(unaff_EBP + -0x38);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(int *)(unaff_EBP + -0x34) = iVar2;
      *(undefined4 *)(unaff_EBP + 0x10) = 1;
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 8) / *(int *)(unaff_EBP + 0x10);
    _piStack_58 = (double)*(int *)(unaff_EBP + -0x1c);
    piStack_5c = (int *)0x5ce302;
    fVar13 = (float10)FUN_0087acc3();
    if ((float10)_DAT_008ecb60 < fVar13) {
      if (*(int *)(unaff_EBP + 8) < 1) {
        *(int *)(unaff_EBP + 8) = -*(int *)(unaff_EBP + 0x10);
      }
      _piStack_58 = (double)CONCAT44(0x5ce335,piStack_58);
      iVar5 = __ftol();
      *(int *)(unaff_EBP + 8) = iVar5 - *(int *)(unaff_EBP + -0x38);
    }
    *(int *)(unaff_EBP + 0x10) =
         *(int *)(unaff_EBP + 8) * *(int *)(unaff_EBP + 8) +
         *(int *)(unaff_EBP + 0x10) * *(int *)(unaff_EBP + 0x10);
    _piStack_58 = (double)*(int *)(unaff_EBP + 0x10);
    piStack_5c = (int *)0x5ce35d;
    FUN_0087af44();
    *(double *)(unaff_EBP + -0x24) = (double)*(int *)(iVar3 + 0x30);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x3c);
    _piStack_58 = (double)CONCAT44(0x5ce37d,piStack_58);
    uVar1 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar1;
    *(int *)(unaff_EBP + 0x10) = iVar5 - *(int *)(unaff_EBP + -0x38);
    _piStack_58 = (double)CONCAT44(0x5ce393,piStack_58);
    uVar1 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
    _piStack_58 = (double)CONCAT44(0x5ce3a9,piStack_58);
    uVar1 = __ftol();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
    _piStack_58 = (double)CONCAT44(0x5ce3b7,piStack_58);
    piVar6 = (int *)FUN_005d157a();
    uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
    *piVar6 = *(int *)(iVar3 + 0x8c) + *(int *)(unaff_EBP + -0x10);
    piVar6[1] = *(int *)(iVar3 + 0x8c) + *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x10);
    piVar6[2] = *(int *)(unaff_EBP + -0x3c);
    piVar6[3] = *(int *)(unaff_EBP + -0x38);
    piVar6[4] = *(int *)(unaff_EBP + -0x34);
    piVar6[5] = *(int *)(unaff_EBP + -0x30);
    piVar6[6] = *(int *)(unaff_EBP + 0xc);
    _piStack_58 = (double)CONCAT44(uVar1,0x5ce3fe);
    FUN_00402f41();
    piVar6[9] = *(int *)(unaff_EBP + -0x14);
  }
  else {
LAB_005ce409:
    if (iVar5 == 0) {
      _piStack_58 = (double)CONCAT44(0x5ce41c,piStack_58);
      piVar6 = (int *)FUN_005d1704();
      *piVar6 = *(int *)(iVar3 + 0x8c) + *(int *)(unaff_EBP + -0x10);
      piVar6[1] = *(int *)(iVar3 + 0xc);
      _piStack_58 = (double)CONCAT44(0x5ce437,piStack_58);
      iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar5 + 4);
      _piStack_58 = (double)CONCAT44(0x5ce445,piStack_58);
      puVar9 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + 8) = *puVar9;
      _piStack_58 = (double)CONCAT44(iVar3 + 0x28,piVar6 + 2);
      piStack_5c = (int *)0x5ce457;
      piVar8 = (int *)FUN_00411537();
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        piVar8[2] = -piVar8[2];
        _piStack_58 = (double)CONCAT44(piVar8 + 2,piVar8);
        *piVar8 = -*piVar8;
        piStack_5c = (int *)0x5ce478;
        FUN_004459fe();
      }
      _piStack_58 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x10),
                                     *(undefined4 *)(unaff_EBP + 8));
      iStack_60 = 0x5ce487;
      piStack_5c = piVar8;
      (*DAT_0097b54c)();
      piVar6[6] = *(int *)(unaff_EBP + 0xc);
      piVar6[7] = *(int *)(unaff_EBP + -0x14);
    }
    else if ((iVar5 == 3) || (iVar5 == 4)) {
      iVar5 = *(int *)(iVar3 + 0x2c);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (0 < iVar5) {
        do {
          if (*(int *)(iVar3 + 0x30) <= *(int *)(unaff_EBP + -0x18)) break;
          _piStack_58 = (double)CONCAT44(1,piStack_58);
          if ((*(uint *)(unaff_EBP + 0x10) & 1 << ((byte)*(undefined4 *)(unaff_EBP + 8) & 0x1f)) !=
              0) {
            iVar5 = *(int *)(iVar3 + 0x34);
            _piStack_58 = (double)CONCAT44(0x5ce4e0,piStack_58);
            uVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
            iVar7 = **(int **)(unaff_EBP + -0x1c) +
                    ((*(int *)(iVar3 + 0x28) + *(int *)(unaff_EBP + 8)) * iVar5 + iVar5 / 2) *
                    ((-(uint)(*(int *)(unaff_EBP + 0xc) != 0) & 2) - 1);
            *(int *)(unaff_EBP + -0x30) = iVar7;
            *(undefined4 *)(unaff_EBP + -0x48) = 0;
            *(undefined4 *)(unaff_EBP + -0x44) = 0;
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
            *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_008e8ab0;
            iVar5 = *(int *)(iVar3 + 0xc);
            *(undefined4 *)(unaff_EBP + -4) = 1;
            if (iVar5 == 3) {
              *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978138;
              iVar2 = unaff_EBP + -0x50;
              piStack_58 = (int *)0x5ce544;
              iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
              _piStack_58 = (double)CONCAT44(iVar2,*(int *)(iVar5 + 4) + 100);
              piStack_5c = (int *)0x5ce553;
              iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
              piStack_5c = (int *)(*(int *)(iVar5 + 4) + -100);
              piStack_64 = (int *)0x5ce563;
              iStack_60 = iVar7;
              FUN_00861498();
LAB_005ce588:
              if (*(int *)(unaff_EBP + -0x48) != 0) {
                _piStack_58 = (double)CONCAT44(0x5ce59d,piStack_58);
                piVar6 = (int *)FUN_005d1704();
                *piVar6 = *(int *)(iVar3 + 0x8c) + *(int *)(unaff_EBP + -0x10);
                piVar6[1] = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(unaff_EBP + -0x20) = **(undefined4 **)(unaff_EBP + -0x44);
                _piStack_58 = (double)CONCAT44(iVar3 + 0x38,piVar6 + 2);
                *(int **)(unaff_EBP + -0x38) = piVar6 + 2;
                piStack_5c = (int *)0x5ce5c8;
                piVar8 = (int *)FUN_00411537();
                *(int **)(unaff_EBP + -0x1c) = piVar8;
                if (*(int *)(unaff_EBP + 0xc) == 0) {
                  piVar8[2] = -piVar8[2];
                  _piStack_58 = (double)CONCAT44(piVar8 + 2,piVar8);
                  *piVar8 = -*piVar8;
                  piStack_5c = (int *)0x5ce5ec;
                  FUN_004459fe();
                }
                _piStack_58 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x20),
                                               *(undefined4 *)(unaff_EBP + -0x30));
                piStack_5c = *(int **)(unaff_EBP + -0x1c);
                iStack_60 = 0x5ce5fd;
                (*DAT_0097b54c)();
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                piVar6[6] = *(int *)(unaff_EBP + 0xc);
                _piStack_58 = (double)CONCAT44(0xc00614a4,extraout_ECX_00);
                piVar6[7] = *(int *)(unaff_EBP + -0x14);
                *(int ***)(unaff_EBP + -0x30) = &piStack_58;
                piStack_5c = (int *)0x0;
                *(undefined4 *)(extraout_ECX + 0x144) = *(undefined4 *)(unaff_EBP + -0x10);
                iStack_60 = 0x5ce627;
                FUN_00424e0a();
                piStack_64 = *(int **)(unaff_EBP + -0x38);
                piStack_5c = (int *)piVar6[5];
                iStack_60 = *(int *)(iVar3 + 0x34) / 2 + *piStack_64;
                *(undefined1 *)(unaff_EBP + -4) = 2;
                *(int ***)(unaff_EBP + -0x38) = &piStack_64;
                FUN_00424dd7(0);
                uVar14 = 0;
                *(undefined1 *)(unaff_EBP + -4) = 1;
                uVar1 = FUN_004091f9(0);
                FUN_00424e82(uVar1);
                FUN_0042b613(uVar1,uVar14);
              }
            }
            else if (iVar5 == 4) {
              _piStack_58 = (double)CONCAT44(0x5ce577,piStack_58);
              iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
              _piStack_58 = (double)CONCAT44(0x5ce584,piStack_58);
              puVar9 = (undefined4 *)FUN_00518b2e();
              *puVar9 = *(undefined4 *)(iVar5 + 4);
              goto LAB_005ce588;
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_008e8ab0;
            _piStack_58 = (double)CONCAT44(0x5ce67a,piStack_58);
            FUN_00434e79();
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        } while (*(int *)(unaff_EBP + 8) < *(int *)(iVar3 + 0x2c));
      }
    }
  }
  _piStack_58 = (double)CONCAT44(*(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14),
                                 *(int *)(extraout_ECX + 0x15c) + 0xc);
  piStack_5c = (int *)0x5ce69b;
  piVar6 = (int *)FUN_004b8c9b();
  _piStack_58 = (double)CONCAT44(0x5ce6a9,piStack_58);
  iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  iVar2 = *(undefined4 *)(iVar2 + 4);
  piStack_58 = (int *)0x5ce6b3;
  puVar9 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  _piStack_58 = (double)CONCAT44(iVar2,*puVar9);
  piStack_5c = (int *)0x5ce6ba;
  piStack_5c = (int *)FUN_007d3c48();
  iStack_60 = *(int *)(unaff_EBP + -0x14) + 2;
  piStack_64 = piVar6;
  FUN_007d4267();
LAB_005ce6cb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


