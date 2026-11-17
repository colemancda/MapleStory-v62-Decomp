/* FUN_00596a63 - 0x00596a63 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00596a63(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar4;
  int unaff_EBP;
  int iStack_c0;
  int *piStack_bc;
  undefined4 *puStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x28);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar2 == 0) {
    puStack_74 = (undefined4 *)0x596a89;
    uVar1 = (*DAT_0097b704)();
    puStack_74 = &DAT_00980690;
    *(undefined4 *)(extraout_ECX + 0x28) = uVar1;
    uStack_78 = 0x596a9a;
    FUN_00403191();
    puStack_74 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_78 = 0x596aa6;
    FUN_00403191();
    iVar2 = *(int *)(extraout_ECX + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      puStack_74 = (undefined4 *)0x80004003;
      uStack_78 = 0x596ab9;
      FUN_00878dfb();
    }
    puStack_74 = (undefined4 *)(unaff_EBP + -0x1c);
    uStack_78 = 0x596ac5;
    piStack_9c = (int *)FUN_004113e5();
    iVar2 = *piStack_9c;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      puStack_74 = (undefined4 *)0x80004003;
      uStack_78 = 0x596ad9;
      FUN_00878dfb();
    }
    piStack_9c = (int *)*piStack_9c;
    uStack_80 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_7c = *(undefined4 *)(unaff_EBP + -0x3c);
    iVar2 = *piStack_9c;
    uStack_78 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_74 = *(undefined4 **)(unaff_EBP + -0x34);
    uStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_94 = 0xff;
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_98 = 0xff;
    *(int **)(unaff_EBP + -0x18) = piStack_9c;
    uStack_84 = *(undefined4 *)(unaff_EBP + -0x24);
    puStack_a0 = (undefined4 *)0x596b06;
    iVar2 = (**(code **)(iVar2 + 0x90))();
    if (iVar2 < 0) {
      puStack_a0 = (undefined4 *)&DAT_00963de8;
      iStack_a4 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_ac = 0x596b18;
      iStack_a8 = iVar2;
      FUN_00878e09();
    }
    puStack_a0 = (undefined4 *)0x596b20;
    FUN_004125d9();
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_a4 = 0x596b2c;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x596b37;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x40);
    iStack_a4 = 0x596b44;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x596b4f;
      FUN_00878dfb();
    }
    puStack_a0 = &DAT_00980690;
    iStack_a4 = 0x596b5d;
    FUN_00403191();
    puStack_a0 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_a4 = 0x596b6d;
    FUN_00403191();
    puStack_a0 = (undefined4 *)0x0;
    iStack_a4 = 0;
    iStack_a8 = unaff_EBP + -0x30;
    iStack_ac = unaff_EBP + -0x40;
    puStack_b8 = &uStack_b0;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_b0;
    piStack_b4 = (int *)0x566;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_bc = (int *)0x596b91;
    FUN_00679e4e();
    piStack_b4 = (int *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_b8 = (undefined4 *)0x596b9e;
    FUN_00405a1d();
    puStack_b8 = (undefined4 *)0x596ba5;
    FUN_00402660();
    puStack_b8 = (undefined4 *)0x596bac;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_a8 = 0x596bb7;
    uVar1 = FUN_004032b4();
    iVar2 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_a4 = 0x596bc9;
    puStack_a0 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_a0 < 0) && (puStack_a0 != (undefined4 *)0x80004002)) {
      iStack_a4 = 0x596bda;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_a4 = 0x596be7;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x596bf2;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_a4 = 0x596bff;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x596c0a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x30);
    iStack_a4 = 0x596c17;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x596c22;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)0x3;
    iStack_a4 = 0;
    iStack_a8 = 0x596c2d;
    FUN_004031b7();
    iVar2 = *(int *)(iVar2 + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 7;
    if (iVar2 == 0) {
      puStack_a0 = (undefined4 *)0x80004003;
      iStack_a4 = 0x596c43;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x40);
    iStack_a4 = unaff_EBP + -0x1c;
    iStack_a8 = 0x596c53;
    piVar3 = (int *)FUN_00425067();
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      puStack_a0 = (undefined4 *)0x80004003;
      iStack_a4 = 0x596c67;
      FUN_00878dfb();
    }
    piVar3 = (int *)*piVar3;
    puStack_a0 = (undefined4 *)0xffffffff;
    iStack_a4 = 600;
    iStack_a8 = 800;
    iStack_ac = 0;
    uStack_b0 = 0;
    puStack_b8 = (undefined4 *)0x596c80;
    piStack_b4 = piVar3;
    iVar2 = (**(code **)(*piVar3 + 0x8c))();
    if (iVar2 < 0) {
      puStack_b8 = (undefined4 *)&DAT_00963cc8;
      iStack_c0 = iVar2;
      piStack_bc = piVar3;
      FUN_00878e09();
    }
    puStack_b8 = (undefined4 *)0x596c98;
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x40);
    piStack_bc = (int *)0x596ca5;
    iVar2 = FUN_00402bc3();
    puVar4 = puStack_b8;
    if (iVar2 < 0) {
      piStack_bc = (int *)0x596cb0;
      puStack_b8 = (undefined4 *)iVar2;
      FUN_00878dfb();
      puVar4 = (undefined4 *)extraout_ECX_00;
    }
    puStack_b8 = (undefined4 *)0x0;
    piStack_bc = (int *)0x0;
    *(int **)(unaff_EBP + -0x20) = &iStack_c0;
    iStack_c0 = (int)puVar4;
    FUN_004033a1(&DAT_00965980);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = unaff_EBP + -0x70;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 10;
    iStack_c0 = 0x596cea;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      puStack_b8 = (undefined4 *)(unaff_EBP + -0x1c);
      piStack_bc = (int *)0x596d00;
      puStack_b8 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_b8 < 0) && (puStack_b8 != (undefined4 *)0x80004002)) {
        piStack_bc = (int *)0x596d11;
        FUN_00878dfb();
      }
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_bc = (int *)0x596d1e;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x596d29;
      FUN_00878dfb();
    }
    puStack_b8 = &DAT_00980690;
    piStack_bc = (int *)0x596d32;
    FUN_00403191();
    puStack_b8 = (undefined4 *)0x3;
    piStack_bc = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_c0 = 0x596d41;
    FUN_004031b7();
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (iVar2 == 0) {
      puStack_b8 = (undefined4 *)0x80004003;
      piStack_bc = (int *)0x596d57;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x50);
    piStack_bc = (int *)(unaff_EBP + -0x18);
    iStack_c0 = 0x596d67;
    FUN_00425067();
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x60);
    piStack_bc = *(int **)(unaff_EBP + -0x14);
    iStack_c0 = 0;
    uVar1 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_004115d9(0);
    FUN_00470739(uVar1);
    puStack_b8 = (undefined4 *)0x596d8a;
    FUN_004125e6();
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_bc = (int *)0x596d97;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x596da2;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_bc = (int *)0x596daf;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x596dba;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)0x596dc2;
    FUN_004125e6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


