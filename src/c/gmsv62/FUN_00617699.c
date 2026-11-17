/* FUN_00617699 - 0x00617699 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00617699(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *piVar8;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  int iStack_8c;
  int *piStack_88;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  puVar9 = (undefined1 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int **)(unaff_EBP + 8) == (int *)0x0) || (iVar3 = **(int **)(unaff_EBP + 8), iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + -4) >> 1;
  }
  if (uVar2 == 0) {
    FUN_00402fa6();
  }
  else {
    piStack_88 = (int *)0x6176e6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_88 = (int *)0x6176f3;
    FUN_00403191();
    piStack_88 = (int *)0x0;
    iStack_8c = unaff_EBP + -0x70;
    puStack_90 = (undefined1 *)(unaff_EBP + -0x60);
    iStack_98 = unaff_EBP + 8;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_94;
    uStack_9c = 0x61770c;
    puStack_94 = extraout_ECX_00;
    FUN_004059fd();
    iStack_98 = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_9c = 0x617719;
    FUN_00405a1d();
    uStack_9c = 0x617720;
    FUN_00402660();
    uStack_9c = 0x617727;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_8c = 0x617732;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      piStack_88 = (int *)0x617748;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_88 = (int *)0x617759;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_88 = (int *)0x617766;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_88 = (int *)0x617771;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_88 = (int *)0x61777e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_88 = (int *)0x617789;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_88 = (int *)0x617796;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_88 = (int *)0x6177a1;
      FUN_00878dfb();
    }
    piVar8 = (int *)0x0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
LAB_00617b16:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar8 != (int *)0x0) {
        piStack_88 = (int *)0x617b24;
        (**(code **)(*piVar8 + 8))();
      }
      iVar3 = *(int *)(unaff_EBP + 8);
    }
    else {
      iVar3 = FUN_0040cf4d();
      if (iVar3 == 0) {
        piVar8 = *(int **)(unaff_EBP + -0x10);
        goto LAB_00617b16;
      }
      piStack_88 = (int *)0x6177c5;
      FUN_00617b43();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar10 = 0;
      piStack_88 = (int *)0x6177d7;
      FUN_006141db();
      puStack_90 = (undefined1 *)&piStack_88;
      *(int ***)(unaff_EBP + -0x20) = &piStack_88;
      iStack_8c = 0x3d2;
      puStack_94 = (undefined1 *)0x6177ee;
      FUN_00679e4e();
      iStack_8c = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_90 = (undefined1 *)0x6177fe;
      FUN_0040263d();
      puStack_90 = (undefined1 *)0x617805;
      piStack_88 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_8c = 0x61780f;
      uVar7 = FUN_00412550();
      puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
      *puVar1 = uVar7;
      iStack_8c = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_90 = (undefined1 *)0x617821;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_88 = (int *)0x61782e;
        FUN_00878dfb();
      }
      puStack_90 = (undefined1 *)&piStack_88;
      *(int ***)(unaff_EBP + 0x10) = &piStack_88;
      iStack_8c = 0xa4e;
      puStack_94 = (undefined1 *)0x617846;
      FUN_00679e4e();
      iStack_8c = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_90 = (undefined1 *)0x617856;
      FUN_0040263d();
      puStack_90 = (undefined1 *)0x61785d;
      piStack_88 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_8c = 0x617867;
      uVar7 = FUN_00412550();
      puVar1[1] = uVar7;
      iStack_8c = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_90 = (undefined1 *)0x617877;
      iVar3 = FUN_00402bc3();
      puVar5 = extraout_ECX_01;
      if (iVar3 < 0) {
        piStack_88 = (int *)0x617884;
        FUN_00878dfb();
        puVar5 = extraout_ECX_02;
      }
      if (puVar1[1] != 1) {
LAB_006178ff:
        piStack_88 = (int *)0xff;
        iStack_8c = 3;
        puStack_94 = (undefined1 *)&puStack_90;
        *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_90;
        iStack_98 = 0x617920;
        puStack_90 = puVar5;
        FUN_0043f93c();
        iStack_a0 = unaff_EBP + -0x18;
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_9c;
        uStack_a4 = 0x617931;
        uStack_9c = extraout_ECX_03;
        iStack_98 = iVar10;
        puStack_94 = puVar9;
        FUN_00433bdf();
        iStack_a0 = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 **)(unaff_EBP + 0xc) = &uStack_a4;
        uStack_a4 = extraout_ECX_04;
        FUN_00424dbc(unaff_EBP + -0x10);
        puVar6 = (undefined4 *)FUN_0042e5bf(unaff_EBP + 0x10);
        this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar1 + 2);
        piStack_88 = (int *)0x61795b;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar6);
        if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
          piStack_88 = (int *)0x617968;
          (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
        }
        puStack_90 = (undefined1 *)&piStack_88;
        *(int ***)(unaff_EBP + 0x10) = &piStack_88;
        iStack_8c = 0x9a0;
        puStack_94 = (undefined1 *)0x617980;
        FUN_00679e4e();
        iStack_8c = unaff_EBP + -0x50;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_90 = (undefined1 *)0x617990;
        FUN_0040263d();
        puStack_90 = (undefined1 *)0x617997;
        piStack_88 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_8c = 0x6179a1;
        iVar3 = FUN_00412550();
        iStack_8c = unaff_EBP + -0x50;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_90 = (undefined1 *)0x6179b0;
        iVar10 = FUN_00402bc3();
        piVar8 = extraout_ECX_05;
        if (iVar10 < 0) {
          piStack_88 = (int *)0x6179bd;
          FUN_00878dfb();
          piVar8 = extraout_ECX_06;
        }
        if (iVar3 != 0) {
          piStack_88 = (int *)0x6179d1;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
          piStack_88 = (int *)(unaff_EBP + -0x50);
          iStack_8c = 0x6179e0;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_88 = (int *)0x6179ec;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_88 = (int *)0x6179f6;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          piStack_88 = (int *)(unaff_EBP + -0x40);
          iStack_8c = 0x617a00;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_88 = (int *)0x617a0c;
            FUN_00878dfb();
          }
          iVar3 = *(int *)this;
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (iVar3 == 0) {
            piStack_88 = (int *)0x617a1f;
            FUN_00878dfb();
          }
          piVar8 = *(int **)this;
          puStack_90 = *(undefined1 **)(unaff_EBP + -0x50);
          iStack_8c = *(int *)(unaff_EBP + -0x4c);
          piStack_88 = *(int **)(unaff_EBP + -0x48);
          iStack_a0 = *(undefined4 *)(unaff_EBP + -0x40);
          uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
          iStack_98 = *(int *)(unaff_EBP + -0x38);
          uStack_a4 = 0x20;
          puStack_94 = *(undefined1 **)(unaff_EBP + -0x34);
          iVar3 = (**(code **)(*piVar8 + 0x110))(piVar8);
          if (iVar3 < 0) {
            puStack_90 = (undefined1 *)0x617a54;
            iStack_8c = iVar3;
            piStack_88 = piVar8;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          piStack_88 = (int *)0x617a61;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_88 = (int *)0x617a6c;
            FUN_00878dfb();
          }
          piVar8 = (int *)(unaff_EBP + -0x50);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_88 = (int *)0x617a79;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_88 = (int *)0x617a84;
            FUN_00878dfb();
            piVar8 = extraout_ECX_07;
          }
        }
        puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
        if (puVar1 != (undefined4 *)0x0) {
          puStack_90 = (undefined1 *)&piStack_88;
          *(int ***)(unaff_EBP + 0x10) = &piStack_88;
          iStack_8c = 0x11c0;
          puStack_94 = (undefined1 *)0x617aa3;
          piStack_88 = piVar8;
          FUN_00679e4e();
          iStack_8c = unaff_EBP + -0x50;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_90 = (undefined1 *)0x617ab3;
          FUN_0040263d();
          puStack_90 = (undefined1 *)0x617aba;
          piStack_88 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_8c = 0x617ac4;
          uVar7 = FUN_00412550();
          *puVar1 = uVar7;
          iStack_8c = unaff_EBP + -0x50;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_90 = (undefined1 *)0x617ad3;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_88 = (int *)0x617ae0;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_88 = (int *)0x617af1;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          piStack_88 = (int *)0x617b02;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_004030b1();
        }
        uVar7 = 1;
        goto LAB_00617b32;
      }
      piStack_88 = (int *)0x617894;
      iVar3 = (*DAT_0097b5a4)();
      if (iVar3 == 0) {
        piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
        piVar4 = (int *)(**(code **)(*piVar8 + 0x10))();
        iVar10 = (*(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x28)) / 2 - *piVar4;
        puVar5 = (undefined1 *)(**(code **)(*piVar8 + 0x10))();
        puVar9 = (undefined1 *)
                 ((*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x2c)) / 2 -
                 *(int *)(puVar5 + 4));
        goto LAB_006178ff;
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        piStack_88 = (int *)0x6178a9;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_88 = (int *)0x6178ba;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      iVar3 = *(int *)(unaff_EBP + 8);
    }
    if (iVar3 != 0) {
      FUN_004030b1();
    }
  }
  uVar7 = 0;
LAB_00617b32:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


