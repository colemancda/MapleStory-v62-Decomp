/* FUN_005fcf1e - 0x005fcf1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fcf1e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar5;
  int iStack_120;
  int iStack_11c;
  undefined4 *puStack_118;
  int *piStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  int *piStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined *puStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined *puStack_d0;
  int *piStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x200);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    iStack_c0 = 0x5fcf67;
    FUN_005fd529();
    iStack_c0 = 0xfffffffe;
    iStack_c4 = 0x5fcf73;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x54) == 0) {
      iStack_c0 = 0x5fcf86;
      FUN_00878dfb();
    }
    iStack_c0 = unaff_EBP + -0x18;
    iStack_c4 = 0x5fcf96;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_c0 = 0x5fcfab;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fcfb6;
      FUN_00878dfb();
    }
    iStack_c0 = 0x5fcfbf;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_c0 = 0x5fcfcc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_c0 = 0x5fcfdc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_c0 = 0x5fcfec;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_c0 = 0x5fcff9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x58) == 2) {
      iStack_c0 = unaff_EBP + -0x10;
      iStack_c4 = 0x5fd018;
      iStack_c8 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 8;
    }
    else {
      iStack_c0 = unaff_EBP + -0x20;
      iStack_c4 = 0x5fd038;
      iStack_c8 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x14) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 9;
    }
    iStack_c0 = 0;
    *(int **)(unaff_EBP + -0x78) = &iStack_c4;
    piStack_cc = (int *)0x5fd050;
    FUN_004059fd();
    iStack_c8 = unaff_EBP + -0xb8;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    piStack_cc = (int *)0x5fd06c;
    FUN_0040263d();
    piStack_cc = (int *)0x5fd073;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    iStack_c4 = 0x5fd081;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -100) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar2 != 0) {
      iStack_c0 = 0x5fd097;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_c0 = 0x5fd0a8;
        FUN_00878dfb();
      }
    }
    uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x54) == 0) {
      iStack_c0 = 0x5fd0be;
      FUN_00878dfb();
    }
    iStack_c0 = unaff_EBP + -0x50;
    iStack_c4 = unaff_EBP + -0x88;
    iStack_c8 = unaff_EBP + -0x98;
    piStack_cc = (int *)(unaff_EBP + -0x74);
    iStack_d4 = unaff_EBP + -0xa8;
    iStack_d8 = 0x5fd0e8;
    puStack_d0 = (undefined *)uVar1;
    FUN_004250ac();
    iStack_c0 = 0x5fd0f4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd0ff;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_c0 = 0x5fd117;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd122;
      FUN_00878dfb();
    }
    if ((*(byte *)(unaff_EBP + -0x14) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
      FUN_00402fa6();
    }
    *(undefined4 *)(unaff_EBP + -4) = 7;
    if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
      FUN_00402fa6();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_c0 = 0x5fd156;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd161;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_c0 = 0x5fd171;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd17c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_c0 = 0x5fd18c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd197;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_c0 = 0x5fd1a4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd1af;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_c0 = 0x5fd1bc;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x5fd1c7;
      FUN_00878dfb();
    }
  }
  iStack_c0 = 0x5fd1d0;
  FUN_00403191();
  iStack_c0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_c4 = 0x5fd1df;
  FUN_004031b7();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (bVar5) {
    iStack_c0 = 0x5fd1f5;
    FUN_00878dfb();
  }
  iStack_c0 = unaff_EBP + -0x30;
  iStack_c4 = 4;
  iStack_c8 = 0;
  piStack_cc = (int *)0x0;
  puStack_d0 = (undefined *)0x0;
  iStack_d4 = 0;
  iStack_d8 = unaff_EBP + -0x10;
  uStack_dc = 0x5fd212;
  puVar3 = (undefined4 *)FUN_0042a39f();
  iStack_c0 = 0x5fd21c;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x34),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_c0 = 0x5fd231;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c0 = 0x5fd23c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_c0 = 0x5fd249;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c0 = 0x5fd254;
    FUN_00878dfb();
  }
  iStack_c0 = 0x5fd260;
  puVar3 = (undefined4 *)FUN_004489f5();
  iStack_c0 = *puVar3;
  iStack_c4 = 0x5fd26d;
  FUN_0040ee87();
  piVar4 = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar4 == (int *)0x0) {
    iStack_c0 = 0x5fd282;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x34);
  }
  iVar2 = *piVar4;
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_c4 = *(int *)(unaff_EBP + -0x2c);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = piVar4;
  puStack_d0 = (undefined *)0x5fd29a;
  piStack_cc = piVar4;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_d0 = &DAT_00963de8;
    iStack_d4 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_dc = 0x5fd2ac;
    iStack_d8 = iVar2;
    FUN_00878e09();
  }
  puStack_d0 = (undefined *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_d4 = 0x5fd2b9;
  puStack_d0 = (undefined *)FUN_00402bc3();
  if ((int)puStack_d0 < 0) {
    iStack_d4 = 0x5fd2c4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d0 = (undefined *)0x5fd2d0;
  FUN_00412600();
  puStack_d0 = (undefined *)(unaff_EBP + -0x20);
  iStack_d4 = 0x5fd2dc;
  puVar3 = (undefined4 *)FUN_004489f5();
  iStack_d4 = *puVar3;
  puStack_d0 = (undefined *)0x1;
  iStack_d8 = 0x5fd2e9;
  FUN_0040ee87();
  piStack_e0 = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piStack_e0 == (int *)0x0) {
    puStack_d0 = (undefined *)0x80004003;
    iStack_d4 = 0x5fd2fe;
    FUN_00878dfb();
    piStack_e0 = *(int **)(unaff_EBP + -0x34);
  }
  iVar2 = *piStack_e0;
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_d8 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = piStack_e0;
  puStack_d0 = *(undefined **)(unaff_EBP + -0x24);
  puStack_e4 = (undefined *)0x5fd319;
  iVar2 = (**(code **)(iVar2 + 0xfc))();
  if (iVar2 < 0) {
    puStack_e4 = &DAT_00963df8;
    piStack_e8 = *(int **)(unaff_EBP + -0x10);
    piStack_f0 = (int *)0x5fd32b;
    puStack_ec = (undefined4 *)iVar2;
    FUN_00878e09();
  }
  puStack_e4 = (undefined *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_e8 = (int *)0x5fd338;
  puStack_e4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_e4 < 0) {
    piStack_e8 = (int *)0x5fd343;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_e4 = (undefined *)0x5fd34f;
  FUN_00412600();
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    puStack_e4 = (undefined *)0x80004003;
    piStack_e8 = (int *)0x5fd35f;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x34);
  puStack_e4 = (undefined *)0xffffffff;
  puStack_ec = (undefined4 *)0x5fd36d;
  piStack_e8 = piVar4;
  iVar2 = (**(code **)(*piVar4 + 0xe0))();
  if (iVar2 < 0) {
    puStack_ec = (undefined4 *)&DAT_00963df8;
    uStack_f8 = 0x5fd37d;
    iStack_f4 = iVar2;
    piStack_f0 = piVar4;
    FUN_00878e09();
  }
  puStack_ec = &DAT_00980690;
  piStack_f0 = (int *)0x5fd386;
  FUN_00403191();
  puStack_ec = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_f0 = (int *)0x5fd393;
  FUN_00403191();
  piStack_114 = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piStack_114 == (int *)0x0) {
    puStack_ec = (undefined4 *)0x80004003;
    piStack_f0 = (int *)0x5fd3a8;
    FUN_00878dfb();
    piStack_114 = *(int **)(unaff_EBP + -0x34);
  }
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x4c);
  iVar2 = *piStack_114;
  piStack_f0 = *(int **)(unaff_EBP + -0x48);
  puStack_ec = *(undefined4 **)(unaff_EBP + -0x44);
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_10c = *(int *)(unaff_EBP + 0xc) * 0x18 + 0x1c;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_110 = *(int *)(unaff_EBP + 8) * 0x18 + 0x15;
  *(int **)(unaff_EBP + -0x10) = piStack_114;
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x24);
  puStack_118 = (undefined4 *)0x5fd3eb;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    puStack_118 = (undefined4 *)&DAT_00963de8;
    iStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_120 = iVar2;
    FUN_00878e09();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_11c = 0x5fd40a;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    iStack_11c = 0x5fd415;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_11c = 0x5fd422;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_11c = 0x5fd42d;
    puStack_118 = (undefined4 *)iVar2;
    FUN_00878dfb();
    puStack_118 = (undefined4 *)extraout_ECX_00;
  }
  iStack_11c = unaff_EBP + -0x40;
  *(int **)(unaff_EBP + 0xc) = &iStack_120;
  iStack_120 = (int)puStack_118;
  puStack_118 = (undefined4 *)*(undefined4 *)(unaff_EBP + 0x10);
  FUN_00424dbc(*(int *)(unaff_EBP + -0x1c) + 0x1c0);
  FUN_005fea69();
  puStack_118 = &DAT_00980690;
  iStack_11c = 0x5fd459;
  FUN_00403191();
  puStack_118 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_11c = 0x5fd466;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    puStack_118 = (undefined4 *)0x80004003;
    iStack_11c = 0x5fd47a;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x34);
  iStack_120 = *(int *)(unaff_EBP + -0x4c);
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x48);
  puStack_118 = *(undefined4 **)(unaff_EBP + -0x44);
  iVar2 = (**(code **)(*piVar4 + 0x110))
                    (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x50));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_005fedb7();
  FUN_005fd529(unaff_EBP + -0x40);
  FUN_00412600();
  piVar4 = *(int **)(unaff_EBP + -0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


