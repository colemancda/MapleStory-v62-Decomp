/* FUN_005fea69 - 0x005fea69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fea69(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int local_b0;
  int iStack_ac;
  int *piStack_a8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x10) == 2) {
    piStack_a8 = (int *)0xbda;
    iStack_ac = unaff_EBP + -0x20;
    local_b0 = 0x5fea9f;
    uVar2 = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    piStack_a8 = (int *)0xbdb;
    iStack_ac = unaff_EBP + -0x1c;
    local_b0 = 0x5feabf;
    uVar2 = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  piStack_a8 = (int *)0x0;
  iStack_ac = 0;
  *(int **)(unaff_EBP + 0x10) = &local_b0;
  FUN_004059fd(uVar2);
  iVar3 = unaff_EBP + -0x94;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  local_b0 = 0x5feafa;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    piStack_a8 = (int *)(unaff_EBP + -0x18);
    iStack_ac = 0x5feb10;
    piStack_a8 = (int *)FUN_00404b30();
    if (((int)piStack_a8 < 0) && (piStack_a8 != (int *)0x80004002)) {
      iStack_ac = 0x5feb21;
      FUN_00878dfb();
    }
  }
  piStack_a8 = (int *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_ac = 0x5feb31;
  piStack_a8 = (int *)FUN_00402bc3();
  if ((int)piStack_a8 < 0) {
    iStack_ac = 0x5feb3c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 7;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    piStack_a8 = (int *)0x5feb54;
    FUN_00402fa6();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    piStack_a8 = (int *)0x5feb66;
    FUN_00402fa6();
  }
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    piStack_a8 = (int *)0x5feb79;
    FUN_0087a1b0();
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x10);
    local_b0 = 0x5feb84;
    piStack_a8 = (int *)&stack0xffffff5c;
    iStack_ac = FUN_00412335();
    *(int ***)(unaff_EBP + -0x34) = &piStack_a8;
    local_b0 = 0x5feb92;
    FUN_00402e8e();
    iStack_ac = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_b0 = 0x5feba2;
    FUN_0040263d();
    local_b0 = 0x5feba9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(short *)(unaff_EBP + -0x30) == 0) {
LAB_005fed35:
      piStack_a8 = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_ac = 0x5fed42;
      piStack_a8 = (int *)FUN_00402bc3();
      if ((int)piStack_a8 < 0) {
        iStack_ac = 0x5fed4d;
        FUN_00878dfb();
      }
      piStack_a8 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_a8 != (int *)0x0) {
        iStack_ac = 0x5fed5e;
        (**(code **)(*piStack_a8 + 8))();
      }
      piStack_a8 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_a8 != (int *)0x0) {
        iStack_ac = 0x5fed6f;
        (**(code **)(*piStack_a8 + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piStack_a8 = (int *)(unaff_EBP + -0x30);
    iStack_ac = unaff_EBP + 0xc;
    local_b0 = 0x5febc4;
    piStack_a8 = (int *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_ac = 0x5febd3;
    FUN_004172b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_a8 = (int *)0x5febdf;
    FUN_004027b3();
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      piStack_a8 = (int *)0x5fed35;
      FUN_004125e6();
      goto LAB_005fed35;
    }
    piStack_a8 = &DAT_00980690;
    iStack_ac = 0x5febf1;
    FUN_00403191();
    piStack_a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_ac = 0x5febfe;
    FUN_00403191();
    piStack_a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_ac = 0x5fec0b;
    FUN_00403191();
    piStack_a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_ac = 0x5fec1b;
    FUN_00403191();
    piStack_a8 = (int *)0x3;
    iStack_ac = 0xb4;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    local_b0 = 0x5fec2e;
    FUN_004031b7();
    iVar1 = *(int *)(iVar3 + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar1 == 0) {
      piStack_a8 = (int *)0x80004003;
      iStack_ac = 0x5fec41;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -100);
    iStack_ac = unaff_EBP + -0x54;
    local_b0 = unaff_EBP + -0x44;
    FUN_004250ac(unaff_EBP + -0xa4,*(undefined4 *)(unaff_EBP + 0x10),unaff_EBP + -0x74,
                 unaff_EBP + -0x84);
    piStack_a8 = (int *)(unaff_EBP + -0xa4);
    iStack_ac = 0x5fec76;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5fec81;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_ac = 0x5fec8e;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5fec99;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_ac = 0x5feca9;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5fecb4;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_ac = 0x5fecc1;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5feccc;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_ac = 0x5fecd9;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5fece4;
      FUN_00878dfb();
    }
    piStack_a8 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_ac = 0x5fecf1;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5fecfc;
      FUN_00878dfb();
    }
    piStack_a8 = *(int **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piStack_a8 != (int *)0x0) {
      iStack_ac = 0x5fed0d;
      (**(code **)(*piStack_a8 + 8))();
    }
    piStack_a8 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_ac = 0x5fed1a;
    piStack_a8 = (int *)FUN_00402bc3();
    if ((int)piStack_a8 < 0) {
      iStack_ac = 0x5fed25;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while( true );
}


