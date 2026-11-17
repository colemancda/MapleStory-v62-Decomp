/* FUN_006e7cac - 0x006e7cac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e7cac(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int *piStack_bc;
  undefined4 *puStack_b8;
  int *piStack_b4;
  undefined *puStack_b0;
  int *piStack_ac;
  undefined *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 *puStack_7c;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0xa74);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar4 = *(int *)(iVar4 + 0x34);
  *(int *)(unaff_EBP + -0x24) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(unaff_EBP + -0x14) = (uint)(iVar4 == 9);
  puStack_7c = (undefined4 *)0x3af;
  iStack_80 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_84 = 0x6e7cf3;
  puVar3 = (undefined4 *)FUN_00679d86();
  uStack_84 = *puVar3;
  puStack_7c = (undefined4 *)0x0;
  iStack_80 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_88 = 0x6e7d04;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_7c = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_80 = 0x6e7d1b;
    FUN_00403384();
  }
  puStack_7c = &DAT_00980690;
  iStack_80 = 0x6e7d2a;
  FUN_00403191();
  puStack_7c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_80 = 0x6e7d37;
  FUN_00403191();
  piStack_a4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_a4 == (int *)0x0) {
    puStack_7c = (undefined4 *)0x80004003;
    iStack_80 = 0x6e7d4c;
    FUN_00878dfb();
    piStack_a4 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x44);
  iVar4 = *piStack_a4;
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_7c = *(undefined4 **)(unaff_EBP + -0x3c);
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_9c = 0x100;
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_a0 = 0xae;
  *(int **)(unaff_EBP + -0x18) = piStack_a4;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_a8 = (undefined *)0x6e7d7a;
  iVar4 = (**(code **)(iVar4 + 0x2c))();
  if (iVar4 < 0) {
    puStack_a8 = &DAT_00963cc8;
    piStack_ac = *(int **)(unaff_EBP + -0x18);
    piStack_b4 = (int *)0x6e7d8d;
    puStack_b0 = (undefined *)iVar4;
    FUN_00878e09();
  }
  puStack_a8 = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_ac = (int *)0x6e7d9a;
  puStack_a8 = (undefined *)FUN_00402bc3();
  if ((int)puStack_a8 < 0) {
    piStack_ac = (int *)0x6e7da5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_a8 = (undefined *)(unaff_EBP + -0x48);
  piStack_ac = (int *)0x6e7db2;
  puStack_a8 = (undefined *)FUN_00402bc3();
  if ((int)puStack_a8 < 0) {
    piStack_ac = (int *)0x6e7dbd;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_a8 = (undefined *)0x80004003;
    piStack_ac = (int *)0x6e7dcd;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  puStack_a8 = (undefined *)0x0;
  puStack_b0 = (undefined *)0x6e7dd8;
  piStack_ac = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x70))();
  if (iVar4 < 0) {
    puStack_b0 = &DAT_00963cc8;
    piStack_bc = (int *)0x6e7de4;
    puStack_b8 = (undefined4 *)iVar4;
    piStack_b4 = piVar1;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_b0 = (undefined *)0x80004003;
    piStack_b4 = (int *)0x6e7df4;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  puStack_b0 = (undefined *)0x0;
  puStack_b8 = (undefined4 *)0x6e7dff;
  piStack_b4 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x78))();
  if (iVar4 < 0) {
    puStack_b8 = (undefined4 *)&DAT_00963cc8;
    iStack_c4 = 0x6e7e0b;
    iStack_c0 = iVar4;
    piStack_bc = piVar1;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_b8 = (undefined4 *)0x6e7e1a;
    puStack_b8 = (undefined4 *)FUN_007b3de5();
    if (puStack_b8 != (undefined4 *)0x0) {
      piStack_bc = (int *)(unaff_EBP + -0x30);
      iStack_c0 = 0x6e7e32;
      FUN_005df3f8();
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x2c) + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if ((*(int *)(*(int *)(unaff_EBP + -0x2c) + 8) == *(int *)(unaff_EBP + -0x24)) &&
         (iVar4 / 0x19 == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x578))) {
        puStack_b8 = &DAT_00980690;
        piVar1 = (int *)((iVar4 % 0x19) * 0x10 + 0xac8 + *(int *)(unaff_EBP + -0x1c));
        piStack_bc = (int *)0x6e7e7c;
        FUN_00403191();
        puStack_b8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piStack_bc = (int *)0x6e7e89;
        FUN_00403191();
        puStack_b8 = (undefined4 *)0x0;
        piStack_bc = (int *)0x0;
        iStack_c0 = unaff_EBP + -0x58;
        iStack_c4 = unaff_EBP + -0x48;
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_c8;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_004033a1(u_UI_UIWindow_img_MonsterBook_cove_0096b0c0);
        iVar4 = unaff_EBP + -0x78;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00405a1d(iVar4);
        FUN_00402660();
        FUN_00404a02(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_c0 = 0x6e7ecf;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x24) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar4 != 0) {
          puStack_b8 = (undefined4 *)(unaff_EBP + -0x24);
          piStack_bc = (int *)0x6e7ee5;
          puStack_b8 = (undefined4 *)FUN_0041a581();
          if (((int)puStack_b8 < 0) && (puStack_b8 != (undefined4 *)0x80004002)) {
            piStack_bc = (int *)0x6e7ef6;
            FUN_00878dfb();
          }
        }
        puStack_b8 = (undefined4 *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        piStack_bc = (int *)0x6e7f03;
        puStack_b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_b8 < 0) {
          piStack_bc = (int *)0x6e7f0e;
          FUN_00878dfb();
        }
        puStack_b8 = (undefined4 *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_bc = (int *)0x6e7f1b;
        puStack_b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_b8 < 0) {
          piStack_bc = (int *)0x6e7f26;
          FUN_00878dfb();
        }
        puStack_b8 = (undefined4 *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_bc = (int *)0x6e7f33;
        puStack_b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_b8 < 0) {
          piStack_bc = (int *)0x6e7f3e;
          FUN_00878dfb();
        }
        puStack_b8 = (undefined4 *)0x3;
        piStack_bc = (int *)0xff;
        iStack_c0 = 0x6e7f4d;
        FUN_004031b7();
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (piVar5 == (int *)0x0) {
          puStack_b8 = (undefined4 *)0x80004003;
          piStack_bc = (int *)0x6e7f62;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x10);
        }
        iVar4 = piVar1[1];
        iVar2 = *piVar1;
        uStack_c8 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_c4 = *(undefined4 *)(unaff_EBP + -0x68);
        iStack_c0 = *(int *)(unaff_EBP + -100);
        piStack_bc = *(int **)(unaff_EBP + -0x60);
        *(int **)(unaff_EBP + -0x28) = piVar5;
        puStack_b8 = *(undefined4 **)(unaff_EBP + -0x5c);
        iVar4 = (**(code **)(*piVar5 + 0x80))
                          (*(undefined4 *)(unaff_EBP + -0x10),iVar2 + -2,iVar4 + -2);
        if (iVar4 < 0) {
          puStack_b8 = (undefined4 *)&DAT_00963cc8;
          piStack_bc = *(int **)(unaff_EBP + -0x28);
          iStack_c4 = 0x6e7f9f;
          iStack_c0 = iVar4;
          FUN_00878e09();
        }
        puStack_b8 = (undefined4 *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_bc = (int *)0x6e7fac;
        puStack_b8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_b8 < 0) {
          piStack_bc = (int *)0x6e7fb7;
          FUN_00878dfb();
        }
        puStack_b8 = (undefined4 *)0x6e7fbf;
        FUN_004125e6();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_b8 = (undefined4 *)0x6e7fcb;
      FUN_005e05bf();
    }
    piVar1 = (int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x580) * 0x10 + 0xac8 +
                    *(int *)(unaff_EBP + -0x1c));
    puStack_b8 = &DAT_00980690;
    piStack_bc = (int *)0x6e7fe7;
    FUN_00403191();
    puStack_b8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_bc = (int *)0x6e7ff4;
    FUN_00403191();
    puStack_b8 = (undefined4 *)0x0;
    piStack_bc = (int *)0x0;
    iStack_c0 = unaff_EBP + -0x58;
    iStack_c4 = unaff_EBP + -0x68;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_c8;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_004033a1(u_UI_UIWindow_img_MonsterBook_sele_0096b078);
    iVar4 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_c0 = 0x6e803a;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar4 != 0) {
      puStack_b8 = (undefined4 *)(unaff_EBP + -0x28);
      piStack_bc = (int *)0x6e8050;
      puStack_b8 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_b8 < 0) && (puStack_b8 != (undefined4 *)0x80004002)) {
        piStack_bc = (int *)0x6e8061;
        FUN_00878dfb();
      }
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_bc = (int *)0x6e806e;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x6e8079;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_bc = (int *)0x6e8086;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x6e8091;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_bc = (int *)0x6e809e;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x6e80a9;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)0x3;
    piStack_bc = (int *)0xff;
    iStack_c0 = 0x6e80b8;
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (piVar5 == (int *)0x0) {
      puStack_b8 = (undefined4 *)0x80004003;
      piStack_bc = (int *)0x6e80cd;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = piVar1[1];
    iVar2 = *piVar1;
    uStack_c8 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_c0 = *(int *)(unaff_EBP + -0x44);
    piStack_bc = *(int **)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    puStack_b8 = *(undefined4 **)(unaff_EBP + -0x3c);
    iVar4 = (**(code **)(*piVar5 + 0x80))(*(undefined4 *)(unaff_EBP + -0x10),iVar2 + -2,iVar4 + -2);
    if (iVar4 < 0) {
      puStack_b8 = (undefined4 *)&DAT_00963cc8;
      piStack_bc = *(int **)(unaff_EBP + -0x24);
      iStack_c4 = 0x6e810a;
      iStack_c0 = iVar4;
      FUN_00878e09();
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_bc = (int *)0x6e8117;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x6e8122;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_b8 = (undefined4 *)0x6e812e;
    FUN_004125e6();
  }
  puStack_b8 = &DAT_00980690;
  piStack_bc = (int *)0x6e8137;
  FUN_00403191();
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0xac4);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar4 == 0) {
    puStack_b8 = (undefined4 *)0x80004003;
    piStack_bc = (int *)0x6e8157;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x68);
  piStack_bc = (int *)(unaff_EBP + -0x20);
  iStack_c0 = 0x6e8168;
  FUN_00425067();
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_bc = (int *)0x6e8175;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    piStack_bc = (int *)0x6e8180;
    FUN_00878dfb();
  }
  puStack_b8 = &DAT_00980690;
  piStack_bc = (int *)0x6e8189;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_b8 = (undefined4 *)0x80004003;
    piStack_bc = (int *)0x6e819d;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  uStack_c8 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x54);
  piStack_bc = *(int **)(unaff_EBP + -0x50);
  puStack_b8 = *(undefined4 **)(unaff_EBP + -0x4c);
  iVar4 = (**(code **)(*piVar1 + 0x80))(piVar1,0,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


