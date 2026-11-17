/* FUN_005b5b1b - 0x005b5b1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b5b1b(void)

{
  int *piVar1;
  IBinding *pIVar2;
  int *piVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar8;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  undefined4 *puStack_170;
  int *piStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  int *piStack_148;
  undefined4 *puStack_144;
  int *piStack_140;
  undefined *puStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  undefined *puStack_128;
  int *piStack_124;
  undefined1 *puStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 *puStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int *piStack_d4;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined *puStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined *puStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 500);
  iStack_a4 = 0x5b5b44;
  p_Var4 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                     ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 500),
                      (IBinding *)0x0);
  pIVar2 = *(IBinding **)p_Var4;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1f0);
  iStack_a4 = 0x5b5b54;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1f0),pIVar2);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a4 = 0x5b5b6f;
  FUN_00403191();
  iStack_a4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_a8 = 0x5b5b7e;
  FUN_004031b7();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (bVar8) {
    iStack_a4 = 0x5b5b94;
    FUN_00878dfb();
  }
  iStack_a4 = unaff_EBP + -0x58;
  uStack_a8 = 6;
  uStack_ac = 0;
  piStack_b0 = (int *)0x0;
  puStack_b4 = (undefined *)0x0;
  uStack_b8 = 0;
  iStack_bc = unaff_EBP + -0x14;
  uStack_c0 = 0x5b5bb1;
  puVar5 = (undefined4 *)FUN_0042a39f();
  iStack_a4 = 0x5b5bbb;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c),
             (IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a4 = 0x5b5bd0;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_a4 = 0x5b5bdb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a4 = 0x5b5be8;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_a4 = 0x5b5bf3;
    FUN_00878dfb();
  }
  iStack_a4 = 0x5b5bfe;
  puVar5 = (undefined4 *)FUN_004489f5();
  iStack_a4 = *puVar5;
  uStack_a8 = 0x5b5c0b;
  FUN_0040ee87();
  iVar6 = **(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar6 == 0) {
    iStack_a4 = 0x5b5c20;
    FUN_00878dfb();
  }
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x44);
  piStack_b0 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x1f0);
  iVar6 = *piStack_b0;
  iStack_a4 = *(undefined4 *)(unaff_EBP + -0x40);
  *(int **)(unaff_EBP + -0x14) = piStack_b0;
  puStack_b4 = (undefined *)0x5b5c3f;
  iVar6 = (**(code **)(iVar6 + 100))();
  if (iVar6 < 0) {
    puStack_b4 = &DAT_00963de8;
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_c0 = 0x5b5c51;
    iStack_bc = iVar6;
    FUN_00878e09();
  }
  puStack_b4 = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_b8 = 0x5b5c5e;
  puStack_b4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    uStack_b8 = 0x5b5c69;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_b4 = (undefined *)0x5b5c75;
  FUN_00412600();
  iVar6 = *(int *)(unaff_EBP + -0x18);
  puStack_b4 = (undefined *)(unaff_EBP + -0x14);
  uStack_b8 = 0x5b5c83;
  puVar5 = (undefined4 *)FUN_004489f5();
  uStack_b8 = *puVar5;
  puStack_b4 = (undefined *)0x1;
  iStack_bc = 0x5b5c90;
  FUN_0040ee87();
  iVar6 = *(int *)(iVar6 + 0x1f0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar6 == 0) {
    puStack_b4 = (undefined *)0x80004003;
    uStack_b8 = 0x5b5cad;
    FUN_00878dfb();
  }
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x44);
  piStack_c4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x1f0);
  iVar6 = *piStack_c4;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x40);
  *(int **)(unaff_EBP + -0x10) = piStack_c4;
  puStack_b4 = *(undefined **)(unaff_EBP + -0x3c);
  puStack_c8 = (undefined *)0x5b5ccf;
  iVar6 = (**(code **)(iVar6 + 0xfc))();
  if (iVar6 < 0) {
    puStack_c8 = &DAT_00963df8;
    piStack_cc = *(int **)(unaff_EBP + -0x10);
    piStack_d4 = (int *)0x5b5ce1;
    puStack_d0 = (undefined4 *)iVar6;
    FUN_00878e09();
  }
  puStack_c8 = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_cc = (int *)0x5b5cee;
  puStack_c8 = (undefined *)FUN_00402bc3();
  if ((int)puStack_c8 < 0) {
    piStack_cc = (int *)0x5b5cf9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_c8 = (undefined *)0x5b5d05;
  FUN_00412600();
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x1f0);
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1f0) == 0) {
    puStack_c8 = (undefined *)0x80004003;
    piStack_cc = (int *)0x5b5d21;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar1;
  puStack_c8 = (undefined *)0xffffffff;
  puStack_d0 = (undefined4 *)0x5b5d2e;
  piStack_cc = piVar3;
  iVar6 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar6 < 0) {
    puStack_d0 = (undefined4 *)&DAT_00963df8;
    uStack_dc = 0x5b5d3e;
    iStack_d8 = iVar6;
    piStack_d4 = piVar3;
    FUN_00878e09();
  }
  puStack_d0 = &DAT_00980690;
  piStack_d4 = (int *)0x5b5d47;
  FUN_00403191();
  puStack_d0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_d4 = (int *)0x5b5d54;
  FUN_00403191();
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar6 == 0) {
    puStack_d0 = (undefined4 *)0x80004003;
    piStack_d4 = (int *)0x5b5d67;
    FUN_00878dfb();
  }
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_d8 = *(undefined4 *)(unaff_EBP + -0x54);
  piStack_d4 = *(int **)(unaff_EBP + -0x50);
  puStack_d0 = *(undefined4 **)(unaff_EBP + -0x4c);
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_f0 = 0xcf;
  piStack_f8 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x1f0);
  iVar6 = *piStack_f8;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_f4 = 0x19b;
  *(int **)(unaff_EBP + -0x10) = piStack_f8;
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_fc = (undefined4 *)0x5b5d9f;
  iVar6 = (**(code **)(iVar6 + 0x90))();
  if (iVar6 < 0) {
    puStack_fc = (undefined4 *)&DAT_00963de8;
    iStack_100 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_108 = 0x5b5db1;
    iStack_104 = iVar6;
    FUN_00878e09();
  }
  puStack_fc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_100 = 0x5b5dbe;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    iStack_100 = 0x5b5dcb;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_100 = 0x5b5dd8;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    iStack_100 = 0x5b5de3;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)0x3bc;
  iStack_100 = unaff_EBP + -0x10;
  iStack_104 = 0x5b5df6;
  puVar5 = (undefined4 *)FUN_00679d22();
  iVar6 = *(int *)(unaff_EBP + -0x18);
  puStack_fc = *(undefined4 **)(iVar6 + 0x758);
  iStack_100 = *puVar5;
  iStack_104 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_108 = 0x5b5e0f;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_fc = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_100 = 0x5b5e26;
    FUN_00434e38();
  }
  puStack_fc = &DAT_00980690;
  iStack_100 = 0x5b5e30;
  FUN_00403191();
  puStack_fc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_100 = 0x5b5e3d;
  FUN_00403191();
  puStack_fc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_100 = 0x5b5e4a;
  FUN_00403191();
  puStack_fc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_100 = 0x5b5e57;
  FUN_00403191();
  puStack_fc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_100 = 0x5b5e64;
  FUN_00403191();
  puStack_fc = (undefined4 *)0x0;
  iStack_100 = 0;
  iStack_104 = 0xffffffff;
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_10c = 0;
  uStack_110 = 0;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  iStack_118 = 0;
  iStack_11c = -1;
  piStack_124 = (int *)0x5b5e93;
  puStack_120 = (undefined1 *)&uStack_110;
  piStack_124 = (int *)FUN_00449713();
  puStack_128 = (undefined *)0x5b5e99;
  puStack_120 = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x14) = &iStack_11c;
  piStack_124 = (int *)0x5b5ea6;
  FUN_004033a1();
  puStack_120 = (undefined1 *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  *(int *)(unaff_EBP + -0x6c) = iVar6 + 0x1d0;
  piStack_124 = (int *)0x5b5ebf;
  FUN_0040263d();
  piStack_124 = (int *)0x5b5ec6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_11c = 0x5b5ed1;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar6 != 0) {
    iStack_118 = 0x5b5ee7;
    iVar6 = FUN_0041a581();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      iStack_118 = 0x5b5ef8;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
  iVar6 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x1f0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar6 == 0) {
    iStack_118 = 0x5b5f1d;
    FUN_00878dfb();
  }
  iStack_118 = unaff_EBP + -0x68;
  iStack_11c = unaff_EBP + -0x7c;
  puStack_120 = (undefined1 *)(unaff_EBP + -0x58);
  piStack_124 = (int *)(unaff_EBP + -0x48);
  puStack_128 = *(undefined **)(unaff_EBP + -0x14);
  iStack_12c = unaff_EBP + -0x8c;
  iStack_130 = 0x5b5f42;
  FUN_004250ac();
  iStack_118 = 0x5b5f4e;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5f59;
    FUN_00878dfb();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_118 = 0x5b5f71;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5f7c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_118 = 0x5b5f89;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5f94;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_118 = 0x5b5fa1;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5fac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_118 = 0x5b5fb9;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5fc4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_118 = 0x5b5fd1;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5fdc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_118 = 0x5b5fe9;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b5ff4;
    FUN_00878dfb();
  }
  iStack_118 = 0x5b5ffd;
  FUN_00403191();
  iStack_118 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_11c = 0x5b600c;
  FUN_004031b7();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (bVar8) {
    iStack_118 = 0x5b6022;
    FUN_00878dfb();
  }
  iStack_118 = unaff_EBP + -0x38;
  iStack_11c = 6;
  puStack_120 = (undefined1 *)0x0;
  piStack_124 = (int *)0x0;
  puStack_128 = (undefined *)0x0;
  iStack_12c = 0;
  iStack_130 = unaff_EBP + -0x10;
  uStack_134 = 0x5b603f;
  puVar5 = (undefined4 *)FUN_0042a39f();
  this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20);
  iStack_118 = 0x5b604b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_118 = 0x5b6060;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b606b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_118 = 0x5b6078;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_118 = 0x5b6083;
    FUN_00878dfb();
  }
  iStack_118 = 0x5b608f;
  puVar5 = (undefined4 *)FUN_004489f5();
  iStack_118 = *puVar5;
  iStack_11c = 0x5b609c;
  FUN_0040ee87();
  iVar6 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar6 == 0) {
    iStack_118 = 0x5b60ae;
    FUN_00878dfb();
  }
  piStack_124 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
  iVar6 = *piStack_124;
  puStack_120 = *(undefined1 **)(unaff_EBP + -0x38);
  iStack_11c = *(int *)(unaff_EBP + -0x34);
  iStack_118 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x10) = piStack_124;
  puStack_128 = (undefined *)0x5b60c8;
  iVar6 = (**(code **)(iVar6 + 100))();
  if (iVar6 < 0) {
    puStack_128 = &DAT_00963de8;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_134 = 0x5b60da;
    iStack_130 = iVar6;
    FUN_00878e09();
  }
  puStack_128 = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_12c = 0x5b60e7;
  puStack_128 = (undefined *)FUN_00402bc3();
  if ((int)puStack_128 < 0) {
    iStack_12c = 0x5b60f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_128 = (undefined *)0x5b60fe;
  FUN_00412600();
  puStack_128 = (undefined *)(unaff_EBP + -0x14);
  iStack_12c = 0x5b610a;
  puVar5 = (undefined4 *)FUN_004489f5();
  iStack_12c = *puVar5;
  puStack_128 = (undefined *)0x1;
  iStack_130 = 0x5b6117;
  FUN_0040ee87();
  iVar6 = **(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar6 == 0) {
    puStack_128 = (undefined *)0x80004003;
    iStack_12c = 0x5b612d;
    FUN_00878dfb();
  }
  piStack_138 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
  iVar6 = *piStack_138;
  uStack_134 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_130 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x10) = piStack_138;
  puStack_128 = *(undefined **)(unaff_EBP + -0x2c);
  puStack_13c = (undefined *)0x5b614a;
  iVar6 = (**(code **)(iVar6 + 0xfc))();
  if (iVar6 < 0) {
    puStack_13c = &DAT_00963df8;
    piStack_140 = *(int **)(unaff_EBP + -0x10);
    piStack_148 = (int *)0x5b615c;
    puStack_144 = (undefined4 *)iVar6;
    FUN_00878e09();
  }
  puStack_13c = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_140 = (int *)0x5b6169;
  puStack_13c = (undefined *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x5b6174;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_13c = (undefined *)0x5b6180;
  FUN_00412600();
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (*piVar1 == 0) {
    puStack_13c = (undefined *)0x80004003;
    piStack_140 = (int *)0x5b6192;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar1;
  puStack_13c = (undefined *)0xffffffff;
  puStack_144 = (undefined4 *)0x5b619f;
  piStack_140 = piVar3;
  iVar6 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar6 < 0) {
    puStack_144 = (undefined4 *)&DAT_00963df8;
    uStack_150 = 0x5b61af;
    iStack_14c = iVar6;
    piStack_148 = piVar3;
    FUN_00878e09();
  }
  puStack_144 = &DAT_00980690;
  piStack_148 = (int *)0x5b61b8;
  FUN_00403191();
  puStack_144 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_148 = (int *)0x5b61c5;
  FUN_00403191();
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar6 == 0) {
    puStack_144 = (undefined4 *)0x80004003;
    piStack_148 = (int *)0x5b61d8;
    FUN_00878dfb();
  }
  piStack_16c = (int *)**(undefined4 **)(unaff_EBP + -0x20);
  uStack_150 = *(undefined4 *)(unaff_EBP + -0x68);
  iStack_14c = *(undefined4 *)(unaff_EBP + -100);
  iVar6 = *piStack_16c;
  piStack_148 = *(int **)(unaff_EBP + -0x60);
  puStack_144 = *(undefined4 **)(unaff_EBP + -0x5c);
  uStack_160 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_164 = 0xcf;
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_168 = 0x1f1;
  *(int **)(unaff_EBP + -0x10) = piStack_16c;
  uStack_154 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_170 = (undefined4 *)0x5b620b;
  iVar6 = (**(code **)(iVar6 + 0x90))();
  if (iVar6 < 0) {
    puStack_170 = (undefined4 *)&DAT_00963de8;
    iStack_174 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_17c = 0x5b621d;
    iStack_178 = iVar6;
    FUN_00878e09();
  }
  puStack_170 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_174 = 0x5b622a;
  puStack_170 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_170 < 0) {
    iStack_174 = 0x5b6237;
    FUN_00878dfb();
  }
  puStack_170 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_174 = 0x5b6244;
  puStack_170 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_170 < 0) {
    iStack_174 = 0x5b624f;
    FUN_00878dfb();
  }
  puStack_170 = (undefined4 *)0x3bc;
  iStack_174 = unaff_EBP + -0x10;
  iStack_178 = 0x5b6262;
  puVar5 = (undefined4 *)FUN_00679d22();
  puStack_170 = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 0x75c);
  iStack_174 = *puVar5;
  iStack_178 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_17c = 0x5b627b;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_170 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_174 = 0x5b6292;
    FUN_00434e38();
  }
  puStack_170 = &DAT_00980690;
  iStack_174 = 0x5b629c;
  FUN_00403191();
  puStack_170 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_174 = 0x5b62a9;
  FUN_00403191();
  puStack_170 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_174 = 0x5b62b6;
  FUN_00403191();
  puStack_170 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_174 = 0x5b62c3;
  FUN_00403191();
  puStack_170 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_174 = 0x5b62d0;
  FUN_00403191();
  puStack_170 = (undefined4 *)0x0;
  iStack_174 = 0;
  iStack_178 = 0xffffffff;
  uStack_17c = *(undefined4 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_180 = 0;
  uStack_184 = 0;
  iStack_188 = 0x5b62e3;
  (*DAT_0097b4c8)();
  iStack_188 = 0x5b62f0;
  FUN_0087a1b0();
  iStack_188 = 0;
  iStack_18c = 0;
  iStack_190 = -1;
  uVar7 = FUN_00449713(&uStack_184);
  uVar7 = FUN_00456ad5(uVar7);
  *(int **)(unaff_EBP + -0x14) = &iStack_190;
  FUN_004033a1(uVar7);
  iVar6 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_0040263d(iVar6);
  FUN_004048a4(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_190 = 0x5b6337;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar6 != 0) {
    iStack_188 = unaff_EBP + -0x10;
    iStack_18c = 0x5b634d;
    iStack_188 = FUN_0041a581();
    if ((iStack_188 < 0) && (iStack_188 != -0x7fffbffe)) {
      iStack_18c = 0x5b635e;
      FUN_00878dfb();
    }
  }
  iVar6 = **(int **)(unaff_EBP + -0x20);
  uVar7 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar6 == 0) {
    iStack_188 = 0x80004003;
    iStack_18c = 0x5b6376;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x58;
  iStack_18c = unaff_EBP + -0x48;
  iStack_190 = unaff_EBP + -0x7c;
  FUN_004250ac(unaff_EBP + -0x9c,uVar7,unaff_EBP + -0x38,unaff_EBP + -0x68);
  iStack_188 = unaff_EBP + -0x9c;
  iStack_18c = 0x5b63a5;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b63b0;
    FUN_00878dfb();
  }
  iStack_188 = 0x5b63b8;
  FUN_004125e6();
  iStack_188 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_18c = 0x5b63c8;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b63d3;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_18c = 0x5b63e0;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b63eb;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_18c = 0x5b63f8;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b6403;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_18c = 0x5b6410;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b641b;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_18c = 0x5b6428;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b6433;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_18c = 0x5b6440;
  iStack_188 = FUN_00402bc3();
  if (iStack_188 < 0) {
    iStack_18c = 0x5b644b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_188 = 0x5b6457;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_188 = 0x5b6463;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


