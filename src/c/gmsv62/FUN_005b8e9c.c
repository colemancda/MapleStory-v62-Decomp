/* FUN_005b8e9c - 0x005b8e9c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b8e9c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int iStack_10c;
  int iStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int *piStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  undefined *puStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  if ((-1 < iVar4) && (iVar4 < *(int *)(extraout_ECX + 0x744))) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_94 = unaff_EBP + -0x14;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_98 = 0x5b8ee3;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_94 = *puVar1;
    iVar4 = iVar4 * 4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_98 = unaff_EBP + -0x18;
    *(int *)(unaff_EBP + -0x10) = iVar4;
    uStack_9c = 0x5b8f02;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_94 = 0x5b8f19;
      FUN_00434e38();
    }
    iStack_94 = 0x5b8f28;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (iVar4 + *(int *)(extraout_ECX + 0x204)),(IBinding *)0x0);
    iStack_94 = 0x5b8f35;
    FUN_00403191();
    iStack_94 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_98 = 0x5b8f44;
    FUN_004031b7();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (bVar6) {
      iStack_94 = 0x5b8f5a;
      FUN_00878dfb();
    }
    iStack_94 = unaff_EBP + -0x2c;
    iStack_98 = 4;
    uStack_9c = 0;
    piStack_a0 = (int *)0x0;
    puStack_a4 = (undefined *)0x0;
    uStack_a8 = 0;
    iStack_ac = unaff_EBP + -0x14;
    uStack_b0 = 0x5b8f77;
    puVar1 = (undefined4 *)FUN_0042a39f();
    iStack_94 = 0x5b8f86;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (iVar4 + *(int *)(extraout_ECX + 0x204)),(IBinding *)*puVar1);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_94 = 0x5b8f9b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_94 = 0x5b8fa6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_94 = 0x5b8fb3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_94 = 0x5b8fbe;
      FUN_00878dfb();
    }
    iStack_94 = 0x5b8fc9;
    puVar1 = (undefined4 *)FUN_004489f5();
    iStack_94 = *puVar1;
    iStack_98 = 0x5b8fd6;
    FUN_0040ee87();
    piVar5 = (int *)(iVar4 + *(int *)(extraout_ECX + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*piVar5 == 0) {
      iStack_94 = 0x5b8fee;
      FUN_00878dfb();
    }
    piStack_a0 = (int *)*piVar5;
    iVar4 = *piStack_a0;
    uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x14) = piStack_a0;
    puStack_a4 = (undefined *)0x5b9005;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      puStack_a4 = &DAT_00963de8;
      uStack_a8 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_b0 = 0x5b9017;
      iStack_ac = iVar4;
      FUN_00878e09();
    }
    puStack_a4 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_a8 = 0x5b9024;
    puStack_a4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_a4 < 0) {
      uStack_a8 = 0x5b902f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_a4 = (undefined *)0x5b903b;
    FUN_00412600();
    puStack_a4 = (undefined *)(unaff_EBP + -0x14);
    uStack_a8 = 0x5b9046;
    puVar1 = (undefined4 *)FUN_004489f5();
    uStack_a8 = *puVar1;
    puStack_a4 = (undefined *)0x1;
    iStack_ac = 0x5b9053;
    FUN_0040ee87();
    piStack_b4 = (int *)(*(int *)(unaff_EBP + -0x10) + *(int *)(extraout_ECX + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*piStack_b4 == 0) {
      puStack_a4 = (undefined *)0x80004003;
      uStack_a8 = 0x5b906f;
      FUN_00878dfb();
    }
    piStack_b4 = (int *)*piStack_b4;
    iVar4 = *piStack_b4;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_a8 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x1c) = piStack_b4;
    puStack_a4 = *(undefined **)(unaff_EBP + -0x30);
    puStack_b8 = (undefined *)0x5b9089;
    iVar4 = (**(code **)(iVar4 + 0xfc))();
    if (iVar4 < 0) {
      puStack_b8 = &DAT_00963df8;
      piStack_bc = *(int **)(unaff_EBP + -0x1c);
      piStack_c4 = (int *)0x5b909c;
      puStack_c0 = (undefined4 *)iVar4;
      FUN_00878e09();
    }
    puStack_b8 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_bc = (int *)0x5b90a9;
    puStack_b8 = (undefined *)FUN_00402bc3();
    if ((int)puStack_b8 < 0) {
      piStack_bc = (int *)0x5b90b4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_b8 = (undefined *)0x5b90c0;
    FUN_00412600();
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + *(int *)(extraout_ECX + 0x204));
    if (*piVar5 == 0) {
      puStack_b8 = (undefined *)0x80004003;
      piStack_bc = (int *)0x5b90d8;
      FUN_00878dfb();
    }
    piVar5 = (int *)*piVar5;
    puStack_b8 = (undefined *)0xffffffff;
    puStack_c0 = (undefined4 *)0x5b90e5;
    piStack_bc = piVar5;
    iVar4 = (**(code **)(*piVar5 + 0xe0))();
    if (iVar4 < 0) {
      puStack_c0 = (undefined4 *)&DAT_00963df8;
      uStack_cc = 0x5b90f1;
      iStack_c8 = iVar4;
      piStack_c4 = piVar5;
      FUN_00878e09();
    }
    puStack_c0 = &DAT_00980690;
    piStack_c4 = (int *)0x5b90ff;
    FUN_00403191();
    puStack_c0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_c4 = (int *)0x5b910c;
    FUN_00403191();
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + *(int *)(extraout_ECX + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*piVar5 == 0) {
      puStack_c0 = (undefined4 *)0x80004003;
      piStack_c4 = (int *)0x5b9128;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(extraout_ECX + 0x7dc);
    piVar5 = (int *)*piVar5;
    *(int **)(unaff_EBP + -0x14) = piVar5;
    iStack_e0 = (*(int *)(unaff_EBP + 8) / iVar4) * 0x43 + *(int *)(extraout_ECX + 0x7e4);
    uStack_cc = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_c8 = *(undefined4 *)(unaff_EBP + -0x28);
    piStack_c4 = *(int **)(unaff_EBP + -0x24);
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x20);
    uStack_dc = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_e4 = (*(int *)(unaff_EBP + 8) % iVar4) * 0x38 + *(int *)(extraout_ECX + 0x7e0);
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_e8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_ec = (undefined4 *)0x5b9178;
    iVar4 = (**(code **)(*piVar5 + 0x90))();
    if (iVar4 < 0) {
      puStack_ec = (undefined4 *)&DAT_00963de8;
      uStack_f0 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_f8 = 0x5b918c;
      iStack_f4 = iVar4;
      FUN_00878e09();
    }
    puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_f0 = 0x5b9199;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      uStack_f0 = 0x5b91a4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_ec = (undefined4 *)(unaff_EBP + -0x2c);
    uStack_f0 = 0x5b91b1;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      uStack_f0 = 0x5b91bc;
      FUN_00878dfb();
    }
    puStack_ec = &DAT_00980690;
    uStack_f0 = 0x5b91ca;
    FUN_00403191();
    puStack_ec = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_f0 = 0x5b91d7;
    FUN_00403191();
    puStack_ec = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_f0 = 0x5b91e4;
    FUN_00403191();
    puStack_ec = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_f0 = 0x5b91f1;
    FUN_00403191();
    puStack_ec = (undefined4 *)0x3;
    uStack_f0 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_f4 = 0x5b9204;
    FUN_004031b7();
    uStack_f8 = *(undefined4 *)(extraout_ECX + 0x71c);
    puStack_ec = (undefined4 *)0x0;
    uStack_f0 = 0;
    iStack_f4 = 0xffffffff;
    uStack_fc = 0;
    uStack_100 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_104 = (int *)0x5b9221;
    (*DAT_0097b4c8)();
    piStack_104 = (int *)0x5b922e;
    FUN_0087a1b0();
    piStack_104 = (int *)0x0;
    iStack_108 = 0;
    iStack_10c = -1;
    uVar3 = FUN_00449713(&uStack_100);
    uVar3 = FUN_00456ad5(uVar3);
    *(int **)(unaff_EBP + -0x14) = &iStack_10c;
    FUN_004033a1(uVar3);
    iVar4 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_10c = 0x5b9277;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar4 != 0) {
      piStack_104 = (int *)(unaff_EBP + -0x1c);
      iStack_108 = 0x5b928d;
      piStack_104 = (int *)FUN_0041a581();
      if (((int)piStack_104 < 0) && (piStack_104 != (int *)0x80004002)) {
        iStack_108 = 0x5b929e;
        FUN_00878dfb();
      }
    }
    uVar3 = *(undefined4 *)(unaff_EBP + 8);
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + *(int *)(extraout_ECX + 0x204));
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar4 == 0) {
      piStack_104 = (int *)0x80004003;
      iStack_108 = 0x5b92be;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x6c);
    iStack_108 = unaff_EBP + -0x5c;
    iStack_10c = unaff_EBP + -0x4c;
    FUN_004250ac(unaff_EBP + -0x7c,uVar3,unaff_EBP + -0x3c,unaff_EBP + -0x2c);
    piStack_104 = (int *)(unaff_EBP + -0x7c);
    iStack_108 = 0x5b92e7;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b92f2;
      FUN_00878dfb();
    }
    piStack_104 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piStack_104 != (int *)0x0) {
      iStack_108 = 0x5b9303;
      (**(code **)(*piStack_104 + 8))();
    }
    piStack_104 = (int *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_108 = 0x5b9313;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b931e;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_108 = 0x5b932b;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b9336;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_108 = 0x5b9343;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b934e;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_108 = 0x5b935b;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b9366;
      FUN_00878dfb();
    }
    piStack_104 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_108 = 0x5b9373;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b937e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_104 = (int *)(unaff_EBP + -0x6c);
    iStack_108 = 0x5b938b;
    piStack_104 = (int *)FUN_00402bc3();
    if ((int)piStack_104 < 0) {
      iStack_108 = 0x5b9396;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_104 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      iStack_108 = 0x5b93aa;
      FUN_00434e38();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


