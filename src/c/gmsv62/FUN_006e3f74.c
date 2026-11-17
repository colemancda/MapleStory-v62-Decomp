/* FUN_006e3f74 - 0x006e3f74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e3f74(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined1 *puStack_108;
  undefined *puStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  puStack_fc = (undefined1 *)0x6e3fa0;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_fc = (undefined1 *)0x6e3fac;
  FUN_00403191();
  puStack_fc = (undefined1 *)0x0;
  puStack_100 = (undefined1 *)(unaff_EBP + -0x84);
  puStack_104 = (undefined *)(unaff_EBP + -0x74);
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_108;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_108 = extraout_ECX_00;
  FUN_00679e4e(&puStack_108,0x9ee);
  iVar2 = unaff_EBP + -0xc4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_100 = (undefined1 *)0x6e3ffe;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    puStack_fc = (undefined1 *)0x6e4014;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_fc = (undefined1 *)0x6e4027;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_fc = (undefined1 *)0x6e403e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_fc = (undefined1 *)0x6e4049;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_fc = (undefined1 *)0x6e4056;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_fc = (undefined1 *)0x6e4061;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_fc = (undefined1 *)0x6e4071;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_fc = (undefined1 *)0x6e407c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      puStack_fc = (undefined1 *)0x6e408e;
      FUN_00878dfb();
    }
    uVar3 = FUN_0040cf4d();
    if (uVar3 <= *(uint *)(unaff_EBP + -0x28)) break;
    FUN_0087a1b0();
    puStack_fc = (undefined1 *)0x0;
    puStack_104 = *(undefined **)(unaff_EBP + -0x28);
    puStack_108 = (undefined1 *)0x6e40b4;
    puStack_100 = &stack0xffffff0c;
    puStack_104 = (undefined *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_100;
    puStack_108 = (undefined1 *)0x6e40c0;
    FUN_004033a1();
    puStack_104 = (undefined *)(unaff_EBP + -0xe4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_108 = (undefined1 *)0x6e40d3;
    FUN_0040263d();
    puStack_108 = (undefined1 *)0x6e40da;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_100 = (undefined1 *)0x6e40e5;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      puStack_fc = (undefined1 *)0x6e40fb;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        puStack_fc = (undefined1 *)0x6e4109;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_fc = (undefined1 *)0x6e4119;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_fc = (undefined1 *)0x6e4124;
      FUN_00878dfb();
    }
    puStack_fc = &LAB_0045035c;
    puStack_100 = (undefined1 *)0x4;
    puStack_104 = (undefined *)0x4;
    puStack_108 = (undefined1 *)(unaff_EBP + -100);
    FUN_0087b2f0();
    puStack_fc = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)&puStack_100;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_100;
    puStack_104 = (undefined *)0x59d;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00679e4e();
    puStack_104 = (undefined *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_108 = (undefined1 *)0x6e4167;
    FUN_0040263d();
    puStack_108 = (undefined1 *)0x6e416e;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_100 = (undefined1 *)0x6e4179;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x50) = uVar4;
    puStack_fc = (undefined1 *)0x6e4188;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_fc = (undefined1 *)0x6e4196;
      FUN_00878dfb();
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_fc = (undefined1 *)0x6e41a6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_fc = (undefined1 *)0x6e41b1;
      FUN_00878dfb();
      puVar7 = extraout_ECX_01;
    }
    puStack_fc = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)&puStack_100;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_100;
    puStack_104 = (undefined *)0xa7c;
    puStack_100 = puVar7;
    FUN_00679e4e();
    puStack_104 = (undefined *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_108 = (undefined1 *)0x6e41d9;
    FUN_0040263d();
    puStack_108 = (undefined1 *)0x6e41e0;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_100 = (undefined1 *)0x6e41eb;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
    puStack_fc = (undefined1 *)0x6e41fa;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_fc = (undefined1 *)0x6e4208;
      FUN_00878dfb();
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_fc = (undefined1 *)0x6e4218;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_fc = (undefined1 *)0x6e4223;
      FUN_00878dfb();
      puVar7 = extraout_ECX_02;
    }
    puStack_fc = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)&puStack_100;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_100;
    puStack_104 = (undefined *)0x5a3;
    puStack_100 = puVar7;
    FUN_00679e4e();
    puStack_104 = (undefined *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_108 = (undefined1 *)0x6e424b;
    FUN_0040263d();
    puStack_108 = (undefined1 *)0x6e4252;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_100 = (undefined1 *)0x6e425d;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
    puStack_fc = (undefined1 *)0x6e426c;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_fc = (undefined1 *)0x6e427a;
      FUN_00878dfb();
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_fc = (undefined1 *)0x6e428a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_fc = (undefined1 *)0x6e4295;
      FUN_00878dfb();
      puVar7 = extraout_ECX_03;
    }
    puStack_fc = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)&puStack_100;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_100;
    puStack_104 = (undefined *)0x5a1;
    puStack_100 = puVar7;
    FUN_00679e4e();
    puStack_104 = (undefined *)(unaff_EBP + -0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_108 = (undefined1 *)0x6e42bd;
    FUN_0040263d();
    puStack_108 = (undefined1 *)0x6e42c4;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_100 = (undefined1 *)0x6e42cf;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
    puStack_fc = (undefined1 *)0x6e42de;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_fc = (undefined1 *)0x6e42ec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_fc = (undefined1 *)0x6e42fc;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_fc = (undefined1 *)0x6e4307;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    FUN_006eaadc();
    iVar2 = 0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(int *)(unaff_EBP + -0x38) = unaff_EBP + -0xb8;
    do {
      puStack_fc = (undefined1 *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_100;
      puStack_104 = &DAT_00964310;
      puStack_108 = (undefined1 *)0x6e433b;
      FUN_004033a1();
      puStack_104 = (undefined *)(unaff_EBP + -0xf4);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      puStack_108 = (undefined1 *)0x6e434e;
      FUN_0040263d();
      puStack_108 = (undefined1 *)0x6e4355;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_100 = (undefined1 *)0x6e4360;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar5 != 0) {
        puStack_fc = (undefined1 *)0x6e4376;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          puStack_fc = (undefined1 *)0x6e4387;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_fc = (undefined1 *)0x6e4397;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_fc = (undefined1 *)0x6e43a2;
        FUN_00878dfb();
      }
      puStack_fc = (undefined1 *)0x6e43b0;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (iVar2 + *(int *)(unaff_EBP + -0x20)),*(IBinding **)(unaff_EBP + -0x18));
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_fc = (undefined1 *)0x6e43c0;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puStack_fc = (undefined1 *)0x6e43cb;
          FUN_00878dfb();
        }
      }
      iVar5 = *(int *)(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x18);
      FUN_0040e53d();
      puStack_fc = (undefined1 *)0x6e43e9;
      iVar6 = FUN_0040e48b();
      puStack_fc = (undefined1 *)(iVar6 + 0xf);
      puStack_100 = *(undefined1 **)(unaff_EBP + -0x30);
      puStack_104 = (undefined *)0x10;
      puStack_108 = (undefined1 *)(*(int *)(unaff_EBP + -0x2c) + 0x14 + iVar5);
      (*DAT_0097b504)();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_fc = (undefined1 *)0x6e4411;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 0x10;
      iVar2 = iVar2 + 4;
    } while (iVar2 < 100);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x30);
    piVar1 = (int *)(*(int *)(unaff_EBP + -0x20) + 0x24);
    *piVar1 = *piVar1 + -0x10;
    piVar1 = (int *)(*(int *)(unaff_EBP + -0x20) + 0x2c);
    *piVar1 = *piVar1 + -0x10;
    *(int *)(unaff_EBP + -0x30) = iVar2 + 1;
    puStack_fc = (undefined1 *)0xffffffff;
    puStack_100 = (undefined1 *)0x6e4447;
    FUN_006eafaf();
    puStack_fc = (undefined1 *)0x6e444e;
    FUN_006eaaa3();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      puStack_fc = (undefined1 *)0x6e4460;
      FUN_006eadbe();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    puStack_fc = (undefined1 *)0x4;
    puStack_100 = (undefined1 *)0x4;
    puStack_104 = (undefined *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_108 = (undefined1 *)0x6e4479;
    FUN_0087a0b8();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      puStack_fc = (undefined1 *)0x6e448a;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
  }
  puStack_fc = *(undefined1 **)(unaff_EBP + 0x10);
  puStack_100 = *(undefined1 **)(unaff_EBP + 0xc);
  puStack_104 = *(undefined **)(unaff_EBP + 8);
  puStack_108 = (undefined1 *)0x6e44b0;
  FUN_006e24ed();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    puStack_fc = (undefined1 *)0x6e44c1;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


