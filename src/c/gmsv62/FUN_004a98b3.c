/* FUN_004a98b3 - 0x004a98b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a98b3(void)

{
  IBinding *pIVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EBP;
  undefined4 uVar9;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar6 == 0) {
    iStack_128 = 0x4a98e0;
    FUN_00878dfb();
  }
  iVar2 = FUN_00424ee1();
  iVar6 = *(int *)(extraout_ECX + 0x38);
  iVar8 = *(int *)(extraout_ECX + 0x60);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x30) = iVar2 + (iVar6 - iVar8);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar6 = *(int *)(extraout_ECX + 0x44);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + -4);
  }
  iVar8 = *(int *)(extraout_ECX + 0x48);
  iVar2 = *(int *)(extraout_ECX + 0x90) + iVar8;
  *(int *)(unaff_EBP + -0x38) = iVar6;
  if (iVar2 <= iVar6) {
    *(int *)(unaff_EBP + -0x38) = iVar2;
  }
  *(int *)(unaff_EBP + -0x2c) = iVar8;
  if (*(int *)(unaff_EBP + -0x38) <= iVar8) {
LAB_004aa165:
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_128 = 0x4aa182;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_128 = 0x4aa193;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar6 = *(int *)(extraout_ECX + 0x44);
    iVar2 = *(int *)(iVar6 + iVar8 * 4);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + -4);
    }
    iStack_128 = iVar2;
    if (iVar8 == iVar7 + -1) {
      if (*(int *)(extraout_ECX + 0x34) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
      }
      iStack_12c = unaff_EBP + -0x44;
      iStack_130 = 0x4a9965;
      FUN_0045ece0();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_128 = 0x4a9972;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    else {
      iVar6 = *(int *)(iVar6 + 4 + iVar8 * 4);
      iStack_12c = unaff_EBP + -0x58;
      iStack_130 = 0x4a998d;
      FUN_0045ece0();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_128 = 0x4a999a;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    FUN_00414ebb();
    iVar8 = *(int *)(unaff_EBP + 0x14);
    if ((iVar8 == -1) || (iVar7 = *(int *)(unaff_EBP + 0x18), iVar7 == -1)) {
LAB_004a9a05:
      iVar8 = -1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
    }
    else {
      if (iVar8 < iVar2) {
        if (iVar7 < iVar2) {
          if (iVar7 < iVar6) goto LAB_004a9a05;
        }
        else if (iVar7 < iVar6) {
          iVar8 = 0;
          goto LAB_004a99c4;
        }
        iVar8 = 0;
      }
      else {
        if (((iVar8 < iVar6) && (iVar2 <= iVar7)) && (iVar7 < iVar6)) {
          iVar8 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + -0x10);
LAB_004a99c4:
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 0x18) - *(int *)(unaff_EBP + -0x10);
          goto LAB_004a9a0b;
        }
        if (((iVar8 < iVar2) || (iVar6 <= iVar8)) || (iVar7 < iVar6)) goto LAB_004a9a05;
        iVar8 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + -0x10);
      }
      *(int *)(unaff_EBP + -0x10) = iVar6 - *(int *)(unaff_EBP + -0x10);
    }
LAB_004a9a0b:
    iVar6 = FUN_004b3d90();
    if (((iVar6 == 0) || (iVar8 == -1)) || (*(int *)(unaff_EBP + -0x10) == -1)) {
      iVar6 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x20))();
      puVar4 = (undefined4 *)(extraout_ECX + 0x68);
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)(extraout_ECX + 0x6c);
      }
      iStack_140 = 0x4a9e67;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 (IBinding *)*puVar4);
      iStack_140 = 0x4a9e78;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_140 = 0x4a9e88;
      FUN_00403191();
      iStack_140 = unaff_EBP + -0x100;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_144 = 0x4a9ea2;
      iStack_144 = FUN_00449749();
      uStack_148 = 0x4a9eab;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_148;
      uStack_148 = extraout_ECX_01;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar9 = *(undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004115d9(uVar9,uVar3);
      FUN_00448e3a(uVar9,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_140 = 0x4a9ee0;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9eeb;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    else {
      iStack_128 = 0x4a9a38;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 *(IBinding **)(extraout_ECX + 0x68));
      iStack_128 = 0x4a9a49;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_128 = 0x4a9a59;
      FUN_00403191();
      iStack_128 = unaff_EBP + -0xf0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_12c = 0x4a9a73;
      iStack_12c = FUN_00449749();
      iStack_130 = iVar8;
      FUN_0045e053();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_130 = 0x4a9a8e;
      FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_130;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_128 = 0x4a9acf;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9ada;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_128 = 0x4a9aea;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9af5;
        FUN_00878dfb();
      }
      iStack_128 = 0x4a9b02;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      iStack_128 = unaff_EBP + -0x90;
      iStack_12c = 0x4a9b0f;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9b1b;
        FUN_00878dfb();
      }
      iStack_12c = 0;
      iStack_130 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_128 = iVar8;
      FUN_0045e053();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_128 = 0x4a9b40;
      iStack_12c = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_128;
      iStack_130 = 0x4a9b4c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_12c = 0x4a9b58;
      FUN_0044974c();
      iStack_12c = 0x4a9b5f;
      uVar3 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_128 = 0x4a9b7e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9b89;
        FUN_00878dfb();
      }
      pIVar1 = *(IBinding **)(extraout_ECX + 0x70);
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x30);
      iStack_128 = 0x4a9b9f;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),pIVar1);
      iStack_128 = 0x4a9ba9;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
      iStack_128 = unaff_EBP + -0x70;
      iStack_12c = 0x4a9bb3;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9bbf;
        FUN_00878dfb();
      }
      iStack_128 = *(int *)(unaff_EBP + -0x10);
      iStack_130 = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_12c = iVar8;
      FUN_0045e053();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_128 = 0x4a9be2;
      iStack_12c = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_128;
      iStack_130 = 0x4a9bee;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_12c = 0x4a9bfa;
      FUN_0044974c();
      iStack_12c = 0x4a9c01;
      uVar3 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_128 = 0x4a9c1d;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9c28;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + 8);
      if (piVar5 == (int *)0x0) {
        iStack_128 = 0x4a9c39;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      iStack_128 = *(int *)(extraout_ECX + 0x7c);
      iVar6 = *piVar5;
      iStack_12c = *(int *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + -0x24) = piVar5;
      iStack_130 = *(int *)(unaff_EBP + 0xc);
      iVar6 = (**(code **)(iVar6 + 0x8c))();
      if (iVar6 < 0) {
        iStack_140 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_148 = 0x4a9c6c;
        iStack_144 = iVar6;
        FUN_00878e09();
      }
      iStack_140 = 0x4a9c79;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
      iStack_140 = unaff_EBP + -0xb0;
      iStack_144 = 0x4a9c86;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9c92;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_140 = 0x4a9ca3;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
      iStack_140 = unaff_EBP + -0xc0;
      iStack_144 = 0x4a9cb0;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9cbc;
        FUN_00878dfb();
      }
      iStack_140 = unaff_EBP + -0xc0;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_144 = 0x4a9cd6;
      iStack_144 = FUN_00449749();
      uStack_148 = *(undefined4 *)(unaff_EBP + -0x10);
      FUN_0045e053(unaff_EBP + -0x5c,iVar8);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uStack_148 = 0x4a9cf2;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_148;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_004115d9(uVar9,uVar3);
      FUN_00448e3a(uVar9,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_140 = 0x4a9d33;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9d3e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_140 = 0x4a9d4e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9d59;
        FUN_00878dfb();
      }
      pIVar1 = *(IBinding **)(extraout_ECX + 0x68);
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x28);
      iStack_140 = 0x4a9d6a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),pIVar1);
      iStack_140 = 0x4a9d79;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xd0));
      iStack_140 = unaff_EBP + -0xd0;
      iStack_144 = 0x4a9d86;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9d92;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_140 = 0x4a9d9f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
      iStack_140 = unaff_EBP + -0xe0;
      iStack_144 = 0x4a9dac;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9db8;
        FUN_00878dfb();
      }
      iStack_140 = unaff_EBP + -0xe0;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_144 = 0x4a9dd2;
      iStack_144 = FUN_00449749();
      uStack_148 = 0xffffffff;
      FUN_0045e053(unaff_EBP + -0x40,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_148 = 0x4a9def;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_148;
      uStack_148 = extraout_ECX_00;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar9 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_004115d9(uVar9,uVar3);
      FUN_00448e3a(uVar9,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_140 = 0x4a9e30;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_140 = 0x4a9e3b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    iStack_140 = 0x4a9efb;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_140 = 0x4a9f06;
      FUN_00878dfb();
    }
    iVar6 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x20))();
    if (((iVar6 != 0) && (*(int *)(extraout_ECX + 0x50) != 0)) &&
       (*(int *)(*(int *)(extraout_ECX + 0x50) + -4) != 0)) {
      if (*(int *)(extraout_ECX + 0x18) == 0) {
        iStack_128 = 0x4a9f3f;
        FUN_00878dfb();
      }
      iVar8 = FUN_00424ee1();
      iVar6 = *(int *)(extraout_ECX + 0x18);
      *(int *)(unaff_EBP + -0x20) =
           iVar8 + (*(int *)(extraout_ECX + 0x38) - *(int *)(extraout_ECX + 0x60));
      if (iVar6 == 0) {
        iStack_128 = 0x4a9f62;
        FUN_00878dfb();
      }
      FUN_00424f08();
      iStack_128 = 0x4a9f74;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      iStack_128 = unaff_EBP + -0x80;
      iStack_12c = 0x4a9f7e;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9f8a;
        FUN_00878dfb();
      }
      iStack_128 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_12c = 0x4a9f9b;
      piVar5 = (int *)FUN_004a313b();
      iStack_128 = *piVar5 + *(int *)(extraout_ECX + 0x40);
      iStack_12c = unaff_EBP + -0x48;
      iStack_130 = 0x4a9fad;
      FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_128 = 0x4a9fb8;
      iStack_12c = FUN_00449713();
      *(int **)(unaff_EBP + -0x34) = &iStack_128;
      iStack_130 = 0x4a9fc4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_12c = 0x4a9fd0;
      FUN_0044974c();
      iStack_12c = 0x4a9fd7;
      uVar3 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_128 = 0x4a9ff3;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_128 = 0x4a9ffe;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      while ((*(int *)(extraout_ECX + 0x50) != 0 &&
             (*(uint *)(unaff_EBP + -0x14) < *(uint *)(*(int *)(extraout_ECX + 0x50) + -4)))) {
        iStack_128 = 0x4aa02c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
        iStack_128 = unaff_EBP + -0xa0;
        iStack_12c = 0x4aa039;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          iStack_128 = 0x4aa045;
          FUN_00878dfb();
        }
        iStack_128 = *(int *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_12c = 0x4aa05a;
        piVar5 = (int *)FUN_004a3308();
        iStack_128 = *piVar5 + *(int *)(extraout_ECX + 0x40);
        iStack_12c = unaff_EBP + -0x50;
        iStack_130 = 0x4aa06c;
        FUN_0045e070();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iStack_128 = 0x4aa077;
        iStack_12c = FUN_00449713();
        *(int **)(unaff_EBP + -0x34) = &iStack_128;
        iStack_130 = 0x4aa083;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iStack_12c = 0x4aa091;
        FUN_0044974c();
        iStack_12c = 0x4aa098;
        uVar3 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_128 = 0x4aa0b7;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          iStack_128 = 0x4aa0c2;
          FUN_00878dfb();
        }
        iVar6 = *(int *)(extraout_ECX + 0x68);
        *(uint *)(unaff_EBP + -0x28) =
             (*(int *)(extraout_ECX + 0x54) + 1 == *(int *)(unaff_EBP + -0x14)) + 1;
        if (iVar6 == 0) {
          iStack_128 = 0x4aa0e1;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x34) = *(int *)(extraout_ECX + 0x68);
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_128 = 0x4aa0f6;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + -0x10) = piVar5;
        FUN_004a270d();
        iStack_130 = (*(int *)(extraout_ECX + 0x7c) - *(int *)(unaff_EBP + -0x28)) +
                     *(int *)(unaff_EBP + 0xc);
        iStack_128 = *(int *)(unaff_EBP + -0x28);
        iStack_12c = (*(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x24)) + -2;
        iVar6 = (**(code **)(*piVar5 + 0x8c))();
        if (iVar6 < 0) {
          iStack_128 = *(int *)(unaff_EBP + -0x10);
          iStack_130 = 0x4aa142;
          iStack_12c = iVar6;
          FUN_00878e09();
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x3c);
      }
    }
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + *(int *)(extraout_ECX + 0x7c);
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    if (*(int *)(unaff_EBP + -0x38) <= *(int *)(unaff_EBP + -0x2c)) goto LAB_004aa165;
    iVar8 = *(int *)(unaff_EBP + -0x2c);
  } while( true );
}


