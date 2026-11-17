/* FUN_0079be1e - 0x0079be1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0079be1e(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  int *piStack_8c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar10 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int **)(unaff_EBP + 8) == (int *)0x0) || (iVar3 = **(int **)(unaff_EBP + 8), iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + -4) >> 1;
  }
  if (uVar2 == 0) {
LAB_0079c307:
    FUN_00402fa6();
  }
  else {
    piStack_8c = (int *)0x79be64;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_8c = (int *)0x79be71;
    FUN_00403191();
    piStack_8c = (int *)0x0;
    iStack_90 = unaff_EBP + -0x74;
    puStack_94 = (undefined1 *)(unaff_EBP + -100);
    iStack_9c = unaff_EBP + 8;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_98;
    uStack_a0 = 0x79be8a;
    FUN_004059fd();
    iStack_9c = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_a0 = 0x79be9a;
    FUN_00405a1d();
    uStack_a0 = 0x79bea1;
    FUN_00402660();
    uStack_a0 = 0x79bea8;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_90 = 0x79beb3;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      piStack_8c = (int *)0x79bec9;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_8c = (int *)0x79beda;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_8c = (int *)0x79beea;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_8c = (int *)0x79bef5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_8c = (int *)0x79bf02;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_8c = (int *)0x79bf0d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_8c = (int *)0x79bf1a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_8c = (int *)0x79bf25;
      FUN_00878dfb();
    }
    piVar8 = (int *)0x0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
LAB_0079c2f9:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar8 != (int *)0x0) {
        piStack_8c = (int *)0x79c307;
        (**(code **)(*piVar8 + 8))();
      }
      goto LAB_0079c307;
    }
    iVar3 = FUN_0040cf4d();
    if (iVar3 == 0) {
      piVar8 = *(int **)(unaff_EBP + -0x10);
      goto LAB_0079c2f9;
    }
    piVar8 = *(int **)(extraout_ECX + 0xd2c);
    *(int **)(unaff_EBP + -0x14) = piVar8;
    if (piVar8 != (int *)0x0) {
      piStack_8c = (int *)0x79bf50;
      (**(code **)(*piVar8 + 4))();
    }
    piStack_8c = (int *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puVar9 = (undefined1 *)0x0;
    *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x78;
    iStack_90 = 0x79bf67;
    FUN_0043f3d6();
    puStack_94 = (undefined1 *)&piStack_8c;
    *(int ***)(unaff_EBP + -0x24) = &piStack_8c;
    iStack_90 = 0x3d2;
    puStack_98 = (undefined1 *)0x79bf7e;
    FUN_00679e4e();
    iStack_90 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_94 = (undefined1 *)0x79bf8e;
    FUN_0040263d();
    puStack_94 = (undefined1 *)0x79bf95;
    piStack_8c = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_90 = 0x79bf9f;
    uVar4 = FUN_00412550();
    puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
    *puVar1 = uVar4;
    iStack_90 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_94 = (undefined1 *)0x79bfb1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_8c = (int *)0x79bfbe;
      FUN_00878dfb();
    }
    puStack_94 = (undefined1 *)&piStack_8c;
    *(int ***)(unaff_EBP + 0x10) = &piStack_8c;
    iStack_90 = 0xa4e;
    puStack_98 = (undefined1 *)0x79bfd6;
    FUN_00679e4e();
    iStack_90 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_94 = (undefined1 *)0x79bfe6;
    FUN_0040263d();
    puStack_94 = (undefined1 *)0x79bfed;
    piStack_8c = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_90 = 0x79bff7;
    uVar4 = FUN_00412550();
    puVar1[1] = uVar4;
    iStack_90 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_94 = (undefined1 *)0x79c007;
    iVar3 = FUN_00402bc3();
    puVar7 = extraout_ECX_00;
    if (iVar3 < 0) {
      piStack_8c = (int *)0x79c014;
      FUN_00878dfb();
      puVar7 = extraout_ECX_01;
    }
    iVar3 = puVar1[1];
    if (iVar3 == 1) {
      piStack_8c = (int *)0x79c0d4;
      puVar5 = (undefined4 *)FUN_0078ffba();
      piStack_8c = (int *)0x79c0de;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                 (IBinding *)*puVar5);
      piVar8 = *(int **)(unaff_EBP + -0x24);
      puVar7 = extraout_ECX_03;
LAB_0079c0e1:
      if (piVar8 != (int *)0x0) {
        piStack_8c = (int *)0x79c0eb;
        (**(code **)(*piVar8 + 8))();
        puVar7 = extraout_ECX_04;
      }
LAB_0079c0eb:
      piStack_8c = (int *)0xff;
      iStack_90 = 3;
      puStack_98 = (undefined1 *)&puStack_94;
      *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_94;
      iStack_9c = 0x79c103;
      puStack_94 = puVar7;
      FUN_0043f93c();
      iStack_a4 = unaff_EBP + -0x14;
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_a0;
      uStack_a8 = 0x79c114;
      uStack_a0 = extraout_ECX_05;
      iStack_9c = iVar10;
      puStack_98 = puVar9;
      FUN_00433bdf();
      iStack_a4 = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_a8;
      uStack_a8 = extraout_ECX_06;
      FUN_00424dbc(unaff_EBP + -0x10);
      puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + 0x10);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar1 + 2);
      piStack_8c = (int *)0x79c13e;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
      if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
        piStack_8c = (int *)0x79c14b;
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      puStack_94 = (undefined1 *)&piStack_8c;
      *(int ***)(unaff_EBP + 0x10) = &piStack_8c;
      iStack_90 = 0x9a0;
      puStack_98 = (undefined1 *)0x79c163;
      FUN_00679e4e();
      iStack_90 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_94 = (undefined1 *)0x79c173;
      FUN_0040263d();
      puStack_94 = (undefined1 *)0x79c17a;
      piStack_8c = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_90 = 0x79c184;
      iVar10 = FUN_00412550();
      iStack_90 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_94 = (undefined1 *)0x79c193;
      iVar3 = FUN_00402bc3();
      piVar8 = extraout_ECX_07;
      if (iVar3 < 0) {
        piStack_8c = (int *)0x79c1a0;
        FUN_00878dfb();
        piVar8 = extraout_ECX_08;
      }
      if (iVar10 != 0) {
        piStack_8c = (int *)0x79c1b4;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        piStack_8c = (int *)(unaff_EBP + -0x54);
        iStack_90 = 0x79c1c3;
        iVar10 = FUN_00402e32();
        if (iVar10 < 0) {
          piStack_8c = (int *)0x79c1cf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_8c = (int *)0x79c1d9;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        piStack_8c = (int *)(unaff_EBP + -0x44);
        iStack_90 = 0x79c1e3;
        iVar10 = FUN_00402e32();
        if (iVar10 < 0) {
          piStack_8c = (int *)0x79c1ef;
          FUN_00878dfb();
        }
        iVar10 = *(int *)this;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (iVar10 == 0) {
          piStack_8c = (int *)0x79c202;
          FUN_00878dfb();
        }
        piVar8 = *(int **)this;
        puStack_94 = *(undefined1 **)(unaff_EBP + -0x54);
        iStack_90 = *(int *)(unaff_EBP + -0x50);
        piStack_8c = *(int **)(unaff_EBP + -0x4c);
        iStack_a4 = *(undefined4 *)(unaff_EBP + -0x44);
        uStack_a0 = *(undefined4 *)(unaff_EBP + -0x40);
        iStack_9c = *(int *)(unaff_EBP + -0x3c);
        uStack_a8 = 0x20;
        puStack_98 = *(undefined1 **)(unaff_EBP + -0x38);
        iVar10 = (**(code **)(*piVar8 + 0x110))(piVar8);
        if (iVar10 < 0) {
          puStack_94 = (undefined1 *)0x79c237;
          iStack_90 = iVar10;
          piStack_8c = piVar8;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_8c = (int *)0x79c244;
        iVar10 = FUN_00402bc3();
        if (iVar10 < 0) {
          piStack_8c = (int *)0x79c24f;
          FUN_00878dfb();
        }
        piVar8 = (int *)(unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        piStack_8c = (int *)0x79c25c;
        iVar10 = FUN_00402bc3();
        if (iVar10 < 0) {
          piStack_8c = (int *)0x79c267;
          FUN_00878dfb();
          piVar8 = extraout_ECX_09;
        }
      }
      puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        puStack_94 = (undefined1 *)&piStack_8c;
        *(int ***)(unaff_EBP + 0x10) = &piStack_8c;
        iStack_90 = 0x11c0;
        puStack_98 = (undefined1 *)0x79c286;
        piStack_8c = piVar8;
        FUN_00679e4e();
        iStack_90 = unaff_EBP + -0x54;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_94 = (undefined1 *)0x79c296;
        FUN_0040263d();
        puStack_94 = (undefined1 *)0x79c29d;
        piStack_8c = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_90 = 0x79c2a7;
        uVar4 = FUN_00412550();
        *puVar1 = uVar4;
        iStack_90 = unaff_EBP + -0x54;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_94 = (undefined1 *)0x79c2b6;
        iVar10 = FUN_00402bc3();
        if (iVar10 < 0) {
          piStack_8c = (int *)0x79c2c3;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_8c = (int *)0x79c2d4;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_8c = (int *)0x79c2e5;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_004030b1();
      }
      uVar4 = 1;
      goto LAB_0079c311;
    }
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        piStack_8c = (int *)0x79c034;
        puVar5 = (undefined4 *)FUN_0079c322();
        piStack_8c = (int *)0x79c03e;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                   (IBinding *)*puVar5);
        piVar8 = *(int **)(unaff_EBP + 0x10);
        puVar7 = extraout_ECX_02;
        goto LAB_0079c0e1;
      }
      goto LAB_0079c0eb;
    }
    piStack_8c = (int *)0x79c050;
    iVar10 = (*DAT_0097b5a4)();
    if (iVar10 == 0) {
      piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
      piStack_8c = (int *)0x79c098;
      piVar6 = (int *)(**(code **)(*piVar8 + 0x10))();
      iVar10 = (*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x34)) / 2 - *piVar6;
      piStack_8c = (int *)0x79c0b2;
      puVar7 = (undefined1 *)(**(code **)(*piVar8 + 0x10))();
      puVar9 = (undefined1 *)
               ((*(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x28)) / 2 -
               *(int *)(puVar7 + 4));
      goto LAB_0079c0eb;
    }
    piStack_8c = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_8c != (int *)0x0) {
      iStack_90 = 0x79c065;
      (**(code **)(*piStack_8c + 8))();
    }
    piStack_8c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_8c != (int *)0x0) {
      iStack_90 = 0x79c076;
      (**(code **)(*piStack_8c + 8))();
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_8c = (int *)0x79c086;
      FUN_004030b1();
    }
  }
  uVar4 = 0;
LAB_0079c311:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


