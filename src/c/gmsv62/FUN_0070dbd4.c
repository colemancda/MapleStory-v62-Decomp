/* FUN_0070dbd4 - 0x0070dbd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070dbd4(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0xc0);
  piStack_40 = (int *)0x70dbf7;
  FUN_00424ed4();
  piStack_40 = (int *)0xffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_44 = 0x70dc08;
  FUN_0070de48();
  piStack_40 = (int *)0x70dc0d;
  iVar1 = FUN_007d1e08();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_40 = &DAT_00980690;
    iStack_44 = 0x70dc28;
    FUN_00403191();
    piStack_40 = (int *)0x3;
    iStack_44 = iVar1 + 0x1e0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_40 = (int *)0x80004003;
      iStack_44 = 0x70dc50;
      FUN_00878dfb();
    }
    piStack_40 = (int *)(unaff_EBP + -0x18);
    iStack_44 = 0x70dc5c;
    piVar2 = (int *)FUN_004113e5();
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar1 == 0) {
      piStack_40 = (int *)0x80004003;
      iStack_44 = 0x70dc70;
      FUN_00878dfb();
    }
    piVar2 = (int *)*piVar2;
    iVar1 = *piVar2;
    iStack_44 = *(int *)(unaff_EBP + -0x34);
    piStack_40 = *(int **)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + -0x14) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar1 < 0) {
      piStack_40 = (int *)&DAT_00963de8;
      iStack_44 = *(int *)(unaff_EBP + -0x14);
      FUN_00878e09(iVar1);
    }
    piStack_40 = (int *)0x70dcb4;
    FUN_004125d9();
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_44 = 0x70dcc1;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      iStack_44 = 0x70dccc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    iStack_44 = 0x70dcd9;
    iVar1 = FUN_00402bc3();
    iStack_44 = (int)piStack_40;
    if (iVar1 < 0) {
      iStack_44 = 0x70dce4;
      piStack_40 = (int *)iVar1;
      FUN_00878dfb();
      iStack_44 = extraout_ECX_00;
    }
    piStack_40 = (int *)0x1e0;
    *(int **)(unaff_EBP + -0x18) = &iStack_44;
    FUN_0041160e(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00424e82();
    FUN_00427b38();
    iVar1 = *(int *)(unaff_EBP + -0x1c);
  }
  if (*(int *)(extraout_ECX + 0xc0) != 0) {
    piStack_40 = &DAT_00980690;
    iStack_44 = 0x70dd26;
    FUN_00403191();
    piStack_40 = (int *)0x3;
    iStack_44 = iVar1 + 0x1e0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004031b7();
    iVar1 = *(int *)(extraout_ECX + 0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar1 == 0) {
      piStack_40 = (int *)0x80004003;
      iStack_44 = 0x70dd51;
      FUN_00878dfb();
    }
    piStack_40 = (int *)(unaff_EBP + -0x18);
    iStack_44 = 0x70dd60;
    piVar2 = (int *)FUN_004113e5();
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar1 == 0) {
      piStack_40 = (int *)0x80004003;
      iStack_44 = 0x70dd74;
      FUN_00878dfb();
    }
    piVar2 = (int *)*piVar2;
    iVar1 = *piVar2;
    iStack_44 = *(int *)(unaff_EBP + -0x24);
    piStack_40 = *(int **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x1c) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar1 < 0) {
      piStack_40 = (int *)&DAT_00963de8;
      iStack_44 = *(int *)(unaff_EBP + -0x1c);
      FUN_00878e09(iVar1);
    }
    piStack_40 = (int *)0x70ddbb;
    FUN_004125d9();
    piStack_40 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_44 = 0x70ddc8;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      iStack_44 = 0x70ddd3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_40 = (int *)(unaff_EBP + -0x2c);
    iStack_44 = 0x70dde0;
    piStack_40 = (int *)FUN_00402bc3();
    if ((int)piStack_40 < 0) {
      iStack_44 = 0x70ddeb;
      FUN_00878dfb();
    }
  }
  piStack_40 = (int *)0x70ddf2;
  FUN_0070d29b();
  piStack_40 = (int *)0x70ddf9;
  uVar3 = FUN_0070e29f();
  if (-1 < (int)uVar3) {
    iVar1 = *(int *)(extraout_ECX + 0x7c);
    if ((iVar1 != 0) && (uVar3 < *(uint *)(iVar1 + -4))) {
      iStack_44 = iVar1 + uVar3 * 4;
      piStack_40 = (int *)0xc;
      FUN_00471102();
    }
    if (0 < (int)uVar3) {
      piStack_40 = (int *)0x1d;
      iStack_44 = *(int *)(extraout_ECX + 100);
      FUN_007d3d3e();
    }
  }
  piStack_40 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    iStack_44 = 0x70de39;
    (**(code **)(*piStack_40 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


