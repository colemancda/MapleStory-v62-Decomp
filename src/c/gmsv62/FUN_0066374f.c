/* FUN_0066374f - 0x0066374f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066374f(void)

{
  double dVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  int iVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar7 = *(int *)(unaff_EBP + 0xc);
  iVar3 = FUN_00413367(iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x20));
  *(int *)(unaff_EBP + -0x10) = iVar3 / 100;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 8) = uVar4;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x38) = uVar4;
  FUN_00413367(iVar7 + 0x3c,*(undefined4 *)(iVar7 + 0x44));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x68) = uVar4;
  FUN_00413367(iVar7 + 0x3c,*(undefined4 *)(iVar7 + 0x44));
  uVar4 = FUN_004133b5();
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(extraout_ECX + 0x98) = uVar4;
  if (iVar3 == 5) {
    iVar3 = FUN_00413367(iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x20));
    if (iVar3 / 10 == 0x33) {
      uVar5 = FUN_00413367(iVar7 + 0x48,*(undefined4 *)(iVar7 + 0x50));
      uVar4 = *(undefined4 *)(iVar7 + 0x38);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      uVar4 = FUN_00413367(iVar7 + 0x30,uVar4);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + -0x10) / 2;
      __ftol();
    }
    else {
      iVar3 = FUN_00413367(iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x20));
      if (iVar3 / 10 == 0x34) {
        uVar5 = FUN_00413367(iVar7 + 0x48,*(undefined4 *)(iVar7 + 0x50));
        uVar4 = *(undefined4 *)(iVar7 + 0x38);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        FUN_00413367(iVar7 + 0x30,uVar4);
      }
      else {
        uVar5 = FUN_00413367(iVar7 + 0x48,*(undefined4 *)(iVar7 + 0x50));
        uVar4 = *(undefined4 *)(iVar7 + 0x38);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
        iVar3 = FUN_00413367(iVar7 + 0x30,uVar4);
        *(int *)(unaff_EBP + 0xc) = iVar3 / 4 + *(int *)(unaff_EBP + 0xc) / 2;
        uVar4 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
      }
    }
    iVar6 = iVar7 + 0x48;
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
    iVar3 = FUN_00413367(iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x20));
    if (iVar3 / 10 == 0x33) {
      uVar5 = FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
      uVar4 = *(undefined4 *)(iVar7 + 0x50);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
      uVar4 = FUN_00413367(iVar6,uVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    }
    else {
      iVar3 = FUN_00413367(iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x20));
      if (iVar3 / 10 == 0x34) {
        uVar5 = FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
        uVar4 = *(undefined4 *)(iVar7 + 0x50);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
        uVar4 = FUN_00413367(iVar6,uVar4);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      }
      else {
        uVar5 = FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
        uVar4 = *(undefined4 *)(iVar7 + 0x50);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
        uVar4 = FUN_00413367(iVar6,uVar4);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      }
    }
  }
  else {
    iVar3 = iVar7 + 0x48;
    uVar5 = FUN_00413367(iVar3,*(undefined4 *)(iVar7 + 0x50));
    uVar4 = *(undefined4 *)(iVar7 + 0x38);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    FUN_00413367(iVar7 + 0x30,uVar4);
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) - (*(int *)(unaff_EBP + 0xc) >> 0x1f);
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) >> 1;
    uVar4 = FUN_004133b5();
    iVar6 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
    if ((iVar6 == 3) || (*(int *)(unaff_EBP + -0x10) == 4)) {
      uVar5 = FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
      uVar4 = *(undefined4 *)(iVar7 + 0x50);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      uVar4 = FUN_00413367(iVar3,uVar4);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
    }
    else {
      uVar5 = FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
      uVar4 = *(undefined4 *)(iVar7 + 0x50);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
      uVar4 = FUN_00413367(iVar3,uVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    }
  }
  __ftol();
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 200) = uVar4;
  uVar5 = FUN_00413367(iVar7 + 0x3c,*(undefined4 *)(iVar7 + 0x44));
  uVar4 = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  uVar5 = FUN_00413367(iVar7 + 0x30,uVar4);
  uVar4 = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  FUN_00413367(iVar7 + 0x48,uVar4);
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x128) = uVar4;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x158) = uVar4;
  uVar5 = FUN_004133b5();
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x188) = uVar5;
  uVar4 = FUN_00652ec0(uVar4);
  *(undefined4 *)(unaff_EBP + 0xc) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  do {
    iVar3 = *(int *)(unaff_EBP + 0xc);
    if (iVar3 < -0x30) {
      iVar8 = *(int *)(unaff_EBP + 0x18);
      iVar6 = iVar3 * 8 + 0x180;
    }
    else {
      iVar8 = *(int *)(unaff_EBP + 0x14);
      iVar6 = iVar3 << 3;
    }
    if (*(int *)((iVar8 - iVar6) + 4) == 0) {
      if ((iVar3 == -0xb) &&
         (iVar3 = FUN_00413367(iVar7 + 0x18,*(undefined4 *)(iVar7 + 0x20)), iVar3 / 100 == 5)) {
        iVar3 = FUN_00413367(iVar7 + 0xc,*(undefined4 *)(iVar7 + 0x14));
        dVar1 = _DAT_008ed6f0;
        if (iVar3 < 0x1f) {
          uVar4 = FUN_00413367(iVar7 + 0xc,*(undefined4 *)(iVar7 + 0x14));
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
          dVar1 = (double)*(int *)(unaff_EBP + -0x10) * _DAT_008ed6f8 + _DAT_008ecb38;
        }
        uVar4 = *(undefined4 *)(extraout_ECX + 8);
        *(double *)(unaff_EBP + -0x28) = dVar1;
        uVar4 = FUN_00413367(extraout_ECX,uVar4);
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        __ftol();
        uVar4 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 8) = uVar4;
      }
    }
    else if (((((iVar3 != -0x1e) && (*(int *)(unaff_EBP + 0xc) != -0x26)) &&
              (*(int *)(unaff_EBP + 0xc) != -0x1f)) &&
             (((*(int *)(unaff_EBP + 0xc) != -0x27 && (*(int *)(unaff_EBP + 0xc) != -0x20)) &&
              (*(int *)(unaff_EBP + 0xc) != -0x28)))) &&
            ((iVar3 = FUN_004bf0d4(), iVar3 != 0 ||
             (((*(int *)(unaff_EBP + 0xc) != -0x12 && (*(int *)(unaff_EBP + 0xc) != -0x13)) &&
              (*(int *)(unaff_EBP + 0xc) != -0x14)))))) {
      iVar3 = *(int *)((iVar8 - iVar6) + 4);
      uVar5 = FUN_00413367(extraout_ECX,*(undefined4 *)(extraout_ECX + 8));
      uVar4 = *(undefined4 *)(iVar3 + 0x68);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 100,uVar4);
      uVar4 = FUN_004133b5();
      iVar6 = *(int *)(unaff_EBP + 0xc);
      *(undefined4 *)(extraout_ECX + 8) = uVar4;
      if (iVar6 == -10) {
        sVar2 = FUN_0045f084(iVar3 + 0x74,*(undefined4 *)(iVar3 + 0x78));
        iVar6 = ((int)sVar2 * *(int *)(unaff_EBP + -0x20)) / 100;
      }
      else {
        sVar2 = FUN_0045f084(iVar3 + 0x74,*(undefined4 *)(iVar3 + 0x78));
        iVar6 = (int)sVar2;
      }
      uVar4 = *(undefined4 *)(extraout_ECX + 0x38);
      *(int *)(unaff_EBP + -0x10) = iVar6;
      FUN_00413367(extraout_ECX + 0x30,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x38) = uVar4;
      uVar5 = FUN_00413367(extraout_ECX + 0x60,*(undefined4 *)(extraout_ECX + 0x68));
      uVar4 = *(undefined4 *)(iVar3 + 0x70);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 0x6c,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x68) = uVar4;
      uVar5 = FUN_00413367(extraout_ECX + 0x90,*(undefined4 *)(extraout_ECX + 0x98));
      uVar4 = *(undefined4 *)(iVar3 + 0x80);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 0x7c,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x98) = uVar4;
      uVar5 = FUN_00413367(extraout_ECX + 0xc0,*(undefined4 *)(extraout_ECX + 200));
      uVar4 = *(undefined4 *)(iVar3 + 0x88);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 0x84,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 200) = uVar4;
      uVar5 = FUN_00413367(extraout_ECX + 0xf0,*(undefined4 *)(extraout_ECX + 0xf8));
      uVar4 = *(undefined4 *)(iVar3 + 0x90);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 0x8c,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
      uVar5 = FUN_00413367(extraout_ECX + 0x150,*(undefined4 *)(extraout_ECX + 0x158));
      uVar4 = *(undefined4 *)(iVar3 + 0xa0);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 0x9c,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x158) = uVar4;
      uVar5 = FUN_00413367(extraout_ECX + 0x180,*(undefined4 *)(extraout_ECX + 0x188));
      uVar4 = *(undefined4 *)(iVar3 + 0xa8);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      FUN_0045f084(iVar3 + 0xa4,uVar4);
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x188) = uVar4;
    }
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + -1;
  } while (-0x61 < *(int *)(unaff_EBP + 0xc));
  iVar3 = FUN_00650dae(*(undefined4 *)(unaff_EBP + 8),3000000,&DAT_0097b134);
  *(int *)(unaff_EBP + 0xc) = iVar3;
  if (iVar3 != 0) {
    uVar4 = FUN_00413367(extraout_ECX + 0xc0,*(undefined4 *)(extraout_ECX + 200));
    *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
    iVar3 = FUN_006509a1(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 200) = uVar4;
  }
  iVar3 = FUN_00650dae(*(undefined4 *)(unaff_EBP + 8),4000000,&DAT_0097b138);
  *(int *)(unaff_EBP + 0xc) = iVar3;
  if (iVar3 != 0) {
    uVar4 = FUN_00413367(extraout_ECX + 0xc0,*(undefined4 *)(extraout_ECX + 200));
    *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
    iVar3 = FUN_006509a1(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 200) = uVar4;
    uVar4 = FUN_00413367(extraout_ECX + 0xf0,*(undefined4 *)(extraout_ECX + 0xf8));
    *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
    iVar3 = FUN_006509a1(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_00413367(iVar3 + 0x148,*(undefined4 *)(iVar3 + 0x150));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
  }
  iVar3 = FUN_00650dae(*(undefined4 *)(unaff_EBP + 8),5000000,&DAT_0097b13c);
  *(int *)(unaff_EBP + 0xc) = iVar3;
  if (iVar3 != 0) {
    uVar4 = FUN_00413367(extraout_ECX + 0xc0,*(undefined4 *)(extraout_ECX + 200));
    *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
    iVar3 = FUN_006509a1(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 200) = uVar4;
    uVar4 = FUN_00413367(extraout_ECX + 0xf0,*(undefined4 *)(extraout_ECX + 0xf8));
    *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
    iVar3 = FUN_006509a1(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_00413367(iVar3 + 0x148,*(undefined4 *)(iVar3 + 0x150));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
  }
  if (*(int *)(*(int *)(unaff_EBP + 0x14) + 0x5c) == 0) {
    FUN_0048b92c(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  uVar4 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) && (*(int *)(unaff_EBP + -0x24) != 0)) {
    FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x24));
  }
  uVar4 = *(undefined4 *)(iVar7 + 0x20);
  iVar3 = iVar7 + 0x18;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + 0x14) = 0;
  iVar6 = FUN_00413367(iVar3,uVar4);
  if (((iVar6 / 100 == 3) ||
      (iVar6 = FUN_00413367(iVar3,*(undefined4 *)(iVar7 + 0x20)), iVar6 / 10 == 0x29)) ||
     (iVar7 = FUN_00413367(iVar3,*(undefined4 *)(iVar7 + 0x20)), iVar7 / 10 == 0x34)) {
    *(undefined4 *)(unaff_EBP + 0x14) = 1;
  }
  iVar7 = FUN_00652c29(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + 0x14),0,unaff_EBP + -0x18,unaff_EBP + -0x1c);
  if (iVar7 != 0) {
    FUN_00413367(extraout_ECX + 0xc0,*(undefined4 *)(extraout_ECX + 200));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 200) = uVar4;
    FUN_00413367(extraout_ECX,*(undefined4 *)(extraout_ECX + 8));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 8) = uVar4;
  }
  FUN_00413367(extraout_ECX + 0x150,*(undefined4 *)(extraout_ECX + 0x158));
  FUN_00653c22(*(undefined4 *)(unaff_EBP + 8));
  uVar4 = FUN_004133b5();
  iVar7 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x158) = uVar4;
  iVar3 = FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x30,*(undefined4 *)(iVar7 + 0x38));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 8) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x3c,*(undefined4 *)(iVar7 + 0x44));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x3c,*(undefined4 *)(iVar7 + 0x44));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x38) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x48,*(undefined4 *)(iVar7 + 0x50));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x48,*(undefined4 *)(iVar7 + 0x50));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x68) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x54,*(undefined4 *)(iVar7 + 0x5c));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x54,*(undefined4 *)(iVar7 + 0x5c));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x98) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x60,*(undefined4 *)(iVar7 + 0x68));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x60,*(undefined4 *)(iVar7 + 0x68));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 200) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x6c,*(undefined4 *)(iVar7 + 0x74));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x6c,*(undefined4 *)(iVar7 + 0x74));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x78,*(undefined4 *)(iVar7 + 0x80));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x78,*(undefined4 *)(iVar7 + 0x80));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x158) = uVar4;
  }
  iVar3 = FUN_00413367(iVar7 + 0x84,*(undefined4 *)(iVar7 + 0x8c));
  if (0 < iVar3) {
    FUN_00413367(iVar7 + 0x84,*(undefined4 *)(iVar7 + 0x8c));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x188) = uVar4;
  }
  FUN_00413367(extraout_ECX,*(undefined4 *)(extraout_ECX + 8));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 8) = uVar4;
  FUN_00413367(extraout_ECX + 0x30,*(undefined4 *)(extraout_ECX + 0x38));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x38) = uVar4;
  FUN_00413367(extraout_ECX + 0x60,*(undefined4 *)(extraout_ECX + 0x68));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x68) = uVar4;
  FUN_00413367(extraout_ECX + 0x90,*(undefined4 *)(extraout_ECX + 0x98));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x98) = uVar4;
  FUN_00413367(extraout_ECX + 0xc0,*(undefined4 *)(extraout_ECX + 200));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 200) = uVar4;
  FUN_00413367(extraout_ECX + 0xf0,*(undefined4 *)(extraout_ECX + 0xf8));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xf8) = uVar4;
  FUN_00413367(extraout_ECX + 0x150,*(undefined4 *)(extraout_ECX + 0x158));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x158) = uVar4;
  FUN_00413367(extraout_ECX + 0x180,*(undefined4 *)(extraout_ECX + 0x188));
  uVar4 = FUN_004133b5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x188) = uVar4;
  return;
}


