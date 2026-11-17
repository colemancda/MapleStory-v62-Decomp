/* FUN_006fbf59 - 0x006fbf59 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fbf59(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int *piStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  undefined *puStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  int *piStack_118;
  undefined *puStack_114;
  int *piStack_110;
  undefined *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 *puStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x10) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa8);
  iStack_d0 = 0x6fbf85;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa8),
             (IBinding *)0x0);
  iStack_d0 = 0x6fbf97;
  iVar2 = FUN_006fc790();
  iVar2 = *(int *)(iVar2 + 0x18);
  *(int *)(extraout_ECX + 0xa0) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0xa0) = 0x897b50;
  }
  iStack_d0 = 0x6fbfbc;
  FUN_00403191();
  iStack_d0 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_d4 = 0x6fbfca;
  FUN_004031b7();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar8) {
    iStack_d0 = 0x6fbfe0;
    FUN_00878dfb();
  }
  iStack_d0 = unaff_EBP + -0x54;
  uStack_d4 = 0;
  uStack_d8 = 0;
  piStack_dc = (int *)0x0;
  puStack_e0 = (undefined4 *)0x0;
  uStack_e4 = 0;
  iStack_e8 = unaff_EBP + -0x18;
  uStack_ec = 0x6fbffc;
  puVar3 = (undefined4 *)FUN_0042a39f();
  iStack_d0 = 0x6fc006;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x10),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_d0 = 0x6fc01b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d0 = 0x6fc026;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_d0 = 0x6fc033;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d0 = 0x6fc03e;
    FUN_00878dfb();
  }
  iStack_d0 = 0x6fc049;
  puVar3 = (undefined4 *)FUN_004489f5();
  iStack_d0 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uStack_d4 = 0x6fc05d;
  FUN_0040ee87();
  iVar2 = **(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    iStack_d0 = 0x6fc072;
    FUN_00878dfb();
  }
  piStack_dc = (int *)**(undefined4 **)(unaff_EBP + -0x10);
  iVar2 = *piStack_dc;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_d4 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_d0 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x18) = piStack_dc;
  puStack_e0 = (undefined4 *)0x6fc08c;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_e0 = (undefined4 *)&DAT_00963de8;
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_ec = 0x6fc09e;
    iStack_e8 = iVar2;
    FUN_00878e09();
  }
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_e4 = 0x6fc0ab;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    uStack_e4 = 0x6fc0b6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_e0 = (undefined4 *)0x6fc0c2;
  FUN_00412600();
  puStack_e0 = &DAT_00980690;
  uStack_e4 = 0x6fc0cb;
  FUN_00403191();
  puStack_e0 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  uStack_e4 = 0x6fc0db;
  FUN_00403191();
  iVar2 = **(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    puStack_e0 = (undefined4 *)0x80004003;
    uStack_e4 = 0x6fc0f1;
    FUN_00878dfb();
  }
  piStack_108 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_e8 = *(undefined4 *)(unaff_EBP + -0x50);
  iVar2 = *piStack_108;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_e0 = *(undefined4 **)(unaff_EBP + -0x48);
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_100 = 100;
  uStack_f4 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_104 = 0xf2;
  *(int **)(unaff_EBP + -0x14) = piStack_108;
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_10c = (undefined *)0x6fc121;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    puStack_10c = &DAT_00963de8;
    piStack_110 = *(int **)(unaff_EBP + -0x14);
    piStack_118 = (int *)0x6fc133;
    puStack_114 = (undefined *)iVar2;
    FUN_00878e09();
  }
  puStack_10c = (undefined *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_110 = (int *)0x6fc140;
  puStack_10c = (undefined *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    piStack_110 = (int *)0x6fc14b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_10c = (undefined *)(unaff_EBP + -0x54);
  piStack_110 = (int *)0x6fc158;
  puStack_10c = (undefined *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    piStack_110 = (int *)0x6fc163;
    FUN_00878dfb();
  }
  piVar7 = *(int **)(unaff_EBP + -0x10);
  if (*piVar7 == 0) {
    puStack_10c = (undefined *)0x80004003;
    piStack_110 = (int *)0x6fc175;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar7;
  puStack_10c = (undefined *)0xffffffff;
  puStack_114 = (undefined *)0x6fc182;
  piStack_110 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar2 < 0) {
    puStack_114 = &DAT_00963df8;
    uStack_120 = 0x6fc192;
    iStack_11c = iVar2;
    piStack_118 = piVar1;
    FUN_00878e09();
  }
  puStack_114 = (undefined *)(unaff_EBP + -0x18);
  piStack_118 = (int *)0x6fc19e;
  puVar3 = (undefined4 *)FUN_004489f5();
  piStack_118 = (int *)*puVar3;
  puStack_114 = (undefined *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_11c = 0x6fc1b2;
  FUN_0040ee87();
  iVar2 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    puStack_114 = (undefined *)0x80004003;
    piStack_118 = (int *)0x6fc1c5;
    FUN_00878dfb();
  }
  piStack_124 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
  iVar2 = *piStack_124;
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_118 = *(int **)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x14) = piStack_124;
  puStack_114 = *(undefined **)(unaff_EBP + -0x28);
  puStack_128 = (undefined *)0x6fc1e2;
  iVar2 = (**(code **)(iVar2 + 0xfc))();
  if (iVar2 < 0) {
    puStack_128 = &DAT_00963df8;
    piStack_12c = *(int **)(unaff_EBP + -0x14);
    piStack_134 = (int *)0x6fc1f4;
    puStack_130 = (undefined4 *)iVar2;
    FUN_00878e09();
  }
  puStack_128 = (undefined *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_12c = (int *)0x6fc201;
  puStack_128 = (undefined *)FUN_00402bc3();
  if ((int)puStack_128 < 0) {
    piStack_12c = (int *)0x6fc20e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_128 = (undefined *)0x6fc21a;
  FUN_00412600();
  if (**(int **)(unaff_EBP + -0x10) == 0) {
    puStack_128 = (undefined *)0x80004003;
    piStack_12c = (int *)0x6fc22b;
    FUN_00878dfb();
  }
  piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
  puStack_128 = (undefined *)0x1;
  puStack_130 = (undefined4 *)0x6fc23b;
  piStack_12c = piVar7;
  iStack_138 = (**(code **)(*piVar7 + 0xb4))();
  if (iStack_138 < 0) {
    puStack_130 = (undefined4 *)&DAT_00963df8;
    uStack_13c = 0x6fc24b;
    piStack_134 = piVar7;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  puStack_130 = (undefined4 *)0xa57;
  piStack_134 = (int *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_138 = 0x6fc268;
  puVar3 = (undefined4 *)FUN_00679d22();
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_130 = *(undefined4 **)(iVar2 + 0xa0);
  piStack_134 = (int *)*puVar3;
  iStack_138 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_13c = 0x6fc281;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_130 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    piStack_134 = (int *)0x6fc298;
    FUN_00434e38();
  }
  puStack_130 = &DAT_00980690;
  piStack_134 = (int *)0x6fc2a2;
  FUN_00403191();
  puStack_130 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_134 = (int *)0x6fc2af;
  FUN_00403191();
  puStack_130 = (undefined4 *)0x0;
  piStack_134 = (int *)0x0;
  iStack_138 = 0xffffffff;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_140 = 0;
  uStack_144 = 0;
  puStack_148 = (undefined4 *)0x6fc2c2;
  (*DAT_0097b4c8)();
  puStack_148 = (undefined4 *)0x6fc2cf;
  FUN_0087a1b0();
  puStack_148 = (undefined4 *)0x0;
  iStack_14c = 0;
  iStack_150 = unaff_EBP + -0x54;
  iStack_154 = unaff_EBP + -0x34;
  iStack_158 = -1;
  uVar4 = FUN_00449713(&uStack_144);
  uVar4 = FUN_00456ad5(uVar4);
  *(int **)(unaff_EBP + -0x18) = &iStack_158;
  FUN_004033a1(uVar4);
  iVar5 = unaff_EBP + -200;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00405a1d(iVar5);
  FUN_00402660();
  FUN_00404a02(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_150 = 0x6fc322;
  iVar5 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar5 != 0) {
    puStack_148 = (undefined4 *)(unaff_EBP + -0x14);
    iStack_14c = 0x6fc338;
    puStack_148 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_148 < 0) && (puStack_148 != (undefined4 *)0x80004002)) {
      iStack_14c = 0x6fc349;
      FUN_00878dfb();
    }
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -200);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_14c = 0x6fc359;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    iStack_14c = 0x6fc364;
    FUN_00878dfb();
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_14c = 0x6fc371;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    iStack_14c = 0x6fc37c;
    FUN_00878dfb();
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_14c = 0x6fc389;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    iStack_14c = 0x6fc394;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    puStack_148 = *(undefined4 **)(iVar2 + 0xa0);
    iStack_14c = 0x6fc3a8;
    iStack_150 = FUN_005f3a71();
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
    *(undefined ***)(unaff_EBP + -0x88) = &PTR_FUN_008e863c;
    iVar2 = *(int *)(iStack_150 + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar2 + -4);
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0x88);
    iStack_14c = (2 < uVar6) + 1;
    iStack_154 = 0x6fc3eb;
    FUN_0040b905();
    puStack_148 = (undefined4 *)0x3;
    iStack_14c = 0xfffffffe;
    iStack_150 = 0x6fc3f7;
    FUN_004031b7();
    iVar2 = **(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (iVar2 == 0) {
      puStack_148 = (undefined4 *)0x80004003;
      iStack_14c = 0x6fc40c;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
    iStack_14c = unaff_EBP + -0x18;
    iStack_150 = 0x6fc41b;
    FUN_0041141a();
    puStack_148 = (undefined4 *)0x6fc423;
    FUN_004125e6();
    puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_14c = 0x6fc430;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc43b;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x7c);
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    while (iVar2 != 0) {
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      iVar5 = *(int *)(iVar2 + 4);
      iVar2 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
      puStack_148 = &DAT_00980690;
      *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      iStack_14c = 0x6fc474;
      FUN_00403191();
      puStack_148 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_14c = 0x6fc481;
      FUN_00403191();
      puStack_148 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_14c = 0x6fc491;
      FUN_00403191();
      puStack_148 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_14c = 0x6fc4a1;
      FUN_00403191();
      iStack_14c = *(undefined4 *)(iVar5 + 0x10);
      puStack_148 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_150 = 0x6fc4b3;
      FUN_004031b7();
      iVar2 = **(int **)(unaff_EBP + -0x10);
      uVar4 = *(undefined4 *)(iVar5 + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (iVar2 == 0) {
        puStack_148 = (undefined4 *)0x80004003;
        iStack_14c = 0x6fc4cb;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -100);
      iStack_14c = unaff_EBP + -0x44;
      iStack_150 = unaff_EBP + -0xa8;
      iStack_154 = unaff_EBP + -0x98;
      iStack_158 = unaff_EBP + -0x74;
      FUN_004250ac(unaff_EBP + -0xb8,uVar4);
      puStack_148 = (undefined4 *)(unaff_EBP + -0xb8);
      iStack_14c = 0x6fc503;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        iStack_14c = 0x6fc50e;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_14c = 0x6fc51b;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        iStack_14c = 0x6fc526;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_14c = 0x6fc536;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        iStack_14c = 0x6fc541;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -0xa8);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_14c = 0x6fc551;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        iStack_14c = 0x6fc55c;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_14c = 0x6fc569;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        iStack_14c = 0x6fc574;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_14c = 0x6fc581;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        iStack_14c = 0x6fc58c;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x1c);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined ***)(unaff_EBP + -0x88) = &PTR_FUN_008e863c;
    puStack_148 = (undefined4 *)0x6fc5ae;
    FUN_00413915();
    piVar7 = *(int **)(unaff_EBP + -0x10);
  }
  else {
    puStack_148 = &DAT_00980690;
    iStack_14c = 0x6fc5bf;
    FUN_00403191();
    puStack_148 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_14c = 0x6fc5cf;
    FUN_00403191();
    puStack_148 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_14c = 0x6fc5df;
    FUN_00403191();
    puStack_148 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_14c = 0x6fc5ec;
    FUN_00403191();
    puStack_148 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_14c = 0x6fc5f9;
    FUN_00403191();
    piVar7 = *(int **)(unaff_EBP + -0x10);
    iVar2 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (iVar2 == 0) {
      puStack_148 = (undefined4 *)0x80004003;
      iStack_14c = 0x6fc60e;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
    iStack_14c = unaff_EBP + -0x98;
    iStack_150 = unaff_EBP + -0xa8;
    iStack_154 = unaff_EBP + -0x44;
    iStack_158 = unaff_EBP + -100;
    FUN_004250ac(unaff_EBP + -0xb8,*(undefined4 *)(unaff_EBP + -0x24));
    puStack_148 = (undefined4 *)(unaff_EBP + -0xb8);
    iStack_14c = 0x6fc645;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc650;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_14c = 0x6fc65d;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc668;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_14c = 0x6fc675;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc680;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0xa8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_14c = 0x6fc690;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc69b;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_14c = 0x6fc6ab;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc6b6;
      FUN_00878dfb();
    }
    puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_14c = 0x6fc6c3;
    puStack_148 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_148 < 0) {
      iStack_14c = 0x6fc6ce;
      FUN_00878dfb();
    }
  }
  puStack_148 = &DAT_00980690;
  iStack_14c = 0x6fc6d7;
  FUN_00403191();
  puStack_148 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_14c = 0x6fc6e4;
  FUN_00403191();
  iVar2 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar2 == 0) {
    puStack_148 = (undefined4 *)0x80004003;
    iStack_14c = 0x6fc6f6;
    FUN_00878dfb();
  }
  piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
  iStack_154 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_150 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_14c = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_148 = *(undefined4 **)(unaff_EBP + -0x38);
  iStack_158 = *(int *)(unaff_EBP + -0x58);
  iVar2 = (**(code **)(*piVar7 + 0x110))
                    (piVar7,0x20,*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar7,&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar2 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar7 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


