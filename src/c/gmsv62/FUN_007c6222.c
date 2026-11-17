/* FUN_007c6222 - 0x007c6222 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c6222(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar8;
  int *piStack_10c;
  undefined4 *puStack_108;
  int *piStack_104;
  undefined *puStack_100;
  int *piStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  int *piStack_f0;
  undefined *puStack_ec;
  int *piStack_e8;
  undefined1 *puStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  int iStack_b4;
  
  FUN_00879bb8();
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e70);
  iStack_b4 = 0x7c624a;
  cVar1 = FUN_00433bfa();
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((cVar1 == '\0') && (iVar2 == DAT_0097c028)) {
    *(undefined4 *)(extraout_ECX + 0x1e6c) = 0;
    iStack_b4 = 0x7c6267;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e70),
               (IBinding *)0x0);
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x1e6c) = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_b4 = unaff_EBP + -0x3c;
    puStack_b8 = (undefined4 *)0x7c628a;
    DAT_0097c028 = iVar2;
    FUN_00552e70();
    puStack_b8 = (undefined4 *)0x0;
    uStack_bc = 0;
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_c0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_c0 = (undefined1 *)0x7c62c7;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar2 != 0) {
      puStack_b8 = (undefined4 *)(unaff_EBP + 8);
      uStack_bc = 0x7c62e2;
      puStack_b8 = (undefined4 *)FUN_00404b30();
      if (((int)puStack_b8 < 0) && (puStack_b8 != (undefined4 *)0x80004002)) {
        uStack_bc = 0x7c62f0;
        FUN_00878dfb();
      }
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_bc = 0x7c62fd;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      uStack_bc = 0x7c6308;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)0x7c6310;
    FUN_0087a1b0();
    puStack_b8 = (undefined4 *)0x0;
    uStack_bc = 0;
    puStack_c0 = (undefined1 *)&iStack_b4;
    FUN_00412335();
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_c0;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_c0 = (undefined1 *)0x7c6349;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      puStack_b8 = (undefined4 *)(unaff_EBP + -0x28);
      uStack_bc = 0x7c635f;
      puStack_b8 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_b8 < 0) && (puStack_b8 != (undefined4 *)0x80004002)) {
        uStack_bc = 0x7c636d;
        FUN_00878dfb();
      }
    }
    puStack_b8 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_bc = 0x7c637a;
    puStack_b8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      uStack_bc = 0x7c6385;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_b8 = (undefined4 *)0x80004003;
      uStack_bc = 0x7c6395;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)0x7c639d;
    uVar3 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    puStack_b8 = (undefined4 *)0x7c63b1;
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_b8 = (undefined4 *)0x80004003;
      uStack_bc = 0x7c63bf;
      FUN_00878dfb();
    }
    puStack_b8 = (undefined4 *)0x7c63c7;
    uVar3 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    puStack_b8 = (undefined4 *)0x7c63db;
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    puStack_b8 = (undefined4 *)0x7c63e8;
    piVar4 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(int *)(extraout_ECX + 0x1e78) = *piVar4 - *(int *)(unaff_EBP + 0xc) / 2;
    puStack_b8 = (undefined4 *)0x7c6403;
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(int *)(extraout_ECX + 0x1e7c) = (*(int *)(iVar2 + 4) - *(int *)(unaff_EBP + 8) / 2) + -0x5f;
    puStack_b8 = &DAT_00980690;
    uStack_bc = 0x7c6429;
    FUN_00403191();
    puStack_b8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_bc = 0x7c6436;
    FUN_00403191();
    iVar2 = *(int *)(extraout_ECX + 0x1e74);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar2 == 0) {
      puStack_b8 = (undefined4 *)0x80004003;
      uStack_bc = 0x7c644c;
      FUN_00878dfb();
    }
    puStack_c0 = *(undefined1 **)(unaff_EBP + -0x34);
    iVar2 = **(int **)(extraout_ECX + 0x1e74);
    uStack_bc = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_b8 = *(undefined4 **)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x1c) = *(int **)(extraout_ECX + 0x1e74);
    iVar2 = (**(code **)(iVar2 + 0x90))();
    if (iVar2 < 0) {
      piStack_e8 = *(int **)(unaff_EBP + -0x1c);
      piStack_f0 = (int *)0x7c6495;
      puStack_ec = (undefined *)iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_e8 = (int *)0x7c64a2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e8 = (int *)0x7c64af;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_e8 = (int *)0x7c64bc;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e8 = (int *)0x7c64c7;
      FUN_00878dfb();
    }
    piStack_e8 = (int *)0x7c64d4;
    FUN_00403191();
    piStack_e8 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined *)0x7c64e3;
    FUN_004031b7();
    bVar8 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (bVar8) {
      piStack_e8 = (int *)0x7c64f9;
      FUN_00878dfb();
    }
    piStack_e8 = (int *)(unaff_EBP + -0x38);
    puStack_ec = (undefined *)0x0;
    piStack_f0 = *(int **)(unaff_EBP + 8);
    puStack_100 = (undefined *)(unaff_EBP + -0x1c);
    iStack_f4 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_f8 = 0;
    piStack_fc = (int *)0x0;
    piStack_104 = (int *)0x7c6519;
    puVar5 = (undefined4 *)FUN_0042a39f();
    this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24);
    piStack_e8 = (int *)0x7c6525;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e8 = (int *)0x7c653a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e8 = (int *)0x7c6545;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_e8 = (int *)0x7c6552;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e8 = (int *)0x7c655d;
      FUN_00878dfb();
    }
    if (*(int *)this == 0) {
      piStack_e8 = (int *)0x7c656b;
      FUN_00878dfb();
    }
    piVar4 = *(int **)this;
    puStack_ec = (undefined *)0x7c657b;
    piStack_e8 = piVar4;
    iStack_f4 = (**(code **)(*piVar4 + 0xb4))();
    if (iStack_f4 < 0) {
      puStack_ec = &DAT_00963df8;
      uStack_f8 = 0x7c658b;
      piStack_f0 = piVar4;
      FUN_00878e09();
    }
    piStack_f0 = *(int **)(extraout_ECX + 0x1e74);
    puStack_ec = (undefined *)0x1;
    iStack_f4 = 0x7c659c;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar2 == 0) {
      puStack_ec = (undefined *)0x80004003;
      piStack_f0 = (int *)0x7c65af;
      FUN_00878dfb();
    }
    piVar4 = (int *)**(undefined4 **)(unaff_EBP + -0x24);
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_f4 = *(undefined4 *)(unaff_EBP + -0x34);
    piStack_f0 = *(int **)(unaff_EBP + -0x30);
    puStack_ec = *(undefined **)(unaff_EBP + -0x2c);
    puStack_100 = (undefined *)0x7c65c6;
    piStack_fc = piVar4;
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 100))();
    if ((int)puVar5 < 0) {
      puStack_100 = &DAT_00963de8;
      piStack_10c = (int *)0x7c65d6;
      puStack_108 = puVar5;
      piStack_104 = piVar4;
      FUN_00878e09();
    }
    puStack_100 = (undefined *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_104 = (int *)0x7c65e3;
    puStack_100 = (undefined *)FUN_00402bc3();
    if ((int)puStack_100 < 0) {
      piStack_104 = (int *)0x7c65ee;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x24);
    if (*piVar4 == 0) {
      puStack_100 = (undefined *)0x80004003;
      piStack_104 = (int *)0x7c6600;
      FUN_00878dfb();
    }
    piVar7 = (int *)*piVar4;
    puStack_100 = (undefined *)0xffffffff;
    puStack_108 = (undefined4 *)0x7c6612;
    piStack_104 = piVar7;
    iVar2 = (**(code **)(*piVar7 + 0xe0))();
    if (iVar2 < 0) {
      puStack_108 = (undefined4 *)&DAT_00963df8;
      piStack_10c = piVar7;
      FUN_00878e09(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        piStack_10c = (int *)0x7c663f;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)0x7c6647;
      uVar6 = FUN_0040cf4d();
      if (uVar6 <= *(uint *)(unaff_EBP + 8)) break;
      puStack_108 = (undefined4 *)0x7c6658;
      FUN_0087a1b0();
      piStack_10c = *(int **)(unaff_EBP + 8);
      puStack_108 = &piStack_104;
      piStack_10c = (int *)FUN_00412335();
      *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_108;
      FUN_00402e8e();
      piStack_10c = (int *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_0040263d();
      FUN_004048a4();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x6c);
      piStack_10c = (int *)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_108 = (undefined4 *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_10c = (int *)0x7c66a8;
      puStack_108 = (undefined4 *)FUN_0041a485();
      if (((int)puStack_108 < 0) && (puStack_108 != (undefined4 *)0x80004002)) {
        piStack_10c = (int *)0x7c66b9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_108 = (undefined4 *)0x7c66c5;
      FUN_004027b3();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        piStack_10c = (int *)0x7c66d1;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        piStack_10c = (int *)0x7c66dd;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      puStack_108 = (undefined4 *)0x7c66e8;
      puStack_108 = (undefined4 *)FUN_0040e48b();
      piStack_10c = piVar7;
      iVar2 = (**(code **)(*piVar7 + 0x44))();
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar7,&DAT_00963cc8);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      uVar3 = FUN_0040e53d();
      iVar2 = (**(code **)(*piVar7 + 0x4c))(piVar7,uVar3);
      if (iVar2 < 0) {
        puStack_108 = (undefined4 *)&DAT_00963cc8;
        piStack_10c = piVar7;
        FUN_00878e09(iVar2);
      }
      puStack_108 = (undefined4 *)0x78;
      *(int ***)(unaff_EBP + -0x28) = &piStack_10c;
      FUN_00679e4e(&piStack_10c,0x474);
      iVar2 = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_004115d9(iVar2);
      FUN_00404e7f(iVar2);
      iVar2 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_0040263d(iVar2);
      piStack_10c = (int *)FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piVar7 = (int *)FUN_00412550();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_108 = (undefined4 *)FUN_00402bc3(unaff_EBP + -0x9c);
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c67b2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_108 = (undefined4 *)0x7c67be;
      FUN_004027eb();
      puStack_108 = &DAT_00980690;
      piStack_10c = (int *)0x7c67c7;
      FUN_00403191();
      puStack_108 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_10c = (int *)0x7c67d4;
      FUN_00403191();
      puStack_108 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_10c = (int *)0x7c67e4;
      FUN_00403191();
      puStack_108 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_10c = (int *)0x7c67f1;
      FUN_00403191();
      puStack_108 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_10c = piVar7;
      FUN_004031b7();
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (iVar2 == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        piStack_10c = (int *)0x7c6813;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x5c);
      piStack_10c = (int *)(unaff_EBP + -0x7c);
      FUN_004250ac(unaff_EBP + -0xac,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x38,
                   unaff_EBP + -0x4c,unaff_EBP + -0x8c);
      puStack_108 = (undefined4 *)(unaff_EBP + -0xac);
      piStack_10c = (int *)0x7c6847;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c6852;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_10c = (int *)0x7c685f;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c686a;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_10c = (int *)0x7c6877;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c6882;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_10c = (int *)0x7c6892;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c689d;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_10c = (int *)0x7c68aa;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c68b5;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_10c = (int *)0x7c68c2;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c68cd;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_10c = (int *)0x7c68da;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x7c68e5;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    }
    puStack_108 = &DAT_00980690;
    piStack_10c = (int *)0x7c68fb;
    FUN_00403191();
    puStack_108 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_10c = (int *)0x7c6908;
    FUN_00403191();
    iVar2 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    if (iVar2 == 0) {
      puStack_108 = (undefined4 *)0x80004003;
      piStack_10c = (int *)0x7c6917;
      FUN_00878dfb();
    }
    piVar4 = (int *)*piVar4;
    piStack_10c = *(int **)(unaff_EBP + -0x54);
    puStack_108 = *(undefined4 **)(unaff_EBP + -0x50);
    iVar2 = (**(code **)(*piVar4 + 0x110))
                      (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                       *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                       *(undefined4 *)(unaff_EBP + -0x58));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004125e6();
    FUN_004125e6();
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


