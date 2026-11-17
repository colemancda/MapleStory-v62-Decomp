/* FUN_0063c703 - 0x0063c703 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063c703(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x9c) < 0) {
    if (*(int *)(extraout_ECX + 0x88) < 0) {
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191(&DAT_00980690);
      iVar2 = *(int *)(extraout_ECX + 0x108);
      uVar1 = *(undefined4 *)(extraout_ECX + 0x118);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x70,uVar1,unaff_EBP + -0x3c,unaff_EBP + -0x1c,unaff_EBP + -0x2c,
                   unaff_EBP + -0x5c,unaff_EBP + -0x4c);
      iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = unaff_EBP + -0x4c;
    }
    else {
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00403191(&DAT_00980690);
      iVar2 = *(int *)(extraout_ECX + 0x108);
      uVar1 = *(undefined4 *)(extraout_ECX + 0x114);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x70,uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x5c,unaff_EBP + -0x2c,
                   unaff_EBP + -0x1c,unaff_EBP + -0x3c);
      iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = unaff_EBP + -0x3c;
    }
  }
  else if (*(int *)(extraout_ECX + 0x84) == *(int *)(extraout_ECX + 0x88)) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 10;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)(extraout_ECX + 0x108);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x10c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x70,uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x5c,unaff_EBP + -0x2c,
                 unaff_EBP + -0x1c,unaff_EBP + -0x3c);
    iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = unaff_EBP + -0x3c;
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)(extraout_ECX + 0x108);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x110);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x70,uVar1,unaff_EBP + -0x4c,unaff_EBP + -0x5c,unaff_EBP + -0x2c,
                 unaff_EBP + -0x1c,unaff_EBP + -0x3c);
    iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = unaff_EBP + -0x3c;
  }
  iVar2 = FUN_00402bc3(iVar2);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
  iVar2 = FUN_00402e32(unaff_EBP + -0x84,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  FUN_00403191(&DAT_00980690);
  iVar2 = *(int *)(extraout_ECX + 0x108);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x60);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x74) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x94),
                     *(undefined4 *)(unaff_EBP + -0x90),*(undefined4 *)(unaff_EBP + -0x8c),
                     *(undefined4 *)(unaff_EBP + -0x88),*(undefined4 *)(unaff_EBP + -0x84),
                     *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c),
                     *(undefined4 *)(unaff_EBP + -0x78));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x74),&DAT_00963de8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x94);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x84);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = FUN_007d1e08();
  iVar2 = iVar2 + 1000;
  *(int *)(extraout_ECX + 0xa4) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(extraout_ECX + 0xa4) = iVar2;
  iVar2 = FUN_007d1e08();
  iVar2 = iVar2 + 3000;
  *(int *)(extraout_ECX + 0xa8) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(int *)(extraout_ECX + 0xa8) = iVar2;
  return;
}


