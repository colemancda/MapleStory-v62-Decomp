/* FUN_005ed292 - 0x005ed292 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ed292(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  int iStack_104;
  int iStack_100;
  int *piStack_fc;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  iVar5 = DAT_0097924c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_b8 = (int *)0x5ed2c3;
  FUN_005ee035();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b8 = (int *)0x5ed2d2;
  FUN_005ee059();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_b8 = (int *)0x5ed2e1;
  FUN_005ee07d();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_b8 = (int *)0x5ed2f0;
  FUN_005ee0a1();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_b8 = (int *)0x5ed2ff;
  FUN_005ee0c5();
  piStack_b8 = (int *)0x0;
  iStack_bc = 1;
  iStack_c0 = 0x400;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c4 = 0x5ed316;
  iStack_bc = FUN_00415015();
  iStack_c0 = 0x5ed31c;
  FUN_00471777();
  piStack_b8 = (int *)0x5ed329;
  FUN_004150c0();
  piStack_b8 = (int *)0x0;
  iStack_bc = 1;
  iStack_c0 = 0x400;
  iStack_c4 = 0x5ed338;
  iStack_bc = FUN_00415015();
  iStack_c0 = 0x5ed33e;
  FUN_00471777();
  piStack_b8 = (int *)0x5ed34b;
  FUN_004150c0();
  piStack_b8 = (int *)0x0;
  iStack_bc = 1;
  iStack_c0 = 0x400;
  iStack_c4 = 0x5ed35a;
  iStack_bc = FUN_00415015();
  iStack_c0 = 0x5ed360;
  FUN_00471777();
  piStack_b8 = (int *)0x5ed36d;
  FUN_004150c0();
  piStack_b8 = (int *)0x0;
  iStack_bc = 1;
  iStack_c0 = 0x400;
  iStack_c4 = 0x5ed37c;
  iStack_bc = FUN_00415015();
  iStack_c0 = 0x5ed382;
  FUN_00471777();
  piStack_b8 = (int *)0x5ed38f;
  FUN_004150c0();
  piStack_b8 = (int *)0x0;
  iStack_bc = 1;
  iStack_c0 = 0x400;
  iStack_c4 = 0x5ed39e;
  iStack_bc = FUN_00415015();
  iStack_c0 = 0x5ed3a4;
  FUN_00471777();
  piStack_b8 = (int *)0x5ed3b1;
  FUN_004150c0();
  piStack_b8 = (int *)0x5ed3bf;
  FUN_005edfed();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_b8 = (int *)0x5ed3ce;
  FUN_005ee011();
  iVar2 = *(int *)(extraout_ECX + 0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 != 0) {
    piStack_b8 = (int *)0xfffffffe;
    iStack_bc = 0x5ed3e7;
    FUN_004031b7();
    iVar2 = *(int *)(extraout_ECX + 0xe4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      piStack_b8 = (int *)0x5ed3ff;
      FUN_00878dfb();
    }
    piStack_b8 = (int *)(unaff_EBP + -0x30);
    iStack_bc = 0x5ed412;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_b8 = (int *)0x5ed427;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_b8 = (int *)0x5ed432;
      FUN_00878dfb();
    }
  }
  if (*(int *)(extraout_ECX + 0xec) != 0) {
    piStack_b8 = (int *)0xfffffffe;
    iStack_bc = 0x5ed44a;
    FUN_004031b7();
    iVar2 = *(int *)(extraout_ECX + 0xec);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar2 == 0) {
      piStack_b8 = (int *)0x5ed460;
      FUN_00878dfb();
    }
    piStack_b8 = (int *)(unaff_EBP + -0x30);
    iStack_bc = 0x5ed473;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_b8 = (int *)0x5ed488;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_b8 = (int *)0x5ed493;
      FUN_00878dfb();
    }
  }
  cVar1 = *(char *)(iVar5 + 0x3ac);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x30) = 0xff000000;
  }
  else if (cVar1 == '\x01') {
    piStack_b8 = (int *)(unaff_EBP + -0x90);
    iStack_bc = 0x5ed673;
    piVar3 = (int *)FUN_00679d86();
    iVar2 = *piVar3;
    piStack_b8 = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_bc = 0x5ed682;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x90) != 0) {
      iVar2 = *(int *)(unaff_EBP + -0x90) + -0xc;
      piStack_b8 = (int *)0x5ed69d;
      FUN_00403384();
    }
    piStack_b8 = (int *)0xff;
    iStack_bc = 0;
    iStack_c4 = extraout_ECX + 0xf0;
    *(int **)(unaff_EBP + -0x18) = &iStack_c0;
    iStack_c8 = 0x5ed6b7;
    iStack_c0 = iVar2;
    FUN_0041160e();
    iStack_cc = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x2d;
    iStack_c8 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x4c) + 0x71;
    *(int **)(unaff_EBP + -0x44) = &iStack_cc;
    iStack_c4 = iStack_cc;
    FUN_00433bdf();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00411641();
    puVar4 = (undefined4 *)FUN_0042e3f0();
    piStack_b8 = (int *)0x5ed706;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xf4),
               (IBinding *)*puVar4);
    FUN_00412600();
    if (*(int *)(extraout_ECX + 0xf4) != 0) {
      piStack_b8 = (int *)0x5ed71f;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_b8 = (int *)0x5ed72f;
      FUN_00403191();
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xf4);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (iVar2 == 0) {
        piStack_b8 = (int *)0x5ed74a;
        FUN_00878dfb();
      }
      iStack_c0 = *(int *)(unaff_EBP + -0x70);
      iStack_bc = *(undefined4 *)(unaff_EBP + -0x6c);
      piStack_b8 = *(int **)(unaff_EBP + -0x68);
      iStack_cc = *(int *)(unaff_EBP + -0x9c);
      piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xf4);
      iVar2 = *piVar3;
      iStack_c8 = *(int *)(unaff_EBP + -0x98);
      *(int **)(unaff_EBP + -0x44) = piVar3;
      iStack_c4 = *(int *)(unaff_EBP + -0x94);
      iVar2 = (**(code **)(iVar2 + 0x110))();
      if (iVar2 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar2 + 0xf4) == 0) {
        FUN_00878dfb();
      }
      piVar3 = *(int **)(iVar2 + 0xf4);
      iStack_bc = (**(code **)(*piVar3 + 0xb4))();
      if (iStack_bc < 0) {
        iStack_c0 = 0x5ed7f8;
        piStack_b8 = piVar3;
        FUN_00878e09();
      }
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x11c) = 1;
  }
  else if (cVar1 == '\x02') {
    piStack_b8 = (int *)(unaff_EBP + -0x88);
    iStack_bc = 0x5ed4ce;
    piVar3 = (int *)FUN_00679d86();
    iVar2 = *piVar3;
    piStack_b8 = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_bc = 0x5ed4dd;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x88) != 0) {
      iVar2 = *(int *)(unaff_EBP + -0x88) + -0xc;
      piStack_b8 = (int *)0x5ed4f8;
      FUN_00403384();
    }
    piStack_b8 = (int *)0xff;
    iStack_bc = 0;
    iStack_c4 = extraout_ECX + 0xf0;
    *(int **)(unaff_EBP + -0x44) = &iStack_c0;
    iStack_c8 = 0x5ed512;
    iStack_c0 = iVar2;
    FUN_0041160e();
    iStack_cc = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x50) + 0x2d;
    iStack_c8 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x4c) + 0x77;
    *(int **)(unaff_EBP + -0x18) = &iStack_cc;
    iStack_c4 = iStack_cc;
    FUN_00433bdf();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00411641();
    puVar4 = (undefined4 *)FUN_0042e3f0();
    piStack_b8 = (int *)0x5ed564;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xf8),
               (IBinding *)*puVar4);
    FUN_00412600();
    if (*(int *)(extraout_ECX + 0xf8) != 0) {
      piStack_b8 = (int *)0x5ed580;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_b8 = (int *)0x5ed58d;
      FUN_00403191();
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xf8);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (iVar2 == 0) {
        piStack_b8 = (int *)0x5ed5a8;
        FUN_00878dfb();
      }
      iStack_c0 = *(int *)(unaff_EBP + -0x40);
      iStack_bc = *(undefined4 *)(unaff_EBP + -0x3c);
      piStack_b8 = *(int **)(unaff_EBP + -0x38);
      iStack_cc = *(int *)(unaff_EBP + -0x28);
      piVar3 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xf8);
      iVar2 = *piVar3;
      iStack_c8 = *(int *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x44) = piVar3;
      iStack_c4 = *(int *)(unaff_EBP + -0x20);
      iVar2 = (**(code **)(iVar2 + 0x110))();
      if (iVar2 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar2 + 0xf8) == 0) {
        FUN_00878dfb();
      }
      piVar3 = *(int **)(iVar2 + 0xf8);
      iStack_bc = (**(code **)(*piVar3 + 0xb4))();
      if (iStack_bc < 0) {
        iStack_c0 = 0x5ed650;
        piStack_b8 = piVar3;
        FUN_00878e09();
      }
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x120) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_b8 = (int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_bc = 0x5ed829;
  piVar3 = (int *)FUN_00679e4e();
  puVar4 = (undefined4 *)*piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (puVar4 == (undefined4 *)0x0) {
    iStack_bc = 0;
  }
  else {
    iStack_bc = *puVar4;
  }
  piStack_b8 = (int *)(unaff_EBP + -0x10);
  iStack_c0 = 0x5ed845;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00402fa6();
  piStack_b8 = (int *)0x5ed85d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_b8 = (int *)0x5ed86a;
  FUN_00403191();
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (piVar3 == (int *)0x0) {
    piStack_b8 = (int *)0x5ed87f;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  iStack_c0 = *(int *)(unaff_EBP + -0x40);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x3c);
  iVar2 = *piVar3;
  piStack_b8 = *(int **)(unaff_EBP + -0x38);
  iStack_cc = *(int *)(unaff_EBP + -0x28);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x20);
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x14);
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar5 = (**(code **)(*piVar3 + 0x8c))();
  if (iVar5 < 0) {
    iStack_104 = 0x5ed941;
    iStack_100 = iVar5;
    piStack_fc = piVar3;
    FUN_00878e09();
  }
  piStack_fc = (int *)0x5ed94a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_fc = (int *)0x5ed957;
  FUN_00403191();
  piStack_fc = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_100 = 0x5ed96e;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5ed977;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x1c6;
  iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + 0x4c) + 0x16c;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_fc = (int *)0x5ed9be;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ed9c9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5ed9d6;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ed9e1;
    FUN_00878dfb();
  }
  piStack_fc = (int *)0x5ed9ea;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_fc = (int *)0x5ed9f7;
  FUN_00403191();
  piStack_fc = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_100 = 0x5eda0e;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5eda17;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x1d6;
  iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + 0x4c) + 0x16c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_fc = (int *)0x5eda59;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5eda64;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5eda71;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5eda7c;
    FUN_00878dfb();
  }
  piStack_fc = (int *)0x5eda85;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  piStack_fc = (int *)0x5eda92;
  FUN_00403191();
  piStack_fc = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_100 = 0x5edaa9;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5edab2;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x1e6;
  iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + 0x4c) + 0x16c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  piStack_fc = (int *)0x5edaf4;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edaff;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5edb0c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edb17;
    FUN_00878dfb();
  }
  piStack_fc = (int *)0x5edb20;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_fc = (int *)0x5edb2d;
  FUN_00403191();
  piStack_fc = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_100 = 0x5edb44;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5edb4d;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x1f6;
  iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + 0x4c) + 0x16c;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_fc = (int *)0x5edb8f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edb9a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5edba7;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edbb2;
    FUN_00878dfb();
  }
  piStack_fc = (int *)0x5edbbb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  piStack_fc = (int *)0x5edbc8;
  FUN_00403191();
  piStack_fc = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_100 = 0x5edbdf;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5edbe8;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x206;
  iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + 0x4c) + 0x16c;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  piStack_fc = (int *)0x5edc2a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edc35;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5edc42;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edc4d;
    FUN_00878dfb();
  }
  piStack_fc = (int *)0x5edc59;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  piStack_fc = (int *)(unaff_EBP + -0x70);
  iStack_100 = 0x5edc63;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edc6f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  piStack_fc = (int *)0x5edc79;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  piStack_fc = (int *)(unaff_EBP + -0x80);
  iStack_100 = 0x5edc83;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edc8f;
    FUN_00878dfb();
  }
  piStack_fc = (int *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_100 = 0x5edca6;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5edcb2;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x20d;
  iVar5 = *(int *)(*(int *)(iVar2 + 0x98) + 0x4c) + 0x133;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  piStack_fc = (int *)0x5edcf7;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edd02;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5edd0f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edd1a;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x60) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(unaff_EBP + -0x60) + -4);
  }
  *(int *)(unaff_EBP + -0x1c) = iVar5 << 2;
  piStack_fc = (int *)0x5edd34;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  piStack_fc = (int *)(unaff_EBP + -0x80);
  iStack_100 = 0x5edd3e;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edd4a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_fc = (int *)0x5edd54;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  piStack_fc = (int *)(unaff_EBP + -0x70);
  iStack_100 = 0x5edd5e;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edd6a;
    FUN_00878dfb();
  }
  piStack_fc = (int *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_100 = 0x5edd81;
  iStack_100 = FUN_00449749();
  iStack_104 = 0x5edd8a;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_104;
  FUN_00448a17(uVar6);
  iVar7 = *(int *)(*(int *)(iVar2 + 0x98) + 0x50) + 0x20d;
  iVar5 = (*(int *)(*(int *)(iVar2 + 0x98) + 0x4c) - *(int *)(unaff_EBP + -0x1c)) + 0x1fe;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_004115d9(iVar5,iVar7);
  FUN_00448e3a(iVar5,iVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_fc = (int *)0x5eddd2;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5edddd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5eddea;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5eddf5;
    FUN_00878dfb();
  }
  piStack_fc = (int *)0x5eddfb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_fc = (int *)(unaff_EBP + -0x2c);
  iStack_100 = 0x5ede05;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ede11;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  piStack_fc = (int *)0x5ede1b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  piStack_fc = (int *)(unaff_EBP + -0x40);
  iStack_100 = 0x5ede25;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ede31;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  piStack_fc = (int *)0x5ede3e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
  piStack_fc = (int *)(unaff_EBP + -0xa0);
  iStack_100 = 0x5ede4b;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ede57;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_fc = (int *)0x5ede61;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  piStack_fc = (int *)(unaff_EBP + -0x80);
  iStack_100 = 0x5ede6b;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ede77;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  piStack_fc = (int *)0x5ede81;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  piStack_fc = (int *)(unaff_EBP + -0x70);
  iStack_100 = 0x5ede8b;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    piStack_fc = (int *)0x5ede97;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(iVar2 + 0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  if (iVar2 == 0) {
    piStack_fc = (int *)0x5edeb0;
    FUN_00878dfb();
  }
  piStack_fc = (int *)(unaff_EBP + -0x40);
  iStack_100 = unaff_EBP + -0xa0;
  iStack_104 = unaff_EBP + -0x80;
  FUN_004250ac(unaff_EBP + -0xb0,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x70);
  piStack_fc = (int *)0x5edee4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_fc = (int *)0x5edeef;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  piStack_fc = (int *)0x5edefc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_fc = (int *)0x5edf07;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_fc = (int *)0x5edf14;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_fc = (int *)0x5edf1f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  piStack_fc = (int *)0x5edf2f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_fc = (int *)0x5edf3a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  piStack_fc = (int *)0x5edf47;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_fc = (int *)0x5edf52;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_fc = (int *)0x5edf5f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_fc = (int *)0x5edf6a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_fc = (int *)0x5edf7b;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


