/* FUN_00478703 - 0x00478703 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00478703(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int *piVar4;
  int unaff_EBP;
  undefined1 *puStack_70;
  int iStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  
  FUN_00879bb8();
  piStack_60 = (int *)0x47871a;
  FUN_00479817();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 100) = *puVar1;
  piStack_60 = &DAT_00980690;
  *(undefined4 *)(extraout_ECX + 0x68) = puVar1[1];
  uStack_64 = 0x478736;
  FUN_00403191();
  piStack_60 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x478744;
  FUN_00403191();
  piStack_60 = (int *)0x0;
  uStack_64 = 0;
  puStack_68 = (undefined1 *)(unaff_EBP + -0x3c);
  iStack_6c = unaff_EBP + -0x2c;
  *(undefined1 ***)(unaff_EBP + 8) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_70 = extraout_ECX_00;
  FUN_00679e4e(&puStack_70,0xa98);
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_68 = (undefined1 *)0x478790;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_60 = (int *)(unaff_EBP + -0x14);
    uStack_64 = 0x4787a6;
    piStack_60 = (int *)FUN_00404b30();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      uStack_64 = 0x4787b7;
      FUN_00878dfb();
    }
  }
  piStack_60 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_64 = 0x4787c4;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    uStack_64 = 0x4787cf;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_64 = 0x4787dc;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    uStack_64 = 0x4787e7;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_64 = 0x4787f4;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    uStack_64 = 0x4787ff;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_60 = (int *)0x80004003;
    uStack_64 = 0x47880e;
    FUN_00878dfb();
  }
  piStack_60 = (int *)0x478816;
  uStack_64 = FUN_0040cf4d();
  piStack_60 = (int *)(unaff_EBP + 0xb);
  puStack_68 = (undefined1 *)0x478828;
  FUN_0041725e();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    piStack_60 = (int *)0x478833;
    FUN_0087a1b0();
    piStack_60 = (int *)0x0;
    uStack_64 = 0;
    iStack_6c = *(undefined4 *)(unaff_EBP + 8);
    puStack_70 = (undefined1 *)0x478840;
    puStack_68 = &stack0xffffffa4;
    iStack_6c = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_68;
    puStack_70 = (undefined1 *)0x47884c;
    FUN_004033a1();
    iStack_6c = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_70 = (undefined1 *)0x47885c;
    FUN_0040263d();
    puStack_70 = (undefined1 *)0x478863;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_68 = (undefined1 *)0x47886e;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    piStack_60 = (int *)(unaff_EBP + -0x18);
    uStack_64 = 0x478882;
    piStack_60 = (int *)FUN_0041a581();
    if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
      uStack_64 = 0x478893;
      FUN_00878dfb();
    }
    piStack_60 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_64 = 0x4788a0;
    iVar2 = FUN_00402bc3();
    piVar4 = piStack_60;
    if (iVar2 < 0) {
      uStack_64 = 0x4788ab;
      piStack_60 = (int *)iVar2;
      FUN_00878dfb();
      piVar4 = (int *)extraout_ECX_01;
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 10);
  piStack_60 = (int *)0x0;
  uStack_64 = 0;
  puStack_70 = (undefined1 *)&puStack_68;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_68;
  iStack_6c = 0x598;
  puStack_68 = (undefined1 *)piVar4;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined1 *)0x4788dd;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x4788e4;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_68 = (undefined1 *)0x4788ef;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  piStack_60 = (int *)(unaff_EBP + 8);
  uStack_64 = 0x478900;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    uStack_64 = 0x478911;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_64 = 0x47891e;
  iVar2 = FUN_00402bc3();
  piVar4 = piStack_60;
  if (iVar2 < 0) {
    uStack_64 = 0x478929;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    piVar4 = (int *)extraout_ECX_02;
  }
  piStack_60 = (int *)0x0;
  uStack_64 = 0;
  puStack_70 = (undefined1 *)&puStack_68;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_68;
  iStack_6c = 0x379;
  puStack_68 = (undefined1 *)piVar4;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined1 *)0x47894e;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x478955;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_68 = (undefined1 *)0x478960;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  piStack_60 = (int *)(unaff_EBP + 8);
  uStack_64 = 0x478971;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    uStack_64 = 0x478982;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_64 = 0x47898f;
  iVar2 = FUN_00402bc3();
  piVar4 = piStack_60;
  if (iVar2 < 0) {
    uStack_64 = 0x47899a;
    piStack_60 = (int *)iVar2;
    FUN_00878dfb();
    piVar4 = (int *)extraout_ECX_03;
  }
  piStack_60 = (int *)0x0;
  uStack_64 = 0;
  puStack_70 = (undefined1 *)&puStack_68;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_68;
  iStack_6c = 0x37a;
  puStack_68 = (undefined1 *)piVar4;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined1 *)0x4789bf;
  FUN_0040263d();
  puStack_70 = (undefined1 *)0x4789c6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_68 = (undefined1 *)0x4789d1;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  piStack_60 = (int *)(unaff_EBP + 8);
  uStack_64 = 0x4789e2;
  piStack_60 = (int *)FUN_0041a581();
  if (((int)piStack_60 < 0) && (piStack_60 != (int *)0x80004002)) {
    uStack_64 = 0x4789f3;
    FUN_00878dfb();
  }
  piStack_60 = (int *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_64 = 0x478a00;
  piStack_60 = (int *)FUN_00402bc3();
  if ((int)piStack_60 < 0) {
    uStack_64 = 0x478a0b;
    FUN_00878dfb();
  }
  piStack_60 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_60 != (int *)0x0) {
    uStack_64 = 0x478a1c;
    (**(code **)(*piStack_60 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


