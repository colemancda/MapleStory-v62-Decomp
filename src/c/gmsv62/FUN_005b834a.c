/* FUN_005b834a - 0x005b834a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b834a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iStack_10c;
  int iStack_108;
  undefined4 *puStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 *puStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int *piStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  undefined *puStack_b8;
  int *piStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 *puStack_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if ((-1 < iVar3) && (iVar3 < *(int *)(extraout_ECX + 0x744))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_94 = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_98 = 0x5b8391;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_94 = *puVar1;
    iVar3 = iVar3 * 4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_98 = unaff_EBP + -0x14;
    *(int *)(unaff_EBP + -0x10) = iVar3;
    uStack_9c = 0x5b83b0;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_94 = 0x5b83c7;
      FUN_00434e38();
    }
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iStack_94 = 1;
      iStack_98 = 0x5b89de;
      FUN_004031b7();
      iVar3 = *(int *)(extraout_ECX + 0x204);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (*(int *)(iVar3 + *(int *)(unaff_EBP + -0x10)) == 0) {
        iStack_94 = 0x5b89f9;
        FUN_00878dfb();
      }
      iStack_94 = unaff_EBP + 0xc;
      iStack_98 = 0x5b8a08;
      FUN_0041141a();
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_94 = 0x5b8a1d;
      iVar3 = FUN_00402bc3();
    }
    else {
      iStack_94 = 0x5b83df;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(extraout_ECX + 0x204) + iVar3),(IBinding *)0x0);
      iStack_94 = 0x5b83ec;
      FUN_00403191();
      iStack_94 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_98 = 0x5b83fb;
      FUN_004031b7();
      bVar5 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (bVar5) {
        iStack_94 = 0x5b8411;
        FUN_00878dfb();
      }
      iStack_94 = unaff_EBP + -0x2c;
      iStack_98 = 4;
      uStack_9c = 0;
      piStack_a0 = (int *)0x0;
      puStack_a4 = (undefined *)0x0;
      puStack_a8 = (undefined4 *)0x0;
      iStack_ac = unaff_EBP + 0xc;
      iStack_b0 = 0x5b842e;
      puVar1 = (undefined4 *)FUN_0042a39f();
      iStack_94 = 0x5b843d;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(extraout_ECX + 0x204) + iVar3),(IBinding *)*puVar1);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_94 = 0x5b8452;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_94 = 0x5b845d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_94 = 0x5b846a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_94 = 0x5b8475;
        FUN_00878dfb();
      }
      iStack_94 = 0x5b8480;
      puVar1 = (undefined4 *)FUN_004489f5();
      iStack_94 = *puVar1;
      iStack_98 = 0x5b848d;
      FUN_0040ee87();
      piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*piVar4 == 0) {
        iStack_94 = 0x5b84a8;
        FUN_00878dfb();
      }
      piStack_a0 = (int *)*piVar4;
      iVar3 = *piStack_a0;
      uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_98 = *(int *)(unaff_EBP + -0x38);
      iStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + 0xc) = piStack_a0;
      puStack_a4 = (undefined *)0x5b84bf;
      iVar3 = (**(code **)(iVar3 + 100))();
      if (iVar3 < 0) {
        puStack_a4 = &DAT_00963de8;
        puStack_a8 = *(undefined4 **)(unaff_EBP + 0xc);
        iStack_b0 = 0x5b84d1;
        iStack_ac = iVar3;
        FUN_00878e09();
      }
      puStack_a4 = (undefined *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_a8 = (undefined4 *)0x5b84de;
      puStack_a4 = (undefined *)FUN_00402bc3();
      if ((int)puStack_a4 < 0) {
        puStack_a8 = (undefined4 *)0x5b84e9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_a4 = (undefined *)0x5b84f5;
      FUN_00412600();
      puStack_a4 = (undefined *)(unaff_EBP + -0x18);
      puStack_a8 = (undefined4 *)0x5b8500;
      puStack_a8 = (undefined4 *)FUN_004489f5();
      puStack_a8 = (undefined4 *)*puStack_a8;
      puStack_a4 = (undefined *)0x1;
      iStack_ac = 0x5b850d;
      FUN_0040ee87();
      piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*piVar4 == 0) {
        puStack_a4 = (undefined *)0x80004003;
        puStack_a8 = (undefined4 *)0x5b8529;
        FUN_00878dfb();
      }
      piStack_b4 = (int *)*piVar4;
      iVar3 = *piStack_b4;
      iStack_b0 = *(int *)(unaff_EBP + -0x3c);
      iStack_ac = *(undefined4 *)(unaff_EBP + -0x38);
      puStack_a8 = *(undefined4 **)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + 0xc) = piStack_b4;
      puStack_a4 = *(undefined **)(unaff_EBP + -0x30);
      puStack_b8 = (undefined *)0x5b8543;
      iVar3 = (**(code **)(iVar3 + 0xfc))();
      if (iVar3 < 0) {
        puStack_b8 = &DAT_00963df8;
        piStack_bc = *(int **)(unaff_EBP + 0xc);
        piStack_c4 = (int *)0x5b8555;
        puStack_c0 = (undefined4 *)iVar3;
        FUN_00878e09();
      }
      puStack_b8 = (undefined *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_bc = (int *)0x5b8562;
      puStack_b8 = (undefined *)FUN_00402bc3();
      if ((int)puStack_b8 < 0) {
        piStack_bc = (int *)0x5b856d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_b8 = (undefined *)0x5b8579;
      FUN_00412600();
      piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
      if (*piVar4 == 0) {
        puStack_b8 = (undefined *)0x80004003;
        piStack_bc = (int *)0x5b8591;
        FUN_00878dfb();
      }
      piVar4 = (int *)*piVar4;
      puStack_b8 = (undefined *)0xffffffff;
      puStack_c0 = (undefined4 *)0x5b859e;
      piStack_bc = piVar4;
      iVar3 = (**(code **)(*piVar4 + 0xe0))();
      if (iVar3 < 0) {
        puStack_c0 = (undefined4 *)&DAT_00963df8;
        uStack_cc = 0x5b85ae;
        iStack_c8 = iVar3;
        piStack_c4 = piVar4;
        FUN_00878e09();
      }
      puStack_c0 = &DAT_00980690;
      piStack_c4 = (int *)0x5b85bc;
      FUN_00403191();
      puStack_c0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_c4 = (int *)0x5b85c9;
      FUN_00403191();
      piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*piVar4 == 0) {
        puStack_c0 = (undefined4 *)0x80004003;
        piStack_c4 = (int *)0x5b85e5;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(extraout_ECX + 0x7dc);
      piVar4 = (int *)*piVar4;
      *(int **)(unaff_EBP + 0xc) = piVar4;
      iStack_e0 = (*(int *)(unaff_EBP + 8) / iVar3) * 0x43 + *(int *)(extraout_ECX + 0x7e4);
      uStack_cc = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_c8 = *(int *)(unaff_EBP + -0x28);
      piStack_c4 = *(int **)(unaff_EBP + -0x24);
      puStack_c0 = *(undefined4 **)(unaff_EBP + -0x20);
      iStack_dc = *(int *)(unaff_EBP + -0x3c);
      iStack_e4 = (*(int *)(unaff_EBP + 8) % iVar3) * 0x38 + *(int *)(extraout_ECX + 0x7e0);
      iStack_d8 = *(undefined4 *)(unaff_EBP + -0x38);
      puStack_d4 = *(undefined4 **)(unaff_EBP + -0x34);
      uStack_e8 = *(undefined4 *)(unaff_EBP + 0xc);
      piStack_d0 = *(int **)(unaff_EBP + -0x30);
      puStack_ec = (undefined4 *)0x5b8635;
      iVar3 = (**(code **)(*piVar4 + 0x90))();
      if (iVar3 < 0) {
        puStack_ec = (undefined4 *)&DAT_00963de8;
        uStack_f0 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_f8 = 0x5b8647;
        iStack_f4 = iVar3;
        FUN_00878e09();
      }
      puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_f0 = 0x5b8654;
      puStack_ec = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_ec < 0) {
        uStack_f0 = 0x5b8661;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_ec = (undefined4 *)(unaff_EBP + -0x2c);
      uStack_f0 = 0x5b866e;
      puStack_ec = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_ec < 0) {
        uStack_f0 = 0x5b8679;
        FUN_00878dfb();
      }
      puStack_ec = &DAT_00980690;
      uStack_f0 = 0x5b8687;
      FUN_00403191();
      puStack_ec = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uStack_f0 = 0x5b8694;
      FUN_00403191();
      puStack_ec = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_f0 = 0x5b86a1;
      FUN_00403191();
      puStack_ec = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      uStack_f0 = 0x5b86ae;
      FUN_00403191();
      puStack_ec = (undefined4 *)0x3;
      uStack_f0 = 300;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_f4 = 0x5b86c1;
      FUN_004031b7();
      puStack_ec = (undefined4 *)0x0;
      uStack_f0 = 0;
      iStack_f4 = -1;
      iStack_f8 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_fc = 0;
      puStack_100 = (undefined4 *)0x0;
      puStack_104 = (undefined4 *)0x5b86d4;
      (*DAT_0097b4c8)();
      puStack_104 = (undefined4 *)0x5b86e1;
      FUN_0087a1b0();
      puStack_104 = (undefined4 *)0x0;
      iStack_108 = 0;
      iStack_10c = -1;
      uVar2 = FUN_00449713(&puStack_100);
      uVar2 = FUN_00456ad5(uVar2);
      *(int **)(unaff_EBP + -0x1c) = &iStack_10c;
      FUN_004033a1(uVar2);
      iVar3 = unaff_EBP + -0x8c;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_10c = 0x5b872b;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x18) = iVar3;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar3 != 0) {
        puStack_104 = (undefined4 *)(unaff_EBP + -0x18);
        iStack_108 = 0x5b8741;
        puStack_104 = (undefined4 *)FUN_0041a581();
        if (((int)puStack_104 < 0) && (puStack_104 != (undefined4 *)0x80004002)) {
          iStack_108 = 0x5b8752;
          FUN_00878dfb();
        }
      }
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      if (iVar3 == 0) {
        puStack_104 = (undefined4 *)0x80004003;
        iStack_108 = 0x5b8774;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x6c);
      iStack_108 = unaff_EBP + -0x5c;
      iStack_10c = unaff_EBP + -0x4c;
      FUN_004250ac(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0x3c,
                   unaff_EBP + -0x2c);
      puStack_104 = (undefined4 *)(unaff_EBP + -0x7c);
      iStack_108 = 0x5b879f;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b87aa;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)0x5b87b2;
      FUN_004125e6();
      puStack_104 = (undefined4 *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_108 = 0x5b87c2;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b87cd;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_108 = 0x5b87da;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b87e5;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_108 = 0x5b87f2;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b87fd;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_108 = 0x5b880a;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b8815;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_108 = 0x5b8822;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b882d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_104 = (undefined4 *)(unaff_EBP + -0x6c);
      iStack_108 = 0x5b883a;
      puStack_104 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_104 < 0) {
        iStack_108 = 0x5b8845;
        FUN_00878dfb();
      }
      puStack_104 = &DAT_00980690;
      iStack_108 = 0x5b884e;
      FUN_00403191();
      puStack_104 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_108 = 0x5b885b;
      FUN_00403191();
      iVar3 = *(int *)(extraout_ECX + 0x204);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (*(int *)(iVar3 + *(int *)(unaff_EBP + -0x10)) == 0) {
        puStack_104 = (undefined4 *)0x80004003;
        iStack_108 = 0x5b8877;
        FUN_00878dfb();
      }
      puStack_104 = (undefined4 *)(unaff_EBP + -0x1c);
      iStack_108 = 0x5b8882;
      piVar4 = (int *)FUN_0042bc90();
      iVar3 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (iVar3 == 0) {
        puStack_104 = (undefined4 *)0x80004003;
        iStack_108 = 0x5b8897;
        FUN_00878dfb();
      }
      piVar4 = (int *)*piVar4;
      iStack_10c = *(int *)(unaff_EBP + -0x58);
      iVar3 = *piVar4;
      iStack_108 = *(int *)(unaff_EBP + -0x54);
      puStack_104 = *(undefined4 **)(unaff_EBP + -0x50);
      *(int **)(unaff_EBP + 0xc) = piVar4;
      iVar3 = (**(code **)(iVar3 + 0x90))
                        (piVar4,0xffffffcf,0x3e,*(undefined4 *)(unaff_EBP + -0x6c),
                         *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                         *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00403191(&DAT_00980690);
      piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*piVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar3 = *(int *)(extraout_ECX + 0x7dc);
      piVar4 = (int *)*piVar4;
      *(int **)(unaff_EBP + 0xc) = piVar4;
      iVar3 = (**(code **)(*piVar4 + 0x90))
                        (*(undefined4 *)(unaff_EBP + 0xc),
                         (*(int *)(unaff_EBP + 8) % iVar3) * 0x38 + 0x31 +
                         *(int *)(extraout_ECX + 0x7e0),
                         (*(int *)(unaff_EBP + 8) / iVar3) * 0x43 + *(int *)(extraout_ECX + 0x7e4),
                         *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                         *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                         *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                         *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50));
      if (iVar3 < 0) {
        iStack_94 = *(undefined4 *)(unaff_EBP + 0xc);
        uStack_9c = 0x5b89a8;
        iStack_98 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_94 = 0x5b89b5;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_94 = 0x5b89c0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_94 = 0x5b89cd;
      iVar3 = FUN_00402bc3();
    }
    if (iVar3 < 0) {
      iStack_94 = 0x5b8a28;
      FUN_00878dfb();
    }
    iStack_94 = 0x5b8a36;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_94 = 0x5b8a43;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_94 = 0x5b8a50;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_94 = 0x5b8a5d;
    FUN_00403191();
    iStack_94 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_98 = 0x5b8a70;
    FUN_004031b7();
    uStack_9c = *(undefined4 *)(extraout_ECX + 0x71c);
    iStack_94 = 0;
    iStack_98 = 0xffffffff;
    piStack_a0 = (int *)0x0;
    puStack_a4 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_a8 = (undefined4 *)0x5b8a8f;
    (*DAT_0097b4c8)();
    puStack_a8 = (undefined4 *)0x5b8a9c;
    FUN_0087a1b0();
    puStack_a8 = (undefined4 *)0x0;
    iStack_ac = 0;
    iStack_b0 = -1;
    puStack_b8 = (undefined *)0x5b8aac;
    piStack_b4 = (int *)&puStack_a4;
    puStack_b8 = (undefined *)FUN_00449713();
    piStack_bc = (int *)0x5b8ab2;
    piStack_b4 = (int *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x18) = &iStack_b0;
    puStack_b8 = (undefined *)0x5b8abf;
    FUN_004033a1();
    piStack_b4 = (int *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_b8 = (undefined *)0x5b8ad2;
    FUN_0040263d();
    puStack_b8 = (undefined *)0x5b8ad9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_b0 = 0x5b8ae4;
    iVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    if (iVar3 != 0) {
      puStack_a8 = (undefined4 *)(unaff_EBP + -0x1c);
      iStack_ac = 0x5b8afb;
      puStack_a8 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_a8 < 0) && (puStack_a8 != (undefined4 *)0x80004002)) {
        iStack_ac = 0x5b8b0c;
        FUN_00878dfb();
      }
    }
    iVar3 = *(int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
    if (iVar3 == 0) {
      puStack_a8 = (undefined4 *)0x80004003;
      iStack_ac = 0x5b8b2e;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_ac = unaff_EBP + -0x3c;
    iStack_b0 = unaff_EBP + -0x4c;
    piStack_b4 = (int *)(unaff_EBP + -0x5c);
    puStack_b8 = (undefined *)(unaff_EBP + -0x6c);
    piStack_bc = *(int **)(unaff_EBP + -0x18);
    puStack_c0 = (undefined4 *)(unaff_EBP + -0x8c);
    piStack_c4 = (int *)0x5b8b53;
    FUN_004250ac();
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x8c);
    iStack_ac = 0x5b8b5f;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8b6a;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)0x5b8b72;
    FUN_004125e6();
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_ac = 0x5b8b7f;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8b8c;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_ac = 0x5b8b99;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8ba4;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_ac = 0x5b8bb1;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8bbc;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_ac = 0x5b8bc9;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8bd4;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_ac = 0x5b8be1;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8bec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_ac = 0x5b8bf9;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      iStack_ac = 0x5b8c04;
      FUN_00878dfb();
    }
    puStack_a8 = &DAT_00980690;
    iStack_ac = 0x5b8c0d;
    FUN_00403191();
    iVar3 = *(int *)(extraout_ECX + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int *)(iVar3 + *(int *)(unaff_EBP + -0x10)) == 0) {
      puStack_a8 = (undefined4 *)0x80004003;
      iStack_ac = 0x5b8c28;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)0x5b8c2f;
    iStack_ac = FUN_0042a378();
    iStack_ac = iStack_ac + 600;
    puStack_a8 = (undefined4 *)0x3;
    iStack_b0 = 0x5b8c3f;
    FUN_004031b7();
    iVar3 = *(int *)(extraout_ECX + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int *)(iVar3 + *(int *)(unaff_EBP + -0x10)) == 0) {
      puStack_a8 = (undefined4 *)0x80004003;
      iStack_ac = 0x5b8c5a;
      FUN_00878dfb();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_ac = 0x5b8c67;
    piVar4 = (int *)FUN_0042bc90();
    iVar3 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (iVar3 == 0) {
      puStack_a8 = (undefined4 *)0x80004003;
      iStack_ac = 0x5b8c7b;
      FUN_00878dfb();
    }
    piStack_d0 = (int *)*piVar4;
    piStack_b4 = *(int **)(unaff_EBP + -0x5c);
    iStack_b0 = *(int *)(unaff_EBP + -0x58);
    iVar3 = *piStack_d0;
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x54);
    puStack_a8 = *(undefined4 **)(unaff_EBP + -0x50);
    piStack_c4 = *(int **)(unaff_EBP + -0x6c);
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x68);
    iStack_c8 = 0x3e;
    piStack_bc = *(int **)(unaff_EBP + -100);
    uStack_cc = 0x31;
    *(int **)(unaff_EBP + 0xc) = piStack_d0;
    puStack_b8 = *(undefined **)(unaff_EBP + -0x60);
    puStack_d4 = (undefined4 *)0x5b8ca5;
    iVar3 = (**(code **)(iVar3 + 0x90))();
    if (iVar3 < 0) {
      puStack_d4 = (undefined4 *)&DAT_00963de8;
      iStack_d8 = *(undefined4 *)(unaff_EBP + 0xc);
      iStack_e0 = 0x5b8cb7;
      iStack_dc = iVar3;
      FUN_00878e09();
    }
    puStack_d4 = (undefined4 *)0x5b8cbf;
    FUN_004125d9();
    puStack_d4 = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_d8 = 0x5b8ccc;
    puStack_d4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d4 < 0) {
      iStack_d8 = 0x5b8cd7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_d4 = (undefined4 *)(unaff_EBP + -0x5c);
    iStack_d8 = 0x5b8ce4;
    puStack_d4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d4 < 0) {
      iStack_d8 = 0x5b8cef;
      FUN_00878dfb();
    }
    puStack_d4 = &DAT_00980690;
    iStack_d8 = 0x5b8cfc;
    FUN_00403191();
    iVar3 = *(int *)(extraout_ECX + 0x204);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (*(int *)(iVar3 + *(int *)(unaff_EBP + -0x10)) == 0) {
      puStack_d4 = (undefined4 *)0x80004003;
      iStack_d8 = 0x5b8d18;
      FUN_00878dfb();
    }
    puStack_d4 = (undefined4 *)0x5b8d1f;
    iStack_d8 = FUN_0042a378();
    iStack_d8 = iStack_d8 + 600;
    puStack_d4 = (undefined4 *)0x3;
    iStack_dc = 0x5b8d2f;
    FUN_004031b7();
    piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (*piVar4 == 0) {
      puStack_d4 = (undefined4 *)0x80004003;
      iStack_d8 = 0x5b8d4b;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(extraout_ECX + 0x7dc);
    piVar4 = (int *)*piVar4;
    *(int **)(unaff_EBP + 0xc) = piVar4;
    iStack_f4 = (*(int *)(unaff_EBP + 8) / iVar3) * 0x43 + *(int *)(extraout_ECX + 0x7e4);
    iStack_e0 = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x58);
    iStack_d8 = *(undefined4 *)(unaff_EBP + -0x54);
    puStack_d4 = *(undefined4 **)(unaff_EBP + -0x50);
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x6c);
    iStack_f8 = (*(int *)(unaff_EBP + 8) % iVar3) * 0x38 + *(int *)(extraout_ECX + 0x7e0);
    puStack_ec = *(undefined4 **)(unaff_EBP + -0x68);
    uStack_e8 = *(undefined4 *)(unaff_EBP + -100);
    uStack_fc = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_e4 = *(undefined4 *)(unaff_EBP + -0x60);
    puStack_100 = (undefined4 *)0x5b8d9b;
    iVar3 = (**(code **)(*piVar4 + 0x90))();
    if (iVar3 < 0) {
      puStack_100 = (undefined4 *)&DAT_00963de8;
      puStack_104 = *(undefined4 **)(unaff_EBP + 0xc);
      iStack_10c = 0x5b8dad;
      iStack_108 = iVar3;
      FUN_00878e09();
    }
    puStack_100 = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_104 = (undefined4 *)0x5b8dba;
    puStack_100 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_100 < 0) {
      puStack_104 = (undefined4 *)0x5b8dc5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_100 = (undefined4 *)(unaff_EBP + -0x5c);
    puStack_104 = (undefined4 *)0x5b8dd2;
    puStack_100 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_100 < 0) {
      puStack_104 = (undefined4 *)0x5b8ddd;
      FUN_00878dfb();
    }
    puStack_100 = &DAT_00980690;
    puStack_104 = (undefined4 *)0x5b8deb;
    FUN_00403191();
    puStack_100 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_104 = (undefined4 *)0x5b8df8;
    FUN_00403191();
    piVar4 = (int *)(*(int *)(extraout_ECX + 0x204) + *(int *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*piVar4 == 0) {
      puStack_100 = (undefined4 *)0x80004003;
      puStack_104 = (undefined4 *)0x5b8e14;
      FUN_00878dfb();
    }
    piVar4 = (int *)*piVar4;
    iStack_10c = *(int *)(unaff_EBP + -0x5c);
    iStack_108 = *(undefined4 *)(unaff_EBP + -0x58);
    puStack_104 = *(undefined4 **)(unaff_EBP + -0x54);
    puStack_100 = *(undefined4 **)(unaff_EBP + -0x50);
    iVar3 = (**(code **)(*piVar4 + 0x110))
                      (piVar4,0,*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                       *(undefined4 *)(unaff_EBP + -0x60));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar4,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


