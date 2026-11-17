/* FUN_00856c17 - 0x00856c17 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00856c17(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar9;
  undefined4 uStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int *piStack_e8;
  undefined1 *puStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  uint uStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 *puStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar9 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((short)uVar9 == 0) {
    uVar9 = (uint)*(ushort *)(extraout_ECX + 0x2cc7);
  }
  if (*(char *)(unaff_EBP + 0x10) == '\0') {
    *(undefined1 *)(unaff_EBP + 0x10) = *(undefined1 *)(extraout_ECX + 0x2cc9);
  }
  if (*(short *)(unaff_EBP + 0x14) == 0) {
    *(undefined2 *)(unaff_EBP + 0x14) = *(undefined2 *)(extraout_ECX + 0x2cc4);
  }
  if (*(char *)(unaff_EBP + 0x18) == '\0') {
    *(undefined1 *)(unaff_EBP + 0x18) = *(undefined1 *)(extraout_ECX + 0x2cc6);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar1 = (uVar9 & 0xffff) / 1000;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (uVar1 == 2) {
    puStack_b8 = (undefined4 *)0xcbc;
    uStack_bc = unaff_EBP + -0x20;
    uStack_c0 = 0x856d5c;
    puStack_b8 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_bc = 0x856d69;
    FUN_00414f8b();
    iVar3 = *(int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else if (uVar1 == 3) {
    puStack_b8 = (undefined4 *)0xcbd;
    uStack_bc = unaff_EBP + -0x24;
    uStack_c0 = 0x856d36;
    puStack_b8 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_bc = 0x856d43;
    FUN_00414f8b();
    iVar3 = *(int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else if (uVar1 == 4) {
    puStack_b8 = (undefined4 *)0xcbe;
    uStack_bc = unaff_EBP + -0x28;
    uStack_c0 = 0x856d10;
    puStack_b8 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_bc = 0x856d1d;
    FUN_00414f8b();
    iVar3 = *(int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else if (uVar1 == 5) {
    puStack_b8 = (undefined4 *)0xcbf;
    uStack_bc = unaff_EBP + -0x44;
    uStack_c0 = 0x856cea;
    puStack_b8 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_bc = 0x856cf7;
    FUN_00414f8b();
    iVar3 = *(int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    if (uVar1 != 9) goto LAB_00856d7e;
    puStack_b8 = (undefined4 *)0x911;
    uStack_bc = unaff_EBP + -0x3c;
    uStack_c0 = 0x856cc1;
    puStack_b8 = (undefined4 *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_bc = 0x856cce;
    FUN_00414f8b();
    iVar3 = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  if (iVar3 != 0) {
    puStack_b8 = (undefined4 *)(iVar3 + -0xc);
    uStack_bc = 0x856d7d;
    FUN_00434e38();
  }
LAB_00856d7e:
  puStack_b8 = (undefined4 *)0xcc1;
  uStack_bc = unaff_EBP + -0x20;
  uStack_c0 = 0x856d8e;
  puVar2 = (undefined4 *)FUN_00679d22();
  puStack_b8 = (undefined4 *)(uint)*(byte *)(unaff_EBP + 0x10);
  uStack_c4 = *puVar2;
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_c8 = unaff_EBP + -0x1c;
  uStack_cc = 0x856da7;
  uStack_bc = uVar9 & 0xffff;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_b8 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    uStack_bc = 0x856dbe;
    FUN_00434e38();
  }
  puStack_b8 = &DAT_00980690;
  uStack_bc = 0x856dcd;
  FUN_00403191();
  puStack_b8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_bc = 0x856dda;
  FUN_00403191();
  puStack_b8 = (undefined4 *)0x0;
  uStack_bc = 0;
  uStack_c0 = 0xffffffff;
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c8 = 0;
  uStack_cc = 0;
  puStack_d0 = (undefined4 *)0x856ded;
  (*DAT_0097b4c8)();
  puStack_d0 = (undefined4 *)0x856dfa;
  FUN_0087a1b0();
  puStack_d0 = (undefined4 *)0x0;
  uStack_d4 = 0;
  iStack_d8 = unaff_EBP + -0x54;
  iStack_dc = unaff_EBP + -0x74;
  uStack_e0 = 0xffffffff;
  piStack_e8 = (int *)0x856e11;
  puStack_e4 = (undefined1 *)&uStack_cc;
  piStack_e8 = (int *)FUN_00449713();
  iStack_ec = 0x856e17;
  puStack_e4 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + 0x10) = &uStack_e0;
  piStack_e8 = (int *)0x856e24;
  FUN_004033a1();
  puStack_e4 = (undefined1 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_e8 = (int *)0x856e34;
  FUN_00405a1d();
  piStack_e8 = (int *)0x856e3b;
  FUN_00402660();
  piStack_e8 = (int *)0x856e42;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_d8 = 0x856e4d;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x20);
    uStack_d4 = 0x856e63;
    puStack_d0 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_d0 < 0) && (puStack_d0 != (undefined4 *)0x80004002)) {
      uStack_d4 = 0x856e74;
      FUN_00878dfb();
    }
  }
  puStack_d0 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_d4 = 0x856e84;
  puStack_d0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    uStack_d4 = 0x856e8f;
    FUN_00878dfb();
  }
  puStack_d0 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_d4 = 0x856e9c;
  puStack_d0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    uStack_d4 = 0x856ea7;
    FUN_00878dfb();
  }
  puStack_d0 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_d4 = 0x856eb4;
  puStack_d0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    uStack_d4 = 0x856ebf;
    FUN_00878dfb();
  }
  puStack_d0 = (undefined4 *)0xcc2;
  uStack_d4 = unaff_EBP + 0x10;
  iStack_d8 = 0x856ecf;
  puVar2 = (undefined4 *)FUN_00679d22();
  puStack_d0 = (undefined4 *)(uint)*(byte *)(unaff_EBP + 0x18);
  iStack_d8 = *puVar2;
  uStack_d4 = (uint)*(ushort *)(unaff_EBP + 0x14);
  iStack_dc = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_e0 = 0x856ee9;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    puStack_d0 = (undefined4 *)(*(int *)(unaff_EBP + 0x10) + -0xc);
    uStack_d4 = 0x856f00;
    FUN_00434e38();
  }
  puStack_d0 = &DAT_00980690;
  uStack_d4 = 0x856f0d;
  FUN_00403191();
  puStack_d0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_d4 = 0x856f1d;
  FUN_00403191();
  puStack_d0 = (undefined4 *)0x0;
  uStack_d4 = 0;
  iStack_d8 = 0xffffffff;
  iStack_dc = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_e0 = 0;
  puStack_e4 = (undefined1 *)0x0;
  piStack_e8 = (int *)0x856f30;
  (*DAT_0097b4c8)();
  piStack_e8 = (int *)0x856f3d;
  FUN_0087a1b0();
  piStack_e8 = (int *)0x0;
  iStack_ec = 0;
  iStack_f0 = unaff_EBP + -0x84;
  iStack_f4 = unaff_EBP + -0x94;
  uStack_f8 = 0xffffffff;
  uVar4 = FUN_00449713(&puStack_e4);
  uVar4 = FUN_00456ad5(uVar4);
  *(undefined4 **)(unaff_EBP + 0x10) = &uStack_f8;
  FUN_004033a1(uVar4);
  iVar3 = unaff_EBP + -0xb4;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_f0 = 0x856f96;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + 0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (iVar3 != 0) {
    piStack_e8 = (int *)(unaff_EBP + 0x18);
    iStack_ec = 0x856fac;
    piStack_e8 = (int *)FUN_0041a581();
    if (((int)piStack_e8 < 0) && (piStack_e8 != (int *)0x80004002)) {
      iStack_ec = 0x856fbd;
      FUN_00878dfb();
    }
  }
  piStack_e8 = (int *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_ec = 0x856fcd;
  piStack_e8 = (int *)FUN_00402bc3();
  if ((int)piStack_e8 < 0) {
    iStack_ec = 0x856fd8;
    FUN_00878dfb();
  }
  piStack_e8 = (int *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_ec = 0x856fe8;
  piStack_e8 = (int *)FUN_00402bc3();
  if ((int)piStack_e8 < 0) {
    iStack_ec = 0x856ff3;
    FUN_00878dfb();
  }
  piStack_e8 = (int *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_ec = 0x857003;
  piStack_e8 = (int *)FUN_00402bc3();
  if ((int)piStack_e8 < 0) {
    iStack_ec = 0x85700e;
    FUN_00878dfb();
  }
  if ((*(int *)(unaff_EBP + -0x14) != 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    piStack_e8 = (int *)0x3af;
    iStack_ec = unaff_EBP + 0x10;
    iStack_f0 = 0x857030;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_f0 = *puVar2;
    piStack_e8 = (int *)0x0;
    iStack_ec = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_f4 = 0x857041;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_e8 = (int *)0x857050;
    FUN_00402676();
    piStack_e8 = &DAT_00980690;
    iStack_ec = 0x857059;
    FUN_00403191();
    piStack_e8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_ec = 0x857066;
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (piVar5 == (int *)0x0) {
      piStack_e8 = (int *)0x80004003;
      iStack_ec = 0x85707b;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_f4 = *(int *)(unaff_EBP + -0x38);
    iStack_f0 = *(int *)(unaff_EBP + -0x34);
    iVar3 = *piVar5;
    iStack_ec = *(undefined4 *)(unaff_EBP + -0x30);
    piStack_e8 = *(int **)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + 0x10) = piVar5;
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x58);
    iVar3 = (**(code **)(iVar3 + 0x2c))
                      (piVar5,0x11,0x11,*(undefined4 *)(unaff_EBP + -100),
                       *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iVar3 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_004031b7(0xff,3);
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + 0x10) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar5,0,0,*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_004031b7(0xff,3);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 0x10) = piVar5;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
    iVar3 = FUN_0040e53d();
    iVar6 = FUN_0040e53d();
    iVar7 = FUN_0040e48b();
    iVar8 = FUN_0040e48b();
    iVar3 = (**(code **)(*piVar5 + 0x80))
                      (*(undefined4 *)(unaff_EBP + 0x10),(uint)(iVar8 - iVar7) >> 1,
                       (uint)(iVar3 - iVar6) >> 1,*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar3 < 0) {
      piStack_e8 = (int *)&DAT_00963cc8;
      iStack_ec = *(undefined4 *)(unaff_EBP + 0x10);
      iStack_f4 = 0x857216;
      iStack_f0 = iVar3;
      FUN_00878e09();
    }
    piStack_e8 = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_ec = 0x857223;
    piStack_e8 = (int *)FUN_00402bc3();
    if ((int)piStack_e8 < 0) {
      iStack_ec = 0x85722e;
      FUN_00878dfb();
    }
  }
  piStack_e8 = *(int **)(unaff_EBP + -0x10);
  piVar5 = *(int **)(unaff_EBP + 8);
  *piVar5 = (int)piStack_e8;
  if (piStack_e8 != (int *)0x0) {
    iStack_ec = 0x857242;
    (**(code **)(*piStack_e8 + 4))();
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  piStack_e8 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piStack_e8 != (int *)0x0) {
    iStack_ec = 0x85725a;
    (**(code **)(*piStack_e8 + 8))();
  }
  piStack_e8 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_e8 != (int *)0x0) {
    iStack_ec = 0x85726b;
    (**(code **)(*piStack_e8 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_e8 = (int *)0x857277;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e8 = (int *)0x857283;
  FUN_00414ebb();
  piStack_e8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_e8 != (int *)0x0) {
    iStack_ec = 0x857294;
    (**(code **)(*piStack_e8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar5;
}


