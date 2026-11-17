/* FUN_006345e0 - 0x006345e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006345e0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  int *piVar7;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int *piStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  iVar4 = *(int *)(iVar2 + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    piStack_6c = (int *)0x634607;
    uVar1 = FUN_00638bd2();
    *(undefined4 *)(iVar2 + 8) = uVar1;
    iVar2 = *(int *)(unaff_EBP + 0xc);
  }
  if ((*(int *)(iVar2 + 0x30) == 1) || (*(int *)(iVar2 + 0x30) == 4)) {
    piStack_6c = (int *)(unaff_EBP + -0x2c);
    puStack_70 = (undefined *)0x634a46;
    FUN_00638dca();
    iVar4 = *(int *)(unaff_EBP + 0xc);
    iVar2 = *(int *)(iVar4 + 0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == -2) {
      iVar2 = -1;
      *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
      uVar6 = 0;
      while( true ) {
        if ((**(int **)(unaff_EBP + -0x28) == 0) ||
           (*(uint *)(**(int **)(unaff_EBP + -0x28) + -4) <= uVar6)) goto LAB_00634a93;
        piStack_6c = *(int **)(iVar4 + 0x34);
        puStack_70 = (undefined *)0x634a73;
        iVar4 = FUN_00635748();
        if ((iVar4 != -1) && ((iVar4 < iVar2 || (iVar2 == -1)))) {
          *(uint *)(unaff_EBP + -0x18) = uVar6;
          iVar2 = iVar4;
        }
        if (iVar4 == 0) break;
        iVar4 = *(int *)(unaff_EBP + 0xc);
        uVar6 = uVar6 + 1;
      }
      iVar4 = *(int *)(unaff_EBP + 0xc);
LAB_00634a93:
      if (iVar2 == -1) {
        *(undefined4 *)(iVar4 + 0x30) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0063587b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_00634647;
      }
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
      iVar4 = *(int *)(unaff_EBP + 0xc);
    }
    puStack_70 = (undefined *)(unaff_EBP + -0x14);
    piStack_6c = *(int **)(iVar4 + 0xc);
    piStack_74 = (int *)0x634acc;
    FUN_0063920e();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_6c = (int *)0xff;
      puStack_70 = (undefined *)0x0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_74;
      iStack_78 = 0;
      uStack_7c = 0x634aee;
      FUN_00424e0a();
      iStack_78 = 0;
      uStack_7c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_80 = 0x634afc;
      iStack_84 = FUN_006357cc();
      iStack_84 = iStack_84 + 0x3c;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_80;
      uStack_88 = 0x634b0b;
      FUN_00433bdf();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_84 = 0x634b17;
      iVar2 = FUN_006357cc();
      iStack_84 = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_88;
      FUN_00424dbc(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x1c);
      piStack_6c = (int *)0x634b46;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + 0xc) + 0x38),(IBinding *)*puVar3);
      FUN_00412600();
      piStack_6c = (int *)0x634b5c;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_6c = (int *)0x634b69;
      FUN_00403191();
      iVar2 = *(int *)(unaff_EBP + 0xc);
      iVar4 = *(int *)(iVar2 + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar4 == 0) {
        piStack_6c = (int *)0x634b82;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(iVar2 + 0x38);
      piStack_74 = *(int **)(unaff_EBP + -0x44);
      puStack_70 = *(undefined **)(unaff_EBP + -0x40);
      piStack_6c = *(int **)(unaff_EBP + -0x3c);
      iStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x4c);
      uStack_88 = 0;
      iStack_78 = *(undefined4 *)(unaff_EBP + -0x48);
      iVar2 = (**(code **)(*piVar7 + 0x110))(piVar7);
      if (iVar2 < 0) {
        piStack_74 = (int *)0x634bb7;
        puStack_70 = (undefined *)iVar2;
        piStack_6c = piVar7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_6c = (int *)0x634bc4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634bcf;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_6c = (int *)0x634bdc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634be7;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar2 = *(int *)(unaff_EBP + 0xc);
      piStack_6c = (int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_70 = (undefined *)0x634c07;
      puVar3 = (undefined4 *)FUN_00679d86();
      piStack_6c = *(int **)(*(int *)(iVar2 + 8) + 0xc);
      puStack_70 = (undefined *)*puVar3;
      piStack_74 = (int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_78 = 0x634c20;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piStack_6c = (int *)0x634c37;
        FUN_00403384();
      }
      iVar2 = *(int *)(unaff_EBP + -0x10);
      piStack_6c = *(int **)(*(int *)(unaff_EBP + 0xc) + 0x14);
      puStack_70 = (undefined *)0x634c49;
      puStack_70 = (undefined *)FUN_007d3c48();
      piStack_74 = (int *)0x27;
      uStack_7c = 0x634c52;
      iStack_78 = iVar2;
      FUN_007d4199();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_6c = (int *)0x634c69;
        FUN_00403384();
      }
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0063587b();
  }
  else {
    piStack_6c = (int *)0x634632;
    FUN_00638e03();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_004027eb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00634647:
      FUN_00635865();
      goto LAB_00634d22;
    }
    FUN_0087a1b0();
    piStack_6c = (int *)0x634667;
    iVar2 = FUN_006357cc();
    piStack_6c = *(int **)(iVar2 + 0x10);
    puStack_70 = (undefined *)0x63466f;
    piStack_6c = (int *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff98;
    puStack_70 = (undefined *)0x63467d;
    FUN_00402e8e();
    piStack_6c = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_70 = (undefined *)0x63468d;
    FUN_0040263d();
    puStack_70 = (undefined *)0x634694;
    FUN_004048a4();
    piStack_6c = (int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_70 = (undefined *)0x6346a2;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_6c = (int *)0x6346b1;
    FUN_00417232();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_6c = (int *)0x6346c2;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    piStack_74 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_6c = (int *)0x6346cf;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_6c = (int *)0x6346da;
      FUN_00878dfb();
      piStack_74 = extraout_ECX;
    }
    piStack_6c = (int *)0xff;
    puStack_70 = (undefined *)0x0;
    *(int ***)(unaff_EBP + -0x20) = &piStack_74;
    iStack_78 = 0;
    uStack_7c = 0x6346ed;
    FUN_00424e0a();
    iStack_78 = 0;
    uStack_7c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_80 = 0x6346fb;
    iStack_84 = FUN_006357cc();
    iStack_84 = iStack_84 + 0x3c;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_80;
    uStack_88 = 0x63470a;
    FUN_00433bdf();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_84 = 0x634716;
    iVar2 = FUN_006357cc();
    iStack_84 = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_88;
    FUN_00424dbc(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x1c);
    piStack_6c = (int *)0x634745;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + 0xc) + 0x38)
               ,(IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_6c = (int *)0x634752;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    piStack_6c = (int *)(unaff_EBP + -0x2c);
    puStack_70 = (undefined *)0x634764;
    iVar2 = FUN_00638dca();
    iVar2 = *(int *)(*(int *)(iVar2 + 4) + 4);
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      piStack_6c = (int *)0x634778;
      FUN_006358c0();
    }
    if (iVar2 == 0) {
      piStack_6c = (int *)0x63484a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      piStack_6c = (int *)(unaff_EBP + -0x34);
      puStack_70 = (undefined *)0x634859;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634865;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_6c = (int *)0x63486f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      piStack_6c = (int *)(unaff_EBP + -0x44);
      puStack_70 = (undefined *)0x634879;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634885;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + 0xc);
      iVar4 = *(int *)(iVar2 + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (iVar4 == 0) {
        piStack_6c = (int *)0x63489e;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(iVar2 + 0x38);
      piStack_74 = *(int **)(unaff_EBP + -0x34);
      puStack_70 = *(undefined **)(unaff_EBP + -0x30);
      iVar2 = *piVar7;
      piStack_6c = *(int **)(unaff_EBP + -0x2c);
      iStack_84 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x40);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x3c);
      uStack_88 = 0;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iStack_78 = *(int *)(unaff_EBP + -0x38);
      iVar2 = (**(code **)(iVar2 + 0x110))(piVar7);
      if (iVar2 < 0) {
        piStack_6c = *(int **)(unaff_EBP + -0x1c);
        piStack_74 = (int *)0x6348d8;
        puStack_70 = (undefined *)iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_6c = (int *)0x6348e5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x6348f0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
    }
    else {
      piStack_6c = (int *)0x63478c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      piStack_6c = (int *)(unaff_EBP + -0x44);
      puStack_70 = (undefined *)0x63479b;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x6347a7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_6c = (int *)0x6347b1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      piStack_6c = (int *)(unaff_EBP + -0x34);
      puStack_70 = (undefined *)0x6347bb;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x6347c7;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + 0xc);
      iVar4 = *(int *)(iVar2 + 0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (iVar4 == 0) {
        piStack_6c = (int *)0x6347e0;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(iVar2 + 0x38);
      piStack_74 = *(int **)(unaff_EBP + -0x44);
      puStack_70 = *(undefined **)(unaff_EBP + -0x40);
      iVar2 = *piVar7;
      piStack_6c = *(int **)(unaff_EBP + -0x3c);
      iStack_84 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x30);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x2c);
      uStack_88 = 0x20;
      *(int **)(unaff_EBP + -0x1c) = piVar7;
      iStack_78 = *(int *)(unaff_EBP + -0x28);
      iVar2 = (**(code **)(iVar2 + 0x110))(piVar7);
      if (iVar2 < 0) {
        piStack_6c = *(int **)(unaff_EBP + -0x1c);
        piStack_74 = (int *)0x63481a;
        puStack_70 = (undefined *)iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_6c = (int *)0x634827;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634832;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
    }
    piStack_6c = (int *)0x6348fd;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_6c = (int *)0x634908;
      FUN_00878dfb();
    }
    if ((*(int *)(*(int *)(unaff_EBP + 0xc) + 0x30) == 2) &&
       (*(int *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 8) + 0x14) != 0)) {
      piStack_6c = (int *)0x63492c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      piStack_6c = (int *)(unaff_EBP + -0x44);
      puStack_70 = (undefined *)0x634936;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634942;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (iVar2 == 0) {
        piStack_6c = (int *)0x63495c;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + 0xc);
      iVar4 = FUN_007d1e08();
      iVar2 = *(int *)(iVar2 + 0x2c);
      iVar5 = FUN_0042a378();
      piStack_6c = (int *)((iVar2 - iVar4) + iVar5);
      puStack_70 = (undefined *)0x63497f;
      FUN_004031b7();
      iVar2 = *(int *)(unaff_EBP + 0xc);
      iVar4 = *(int *)(iVar2 + 0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      if (iVar4 == 0) {
        piStack_6c = (int *)0x63499e;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(iVar2 + 0x3c);
      uStack_88 = *(undefined4 *)(iVar2 + 0x18);
      piStack_74 = *(int **)(unaff_EBP + -0x44);
      puStack_70 = *(undefined **)(unaff_EBP + -0x40);
      piStack_6c = *(int **)(unaff_EBP + -0x3c);
      iStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_78 = *(int *)(unaff_EBP + -0x48);
      iVar2 = (**(code **)(*piVar7 + 0x90))
                        (piVar7,*(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14));
      if (iVar2 < 0) {
        piStack_74 = (int *)0x6349dc;
        puStack_70 = (undefined *)iVar2;
        piStack_6c = piVar7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_6c = (int *)0x6349e9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x6349f4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_6c = (int *)0x634a01;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_6c = (int *)0x634a0c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_6c = (int *)0x634a1d;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_6c = (int *)0x634a32;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  piStack_6c = *(int **)(*(int *)(unaff_EBP + 0xc) + 0x14);
  puStack_70 = (undefined *)0x634c92;
  FUN_00861416();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if (*(int *)(*(int *)(iVar2 + 8) + 0x18) == 0) {
    if (*(int *)(iVar2 + 0x38) == 0) {
      piStack_6c = (int *)0x634cb7;
      FUN_00878dfb();
    }
    piVar7 = *(int **)(iVar2 + 0x38);
    iVar2 = *piVar7;
  }
  else {
    if (*(int *)(iVar2 + 0x38) == 0) {
      piStack_6c = (int *)0x634ce6;
      FUN_00878dfb();
    }
    piVar7 = *(int **)(iVar2 + 0x38);
    iVar2 = *piVar7;
  }
  puStack_70 = (undefined *)0x634cfe;
  piStack_6c = piVar7;
  iVar2 = (**(code **)(iVar2 + 0xb4))();
  if (iVar2 < 0) {
    puStack_70 = &DAT_00963df8;
    uStack_7c = 0x634d0e;
    iStack_78 = iVar2;
    piStack_74 = piVar7;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    puStack_70 = (undefined *)0x0;
    piStack_74 = (int *)0x634d22;
    FUN_00635891();
  }
LAB_00634d22:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


