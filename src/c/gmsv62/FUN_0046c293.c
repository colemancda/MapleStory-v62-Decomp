/* FUN_0046c293 - 0x0046c293 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046c293(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  undefined *extraout_ECX_00;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  int *piVar6;
  bool bVar7;
  undefined4 uStack_138;
  int iStack_134;
  int iStack_130;
  uint uStack_12c;
  int iStack_128;
  undefined1 *puStack_124;
  int iStack_120;
  int *piStack_11c;
  int *piStack_118;
  int *piStack_114;
  undefined *puStack_110;
  int *piStack_10c;
  undefined *puStack_108;
  int *piStack_104;
  undefined *puStack_100;
  int iStack_fc;
  undefined *puStack_f8;
  IBinding *pIVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x54);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar3 == 0) {
    puStack_f8 = (undefined *)(unaff_EBP + -0x14);
    iStack_fc = 0x46c2d3;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + 0x20) == 0) {
      iVar3 = *(int *)(unaff_EBP + 0x18);
      if (iVar3 != 1000) {
        if (iVar3 == 0x3e9) {
          puStack_f8 = (undefined *)(unaff_EBP + -0x28);
          iStack_fc = 0x46c4f2;
          puVar1 = (undefined4 *)FUN_00679d86();
          puStack_f8 = (undefined *)*puVar1;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_fc = 0x46c50f;
          FUN_0046febf();
          iVar3 = *(int *)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        else if (iVar3 == 0x3ea) {
          FUN_0087a1b0();
          puStack_f8 = &DAT_009640ac;
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          iStack_fc = 0x46c431;
          FUN_00470891();
          puStack_f8 = (undefined *)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_fc = 0x46c445;
          FUN_00679d86();
          puStack_f8 = (undefined *)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_fc = 0x46c458;
          uVar4 = FUN_0046fc68();
          *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
          iStack_fc = *(undefined4 *)(unaff_EBP + 0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_100 = (undefined *)0x46c46a;
          puStack_f8 = &stack0xffffff10;
          FUN_0087a25a();
          puStack_f8 = (undefined *)(unaff_EBP + -0x20);
          iStack_fc = 0x46c47a;
          puVar1 = (undefined4 *)FUN_0046fc3e();
          puStack_f8 = (undefined *)*puVar1;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_fc = 0x46c497;
          FUN_0046febf();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            puStack_f8 = (undefined *)0x46c4ab;
            FUN_00403384();
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (*(int *)(unaff_EBP + -0x2c) != 0) {
            puStack_f8 = (undefined *)0x46c4c0;
            FUN_00403384();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            puStack_f8 = (undefined *)0x46c4d5;
            FUN_00403384();
          }
          iVar3 = *(int *)(unaff_EBP + -0x34);
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        else {
          if (iVar3 != 0x3eb) goto LAB_0046c542;
          FUN_0087a1b0();
          puStack_f8 = &DAT_009640ac;
          *(undefined4 *)(unaff_EBP + 0x20) = 0;
          iStack_fc = 0x46c367;
          FUN_00470891();
          puStack_f8 = (undefined *)(unaff_EBP + -0x48);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_fc = 0x46c37b;
          FUN_00679d86();
          puStack_f8 = (undefined *)(unaff_EBP + -0x7c);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_fc = 0x46c38e;
          uVar4 = FUN_0046fc68();
          *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
          iStack_fc = *(undefined4 *)(unaff_EBP + 0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          puStack_100 = (undefined *)0x46c3a0;
          puStack_f8 = &stack0xffffff10;
          FUN_0087a25a();
          puStack_f8 = (undefined *)(unaff_EBP + -0x80);
          iStack_fc = 0x46c3b0;
          puVar1 = (undefined4 *)FUN_0046fc3e();
          puStack_f8 = (undefined *)*puVar1;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_fc = 0x46c3cd;
          FUN_0046febf();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int *)(unaff_EBP + -0x80) != 0) {
            puStack_f8 = (undefined *)0x46c3e1;
            FUN_00403384();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (*(int *)(unaff_EBP + -0x7c) != 0) {
            puStack_f8 = (undefined *)0x46c3f6;
            FUN_00403384();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (*(int *)(unaff_EBP + -0x48) != 0) {
            puStack_f8 = (undefined *)0x46c40b;
            FUN_00403384();
          }
          iVar3 = *(int *)(unaff_EBP + 0x20);
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        goto LAB_0046c313;
      }
      FUN_0087a1b0();
      iStack_fc = *(undefined4 *)(unaff_EBP + 0x1c);
      puStack_100 = (undefined *)0x46c52d;
      puStack_f8 = &stack0xffffff10;
      puVar2 = (undefined *)FUN_0087a25a();
      piStack_104 = (int *)0x46c535;
      puStack_100 = puVar2;
      FUN_0087a007();
      iStack_fc = 0x46c542;
      puStack_f8 = puVar2;
      FUN_0046febf();
    }
    else {
      puStack_f8 = (undefined *)(unaff_EBP + 0x1c);
      iStack_fc = 0x46c2ef;
      puVar1 = (undefined4 *)FUN_00679d86();
      puStack_f8 = (undefined *)*puVar1;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_fc = 0x46c30c;
      FUN_0046febf();
      iVar3 = *(int *)(unaff_EBP + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_0046c313:
      if (iVar3 != 0) {
        puStack_f8 = (undefined *)0x46c324;
        FUN_00403384();
      }
    }
LAB_0046c542:
    puStack_f8 = (undefined *)0x46c553;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_f8 = (undefined *)0x46c563;
    FUN_00403191();
    puStack_f8 = (undefined *)0x0;
    iStack_fc = unaff_EBP + -0xb0;
    puStack_100 = (undefined *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_104 = (int *)0x46c57f;
    puStack_108 = (undefined *)FUN_00411641();
    *(int ***)(unaff_EBP + 0x1c) = &piStack_104;
    piStack_10c = (int *)0x46c58b;
    FUN_004033a1();
    puStack_108 = (undefined *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_10c = (int *)0x46c59b;
    FUN_00405a1d();
    piStack_10c = (int *)0x46c5a2;
    FUN_00402660();
    piStack_10c = (int *)0x46c5a9;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_fc = 0x46c5b4;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar3 != 0) {
      puStack_f8 = (undefined *)0x46c5ca;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_f8 = (undefined *)0x46c5db;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_f8 = (undefined *)0x46c5eb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_f8 = (undefined *)0x46c5f6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_f8 = (undefined *)0x46c606;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_f8 = (undefined *)0x46c611;
      FUN_00878dfb();
    }
    puVar2 = (undefined *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_f8 = (undefined *)0x46c621;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_f8 = (undefined *)0x46c62c;
      FUN_00878dfb();
      puVar2 = extraout_ECX_00;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_100 = (undefined *)&puStack_f8;
      *(undefined ***)(unaff_EBP + 0x1c) = &puStack_f8;
      iStack_fc = 0x583;
      piStack_104 = (int *)0x46c687;
      puStack_f8 = puVar2;
      FUN_00679e4e();
      iStack_fc = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_100 = (undefined *)0x46c697;
      FUN_0040263d();
      puStack_100 = (undefined *)0x46c69e;
      puStack_f8 = (undefined *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_fc = 0x46c6a8;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + 0x20) = uVar4;
      iStack_fc = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_100 = (undefined *)0x46c6b8;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_f8 = (undefined *)0x46c6c5;
        FUN_00878dfb();
      }
      puStack_f8 = (undefined *)0x46c6ce;
      FUN_00403191();
      puStack_f8 = (undefined *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_fc = 0x46c6dd;
      FUN_004031b7();
      bVar7 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (bVar7) {
        puStack_f8 = (undefined *)0x46c6f4;
        FUN_00878dfb();
      }
      puStack_f8 = (undefined *)(unaff_EBP + -0x68);
      iStack_fc = 0;
      puStack_100 = (undefined *)0x0;
      piStack_104 = (int *)0x0;
      puStack_108 = (undefined *)0x0;
      piStack_10c = (int *)0x0;
      puStack_110 = (undefined *)(unaff_EBP + 0x1c);
      piStack_114 = (int *)0x46c710;
      puVar1 = (undefined4 *)FUN_0042a39f();
      puStack_f8 = (undefined *)0x46c71a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar1);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_f8 = (undefined *)0x46c72f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_f8 = (undefined *)0x46c73a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_f8 = (undefined *)0x46c747;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_f8 = (undefined *)0x46c752;
        FUN_00878dfb();
      }
      if (999 < *(int *)(unaff_EBP + 0x18)) {
        if (*(int *)(unaff_EBP + 0x18) < 0x3eb) {
          pIVar8 = *(IBinding **)(unaff_EBP + -0x10);
          this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x1c) + 4);
        }
        else {
          if (*(int *)(unaff_EBP + 0x18) != 0x3eb) goto LAB_0046c786;
          pIVar8 = *(IBinding **)(unaff_EBP + -0x10);
          this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x1c) + 8);
        }
        puStack_f8 = (undefined *)0x46c786;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar8);
      }
LAB_0046c786:
      puStack_f8 = *(undefined **)(unaff_EBP + 0x10);
      iStack_fc = 0x46c793;
      FUN_0040ee87();
      piVar6 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (piVar6 == (int *)0x0) {
        puStack_f8 = (undefined *)0x46c7a4;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x10);
      }
      iVar3 = *piVar6;
      puStack_100 = *(undefined **)(unaff_EBP + -0x58);
      iStack_fc = *(undefined4 *)(unaff_EBP + -0x54);
      puStack_f8 = *(undefined **)(unaff_EBP + -0x50);
      *(int **)(unaff_EBP + 0x1c) = piVar6;
      puStack_108 = (undefined *)0x46c7bc;
      piStack_104 = piVar6;
      iVar3 = (**(code **)(iVar3 + 100))();
      if (iVar3 < 0) {
        puStack_108 = &DAT_00963de8;
        piStack_10c = *(int **)(unaff_EBP + 0x1c);
        piStack_114 = (int *)0x46c7ce;
        puStack_110 = (undefined *)iVar3;
        FUN_00878e09();
      }
      puStack_108 = (undefined *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_10c = (int *)0x46c7db;
      puStack_108 = (undefined *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        piStack_10c = (int *)0x46c7e6;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_108 = (undefined *)0x80004003;
        piStack_10c = (int *)0x46c7f6;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      puStack_108 = (undefined *)0xc00613dc;
      puStack_110 = (undefined *)0x46c807;
      piStack_10c = piVar6;
      piVar5 = (int *)(**(code **)(*piVar6 + 0xb4))();
      if ((int)piVar5 < 0) {
        puStack_110 = &DAT_00963df8;
        piStack_11c = (int *)0x46c818;
        piStack_118 = piVar5;
        piStack_114 = piVar6;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_110 = (undefined *)0x80004003;
        piStack_114 = (int *)0x46c828;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      puStack_110 = (undefined *)0xffffffff;
      piStack_118 = (int *)0x46c836;
      piStack_114 = piVar6;
      iVar3 = (**(code **)(*piVar6 + 0xe0))();
      if (iVar3 < 0) {
        piStack_118 = (int *)&DAT_00963df8;
        puStack_124 = (undefined1 *)0x46c842;
        iStack_120 = iVar3;
        piStack_11c = piVar6;
        FUN_00878e09();
      }
      piVar6 = (int *)0x0;
      while( true ) {
        piStack_118 = (int *)0x46c851;
        FUN_0087a1b0();
        iStack_120 = 0x46c85a;
        piStack_11c = piVar6;
        piStack_118 = (int *)&piStack_114;
        piStack_11c = (int *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x20) = &piStack_118;
        iStack_120 = 0x46c868;
        FUN_00402e8e();
        piStack_11c = (int *)(unaff_EBP + -0xd0);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_120 = 0x46c87b;
        FUN_0040263d();
        iStack_120 = 0x46c882;
        piStack_118 = (int *)FUN_004048a4();
        piStack_11c = (int *)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_120 = 0x46c890;
        piStack_118 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        piStack_11c = (int *)0x46c89f;
        FUN_00417232();
        piStack_118 = (int *)0x46c8a7;
        FUN_004027b3();
        piStack_118 = (int *)(unaff_EBP + -0xd0);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        piStack_11c = (int *)0x46c8b7;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46c8c2;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x1c) == 0) break;
        piStack_118 = &DAT_00980690;
        piStack_11c = (int *)0x46c8d5;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        piStack_11c = (int *)0x46c8e2;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        piStack_11c = (int *)0x46c8f2;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        piStack_11c = (int *)0x46c8ff;
        FUN_00403191();
        piStack_118 = (int *)0x78;
        puStack_124 = (undefined1 *)&piStack_11c;
        *(int ***)(unaff_EBP + -0x20) = &piStack_11c;
        iStack_120 = 0x474;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        iStack_128 = 0x46c91b;
        FUN_00679e4e();
        iStack_120 = unaff_EBP + -0xa0;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        puStack_124 = (undefined1 *)0x46c92e;
        FUN_0040263d();
        puStack_124 = (undefined1 *)0x46c935;
        piStack_11c = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        iStack_120 = 0x46c93f;
        piStack_11c = (int *)FUN_00412550();
        piStack_118 = (int *)0x3;
        iStack_120 = 0x46c94c;
        FUN_004031b7();
        piStack_118 = (int *)(unaff_EBP + -0x44);
        piStack_11c = (int *)(unaff_EBP + -0x78);
        iStack_120 = unaff_EBP + -0x90;
        puStack_124 = (undefined1 *)(unaff_EBP + -0x68);
        iStack_128 = unaff_EBP + -0x58;
        uStack_12c = (uint)(*(int *)(unaff_EBP + 0x18) == 0x3eb);
        iStack_134 = unaff_EBP + 0x1c;
        *(int **)(unaff_EBP + -0x20) = &iStack_130;
        uStack_138 = 0x46c97b;
        FUN_00424dbc();
        iStack_134 = *(undefined4 *)(unaff_EBP + 0x20);
        *(undefined4 **)(unaff_EBP + -0x48) = &uStack_138;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_004059fd(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        FUN_0046ac3f(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        uStack_12c = 0x46c9ac;
        uStack_12c = FUN_004458be();
        iStack_130 = unaff_EBP + -0xe0;
        iStack_134 = 0x46c9bc;
        FUN_00424e27();
        iStack_134 = 0x46c9c3;
        FUN_004250ac();
        piStack_118 = (int *)(unaff_EBP + -0xe0);
        piStack_11c = (int *)0x46c9cf;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46c9da;
          FUN_00878dfb();
        }
        piStack_118 = (int *)0x46c9e2;
        FUN_004125e6();
        piStack_118 = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        piStack_11c = (int *)0x46c9ef;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46c9fa;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0xa0);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        piStack_11c = (int *)0x46ca0a;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46ca15;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        piStack_11c = (int *)0x46ca22;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46ca2d;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x90);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        piStack_11c = (int *)0x46ca3d;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46ca48;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        piStack_11c = (int *)0x46ca55;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46ca60;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        piStack_11c = (int *)0x46ca6d;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46ca78;
          FUN_00878dfb();
        }
        piStack_118 = *(int **)(unaff_EBP + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (piStack_118 != (int *)0x0) {
          piStack_11c = (int *)0x46ca89;
          (**(code **)(*piStack_118 + 8))();
        }
        piVar6 = (int *)((int)piVar6 + 1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_118 = (int *)0x46ca9b;
      FUN_004027eb();
      piStack_118 = &DAT_00980690;
      if (piVar6 == (int *)0x0) {
        piStack_11c = (int *)0x46cb2f;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        piStack_11c = (int *)0x46cb3c;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        piStack_11c = (int *)0x46cb4c;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_11c = (int *)0x46cb59;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_11c = (int *)0x46cb66;
        FUN_00403191();
        piStack_118 = (int *)(unaff_EBP + -0x68);
        piStack_11c = (int *)(unaff_EBP + -0x58);
        iStack_120 = unaff_EBP + -0x90;
        puStack_124 = (undefined1 *)(unaff_EBP + -0x78);
        iStack_128 = unaff_EBP + -0x44;
        uStack_12c = (uint)(*(int *)(unaff_EBP + 0x18) == 0x3eb);
        iStack_134 = unaff_EBP + -0x18;
        *(int **)(unaff_EBP + 0x18) = &iStack_130;
        uStack_138 = 0x46cb95;
        FUN_00424dbc();
        iStack_134 = *(undefined4 *)(unaff_EBP + 0x20);
        *(undefined4 **)(unaff_EBP + 0x20) = &uStack_138;
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        uStack_138 = extraout_ECX_01;
        FUN_004059fd(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_0046ac3f(unaff_EBP + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        uStack_12c = 0x46cbc6;
        uStack_12c = FUN_004458be();
        iStack_130 = unaff_EBP + -0xa0;
        iStack_134 = 0x46cbd6;
        FUN_00424e27();
        iStack_134 = 0x46cbdd;
        FUN_004250ac();
        piStack_118 = (int *)(unaff_EBP + -0xa0);
        piStack_11c = (int *)0x46cbe9;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46cbf4;
          FUN_00878dfb();
        }
        piStack_118 = *(int **)(unaff_EBP + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        if (piStack_118 != (int *)0x0) {
          piStack_11c = (int *)0x46cc05;
          (**(code **)(*piStack_118 + 8))();
        }
        piStack_118 = (int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_11c = (int *)0x46cc12;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46cc1d;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_11c = (int *)0x46cc2a;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46cc35;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x90);
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        piStack_11c = (int *)0x46cc45;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46cc50;
          FUN_00878dfb();
        }
        piStack_118 = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        piStack_11c = (int *)0x46cc5d;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46cc68;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_118 = (int *)(unaff_EBP + -0x68);
      }
      else {
        piStack_11c = (int *)0x46caac;
        FUN_00403191();
        piStack_118 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_11c = (int *)0x46cab9;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_118 = (int *)0x80004003;
          piStack_11c = (int *)0x46cacd;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x10);
        puStack_124 = *(undefined1 **)(unaff_EBP + -0x78);
        iStack_120 = *(int *)(unaff_EBP + -0x74);
        piStack_11c = *(int **)(unaff_EBP + -0x70);
        piStack_118 = *(int **)(unaff_EBP + -0x6c);
        iStack_134 = *(undefined4 *)(unaff_EBP + -0x44);
        iStack_130 = *(int *)(unaff_EBP + -0x40);
        uStack_12c = *(undefined4 *)(unaff_EBP + -0x3c);
        uStack_138 = 0x20;
        iStack_128 = *(int *)(unaff_EBP + -0x38);
        iVar3 = (**(code **)(*piVar6 + 0x110))(piVar6);
        if (iVar3 < 0) {
          piStack_118 = (int *)&DAT_00963df8;
          puStack_124 = (undefined1 *)0x46cb03;
          iStack_120 = iVar3;
          piStack_11c = piVar6;
          FUN_00878e09();
        }
        piStack_118 = (int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_11c = (int *)0x46cb10;
        piStack_118 = (int *)FUN_00402bc3();
        if ((int)piStack_118 < 0) {
          piStack_11c = (int *)0x46cb1b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_118 = (int *)(unaff_EBP + -0x78);
      }
      piStack_11c = (int *)0x46cc75;
      piStack_118 = (int *)FUN_00402bc3();
      if ((int)piStack_118 < 0) {
        piStack_11c = (int *)0x46cc80;
        FUN_00878dfb();
      }
      piStack_118 = (int *)0x46cc85;
      uVar4 = FUN_007d1e08();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(iVar3 + 0x40) = uVar4;
      piStack_118 = (int *)0x3;
      piStack_11c = (int *)0x0;
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(unaff_EBP + 0x14);
      iStack_120 = 0x46cc9e;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        piStack_118 = (int *)0x80004003;
        piStack_11c = (int *)0x46ccb1;
        FUN_00878dfb();
      }
      piStack_118 = (int *)(unaff_EBP + -0x44);
      piStack_11c = (int *)(unaff_EBP + 0x18);
      iStack_120 = 0x46ccc1;
      piVar6 = (int *)FUN_00425067();
      iVar3 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (iVar3 == 0) {
        piStack_118 = (int *)0x80004003;
        piStack_11c = (int *)0x46ccd5;
        FUN_00878dfb();
      }
      piStack_118 = (int *)0x46ccdc;
      iVar3 = FUN_0040eed0();
      piStack_118 = (int *)(iVar3 + *(int *)(unaff_EBP + 0x24));
      piStack_11c = (int *)0x46cce7;
      FUN_0046f8b1();
      piStack_118 = *(int **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (piStack_118 != (int *)0x0) {
        piStack_11c = (int *)0x46ccf8;
        (**(code **)(*piStack_118 + 8))();
      }
      piStack_118 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_11c = (int *)0x46cd05;
      piStack_118 = (int *)FUN_00402bc3();
      if ((int)piStack_118 < 0) {
        piStack_11c = (int *)0x46cd10;
        FUN_00878dfb();
      }
      piStack_118 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piStack_118 != (int *)0x0) {
        piStack_11c = (int *)0x46cd21;
        (**(code **)(*piStack_118 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_118 = (int *)0x46cd2d;
      FUN_00402676();
      piStack_118 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_118 != (int *)0x0) {
        piStack_11c = (int *)0x46cd3e;
        (**(code **)(*piStack_118 + 8))();
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_118 = (int *)0x46cd4a;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 8) = 0;
      }
      piStack_118 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_118 != (int *)0x0) {
        piStack_11c = (int *)0x46cd5e;
        (**(code **)(*piStack_118 + 8))();
      }
      piStack_118 = *(int **)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_118 != (int *)0x0) {
        piStack_11c = (int *)0x46cd6f;
        (**(code **)(*piStack_118 + 8))();
      }
      goto LAB_0046cd6f;
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_f8 = (undefined *)0x46c64d;
      FUN_00403384();
    }
  }
  FUN_00412600();
  FUN_00402fa6();
  FUN_00412600();
  FUN_004125d9();
LAB_0046cd6f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


