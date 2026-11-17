/* FUN_0068db8b - 0x0068db8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068db8b(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  int *piStack_b8;
  undefined1 *puStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int *piStack_a8;
  undefined4 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 *puStack_44;
  
  FUN_00879bb8();
  puStack_44 = *(undefined4 **)(unaff_EBP + 8);
  iStack_48 = 0x68dba5;
  FUN_005c11da();
  puStack_44 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_48 = 0x68dbb0;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_48 = *(int *)(DAT_00978368 + 0x2098);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iStack_48 == 0) {
    iStack_48 = 0;
  }
  else {
    iStack_48 = iStack_48 + 4;
  }
  puStack_44 = (undefined4 *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uStack_4c = 0x68dbe0;
  FUN_00414edd();
  puStack_44 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_48 = 0x68dbf2;
  FUN_00403191();
  puStack_44 = (undefined4 *)0x0;
  iStack_48 = 0;
  uStack_4c = 0xffffffff;
  uStack_50 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_54 = 0;
  uStack_58 = 0;
  puStack_5c = (undefined4 *)0x68dc05;
  (*DAT_0097b4c8)();
  puStack_5c = (undefined4 *)0x68dc12;
  FUN_0087a1b0();
  puStack_5c = (undefined4 *)(unaff_EBP + -0x40);
  uStack_60 = 0xffffffff;
  uStack_68 = 0x68dc23;
  puStack_64 = (undefined1 *)&uStack_58;
  uStack_68 = FUN_00449713();
  uStack_6c = 0x68dc29;
  puStack_64 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_60;
  uStack_68 = 0x68dc36;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_64 = (undefined1 *)0x68dc45;
  FUN_0044974c();
  puStack_64 = (undefined1 *)0x68dc4c;
  iVar1 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
  puStack_5c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_60 = 0x68dc5f;
  puStack_5c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    uStack_60 = 0x68dc6a;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x1a0) == 0) {
    puStack_5c = (undefined4 *)0x80004003;
    uStack_60 = 0x68dc7c;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)0x68dc87;
  FUN_004a2734();
  puStack_5c = &DAT_00980690;
  uStack_60 = 0x68dc90;
  FUN_00403191();
  puStack_5c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_60 = 0x68dc9d;
  FUN_00403191();
  puStack_5c = (undefined4 *)0x0;
  uStack_60 = 0;
  puStack_64 = (undefined1 *)0xffffffff;
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_6c = 0;
  uStack_70 = 0;
  puStack_74 = (undefined4 *)0x68dcb0;
  (*DAT_0097b4c8)();
  puStack_74 = (undefined4 *)0x68dcbd;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_70;
  puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_78 = unaff_EBP + -0x40;
  iStack_7c = 0x68dcd3;
  iStack_7c = FUN_00449749();
  uStack_80 = 0xffffffff;
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_88 = 0x68dce1;
  iStack_88 = FUN_00449713();
  puStack_8c = (undefined4 *)0x68dce7;
  uStack_84 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_80;
  iStack_88 = 0x68dcf4;
  FUN_004033a1();
  iStack_88 = 0xe5 - *(int *)(unaff_EBP + -0x14) / 2;
  uStack_84 = 0x6b;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_8c = (undefined4 *)0x68dd12;
  FUN_004115d9();
  puStack_8c = (undefined4 *)0x68dd19;
  FUN_00448e3a();
  puStack_74 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_78 = 0x68dd26;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    iStack_78 = 0x68dd31;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x68dd3e;
  puStack_74 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_74 < 0) {
    iStack_78 = 0x68dd49;
    FUN_00878dfb();
  }
  puStack_74 = (undefined4 *)0x1;
  iStack_78 = *(undefined4 *)(extraout_ECX + 0x1bc);
  iStack_7c = unaff_EBP + 8;
  uStack_80 = 0x68dd5a;
  FUN_007d3546();
  puStack_74 = &DAT_00980690;
  iStack_78 = 0x68dd66;
  FUN_00403191();
  puStack_74 = (undefined4 *)0x0;
  iStack_78 = 0;
  iStack_7c = 0xffffffff;
  uStack_80 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_84 = 0;
  iStack_88 = 0;
  puStack_8c = (undefined4 *)0x68dd79;
  (*DAT_0097b4c8)();
  puStack_8c = (undefined4 *)0x68dd86;
  FUN_0087a1b0();
  puStack_8c = (undefined4 *)(unaff_EBP + -0x40);
  uStack_90 = 0xffffffff;
  uStack_98 = 0x68dd97;
  puStack_94 = (undefined1 *)&iStack_88;
  uStack_98 = FUN_00449713();
  uStack_9c = 0x68dd9d;
  puStack_94 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_90;
  uStack_98 = 0x68ddaa;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_94 = (undefined1 *)0x68ddb9;
  FUN_0044974c();
  puStack_94 = (undefined1 *)0x68ddc0;
  iVar1 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
  puStack_8c = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_90 = 0x68ddd3;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x68ddde;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x1a4) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    uStack_90 = 0x68ddf0;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)0x68ddfb;
  FUN_004a2734();
  puStack_8c = &DAT_00980690;
  uStack_90 = 0x68de04;
  FUN_00403191();
  puStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_90 = 0x68de11;
  FUN_00403191();
  puStack_8c = (undefined4 *)0x0;
  uStack_90 = 0;
  puStack_94 = (undefined1 *)0xffffffff;
  uStack_98 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_9c = 0;
  uStack_a0 = 0;
  puStack_a4 = (undefined4 *)0x68de24;
  (*DAT_0097b4c8)();
  puStack_a4 = (undefined4 *)0x68de31;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_a0;
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x30);
  piStack_a8 = (int *)(unaff_EBP + -0x40);
  iStack_ac = 0x68de47;
  iStack_ac = FUN_00449749();
  uStack_b0 = 0xffffffff;
  puStack_b4 = *(undefined1 **)(unaff_EBP + -0x1c);
  piStack_b8 = (int *)0x68de55;
  piStack_b8 = (int *)FUN_00449713();
  puStack_bc = (undefined4 *)0x68de5b;
  puStack_b4 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_b0;
  piStack_b8 = (int *)0x68de68;
  FUN_004033a1();
  piStack_b8 = (int *)(0x119 - *(int *)(unaff_EBP + -0x14));
  puStack_b4 = (undefined1 *)0xf3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_bc = (undefined4 *)0x68de82;
  FUN_004115d9();
  puStack_bc = (undefined4 *)0x68de89;
  FUN_00448e3a();
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_a8 = (int *)0x68de96;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    piStack_a8 = (int *)0x68dea1;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_a8 = (int *)0x68deae;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    piStack_a8 = (int *)0x68deb9;
    FUN_00878dfb();
  }
  if (1 < *(int *)(extraout_ECX + 200)) {
    puStack_a4 = (undefined4 *)(1 - *(int *)(extraout_ECX + 0xc0));
    piStack_a8 = (int *)(unaff_EBP + -0x1c);
    iStack_ac = 0x68dedd;
    FUN_005b1a45();
    puStack_a4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_a8 = (int *)0x68deea;
    FUN_00403191();
    puStack_a4 = (undefined4 *)0x0;
    piStack_a8 = (int *)0x0;
    iStack_ac = 0xffffffff;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_b4 = (undefined1 *)0x0;
    piStack_b8 = (int *)0x0;
    puStack_bc = (undefined4 *)0x68defd;
    (*DAT_0097b4c8)();
    puStack_bc = (undefined4 *)0x68df0a;
    FUN_0087a1b0();
    puStack_bc = (undefined4 *)(unaff_EBP + -0x40);
    uStack_c0 = 0xffffffff;
    uStack_c8 = 0x68df1b;
    puStack_c4 = (undefined1 *)&piStack_b8;
    uStack_c8 = FUN_00449713();
    uStack_cc = 0x68df21;
    puStack_c4 = (undefined1 *)FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_c0;
    uStack_c8 = 0x68df2e;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_c4 = (undefined1 *)0x68df3d;
    FUN_0044974c();
    puStack_c4 = (undefined1 *)0x68df44;
    iVar1 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
    puStack_bc = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_c0 = 0x68df57;
    puStack_bc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_bc < 0) {
      uStack_c0 = 0x68df62;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x1a0) == 0) {
      puStack_bc = (undefined4 *)0x80004003;
      uStack_c0 = 0x68df74;
      FUN_00878dfb();
    }
    puStack_bc = (undefined4 *)0x68df7f;
    FUN_004a2734();
    puStack_bc = &DAT_00980690;
    uStack_c0 = 0x68df88;
    FUN_00403191();
    puStack_bc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_c0 = 0x68df95;
    FUN_00403191();
    puStack_bc = (undefined4 *)0x0;
    uStack_c0 = 0;
    puStack_c4 = (undefined1 *)0xffffffff;
    uStack_c8 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_cc = 0;
    uStack_d0 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_d0;
    iStack_d8 = unaff_EBP + -0x40;
    iStack_dc = 0x68dfcb;
    iStack_dc = FUN_00449749();
    uStack_e0 = 0xffffffff;
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_e8 = 0x68dfd9;
    iStack_e8 = FUN_00449713();
    uStack_e4 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_e0;
    iStack_e8 = 0x68dfec;
    FUN_004033a1();
    uStack_e4 = 0x6b;
    iStack_e8 = 0x40 - *(int *)(unaff_EBP + -0x14) / 2;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_d8 = 0x68e01c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_d8 = 0x68e027;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_d8 = 0x68e034;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_d8 = 0x68e03f;
      FUN_00878dfb();
    }
    iStack_d8 = *(undefined4 *)(extraout_ECX + 0x1c0);
    iStack_dc = unaff_EBP + 8;
    uStack_e0 = 0x68e050;
    FUN_007d3546();
    iStack_d8 = 0x68e05d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_d8 = unaff_EBP + -0x30;
    iStack_dc = 0x68e067;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_d8 = 0x68e073;
      FUN_00878dfb();
    }
    iStack_d8 = 0;
    iStack_dc = 0xffffffff;
    uStack_e0 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    uStack_e4 = 0;
    iStack_e8 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_f0 = -1;
    uVar2 = FUN_00449713(&iStack_e8);
    uVar2 = FUN_00456ad5(uVar2);
    *(int **)(unaff_EBP + -0x20) = &iStack_f0;
    FUN_004033a1(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0044974c();
    iVar1 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_f0 = 0x68e0e0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_f0 = 0x68e0eb;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x1a4) == 0) {
      iStack_f0 = 0x68e0fd;
      FUN_00878dfb();
    }
    FUN_004a2734();
    iStack_f0 = 0x68e112;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_f0 = unaff_EBP + -0x40;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_f0 = 0x68e128;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_f0 = 0x68e136;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_f0 = unaff_EBP + -0x30;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_f0 = 0x68e14c;
      FUN_00878dfb();
    }
    iStack_f0 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + 8),0xffffffff);
    puStack_a4 = (undefined4 *)0x68e16c;
    FUN_0087a1b0();
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x40);
    piStack_a8 = (int *)(unaff_EBP + -0x30);
    iStack_ac = 0x68e181;
    iStack_ac = FUN_00449749();
    uStack_b0 = 0xffffffff;
    piStack_b8 = (int *)0x68e18d;
    puStack_b4 = (undefined1 *)&uStack_a0;
    piStack_b8 = (int *)FUN_00449713();
    puStack_bc = (undefined4 *)0x68e193;
    puStack_b4 = (undefined1 *)FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_b0;
    piStack_b8 = (int *)0x68e1a0;
    FUN_004033a1();
    puStack_b4 = (undefined1 *)0xf3;
    piStack_b8 = (int *)(0x77 - *(int *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_bc = (undefined4 *)0x68e1b8;
    FUN_004115d9();
    puStack_bc = (undefined4 *)0x68e1bf;
    FUN_00448e3a();
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_a8 = (int *)0x68e1cc;
    puStack_a4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a4 < 0) {
      piStack_a8 = (int *)0x68e1d7;
      FUN_00878dfb();
    }
    puStack_a4 = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_a8 = (int *)0x68e1e4;
    puStack_a4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a4 < 0) {
      piStack_a8 = (int *)0x68e1ef;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_a4 = (undefined4 *)0x68e1fb;
    FUN_00414ebb();
  }
  puStack_a4 = *(undefined4 **)(unaff_EBP + -0x10);
  piStack_a8 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_a4;
  if (piStack_a8 != (int *)0x0) {
    iStack_ac = 0x68e213;
    (**(code **)(*piStack_a8 + 4))();
  }
  piStack_a8 = (int *)0x68e21a;
  FUN_0068e31b();
  if (*(int *)(extraout_ECX + 0x1ac) != 0) {
    piVar3 = *(int **)(unaff_EBP + -0x10);
    if (piVar3 == (int *)0x0) {
      puStack_a4 = (undefined4 *)0x80004003;
      piStack_a8 = (int *)0x68e238;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar3;
    puStack_a4 = (undefined4 *)0x80ffffff;
    piStack_a8 = (int *)0x6d;
    iStack_ac = 0x71;
    uStack_b0 = 0x81;
    puStack_b4 = (undefined1 *)0xa9;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    puStack_bc = (undefined4 *)0x68e256;
    piStack_b8 = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < 0) {
      puStack_a4 = (undefined4 *)&DAT_00963cc8;
      piStack_a8 = *(int **)(unaff_EBP + -0x20);
      uStack_b0 = 0x68e268;
      iStack_ac = iVar1;
      FUN_00878e09();
    }
  }
  if (*(int *)(extraout_ECX + 0x1b0) != 0) {
    piVar3 = *(int **)(unaff_EBP + -0x10);
    if (piVar3 == (int *)0x0) {
      puStack_a4 = (undefined4 *)0x80004003;
      piStack_a8 = (int *)0x68e281;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar3;
    puStack_a4 = (undefined4 *)0x80ffffff;
    piStack_a8 = (int *)0x6d;
    iStack_ac = 0x71;
    uStack_b0 = 0x81;
    puStack_b4 = (undefined1 *)0x6;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    puStack_bc = (undefined4 *)0x68e29c;
    piStack_b8 = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < 0) {
      puStack_a4 = (undefined4 *)&DAT_00963cc8;
      piStack_a8 = *(int **)(unaff_EBP + -0x20);
      uStack_b0 = 0x68e2ae;
      iStack_ac = iVar1;
      FUN_00878e09();
    }
  }
  if ((*(int *)(extraout_ECX + 200) < 2) || (*(int *)(extraout_ECX + 0x1ac) != 0)) {
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x184) + 4);
    puStack_a4 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x184) + 4);
    puStack_a4 = (undefined4 *)0x1;
  }
  piStack_a8 = (int *)0x68e2df;
  (**(code **)(iVar1 + 0x1c))();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_a8 = (int *)0x68e2eb;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_a8 = (int *)0x68e2f6;
  FUN_00414ebb();
  piStack_a8 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_a8 != (int *)0x0) {
    iStack_ac = 0x68e307;
    (**(code **)(*piStack_a8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


