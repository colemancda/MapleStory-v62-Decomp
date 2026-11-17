/* FUN_004ca51c - 0x004ca51c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ca51c(void)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int unaff_EBP;
  bool bVar10;
  int *piStack_f8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  int *piStack_b0;
  undefined *puStack_ac;
  int *piStack_a8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x48) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x7c) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  uVar5 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x30) = uVar5 & 0xff;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x80) = uVar4;
  piStack_a8 = (int *)(unaff_EBP + -0x80);
  puStack_ac = (undefined *)0x4ca574;
  iVar6 = FUN_004cd6be();
  if (iVar6 == 0) {
    FUN_004cd4a2();
    iVar6 = *(int *)(unaff_EBP + -0x30);
    *(char *)(*(int *)(unaff_EBP + -0x14) + 0x1c) = (char)iVar6;
    if ((iVar6 == 1) || (iVar6 == 2)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0x1d) = uVar2;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x20) = *(undefined4 *)(unaff_EBP + -0x80);
    iVar6 = *(int *)(unaff_EBP + -0x14);
    uVar5 = FUN_0042452b();
    *(uint *)(iVar6 + 0x30) = uVar5 & 0xff;
    iVar6 = *(int *)(unaff_EBP + -0x14);
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar6 + 0x34) = uVar4;
    iVar6 = *(int *)(unaff_EBP + -0x14);
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
    iVar6 = *(int *)(unaff_EBP + -0x14);
    uVar5 = FUN_0042452b();
    *(uint *)(iVar6 + 0x2c) = uVar5 & 0xff;
    sVar3 = FUN_00424561();
    *(int *)(unaff_EBP + -0x88) = (int)sVar3;
    sVar3 = FUN_00424561();
    iVar6 = *(int *)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + -0x84) = (int)sVar3;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar6 + 0x28) = uVar4;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined ***)(unaff_EBP + -0x6c) = &PTR_FUN_008ea328;
    piStack_a8 = (int *)(*(int *)(unaff_EBP + -0x84) + 1);
    puStack_ac = (undefined *)(*(int *)(unaff_EBP + -0x88) + 1);
    piStack_b0 = (int *)(*(int *)(unaff_EBP + -0x84) + -1);
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x88) + -1;
    puStack_b4 = *(undefined1 **)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_b8 = 0x4ca677;
    FUN_004cd31b();
    if (*(int *)(unaff_EBP + -100) == 0) {
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -0x78) = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x60) + 4);
      uVar4 = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
    }
    piStack_a8 = (int *)0x4ca6aa;
    FUN_004cd285();
    piStack_a8 = (int *)0x4ca6b2;
    FUN_004cd256();
    if (((*(int *)(unaff_EBP + -0x30) == 0) || (*(int *)(unaff_EBP + -0x30) == 1)) ||
       (*(int *)(unaff_EBP + -0x30) == 3)) {
      FUN_00424561();
      piStack_a8 = (int *)0x4ca6d9;
      FUN_0045e3a0();
      FUN_00424561();
      piStack_a8 = (int *)0x4ca6ee;
      FUN_0045e3a0();
      piStack_a8 = (int *)0x4ca6ff;
      iVar6 = FUN_004308f4();
      if (iVar6 != 0) {
        (**(code **)(*(int *)(iVar6 + 4) + 0x10))();
        piStack_a8 = (int *)0x4ca716;
        FUN_004cd285();
      }
      sVar3 = FUN_00424561();
      *(int *)(unaff_EBP + -0x70) = (int)sVar3;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    piStack_a8 = (int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_ac = (undefined *)0x4ca73d;
    puVar7 = (undefined4 *)FUN_00679d86();
    puStack_ac = (undefined *)*puVar7;
    piStack_a8 = (int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_b0 = (int *)0x4ca74e;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      piStack_a8 = (int *)0x4ca765;
      FUN_00403384();
    }
    piStack_a8 = (int *)0x4ca774;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_a8 = (int *)0x4ca781;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar4 = FUN_0045e2eb();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      piStack_a8 = (int *)0x4ca7a4;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x20) = piVar9;
    uStack_c4 = FUN_0045e2eb();
    piStack_b0 = *(int **)(unaff_EBP + -0x44);
    puStack_ac = *(undefined **)(unaff_EBP + -0x40);
    piStack_a8 = *(int **)(unaff_EBP + -0x3c);
    puStack_c0 = *(undefined4 **)(unaff_EBP + -0x58);
    piStack_bc = *(int **)(unaff_EBP + -0x54);
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x50);
    puStack_b4 = *(undefined1 **)(unaff_EBP + -0x4c);
    puVar8 = (undefined *)(**(code **)(*piVar9 + 0x90))();
    if ((int)puVar8 < 0) {
      piStack_a8 = *(int **)(unaff_EBP + -0x20);
      piStack_b0 = (int *)0x4ca7ea;
      puStack_ac = puVar8;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_a8 = (int *)0x4ca7f7;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_a8 = (int *)0x4ca802;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_a8 = (int *)0x4ca80f;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_a8 = (int *)0x4ca81a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x30);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar6 == 0) {
      piStack_a8 = (int *)(unaff_EBP + -0x20);
      puStack_ac = (undefined *)0x4ca904;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        piStack_a8 = (int *)0x0;
        puStack_b4 = (undefined1 *)&puStack_ac;
        *(undefined ***)(unaff_EBP + -0x1c) = &puStack_ac;
        piStack_b0 = (int *)0x639;
        uStack_b8 = 0x4ca932;
        FUN_00679e4e();
        piStack_b0 = (int *)(unaff_EBP + -0xa0);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_b4 = (undefined1 *)0x4ca945;
        FUN_0040263d();
        puStack_b4 = (undefined1 *)0x4ca94c;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        puStack_ac = (undefined *)0x4ca957;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x8c) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        if (iVar6 != 0) {
          piStack_a8 = (int *)0x4ca973;
          iVar6 = FUN_00404b30();
          if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
            piStack_a8 = (int *)0x4ca984;
            FUN_00878dfb();
          }
        }
        piVar9 = (int *)(unaff_EBP + -0xa0);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piStack_a8 = (int *)0x4ca994;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_a8 = (int *)0x4ca99f;
          FUN_00878dfb();
          piVar9 = extraout_ECX_00;
        }
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          piStack_a8 = (int *)0x0;
          puStack_ac = *(undefined **)(*(int *)(unaff_EBP + -0x14) + 0x34);
          piStack_b0 = (int *)(unaff_EBP + -0x1c);
          puStack_b4 = (undefined1 *)0x4ca9bf;
          puVar7 = (undefined4 *)FUN_005536ce();
          piStack_a8 = (int *)0x4ca9c9;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x28),
                     (IBinding *)*puVar7);
          FUN_004125e6();
          if (*(int *)(unaff_EBP + -0x28) == 0) {
            FUN_004027eb();
            goto LAB_004ca90d;
          }
          piStack_a8 = (int *)0x4ca9f0;
          FUN_00403191();
          piStack_a8 = *(int **)(unaff_EBP + -0x28);
          puStack_ac = (undefined *)0x4ca9fd;
          FUN_0040ee87();
          bVar10 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (bVar10) {
            piStack_a8 = (int *)0x4caa13;
            FUN_00878dfb();
          }
          piStack_a8 = (int *)(unaff_EBP + -0x44);
          puStack_ac = (undefined *)0x0;
          piStack_b0 = (int *)0x0;
          puStack_b4 = (undefined1 *)0x0;
          uStack_b8 = 0;
          piStack_bc = (int *)0x0;
          puStack_c0 = (undefined4 *)(unaff_EBP + -0x1c);
          uStack_c4 = 0x4caa2f;
          puVar7 = (undefined4 *)FUN_0042a39f();
          piStack_a8 = (int *)0x4caa39;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar7);
          FUN_00412600();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_a8 = (int *)0x4caa4e;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_a8 = (int *)0x4caa59;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_a8 = (int *)0x4caa66;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_a8 = (int *)0x4caa71;
            FUN_00878dfb();
          }
        }
        else {
          piStack_a8 = (int *)0xff;
          puStack_ac = (undefined *)0x0;
          *(int ***)(unaff_EBP + -0x90) = &piStack_b0;
          puStack_b4 = (undefined1 *)0x0;
          uStack_b8 = 0x4caa88;
          piStack_b0 = piVar9;
          FUN_00424e0a();
          puStack_b4 = (undefined1 *)0x0;
          uStack_b8 = 0;
          *(int ***)(unaff_EBP + -0x74) = &piStack_bc;
          puStack_c0 = (undefined4 *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          uStack_c4 = 0x4caa9a;
          piStack_bc = extraout_ECX_01;
          FUN_00424dd7();
          puStack_c0 = (undefined4 *)0x0;
          *(undefined4 **)(unaff_EBP + -0x74) = &uStack_c4;
          uStack_c4 = extraout_ECX_02;
          FUN_00424dbc();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puVar7 = (undefined4 *)FUN_0042e5bf();
          piStack_a8 = (int *)0x4caac4;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar7);
          FUN_00412600();
        }
        FUN_004027eb();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_004027eb();
        goto LAB_004caae0;
      }
LAB_004ca90d:
      FUN_004027eb();
    }
    else {
      piStack_a8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x34);
      puStack_ac = (undefined *)(unaff_EBP + -0x20);
      piStack_b0 = (int *)0x4ca840;
      puVar7 = (undefined4 *)FUN_004cb78a();
      piStack_a8 = (int *)0x4ca84a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x28),
                 (IBinding *)*puVar7);
      FUN_004125e6();
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        piStack_a8 = (int *)0x4ca868;
        FUN_00403191();
        piStack_a8 = *(int **)(unaff_EBP + -0x28);
        puStack_ac = (undefined *)0x4ca875;
        FUN_0040ee87();
        bVar10 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (bVar10) {
          piStack_a8 = (int *)0x4ca88b;
          FUN_00878dfb();
        }
        piStack_a8 = (int *)(unaff_EBP + -0x44);
        puStack_ac = (undefined *)0x0;
        piStack_b0 = (int *)0x0;
        puStack_b4 = (undefined1 *)0x0;
        uStack_b8 = 0;
        piStack_bc = (int *)0x0;
        puStack_c0 = (undefined4 *)(unaff_EBP + -0x20);
        uStack_c4 = 0x4ca8a7;
        puVar7 = (undefined4 *)FUN_0042a39f();
        piStack_a8 = (int *)0x4ca8b1;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   (IBinding *)*puVar7);
        FUN_00412600();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_a8 = (int *)0x4ca8c6;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_a8 = (int *)0x4ca8d1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_a8 = (int *)0x4ca8de;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_a8 = (int *)0x4ca8ed;
          FUN_00878dfb();
        }
LAB_004caae0:
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_0042fb34();
          FUN_0045e2eb();
          piStack_a8 = (int *)0x4cab42;
          FUN_0045e3a0();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_a8 = (int *)0x4cab51;
            FUN_00878dfb();
          }
          FUN_0042fb34();
          FUN_0045e2eb();
          piStack_a8 = (int *)0x4cab77;
          FUN_0045e3a0();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_a8 = (int *)0x4cab86;
            FUN_00878dfb();
          }
          piVar9 = *(int **)(unaff_EBP + -0x10);
          puStack_ac = (undefined *)0x4caba9;
          piStack_a8 = piVar9;
          puStack_b4 = (undefined1 *)(**(code **)(*piVar9 + 0xb4))();
          if ((int)puStack_b4 < 0) {
            puStack_ac = &DAT_00963df8;
            uStack_b8 = 0x4cabb9;
            piStack_b0 = piVar9;
            FUN_00878e09();
          }
          puStack_ac = (undefined *)0x1;
          piStack_b0 = *(int **)(unaff_EBP + -0x24);
          puStack_b4 = (undefined1 *)0x4cabc6;
          FUN_0040ee87();
          piVar9 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (piVar9 == (int *)0x0) {
            puStack_ac = (undefined *)0x80004003;
            piStack_b0 = (int *)0x4cabdb;
            FUN_00878dfb();
            piVar9 = *(int **)(unaff_EBP + -0x10);
          }
          iVar6 = *piVar9;
          uStack_b8 = *(undefined4 *)(unaff_EBP + -0x44);
          puStack_b4 = *(undefined1 **)(unaff_EBP + -0x40);
          piStack_b0 = *(int **)(unaff_EBP + -0x3c);
          *(int **)(unaff_EBP + -0x1c) = piVar9;
          puStack_ac = *(undefined **)(unaff_EBP + -0x38);
          puStack_c0 = (undefined4 *)0x4cabf3;
          piStack_bc = piVar9;
          iVar6 = (**(code **)(iVar6 + 100))();
          if (iVar6 < 0) {
            puStack_c0 = (undefined4 *)&DAT_00963de8;
            uStack_c4 = *(undefined4 *)(unaff_EBP + -0x1c);
            FUN_00878e09();
          }
          puStack_c0 = (undefined4 *)(unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          uStack_c4 = 0x4cac12;
          puStack_c0 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_c0 < 0) {
            uStack_c4 = 0x4cac1d;
            FUN_00878dfb();
          }
          puStack_c0 = &DAT_00980690;
          uStack_c4 = 0x4cac2b;
          FUN_00403191();
          puStack_c0 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          uStack_c4 = 0x4cac38;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_c0 = (undefined4 *)0x80004003;
            uStack_c4 = 0x4cac4c;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              puStack_c0 = (undefined4 *)0x80004003;
              uStack_c4 = 0x4cac57;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_c0 = (undefined4 *)0x80004003;
            uStack_c4 = 0x4cac64;
            FUN_00878dfb();
          }
          piVar9 = *(int **)(unaff_EBP + -0x10);
          *(int **)(unaff_EBP + -0x34) = piVar9;
          puStack_c0 = (undefined4 *)0x4cac71;
          iVar6 = FUN_0042fb34();
          *(int *)(unaff_EBP + -0x1c) = iVar6 / -2;
          puStack_c0 = (undefined4 *)0x4cac81;
          FUN_0042fb0a();
          uStack_c4 = *(undefined4 *)(unaff_EBP + -0x50);
          puStack_c0 = *(undefined4 **)(unaff_EBP + -0x4c);
          iVar6 = (**(code **)(*piVar9 + 0x90))();
          if (iVar6 < 0) {
            _piStack_f8 = CONCAT44(iVar6,0x4cacc0);
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb();
          }
          piVar9 = *(int **)(unaff_EBP + -0x10);
          _piStack_f8 = CONCAT44(0x4cad0d,piStack_f8);
          iVar6 = (**(code **)(*piVar9 + 0xe0))();
          if (iVar6 < 0) {
            _piStack_f8 = CONCAT44(&DAT_00963df8,piVar9);
            FUN_00878e09();
          }
          _piStack_f8 = CONCAT44(*(IBinding **)(unaff_EBP + -0x24),0x4cad2b);
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                     (*(int *)(unaff_EBP + -0x14) + 0x3c),*(IBinding **)(unaff_EBP + -0x24));
          _piStack_f8 = CONCAT44(*(IBinding **)(unaff_EBP + -0x10),0x4cad39);
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                     (*(int *)(unaff_EBP + -0x14) + 0x38),*(IBinding **)(unaff_EBP + -0x10));
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x30) == 0) {
            _piStack_f8 = 0x30000012c;
            FUN_004031b7();
            piVar9 = *(int **)(unaff_EBP + -0x24);
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (piVar9 == (int *)0x0) {
              _piStack_f8 = 0x80004003004cad7e;
              FUN_00878dfb();
              piVar9 = *(int **)(unaff_EBP + -0x24);
            }
            iVar6 = *piVar9;
            _piStack_f8 = *(undefined8 *)(unaff_EBP + -0x3c);
            *(int **)(unaff_EBP + -0x1c) = piVar9;
            iVar6 = (**(code **)(iVar6 + 0xa0))(piVar9,0);
            if (iVar6 < 0) {
              _piStack_f8 = CONCAT44(&DAT_00963de8,*(undefined4 *)(unaff_EBP + -0x1c));
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            _piStack_f8 = CONCAT44(unaff_EBP + -0x44,0x4cadbf);
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              _piStack_f8 = CONCAT44(iVar6,0x4cadca);
              FUN_00878dfb();
            }
          }
          else {
            *(int ***)(unaff_EBP + -0x74) = &piStack_f8;
            _piStack_f8 = CONCAT44(*(int *)(unaff_EBP + -0x14),extraout_ECX_03);
            FUN_004cd4d5();
            FUN_004cb9c6();
          }
          if (*(int *)(unaff_EBP + -0x30) == 2) {
            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x48) = 3;
            iVar6 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar6 + 0x3c) == 0) {
              _piStack_f8 = 0x80004003004cadf3;
              FUN_00878dfb();
            }
            _piStack_f8 = 0;
            iVar6 = (**(code **)(**(int **)(iVar6 + 0x3c) + 0x80))();
            if (iVar6 < 0) {
              FUN_00878e09(iVar6);
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb();
            }
            uVar5 = FUN_0042d476();
            if (1 < uVar5) {
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              FUN_00403191();
              iVar6 = *(int *)(unaff_EBP + -0x14);
              iVar1 = *(int *)(iVar6 + 0x38);
              *(undefined1 *)(unaff_EBP + -4) = 0x17;
              if (iVar1 == 0) {
                FUN_00878dfb();
              }
              piVar9 = *(int **)(iVar6 + 0x38);
              iVar6 = *piVar9;
              *(int **)(unaff_EBP + -0x1c) = piVar9;
              iVar6 = (**(code **)(iVar6 + 0x110))
                                (piVar9,0x20,*(undefined4 *)(unaff_EBP + -0x44),
                                 *(undefined4 *)(unaff_EBP + -0x40),
                                 *(undefined4 *)(unaff_EBP + -0x3c),
                                 *(undefined4 *)(unaff_EBP + -0x38),
                                 *(undefined4 *)(unaff_EBP + -0x58),
                                 *(undefined4 *)(unaff_EBP + -0x54));
              if (iVar6 < 0) {
                FUN_00878e09(iVar6);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              iVar6 = FUN_00402bc3();
              if (iVar6 < 0) {
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 7;
              iVar6 = FUN_00402bc3();
              if (iVar6 < 0) {
                FUN_00878dfb();
              }
            }
          }
          else {
            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x48) = 0;
            iVar6 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar6 + 0x38) == 0) {
              _piStack_f8 = 0x80004003004caeed;
              FUN_00878dfb();
            }
            piVar9 = *(int **)(iVar6 + 0x38);
            _piStack_f8 = CONCAT44(0xffffff,piVar9);
            iVar6 = (**(code **)(*piVar9 + 0xe0))();
            if (iVar6 < 0) {
              FUN_00878e09(iVar6);
            }
            uVar4 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
            uVar4 = FUN_0045e2eb();
            iVar6 = *(int *)(unaff_EBP + -0x14);
            uVar4 = FUN_004cb0c5(uVar4);
            *(undefined4 *)(iVar6 + 0x50) = uVar4;
          }
          iVar6 = *(int *)(unaff_EBP + -0x70);
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4c) = 0;
          iVar1 = *(int *)(unaff_EBP + -0x7c);
          *(int *)(*(int *)(unaff_EBP + -0x14) + 0x40) = iVar6 + iVar1;
          *(int *)(*(int *)(unaff_EBP + -0x14) + 0x54) = iVar1 + -3000;
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x58) = 0;
          *(undefined8 *)(*(int *)(unaff_EBP + -0x14) + 0x60) = 0;
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x30) == 0) {
            FUN_004245d2();
          }
          else {
            _memset((void *)(*(int *)(unaff_EBP + -0x14) + 0x80),0,8);
          }
          iVar6 = *(int *)(unaff_EBP + -0x14);
          uVar5 = FUN_0042452b();
          *(uint *)(iVar6 + 0x88) = uVar5 & 0xff;
          *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffefc;
          FUN_004cd4d5();
          FUN_004cb02d();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          *(undefined ***)(unaff_EBP + -0x6c) = &PTR_FUN_008ea328;
          FUN_004cdcea();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_004cd5da();
          }
          goto LAB_004cb01c;
        }
      }
    }
    FUN_004125e6();
    FUN_00412600();
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined ***)(unaff_EBP + -0x6c) = &PTR_FUN_008ea328;
    FUN_004cdcea();
  }
  else if (((*(int *)(unaff_EBP + -0x30) == 1) || (*(int *)(unaff_EBP + -0x30) == 2)) &&
          (*(char *)(*(int *)(unaff_EBP + -0x14) + 0x1d) == '\0')) {
    *(undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0x1d) = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004cd4f2();
LAB_004cb01c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


