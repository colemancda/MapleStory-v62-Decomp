/* FUN_005b75a5 - 0x005b75a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b75a5(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_d4;
  int iStack_d0;
  undefined4 *puStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 *puStack_9c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((-1 < iVar2) && (iVar2 < *(int *)(extraout_ECX + 0x744))) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    puStack_9c = (undefined4 *)0x3;
    iStack_a0 = 0xfffffffe;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_a4 = 0x5b75e8;
    FUN_004031b7();
    *(int *)(unaff_EBP + -0x18) = iVar2 * 4;
    iVar5 = *(int *)(extraout_ECX + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(iVar2 * 4 + iVar5) == 0) {
      puStack_9c = (undefined4 *)0x80004003;
      iStack_a0 = 0x5b7606;
      FUN_00878dfb();
    }
    puStack_9c = (undefined4 *)(unaff_EBP + -0x44);
    iStack_a0 = unaff_EBP + -0x10;
    iStack_a4 = 0x5b7615;
    FUN_0041141a();
    puStack_9c = (undefined4 *)0x5b761d;
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_9c = (undefined4 *)(unaff_EBP + -0x44);
    iStack_a0 = 0x5b762a;
    puStack_9c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_9c < 0) {
      iStack_a0 = 0x5b7635;
      FUN_00878dfb();
    }
    puStack_9c = (undefined4 *)0x3bc;
    iStack_a0 = unaff_EBP + -0x10;
    iStack_a4 = 0x5b7648;
    puVar1 = (undefined4 *)FUN_00679d22();
    puStack_9c = *(undefined4 **)(*(int *)(extraout_ECX + 0x200) + *(int *)(unaff_EBP + -0x18));
    iStack_a0 = *puVar1;
    iStack_a4 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_a8 = 0x5b7664;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_9c = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      iStack_a0 = 0x5b767b;
      FUN_00434e38();
    }
    puStack_9c = &DAT_00980690;
    iStack_a0 = 0x5b768a;
    FUN_00403191();
    puStack_9c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_a0 = 0x5b7697;
    FUN_00403191();
    puStack_9c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_a0 = 0x5b76a4;
    FUN_00403191();
    puStack_9c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_a0 = 0x5b76b1;
    FUN_00403191();
    puStack_9c = (undefined4 *)0x3;
    iStack_a0 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_a4 = 0x5b76c4;
    FUN_004031b7();
    uStack_a8 = *(undefined4 *)(extraout_ECX + 0x71c);
    puStack_9c = (undefined4 *)0x0;
    iStack_a0 = 0;
    iStack_a4 = 0xffffffff;
    uStack_ac = 0;
    uStack_b0 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_b4 = (undefined4 *)0x5b76e1;
    (*DAT_0097b4c8)();
    puStack_b4 = (undefined4 *)0x5b76ee;
    FUN_0087a1b0();
    puStack_b4 = (undefined4 *)0x0;
    iStack_b8 = 0;
    iStack_bc = -1;
    iStack_c4 = 0x5b76fc;
    puStack_c0 = (undefined1 *)&uStack_b0;
    iStack_c4 = FUN_00449713();
    uStack_c8 = 0x5b7702;
    puStack_c0 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x1c) = &iStack_bc;
    iStack_c4 = 0x5b770f;
    FUN_004033a1();
    puStack_c0 = (undefined1 *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x14) + 0x1cc;
    iStack_c4 = 0x5b772b;
    FUN_0040263d();
    iStack_c4 = 0x5b7732;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_bc = 0x5b773d;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      puStack_b4 = (undefined4 *)(unaff_EBP + -0x48);
      iStack_b8 = 0x5b7753;
      puStack_b4 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_b4 < 0) && (puStack_b4 != (undefined4 *)0x80004002)) {
        iStack_b8 = 0x5b7764;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + iVar2) == 0) {
      puStack_b4 = (undefined4 *)0x80004003;
      iStack_b8 = 0x5b7788;
      FUN_00878dfb();
    }
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
    iStack_b8 = unaff_EBP + -0x58;
    iStack_bc = unaff_EBP + -0x68;
    puStack_c0 = (undefined1 *)(unaff_EBP + -0x78);
    iStack_c4 = unaff_EBP + -0x44;
    uStack_c8 = *(undefined4 *)(unaff_EBP + -0x1c);
    puStack_cc = (undefined4 *)(unaff_EBP + -0x88);
    iStack_d0 = 0x5b77af;
    FUN_004250ac();
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x88);
    iStack_b8 = 0x5b77bb;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b77c6;
      FUN_00878dfb();
    }
    puStack_b4 = (undefined4 *)0x5b77ce;
    FUN_004125e6();
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_b8 = 0x5b77de;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b77e9;
      FUN_00878dfb();
    }
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_b8 = 0x5b77f6;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b7801;
      FUN_00878dfb();
    }
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_b8 = 0x5b780e;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b7819;
      FUN_00878dfb();
    }
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_b8 = 0x5b7826;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b7831;
      FUN_00878dfb();
    }
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b8 = 0x5b783e;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b7849;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
    iStack_b8 = 0x5b7856;
    puStack_b4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      iStack_b8 = 0x5b7861;
      FUN_00878dfb();
    }
    puStack_b4 = &DAT_00980690;
    iStack_b8 = 0x5b786a;
    FUN_00403191();
    puStack_b4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_b8 = 0x5b7877;
    FUN_00403191();
    puStack_b4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_b8 = 0x5b7884;
    FUN_00403191();
    puStack_b4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_b8 = 0x5b7891;
    FUN_00403191();
    puStack_b4 = (undefined4 *)0x3;
    iStack_b8 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_bc = 0x5b78a4;
    FUN_004031b7();
    puStack_b4 = (undefined4 *)0x0;
    iStack_b8 = 0;
    iStack_bc = -1;
    puStack_c0 = *(undefined1 **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_c4 = 0;
    uStack_c8 = 0;
    puStack_cc = (undefined4 *)0x5b78b7;
    (*DAT_0097b4c8)();
    puStack_cc = (undefined4 *)0x5b78c4;
    FUN_0087a1b0();
    puStack_cc = (undefined4 *)0x0;
    iStack_d0 = 0;
    iStack_d4 = -1;
    uVar3 = FUN_00449713(&uStack_c8);
    uVar3 = FUN_00456ad5(uVar3);
    *(int **)(unaff_EBP + -0x48) = &iStack_d4;
    FUN_004033a1(uVar3);
    iVar2 = unaff_EBP + -0x88;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_d4 = 0x5b790b;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      puStack_cc = (undefined4 *)(unaff_EBP + -0x1c);
      iStack_d0 = 0x5b7921;
      puStack_cc = (undefined4 *)FUN_0041a581();
      if (((int)puStack_cc < 0) && (puStack_cc != (undefined4 *)0x80004002)) {
        iStack_d0 = 0x5b7932;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + iVar2) == 0) {
      puStack_cc = (undefined4 *)0x80004003;
      iStack_d0 = 0x5b7956;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x44);
    iStack_d0 = unaff_EBP + -0x78;
    iStack_d4 = unaff_EBP + -0x68;
    FUN_004250ac(unaff_EBP + -0x98,*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x34,
                 unaff_EBP + -0x58);
    puStack_cc = (undefined4 *)(unaff_EBP + -0x98);
    iStack_d0 = 0x5b7989;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b7994;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)0x5b799c;
    FUN_004125e6();
    puStack_cc = (undefined4 *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_d0 = 0x5b79ac;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b79b7;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_d0 = 0x5b79c4;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b79cf;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_d0 = 0x5b79dc;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b79e7;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_d0 = 0x5b79f4;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b79ff;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_d0 = 0x5b7a0c;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b7a17;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_cc = (undefined4 *)(unaff_EBP + -0x44);
    iStack_d0 = 0x5b7a24;
    puStack_cc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      iStack_d0 = 0x5b7a2f;
      FUN_00878dfb();
    }
    puStack_cc = &DAT_00980690;
    iStack_d0 = 0x5b7a38;
    FUN_00403191();
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + iVar2) == 0) {
      puStack_cc = (undefined4 *)0x80004003;
      iStack_d0 = 0x5b7a56;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)0x5b7a5d;
    iStack_d0 = FUN_0042a378();
    iStack_d0 = iStack_d0 + 600;
    puStack_cc = (undefined4 *)0x3;
    iStack_d4 = 0x5b7a6d;
    FUN_004031b7();
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + iVar2) == 0) {
      puStack_cc = (undefined4 *)0x80004003;
      iStack_d0 = 0x5b7a8b;
      FUN_00878dfb();
    }
    puStack_cc = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_d0 = 0x5b7a96;
    piVar4 = (int *)FUN_0042bc90();
    iVar2 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar2 == 0) {
      puStack_cc = (undefined4 *)0x80004003;
      iStack_d0 = 0x5b7aaa;
      FUN_00878dfb();
    }
    piVar4 = (int *)*piVar4;
    iStack_d4 = *(int *)(unaff_EBP + -0x54);
    iVar2 = *piVar4;
    iStack_d0 = *(undefined4 *)(unaff_EBP + -0x50);
    puStack_cc = *(undefined4 **)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x20) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar4,0xffffffcf,0x3e,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x58));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    piVar4 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)(unaff_EBP + -0x14);
    iVar5 = *(int *)(iVar2 + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + iVar5) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = FUN_0042a378();
    FUN_004031b7(iVar5 + 600,3);
    piVar4 = (int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(iVar2 + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*piVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = *(int *)(iVar2 + 0x7dc);
    *(int *)(unaff_EBP + -0x10) = *piVar4;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x10),
                       (*(int *)(unaff_EBP + 8) % iVar5) * 0x38 + 0x31 + *(int *)(iVar2 + 0x7e0),
                       (*(int *)(unaff_EBP + 8) / iVar5) * 0x43 + *(int *)(iVar2 + 0x7e4),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iVar2 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00403191(&DAT_00980690);
    piVar4 = (int *)(*(int *)(unaff_EBP + -0x18) + *(int *)(*(int *)(unaff_EBP + -0x14) + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (*piVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar2 = (**(code **)(*piVar4 + 0x110))
                      (piVar4,0,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      iVar2 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(iVar2 + 0x754) = 1;
      iVar5 = FUN_007d1e08();
      *(int *)(iVar2 + 0x74c) = iVar5 + 900;
    }
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x622);
    uVar3 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_007d40d5(uVar3,100);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


