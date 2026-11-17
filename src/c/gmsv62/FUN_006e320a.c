/* FUN_006e320a - 0x006e320a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e320a(void)

{
  int *piVar1;
  IBinding *pIVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var7;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  int unaff_EBP;
  undefined4 *puStack_15c;
  wchar_t *pwStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined4 *puVar10;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x60) = extraout_ECX;
  *(int *)(unaff_EBP + -0x58) =
       *(int *)(*(int *)(unaff_EBP + 0x10) + 0xc) - *(int *)(*(int *)(unaff_EBP + 0x10) + 4);
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = 0;
  *(undefined ***)(unaff_EBP + -0xa8) = &PTR_FUN_008f00f8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_150 = (undefined1 *)0x6e325e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_150 = (undefined1 *)0x6e326e;
  FUN_00403191();
  puStack_150 = (undefined1 *)0x0;
  puStack_154 = (undefined1 *)(unaff_EBP + -0xe8);
  pwStack_158 = (wchar_t *)(unaff_EBP + -0xf8);
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_15c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_15c = extraout_ECX_00;
  FUN_00679e4e(&puStack_15c,0x9ec);
  iVar3 = unaff_EBP + -0x108;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_154 = (undefined1 *)0x6e32c3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x88) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar3 != 0) {
    puStack_150 = (undefined1 *)0x6e32df;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_150 = (undefined1 *)0x6e32f0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_150 = (undefined1 *)0x6e3300;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e330b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_150 = (undefined1 *)0x6e331b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3326;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_150 = (undefined1 *)0x6e3336;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3341;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_150 = (undefined1 *)0x6e3350;
    FUN_00878dfb();
  }
  iVar3 = FUN_0040cf4d();
  if (0 < iVar3) {
    *(int *)(unaff_EBP + -0x1c) = iVar3 + -1;
    *(int *)(unaff_EBP + -0x2c) = iVar3;
    do {
      FUN_0087a1b0();
      puStack_150 = (undefined1 *)0x0;
      pwStack_158 = *(wchar_t **)(unaff_EBP + -0x1c);
      puStack_15c = (undefined4 *)0x6e338f;
      puStack_154 = &stack0xfffffeb8;
      pwStack_158 = (wchar_t *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
      puStack_15c = (undefined4 *)0x6e339b;
      FUN_004033a1();
      pwStack_158 = (wchar_t *)(unaff_EBP + -0x138);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_15c = (undefined4 *)0x6e33ae;
      FUN_0040263d();
      puStack_15c = (undefined4 *)0x6e33b5;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_154 = (undefined1 *)0x6e33c0;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x94) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar3 != 0) {
        puStack_150 = (undefined1 *)0x6e33dc;
        iVar3 = FUN_00404b30();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          puStack_150 = (undefined1 *)0x6e33ea;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_150 = (undefined1 *)0x6e33fa;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_150 = (undefined1 *)0x6e3405;
        FUN_00878dfb();
      }
      puStack_150 = &LAB_0045035c;
      puStack_154 = (undefined1 *)0x4;
      pwStack_158 = (wchar_t *)0x4;
      puStack_15c = (undefined4 *)(unaff_EBP + -0x70);
      FUN_0087b2f0();
      puStack_150 = (undefined1 *)0x0;
      puStack_15c = &puStack_154;
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
      pwStack_158 = (wchar_t *)0x59d;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00679e4e();
      pwStack_158 = (wchar_t *)(unaff_EBP + -0x118);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_15c = (undefined4 *)0x6e3448;
      FUN_0040263d();
      puStack_15c = (undefined4 *)0x6e344f;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_154 = (undefined1 *)0x6e345a;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x8c) = uVar4;
      puStack_150 = (undefined1 *)0x6e346f;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_150 = (undefined1 *)0x6e347d;
        FUN_00878dfb();
      }
      puVar8 = (undefined1 *)(unaff_EBP + -0x118);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_150 = (undefined1 *)0x6e348d;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_150 = (undefined1 *)0x6e3498;
        FUN_00878dfb();
        puVar8 = extraout_ECX_01;
      }
      puStack_150 = (undefined1 *)0x0;
      puStack_15c = &puStack_154;
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
      pwStack_158 = (wchar_t *)0xa7c;
      puStack_154 = puVar8;
      FUN_00679e4e();
      pwStack_158 = (wchar_t *)(unaff_EBP + -0x128);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_15c = (undefined4 *)0x6e34c0;
      FUN_0040263d();
      puStack_15c = (undefined4 *)0x6e34c7;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_154 = (undefined1 *)0x6e34d2;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x74) = uVar4;
      puStack_150 = (undefined1 *)0x6e34e1;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_150 = (undefined1 *)0x6e34ef;
        FUN_00878dfb();
      }
      puVar8 = (undefined1 *)(unaff_EBP + -0x128);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_150 = (undefined1 *)0x6e34ff;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_150 = (undefined1 *)0x6e350a;
        FUN_00878dfb();
        puVar8 = extraout_ECX_02;
      }
      puStack_150 = (undefined1 *)0x0;
      puStack_15c = &puStack_154;
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
      pwStack_158 = (wchar_t *)0x5a3;
      puStack_154 = puVar8;
      FUN_00679e4e();
      pwStack_158 = (wchar_t *)(unaff_EBP + -0x148);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_15c = (undefined4 *)0x6e3532;
      FUN_0040263d();
      puStack_15c = (undefined4 *)0x6e3539;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_154 = (undefined1 *)0x6e3544;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x90) = uVar4;
      puStack_150 = (undefined1 *)0x6e3559;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_150 = (undefined1 *)0x6e3567;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_150 = (undefined1 *)0x6e3577;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_150 = (undefined1 *)0x6e3582;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      FUN_006eaadc();
      iVar3 = 0x54;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      *(int *)(unaff_EBP + -0x5c) = unaff_EBP + -0xc4;
      do {
        puStack_150 = (undefined1 *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
        pwStack_158 = (wchar_t *)&DAT_00964310;
        puStack_15c = (undefined4 *)0x6e35b6;
        FUN_004033a1();
        pwStack_158 = (wchar_t *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        puStack_15c = (undefined4 *)0x6e35c9;
        FUN_0040263d();
        puStack_15c = (undefined4 *)0x6e35d0;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_154 = (undefined1 *)0x6e35db;
        iVar5 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x34) = iVar5;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar5 != 0) {
          puStack_150 = (undefined1 *)0x6e35f1;
          iVar5 = FUN_0041a581();
          if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
            puStack_150 = (undefined1 *)0x6e3602;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        puStack_150 = (undefined1 *)0x6e3612;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_150 = (undefined1 *)0x6e361d;
          FUN_00878dfb();
        }
        puStack_150 = (undefined1 *)0x6e362b;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                   (iVar3 + *(int *)(unaff_EBP + -0x40)),*(IBinding **)(unaff_EBP + -0x14));
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_150 = (undefined1 *)0x6e363b;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            puStack_150 = (undefined1 *)0x6e3646;
            FUN_00878dfb();
          }
        }
        iVar5 = *(int *)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
        puStack_150 = (undefined1 *)0x6e3657;
        iVar6 = FUN_0040e48b();
        puStack_150 = (undefined1 *)(iVar6 + -1);
        puStack_154 = (undefined1 *)0x6e3661;
        iVar6 = FUN_0040e53d();
        puStack_154 = (undefined1 *)((*(int *)(unaff_EBP + -0x58) - iVar6) + 1);
        pwStack_158 = (wchar_t *)0x0;
        puStack_15c = (undefined4 *)(*(int *)(unaff_EBP + -0x54) + 0x14 + iVar5);
        (*DAT_0097b504)();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          puStack_150 = (undefined1 *)0x6e3688;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x54) + 0x10;
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0x60);
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x40) + 0x18);
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x40) + 0x24);
      *piVar1 = *piVar1 + 5;
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x40) + 0x2c);
      *piVar1 = *piVar1 + 5;
      pIVar2 = *(IBinding **)(*(int *)(unaff_EBP + -0x40) + 0x54);
      *(int *)(unaff_EBP + -0x58) = iVar3 + -1;
      puStack_150 = (undefined1 *)0x6e36bb;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x40) + 0x60),pIVar2);
      iVar3 = *(int *)(unaff_EBP + -0x40);
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x18);
      puStack_150 = (undefined1 *)0x0;
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
      pwStack_158 = u_new_n_0096b020;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x20);
      puStack_15c = (undefined4 *)0x6e36da;
      FUN_004033a1();
      pwStack_158 = (wchar_t *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_15c = (undefined4 *)0x6e36ed;
      FUN_0040263d();
      puStack_15c = (undefined4 *)0x6e36f4;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_154 = (undefined1 *)0x6e36ff;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      puStack_150 = (undefined1 *)0x6e3711;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_150 = (undefined1 *)0x6e3722;
        FUN_00878dfb();
      }
      puVar8 = (undefined1 *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_150 = (undefined1 *)0x6e3732;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_150 = (undefined1 *)0x6e373d;
        FUN_00878dfb();
        puVar8 = extraout_ECX_03;
      }
      puStack_150 = (undefined1 *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
      pwStack_158 = u_new_s_0096b014;
      puStack_15c = (undefined4 *)0x6e374f;
      puStack_154 = puVar8;
      FUN_004033a1();
      pwStack_158 = (wchar_t *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_15c = (undefined4 *)0x6e3762;
      FUN_0040263d();
      puStack_15c = (undefined4 *)0x6e3769;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_154 = (undefined1 *)0x6e3774;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      puStack_150 = (undefined1 *)0x6e3786;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_150 = (undefined1 *)0x6e3797;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_150 = (undefined1 *)0x6e37a7;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_150 = (undefined1 *)0x6e37b2;
        FUN_00878dfb();
      }
      puStack_150 = (undefined1 *)0x6e37c1;
      FUN_006ea9bc();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        puStack_150 = (undefined1 *)0x6e37d3;
        FUN_006eadbe();
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
      }
      puStack_150 = (undefined1 *)0x4;
      puStack_154 = (undefined1 *)0x4;
      pwStack_158 = (wchar_t *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_15c = (undefined4 *)0x6e37ec;
      FUN_0087a0b8();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_150 = (undefined1 *)0x6e37fd;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + -1;
      piVar1 = (int *)(unaff_EBP + -0x2c);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x98);
  if (*(int *)(unaff_EBP + -0x98) != 0) {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x60) + 0x44;
    do {
      puStack_150 = (undefined1 *)0x6e3833;
      uVar4 = FUN_006eafaf();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
      FUN_006eab04();
      FUN_006eab16();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 4) = *(undefined4 *)(iVar3 + 4);
      iVar3 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 8);
      uVar9 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(uint *)(unaff_EBP + -0x1c) = uVar9;
    } while (uVar9 != 0);
  }
  puStack_150 = (undefined1 *)0x6e387a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  puStack_150 = (undefined1 *)(unaff_EBP + -0x4c);
  puStack_154 = (undefined1 *)0x6e3884;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3890;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_150 = (undefined1 *)0x6e389e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  puStack_150 = (undefined1 *)(unaff_EBP + -0x70);
  puVar10 = &DAT_00980690;
  puStack_154 = (undefined1 *)0x6e38a8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e38b4;
    FUN_00878dfb();
    puVar10 = extraout_ECX_04;
  }
  puStack_150 = (undefined1 *)0x0;
  puStack_154 = (undefined1 *)(unaff_EBP + -0x4c);
  pwStack_158 = (wchar_t *)(unaff_EBP + -0x70);
  *(undefined4 ***)(unaff_EBP + -0x38) = &puStack_15c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_15c = puVar10;
  FUN_00679e4e(&puStack_15c,0x9ed);
  iVar3 = unaff_EBP + -200;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_154 = (undefined1 *)0x6e38fe;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar3 != 0) {
    puStack_150 = (undefined1 *)0x6e3914;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_150 = (undefined1 *)0x6e3925;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  puStack_150 = (undefined1 *)0x6e3935;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3940;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  puStack_150 = (undefined1 *)0x6e394d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3958;
    FUN_00878dfb();
  }
  puVar8 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_150 = (undefined1 *)0x6e3965;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3970;
    FUN_00878dfb();
    puVar8 = extraout_ECX_05;
  }
  puStack_150 = (undefined1 *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  pwStack_158 = (wchar_t *)&DAT_00964310;
  puStack_15c = (undefined4 *)0x6e3982;
  puStack_154 = puVar8;
  FUN_004033a1();
  pwStack_158 = (wchar_t *)(unaff_EBP + -0xd8);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_15c = (undefined4 *)0x6e3995;
  FUN_0040263d();
  puStack_15c = (undefined4 *)0x6e399c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  puStack_154 = (undefined1 *)0x6e39a7;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (iVar3 != 0) {
    puStack_150 = (undefined1 *)0x6e39bd;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_150 = (undefined1 *)0x6e39d0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_150 = (undefined1 *)0x6e39e7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e39f2;
    FUN_00878dfb();
  }
  puStack_150 = &LAB_0045035c;
  puStack_154 = (undefined1 *)0x4;
  pwStack_158 = (wchar_t *)0x4;
  puStack_15c = (undefined4 *)(unaff_EBP + -0xb8);
  FUN_0087b2f0();
  puStack_150 = (undefined1 *)0x0;
  puStack_15c = &puStack_154;
  *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_154;
  pwStack_158 = (wchar_t *)0x59d;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00679e4e();
  pwStack_158 = (wchar_t *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  puStack_15c = (undefined4 *)0x6e3a38;
  FUN_0040263d();
  puStack_15c = (undefined4 *)0x6e3a3f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  puStack_154 = (undefined1 *)0x6e3a4a;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_150 = (undefined1 *)0x6e3a5c;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    puStack_150 = (undefined1 *)0x6e3a6a;
    FUN_00878dfb();
  }
  puVar8 = (undefined1 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  puStack_150 = (undefined1 *)0x6e3a7a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3a85;
    FUN_00878dfb();
    puVar8 = extraout_ECX_06;
  }
  puStack_150 = (undefined1 *)0x0;
  puStack_15c = &puStack_154;
  *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_154;
  pwStack_158 = (wchar_t *)0xa7c;
  puStack_154 = puVar8;
  FUN_00679e4e();
  pwStack_158 = (wchar_t *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  puStack_15c = (undefined4 *)0x6e3aad;
  FUN_0040263d();
  puStack_15c = (undefined4 *)0x6e3ab4;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  puStack_154 = (undefined1 *)0x6e3abf;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_150 = (undefined1 *)0x6e3ad1;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    puStack_150 = (undefined1 *)0x6e3adf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  puStack_150 = (undefined1 *)0x6e3aef;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_150 = (undefined1 *)0x6e3afa;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  FUN_006eaadc();
  iVar3 = 0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0x54;
  *(int *)(unaff_EBP + -0x10) = unaff_EBP + -0x10c;
  while( true ) {
    puStack_150 = (undefined1 *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x5c) = &puStack_154;
    pwStack_158 = (wchar_t *)&DAT_00964310;
    puStack_15c = (undefined4 *)0x6e3b37;
    FUN_004033a1();
    pwStack_158 = (wchar_t *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    puStack_15c = (undefined4 *)0x6e3b4a;
    FUN_0040263d();
    puStack_15c = (undefined4 *)0x6e3b51;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    puStack_154 = (undefined1 *)0x6e3b5c;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x34) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar5 != 0) {
      puStack_150 = (undefined1 *)0x6e3b72;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        puStack_150 = (undefined1 *)0x6e3b83;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    puStack_150 = (undefined1 *)0x6e3b93;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_150 = (undefined1 *)0x6e3b9e;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(iVar3 + *(int *)(unaff_EBP + -0x24));
    if (piVar1 != *(int **)(unaff_EBP + -0x14)) {
      *(int **)(iVar3 + *(int *)(unaff_EBP + -0x24)) = *(int **)(unaff_EBP + -0x14);
      FUN_004125f3();
      if (piVar1 != (int *)0x0) {
        puStack_150 = (undefined1 *)0x6e3bbf;
        (**(code **)(*piVar1 + 8))();
      }
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_150 = (undefined1 *)0x6e3bcf;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_150 = (undefined1 *)0x6e3bda;
        FUN_00878dfb();
      }
    }
    iVar3 = *(int *)(unaff_EBP + -0x24);
    FUN_0040e53d();
    puStack_150 = (undefined1 *)0x6e3bf0;
    iVar5 = FUN_0040e48b();
    puStack_150 = (undefined1 *)(iVar5 + -1);
    puStack_154 = (undefined1 *)0x0;
    pwStack_158 = (wchar_t *)0x0;
    puStack_15c = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14 + iVar3);
    (*DAT_0097b504)();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      puStack_150 = (undefined1 *)0x6e3c13;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x10;
    if (0x5b < *(int *)(unaff_EBP + -0x18)) break;
    iVar3 = *(int *)(unaff_EBP + -0x18);
  }
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x24) + 0x24);
  *piVar1 = *piVar1 + 5;
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x24) + 0x2c);
  *piVar1 = *piVar1 + 5;
  puStack_150 = (undefined1 *)0x6e3c41;
  p_Var7 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                     ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                      (*(int *)(unaff_EBP + -0x24) + 0x60),
                      *(IBinding **)(*(int *)(unaff_EBP + -0x24) + 0x54));
  puStack_150 = (undefined1 *)0x6e3c4e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x24) + 0x5c)
             ,*(IBinding **)p_Var7);
  iVar3 = *(int *)(unaff_EBP + -0x24);
  *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x20);
  iVar5 = *(int *)(unaff_EBP + -0x24);
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar3 + 0x20);
  puStack_150 = (undefined1 *)0xffffffff;
  puStack_154 = (undefined1 *)0x6e3c7a;
  FUN_006eafaf();
  puStack_150 = (undefined1 *)0x6e3c81;
  FUN_006eaaa3();
  puStack_150 = *(undefined1 **)(unaff_EBP + 0x10);
  puStack_154 = *(undefined1 **)(unaff_EBP + 0xc);
  pwStack_158 = *(wchar_t **)(unaff_EBP + 8);
  puStack_15c = (undefined4 *)0x6e3c94;
  FUN_006e24ed();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puStack_150 = (undefined1 *)0x6e3ca6;
    FUN_006eadbe();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  puStack_150 = (undefined1 *)0x4;
  puStack_154 = (undefined1 *)0x4;
  pwStack_158 = (wchar_t *)(unaff_EBP + -0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_15c = (undefined4 *)0x6e3cc2;
  FUN_0087a0b8();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    puStack_150 = (undefined1 *)0x6e3cd3;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    puStack_150 = (undefined1 *)0x6e3ce4;
    (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    puStack_150 = (undefined1 *)0x6e3cf4;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0xa8) = &PTR_FUN_008f00f8;
  FUN_006eb3a5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


