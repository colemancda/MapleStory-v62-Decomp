/* FUN_0067e0a5 - 0x0067e0a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067e0a5(void)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  LONG *lpAddend;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  uint uVar14;
  bool bVar15;
  float10 fVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if ((*(int *)(extraout_ECX + 0x9c) != 0) && (*(int *)(*(int *)(extraout_ECX + 0x9c) + 0x524) != 0)
     ) goto LAB_0067e5c0;
  _iStack_a0 = (double)CONCAT44(0x67e0da,iStack_a0);
  uVar4 = FUN_007d1e08();
  _iStack_a0 = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0xd8),extraout_ECX + 0xd0);
  *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
  iStack_a4 = 0x67e0ef;
  iVar5 = FUN_00413367();
  if (-1 < iVar5) {
    _iStack_a0 = (double)CONCAT44(0x67e0ff,iStack_a0);
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xd8) = uVar4;
    _iStack_a0 = (double)CONCAT44(0x67e10c,iStack_a0);
    FUN_0067b45c();
  }
  _iStack_a0 = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0xa0),0x67e11d);
  iVar5 = FUN_0064d61f();
  *(int *)(unaff_EBP + -0x48) = iVar5;
  if (iVar5 == 0) goto LAB_0067e5c0;
  _iStack_a0 = (double)CONCAT44(0x67e130,iStack_a0);
  uVar6 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x2c) = (uVar6 & 0xff) >> 7;
  *(uint *)(unaff_EBP + -0x30) = uVar6 & 0x7f;
  _iStack_a0 = (double)CONCAT44(0x67e14c,iStack_a0);
  uVar6 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar14 = uVar6 & 0xff;
  *(uint *)(unaff_EBP + -0x24) = uVar14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _iStack_a0 = (double)(CONCAT44(unaff_EBP + -0x25,uVar6) & 0xffffffff000000ff);
  iStack_a4 = 0x67e167;
  FUN_0067fb02();
  if (uVar14 != 0) {
    iVar5 = 0;
    *(uint *)(unaff_EBP + -0x18) = uVar14;
    do {
      piVar13 = (int *)(iVar5 + *(int *)(unaff_EBP + -0x10));
      _iStack_a0 = (double)CONCAT44(0x67e17e,iStack_a0);
      iVar7 = FUN_0042459a();
      *piVar13 = iVar7;
      if (iVar7 != 0) {
        _iStack_a0 = (double)CONCAT44(0x67e18c,iStack_a0);
        uVar6 = FUN_0042452b();
        piVar13[1] = uVar6 & 0xff;
        _iStack_a0 = (double)CONCAT44(0x67e19a,iStack_a0);
        iVar7 = FUN_0042459a();
        piVar13[6] = iVar7;
      }
      iVar5 = iVar5 + 0x98;
      piVar13 = (int *)(unaff_EBP + -0x18);
      *piVar13 = *piVar13 + -1;
    } while (*piVar13 != 0);
  }
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while (iVar7 = *(int *)(unaff_EBP + -0x10), iVar7 != 0) {
    if (*(uint *)(iVar7 + -4) <= *(uint *)(unaff_EBP + 8)) {
      if ((iVar7 != 0) && (*(int *)(iVar7 + -4) != 0)) {
        _iStack_a0 = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0xcc),extraout_ECX + 0xc4);
        iStack_a4 = 0x67e22b;
        FUN_00413367();
        _iStack_a0 = (double)CONCAT44(0x67e23d,iStack_a0);
        uVar4 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0xcc) = uVar4;
        _iStack_a0 = (double)CONCAT44(*(int *)(unaff_EBP + -0x30) + -4,
                                      *(undefined4 *)(extraout_ECX + 0xa0));
        iStack_a4 = unaff_EBP + -0x20;
        iStack_a8 = 0x67e25b;
        iVar5 = FUN_0067e909();
        iVar5 = *(int *)(iVar5 + 4);
        *(int *)(unaff_EBP + -0x50) = iVar5;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          _iStack_a0 = 3.36368636650652e-317;
          FUN_0067f663();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        if (iVar5 != 0) {
          if ((*(int **)(iVar5 + 0x68) == (int *)0x0) ||
             (iVar7 = **(int **)(iVar5 + 0x68), iVar7 == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(uint *)(iVar7 + -4) >> 1;
          }
          if (uVar6 != 0) {
            if (*(int *)(iVar5 + 0x68) != 0) {
              lpAddend = (LONG *)(*(int *)(iVar5 + 0x68) + 8);
              _iStack_a0 = (double)CONCAT44(lpAddend,0x67e2ad);
              InterlockedIncrement(lpAddend);
            }
            _iStack_a0 = (double)CONCAT44(0x67e2b4,iStack_a0);
            FUN_00402fa6();
            iVar7 = *(int *)(unaff_EBP + -0x4c);
            *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(iVar5 + 0x68);
            *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(unaff_EBP + -0x2c);
            iVar7 = *(int *)(iVar5 + 0x6c) + iVar7;
            *(int *)(extraout_ECX + 0x78) = iVar7;
            if (iVar7 == 0) {
              *(undefined4 *)(extraout_ECX + 0x78) = 1;
            }
          }
          piVar13 = (int *)(extraout_ECX + 4);
          *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar5 + 0x70);
          _iStack_a0 = (double)CONCAT44(0x67e2e5,iStack_a0);
          puVar9 = (undefined4 *)(**(code **)(*piVar13 + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x20) = *puVar9;
          _iStack_a0 = (double)CONCAT44(0x67e2f1,iStack_a0);
          iVar7 = (**(code **)(*piVar13 + 0x10))();
          _iStack_a0 = (double)(ulonglong)*(uint *)(unaff_EBP + -0x10);
          iStack_a4 = *(undefined4 *)(unaff_EBP + -0x24);
          iStack_a8 = *(undefined4 *)(unaff_EBP + -0x30);
          *(int *)(unaff_EBP + -0x1c) = *(int *)(iVar7 + 4) + -0x19;
          iStack_ac = 0;
          iStack_b0 = *(int *)(extraout_ECX + 0xa4);
          uStack_b4 = *(undefined4 *)(unaff_EBP + -0x48);
          FUN_0064ba86();
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          goto LAB_0067e327;
        }
      }
      break;
    }
    if (*(int *)(iVar5 + iVar7) == 0) {
      iVar8 = 0;
    }
    else {
      _iStack_a0 = (double)CONCAT44(*(int *)(iVar5 + iVar7),0x67e1d6);
      iVar8 = FUN_004308f4();
      iVar7 = *(int *)(unaff_EBP + -0x10);
    }
    if (iVar8 == 0) {
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -1;
      iVar7 = iVar5 + iVar7;
      iVar5 = iVar5 + -0x98;
      _iStack_a0 = (double)CONCAT44(iVar7,0x67e1f7);
      FUN_0067fabb();
    }
    else {
      *(int *)(iVar5 + iVar7) = iVar8;
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    iVar5 = iVar5 + 0x98;
  }
  goto LAB_0067e5b4;
LAB_0067e327:
  iVar7 = *(int *)(unaff_EBP + -0x10);
  if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= *(uint *)(unaff_EBP + 8))) goto LAB_0067e4de;
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + iVar7);
  iVar5 = *piVar1;
  *(int *)(unaff_EBP + -0x24) = iVar5;
  _iStack_a0 = (double)CONCAT44(0x67e351,iStack_a0);
  uVar4 = (**(code **)(*(int *)(iVar5 + 4) + 0x10))();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  _iStack_a0 = (double)CONCAT44(0x67e35b,iStack_a0);
  piVar10 = (int *)(**(code **)(*piVar13 + 0x10))();
  iVar7 = **(int **)(unaff_EBP + -0x14);
  iVar5 = *piVar10;
  piVar1[0x24] = *(int *)(unaff_EBP + -0x20);
  piVar1[0x25] = *(int *)(unaff_EBP + -0x1c);
  _iStack_a0 = (double)CONCAT44(1,unaff_EBP + -0x40);
  *(uint *)(unaff_EBP + -0x14) = (uint)(iVar7 < iVar5);
  iStack_a4 = 0x67e38a;
  FUN_005c5b12();
  _iStack_a0 = (double)CONCAT44(unaff_EBP + -0x40,0x67e394);
  iVar5 = (*DAT_0097b5a4)();
  if (iVar5 == 0) {
    iVar5 = *(int *)(unaff_EBP + -0x3c);
    if ((piVar1[0x25] < iVar5) || (iVar5 = *(int *)(unaff_EBP + -0x34), iVar5 < piVar1[0x25])) {
      piVar1[0x25] = iVar5;
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iVar7 = (*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x40)) / 2;
      iVar8 = *(int *)(unaff_EBP + -0x40) + 10;
      bVar15 = SBORROW4(iVar8,iVar7);
      iVar5 = iVar8 - iVar7;
    }
    else {
      iVar7 = (*(int *)(unaff_EBP + -0x40) + *(int *)(unaff_EBP + -0x38)) / 2;
      iVar8 = *(int *)(unaff_EBP + -0x38) + -10;
      bVar15 = SBORROW4(iVar7,iVar8);
      iVar5 = iVar7 - iVar8;
    }
    if (bVar15 != iVar5 < 0) {
      iVar7 = iVar8;
    }
    iVar5 = piVar1[0x25] - *(int *)(unaff_EBP + -0x1c);
    piVar1[0x24] = iVar7;
    iVar7 = iVar7 - *(int *)(unaff_EBP + -0x20);
    *(int *)(unaff_EBP + -0x14) = iVar5 * iVar5 + iVar7 * iVar7;
    _iStack_a0 = (double)*(int *)(unaff_EBP + -0x14);
    iStack_a4 = 0x67e414;
    fVar16 = (float10)FUN_0087af44();
    dVar3 = _iStack_a0;
    uVar2 = (ulonglong)_iStack_a0 >> 0x20;
    uVar4 = (int)uVar2;
    if ((float10)_DAT_008ecb58 < fVar16) {
      *(int *)(unaff_EBP + -0x14) = piVar1[0x24] - *(int *)(unaff_EBP + -0x20);
      iStack_a0 = SUB84(dVar3,0);
      _iStack_a0 = (double)CONCAT44(0x67e440,iStack_a0);
      iVar5 = __ftol();
      piVar1[0x24] = iVar5;
      *(int *)(unaff_EBP + -0x14) = piVar1[0x25] - *(int *)(unaff_EBP + -0x1c);
      _iStack_a0 = (double)CONCAT44(0x67e45f,iStack_a0);
      iVar5 = __ftol();
      piVar1[0x25] = iVar5;
      uVar4 = extraout_ECX_00;
    }
    _iStack_a0 = 0.0;
    iStack_a4 = 0;
    iStack_a8 = 0;
    iStack_ac = 1;
    iStack_b0 = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_b4;
    uStack_b4 = uVar4;
    FUN_0067d25d(&uStack_b4,*(undefined4 *)(unaff_EBP + 8));
    iVar5 = piVar1[0x25];
    iVar7 = piVar1[0x24];
    uVar20 = 0;
    uVar19 = 0;
    iVar8 = piVar1[6];
    iVar11 = *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x4c);
    uVar4 = *(undefined4 *)(unaff_EBP + -0x2c);
    iVar18 = piVar1[1];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar17 = *(undefined4 *)(extraout_ECX + 0xa0);
    uVar12 = FUN_0067e5d1(uVar17,iVar11,iVar18,uVar4,iVar8,0,0,iVar7,iVar5);
    FUN_005cbf42(uVar12,uVar17,iVar11,iVar18,uVar4,iVar8,uVar19,uVar20,iVar7,iVar5);
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x98;
    iVar5 = *(int *)(unaff_EBP + -0x50);
    goto LAB_0067e327;
  }
  iVar5 = *(int *)(unaff_EBP + -0x50);
LAB_0067e4de:
  _iStack_a0 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x30),0x67e4e8);
  FUN_0067d821();
  if ((((*(int *)(extraout_ECX + 0xa0) == 0x2f9f6e) || (*(int *)(extraout_ECX + 0xa0) == 0x31260d))
      && (iVar7 = *(int *)(unaff_EBP + -0x10), iVar7 != 0)) && (*(int *)(iVar7 + -4) != 0)) {
    _iStack_a0 = (double)CONCAT44(iVar5 + 0x38,unaff_EBP + -0x40);
    iStack_a4 = 0x67e527;
    FUN_00411537();
    iStack_a4 = unaff_EBP + -0x40;
    _iStack_a0 = *(double *)(iVar7 + 0x90);
    iStack_a8 = 0x67e538;
    (*DAT_0097b54c)();
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 100;
    _iStack_a0 = (double)CONCAT44(unaff_EBP + 8,0x67e548);
    piVar13 = (int *)FUN_00424619();
    puVar9 = (undefined4 *)*piVar13;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (puVar9 == (undefined4 *)0x0) {
      uStack_b4 = 0;
    }
    else {
      uStack_b4 = *puVar9;
    }
    _iStack_a0 = 1.25986739689518e-321;
    iStack_a4 = 0x80;
    iStack_a8 = 500;
    iStack_ac = *(int *)(unaff_EBP + -0x44) + 200;
    iStack_b0 = unaff_EBP + -0x40;
    FUN_00428a3e();
    if (*(int *)(unaff_EBP + 8) != 0) {
      _iStack_a0 = (double)CONCAT44(0x67e58e,iStack_a0);
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
  }
  _iStack_a0 = 1.8035826833460917e-307;
  iStack_a4 = 4;
  iStack_a8 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_ac = 0x67e5aa;
  FUN_0087a0b8();
  *(undefined ***)(unaff_EBP + -0x98) = &PTR_LAB_008e84a0;
LAB_0067e5b4:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  _iStack_a0 = (double)CONCAT44(0x67e5c0,iStack_a0);
  FUN_0067fa99();
LAB_0067e5c0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


