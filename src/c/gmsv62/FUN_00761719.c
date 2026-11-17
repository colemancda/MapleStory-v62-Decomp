/* FUN_00761719 - 0x00761719 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00761719(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  bool bVar8;
  int *piStack_120;
  int *piStack_11c;
  undefined *puStack_118;
  int *piStack_114;
  undefined *puStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int *piStack_100;
  undefined *puStack_fc;
  int *piStack_f8;
  undefined *puStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined1 *puStack_cc;
  undefined4 *puStack_c8;
  int *piStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_b8 = 0x76173f;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_b8 = 0x761750;
  FUN_00403191();
  iStack_b8 = 0;
  iStack_bc = unaff_EBP + -0x50;
  iStack_c0 = unaff_EBP + -0x90;
  puStack_cc = (undefined1 *)&piStack_c4;
  *(int ***)(unaff_EBP + -0x10) = &piStack_c4;
  puStack_c8 = (undefined4 *)0x112c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_d0 = 0x761777;
  FUN_00679e4e();
  puStack_c8 = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_cc = (undefined1 *)0x761787;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x76178e;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x761795;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_bc = 0x7617a0;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    iStack_b8 = 0x7617b6;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_b8 = 0x7617c7;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_b8 = 0x7617d7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b8 = 0x7617e2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_b8 = 0x7617f2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b8 = 0x7617fd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_b8 = 0x76180a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b8 = 0x761815;
    FUN_00878dfb();
  }
  iStack_b8 = 0x76181e;
  FUN_00403191();
  iStack_b8 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_bc = 0x76182d;
  FUN_004031b7();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (bVar8) {
    iStack_b8 = 0x761843;
    FUN_00878dfb();
  }
  iStack_b8 = unaff_EBP + -0x3c;
  iStack_bc = 0;
  iStack_c0 = 0;
  piStack_c4 = (int *)0x0;
  puStack_c8 = (undefined4 *)0x0;
  puStack_cc = (undefined1 *)0x0;
  iStack_d0 = unaff_EBP + -0x14;
  uStack_d4 = 0x76185f;
  puVar2 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x69c);
  iStack_b8 = 0x76186e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b8 = 0x761883;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b8 = 0x76188e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_b8 = 0x76189b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b8 = 0x7618a6;
    FUN_00878dfb();
  }
  iStack_b8 = 0x7618b1;
  puVar2 = (undefined4 *)FUN_004489f5();
  iStack_b8 = *puVar2;
  iStack_bc = 0x7618be;
  FUN_0040ee87();
  iVar1 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    iStack_b8 = 0x7618d0;
    FUN_00878dfb();
  }
  piStack_c4 = *(int **)this;
  iVar1 = *piStack_c4;
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x14) = piStack_c4;
  puStack_c8 = (undefined4 *)0x7618e7;
  iVar1 = (**(code **)(iVar1 + 100))();
  if (iVar1 < 0) {
    puStack_c8 = (undefined4 *)&DAT_00963de8;
    puStack_cc = *(undefined1 **)(unaff_EBP + -0x14);
    uStack_d4 = 0x7618f9;
    iStack_d0 = iVar1;
    FUN_00878e09();
  }
  puStack_c8 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_cc = (undefined1 *)0x761906;
  puStack_c8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x761911;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_c8 = (undefined4 *)0x76191d;
  FUN_00412600();
  puStack_c8 = &DAT_00980690;
  puStack_cc = (undefined1 *)0x76192b;
  FUN_00403191();
  puStack_c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_cc = (undefined1 *)0x761938;
  FUN_00403191();
  iVar1 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar1 == 0) {
    puStack_c8 = (undefined4 *)0x80004003;
    puStack_cc = (undefined1 *)0x76194b;
    FUN_00878dfb();
  }
  piStack_f0 = *(int **)this;
  uStack_d4 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_d0 = *(undefined4 *)(unaff_EBP + -0x38);
  iVar1 = *piStack_f0;
  puStack_cc = *(undefined1 **)(unaff_EBP + -0x34);
  puStack_c8 = *(undefined4 **)(unaff_EBP + -0x30);
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_e8 = 0x10b;
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_ec = 0x2c;
  *(int **)(unaff_EBP + -0x10) = piStack_f0;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x20);
  puStack_f4 = (undefined *)0x761978;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    puStack_f4 = &DAT_00963de8;
    piStack_f8 = *(int **)(unaff_EBP + -0x10);
    piStack_100 = (int *)0x76198a;
    puStack_fc = (undefined *)iVar1;
    FUN_00878e09();
  }
  puStack_f4 = (undefined *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_f8 = (int *)0x761997;
  puStack_f4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    piStack_f8 = (int *)0x7619a2;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_f8 = (int *)0x7619af;
  puStack_f4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    piStack_f8 = (int *)0x7619ba;
    FUN_00878dfb();
  }
  if ((*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x618) == 1) &&
     (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x63c) == 0)) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = 0xffffff;
  }
  if (*(int *)this == 0) {
    puStack_f4 = (undefined *)0x80004003;
    piStack_f8 = (int *)0x7619e8;
    FUN_00878dfb();
  }
  piVar6 = *(int **)this;
  puStack_fc = (undefined *)0x7619f4;
  piStack_f8 = piVar6;
  puStack_f4 = (undefined *)uVar7;
  iVar1 = (**(code **)(*piVar6 + 0xe0))();
  if (iVar1 < 0) {
    puStack_fc = &DAT_00963df8;
    uStack_108 = 0x761a04;
    iStack_104 = iVar1;
    piStack_100 = piVar6;
    FUN_00878e09();
  }
  puStack_fc = (undefined *)(unaff_EBP + -0x14);
  piStack_100 = (int *)0x761a10;
  puVar2 = (undefined4 *)FUN_004489f5();
  piStack_100 = (int *)*puVar2;
  puStack_fc = (undefined *)0x1;
  iStack_104 = 0x761a1d;
  FUN_0040ee87();
  iVar1 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar1 == 0) {
    puStack_fc = (undefined *)0x80004003;
    piStack_100 = (int *)0x761a30;
    FUN_00878dfb();
  }
  piStack_10c = *(int **)this;
  iVar1 = *piStack_10c;
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_104 = *(undefined4 *)(unaff_EBP + -0x28);
  piStack_100 = *(int **)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x10) = piStack_10c;
  puStack_fc = *(undefined **)(unaff_EBP + -0x20);
  puStack_110 = (undefined *)0x761a4a;
  iVar1 = (**(code **)(iVar1 + 0xfc))();
  if (iVar1 < 0) {
    puStack_110 = &DAT_00963df8;
    piStack_114 = *(int **)(unaff_EBP + -0x10);
    piStack_11c = (int *)0x761a5d;
    puStack_118 = (undefined *)iVar1;
    FUN_00878e09();
  }
  puStack_110 = (undefined *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_114 = (int *)0x761a6a;
  puStack_110 = (undefined *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    piStack_114 = (int *)0x761a75;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_110 = (undefined *)0x761a81;
  FUN_00412600();
  if (*(int *)this == 0) {
    puStack_110 = (undefined *)0x80004003;
    piStack_114 = (int *)0x761a90;
    FUN_00878dfb();
  }
  piVar6 = *(int **)this;
  puStack_110 = (undefined *)0x1;
  puStack_118 = (undefined *)0x761a9d;
  piStack_114 = piVar6;
  piVar3 = (int *)(**(code **)(*piVar6 + 0xb4))();
  if ((int)piVar3 < 0) {
    puStack_118 = &DAT_00963df8;
    piStack_120 = piVar3;
    piStack_11c = piVar6;
    FUN_00878e09();
  }
  if (*(int *)this == 0) {
    puStack_118 = (undefined *)0x80004003;
    piStack_11c = (int *)0x761ab8;
    FUN_00878dfb();
  }
  piVar6 = *(int **)this;
  puStack_118 = (undefined *)0x1;
  piStack_120 = (int *)0x761ac5;
  piStack_11c = piVar6;
  iVar1 = (**(code **)(*piVar6 + 0xd8))();
  if (iVar1 < 0) {
    piStack_120 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar1,piVar6);
  }
  piStack_120 = &DAT_00980690;
  FUN_00403191();
  piStack_120 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00403191();
  piStack_120 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00403191();
  piStack_120 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00403191();
  piStack_120 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00403191();
  iVar1 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar1 == 0) {
    piStack_120 = (int *)0x80004003;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x70);
  FUN_004250ac(unaff_EBP + -0xb0,*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x2c,
               unaff_EBP + -0x3c,unaff_EBP + -0x80,unaff_EBP + -0x60);
  piStack_120 = (int *)(unaff_EBP + -0xb0);
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    FUN_00878dfb();
  }
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piStack_120 = (int *)0x761be7;
  FUN_00762225();
  piStack_120 = (int *)0x761bee;
  FUN_00762773();
  *(int ***)(unaff_EBP + -0x10) = &piStack_120;
  piStack_120 = (int *)0x0;
  FUN_004184ca(&DAT_0097812c,0xffffffff);
  FUN_0078a024(*(undefined4 *)(unaff_EBP + 8));
  if (*(uint *)(iVar1 + 0x570) != 0) {
    uVar4 = *(uint *)(iVar1 + 0x570) & 3;
    if (uVar4 == 1) {
      if (*(int *)(iVar1 + 0x5e4) == 0) {
        piStack_120 = (int *)0x74;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (iVar5 == 0) {
          piStack_120 = (int *)0x0;
        }
        else {
          piStack_120 = (int *)0x761cbe;
          piStack_120 = (int *)(**(code **)(*(int *)(iVar1 + 4) + 0x30))();
          iVar5 = (**(code **)(*(int *)(iVar1 + 4) + 0x2c))();
          piStack_120 = (int *)FUN_00761d2d(iVar5 + 0x10e);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00766ab1();
      }
      *(undefined4 *)(iVar1 + 0x570) = 1;
      *(undefined4 *)(iVar1 + 0x6b4) = 1;
    }
    else if (uVar4 == 2) {
      if (*(int *)(iVar1 + 0x5ec) == 0) {
        piStack_120 = (int *)0x574;
        iVar5 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (iVar5 == 0) {
          piStack_120 = (int *)0x0;
        }
        else {
          piStack_120 = (int *)0x761c54;
          piStack_120 = (int *)(**(code **)(*(int *)(iVar1 + 4) + 0x30))();
          iVar5 = (**(code **)(*(int *)(iVar1 + 4) + 0x2c))();
          piStack_120 = (int *)FUN_00761e34(iVar5 + 0x10e);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00766aff();
      }
      *(undefined4 *)(iVar1 + 0x570) = 2;
      *(undefined4 *)(iVar1 + 0x6b8) = 1;
    }
  }
  piStack_120 = (int *)0xffffffff;
  piVar6 = (int *)FUN_006b42c2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *piVar6 = iVar1;
  piStack_120 = *(int **)(unaff_EBP + -0x18);
  if (piStack_120 != (int *)0x0) {
    (**(code **)(*piStack_120 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


