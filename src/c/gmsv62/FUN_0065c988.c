/* FUN_0065c988 - 0x0065c988 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065c988(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_00879bb8();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  bVar3 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar3) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_0065c924(unaff_EBP + -0x10);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar1,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_00403191(&DAT_00980690);
  bVar3 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (bVar3) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_0065c956(unaff_EBP + -0x10);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar1,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = (*DAT_0097b704)();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  do {
    *(int *)(unaff_EBP + -0x10) = (((*(int *)(unaff_EBP + -0x14) - iVar2) + 600) * 0xff) / 600;
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00403191(&DAT_00980690);
    bVar3 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (bVar3) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_0065c924(unaff_EBP + -0x1c);
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar1;
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x18) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x10),0,
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_00403191(&DAT_00980690);
    bVar3 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (bVar3) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_0065c956(unaff_EBP + -0x20);
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00424f2f(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x10),
                 unaff_EBP + -0x50,unaff_EBP + -0x60);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004458c1();
    FUN_0065ce26();
    iVar2 = (*DAT_0097b704)();
    (*DAT_0097b3ec)(0);
  } while (iVar2 - *(int *)(unaff_EBP + -0x14) < 600);
  FUN_00424aee(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004458c1(iVar2);
  FUN_0065c924(iVar2);
  iVar2 = unaff_EBP + -0x50;
  iVar6 = unaff_EBP + -0x60;
  uVar5 = 0;
  uVar4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00424df4(0,0,iVar6,iVar2);
  FUN_00424f2f(uVar4,uVar5,iVar6,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00424aee(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004458c1(iVar2);
  FUN_0065c956(iVar2);
  iVar2 = unaff_EBP + -0x80;
  iVar6 = unaff_EBP + -0x70;
  uVar5 = 0;
  uVar4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00424df4(0,0,iVar6,iVar2);
  FUN_00424f2f(uVar4,uVar5,iVar6,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x80);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004458c1();
  FUN_005698b4();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


