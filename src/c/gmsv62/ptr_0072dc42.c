/* ptr_0072dc42 - 0x0072dc42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0072dc42(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBP;
  int unaff_ESI;
  code *pcVar7;
  int unaff_EDI;
  undefined4 uVar8;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_20;
  int *piStack_1c;
  undefined4 *puStack_18;
  IBinding *pIVar9;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)(unaff_ESI + 0x20b4);
  iVar2 = FUN_00413367();
  if ((iVar2 / 100 == 4) && (*(int *)(unaff_EBP + -0x30) == 0x21)) {
    puStack_8 = (undefined4 *)(unaff_ESI + 0x20cc);
    iVar2 = FUN_00413367();
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    puStack_18 = (undefined4 *)(unaff_ESI + 0x20e4);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_18;
    piStack_1c = (int *)0x72dcad;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x3c) + iVar2;
    piStack_1c = (int *)0x72dcdd;
    iVar2 = __ftol();
    piStack_1c = *(int **)(unaff_ESI + 0x20d4);
    puStack_20 = (undefined4 *)(unaff_ESI + 0x20cc);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    iStack_28 = unaff_ESI + 0x20c0;
    iStack_2c = 0x72dd06;
    uVar3 = FUN_00413367();
    iStack_2c = *(undefined4 *)(unaff_ESI + 0x20ec);
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    iStack_30 = *(int *)(unaff_EBP + -0x18);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x3c);
  }
  else {
    puStack_8 = (undefined4 *)(unaff_ESI + 0x20cc);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    *(int *)(unaff_EBP + -0x18) = unaff_ESI + 0x20c0;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar2 = __ftol();
    puStack_18 = (undefined4 *)(unaff_ESI + 0x20cc);
    piStack_1c = (int *)0x72dd97;
    uVar3 = FUN_00413367();
    piStack_1c = *(int **)(unaff_ESI + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    puStack_20 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
  }
  __ftol();
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(unaff_EBP + 8) = iVar2;
  if (0x1869e < iVar2) {
    *(undefined4 *)(unaff_EBP + 8) = 99999;
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_8 = (undefined4 *)&DAT_00968204;
    FUN_00414edd();
  }
  else {
    puStack_8 = (undefined4 *)(unaff_EBP + -0x3c);
    FUN_00679d22();
    puStack_8 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
  }
  puStack_8 = (undefined4 *)0x72e159;
  iVar2 = FUN_00662964();
  if (iVar2 < 1) {
    puStack_8 = (undefined4 *)0x72e16c;
    iVar2 = FUN_00662964();
    if (iVar2 < 0) {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar9 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_8 = (undefined4 *)0x72e180;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar9);
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puStack_8 = (undefined4 *)0x72e191;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + -0x28));
  }
  puStack_8 = (undefined4 *)0x72e19f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_8 = (undefined4 *)0x72e1ac;
  FUN_00403191();
  puStack_8 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff0;
  puStack_18 = (undefined4 *)0x72e1d5;
  FUN_00448a17();
  puStack_18 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_1c = (int *)0x72e1e5;
  FUN_004115d9();
  piStack_1c = (int *)0x72e1ec;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_8 = (undefined4 *)0x72e1f9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e204;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_8 = (undefined4 *)0x72e211;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e21c;
    FUN_00878dfb();
  }
  puStack_8 = (undefined4 *)(unaff_EDI + 0x3c);
  iVar2 = FUN_00413367();
  if (iVar2 == 0) {
    FUN_0087a1b0();
    *(BADSPACEBASE **)(unaff_EBP + 8) = register0x00000010;
    puStack_8 = (undefined4 *)(unaff_EDI + 0x30);
    FUN_00413367();
    puStack_18 = (undefined4 *)0x72e250;
    puStack_8 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
  }
  else {
    puStack_8 = (undefined4 *)(unaff_EDI + 0x3c);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    piStack_1c = (int *)0x72e287;
    puStack_18 = (undefined4 *)(unaff_EDI + 0x30);
    FUN_00413367();
    piStack_1c = *(int **)(unaff_EDI + 0x44);
    puStack_20 = (undefined4 *)(unaff_EDI + 0x3c);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    puStack_8 = (undefined4 *)(unaff_EBP + -0x30);
    FUN_00679d22();
    puStack_8 = *(undefined4 **)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_18 = (undefined4 *)0x72e2c7;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
  }
  puStack_8 = (undefined4 *)(unaff_EDI + 0x3c);
  iVar2 = FUN_00413367();
  if (iVar2 < 1) {
    puStack_8 = (undefined4 *)(unaff_EDI + 0x3c);
    iVar2 = FUN_00413367();
    if (iVar2 < 0) {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar9 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_8 = (undefined4 *)0x72e314;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar9);
  puStack_8 = (undefined4 *)0x72e31d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_8 = (undefined4 *)0x72e32a;
  FUN_00403191();
  puStack_8 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff0;
  puStack_18 = (undefined4 *)0x72e353;
  FUN_00448a17();
  puStack_18 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_1c = (int *)0x72e363;
  FUN_004115d9();
  piStack_1c = (int *)0x72e36a;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_8 = (undefined4 *)0x72e377;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e382;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_8 = (undefined4 *)0x72e38f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e39a;
    FUN_00878dfb();
  }
  puStack_8 = (undefined4 *)(unaff_EDI + 0x6c);
  iVar2 = FUN_00413367();
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puStack_8 = (undefined4 *)(unaff_EDI + 0x6c);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    piStack_1c = (int *)0x72e3d7;
    puStack_18 = (undefined4 *)(unaff_EDI + 0x6c);
    iVar2 = FUN_00413367();
    iVar2 = iVar2 + *(int *)(unaff_EBP + 8);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    iVar2 = (iVar2 * *(int *)(unaff_EBP + -0x34)) / 100 + *(int *)(unaff_EBP + -0x3c);
  }
  if (iVar2 == 0) {
    FUN_0087a1b0();
    puStack_8 = (undefined4 *)(unaff_EDI + 0x60);
    FUN_00413367();
    puStack_18 = (undefined4 *)0x72e41b;
    puStack_8 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
LAB_0072e429:
    pIVar9 = *(IBinding **)(unaff_EBP + -0x20);
  }
  else {
    puStack_8 = (undefined4 *)(unaff_EDI + 0x60);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    puStack_8 = (undefined4 *)(unaff_EBP + -0x38);
    FUN_00679d22();
    puStack_8 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_18 = (undefined4 *)0x72e5a1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    if (iVar2 < 1) {
      if (-1 < iVar2) goto LAB_0072e429;
      pIVar9 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x28);
    }
  }
  puStack_8 = (undefined4 *)0x72e434;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar9);
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puStack_8 = (undefined4 *)0x72e445;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + -0x28));
  }
  pcVar7 = VariantInit_exref;
  puStack_8 = (undefined4 *)0x72e451;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  puStack_8 = (undefined4 *)(unaff_EBP + -0x50);
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e46b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_8 = (undefined4 *)0x72e475;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  puStack_8 = (undefined4 *)(unaff_EBP + -0x60);
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e48f;
    FUN_00878dfb();
  }
  puStack_8 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff0;
  puStack_18 = (undefined4 *)0x72e4b8;
  FUN_00448a17();
  puStack_18 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_1c = (int *)0x72e4c8;
  FUN_004115d9();
  piStack_1c = (int *)0x72e4cf;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_8 = (undefined4 *)0x72e4dc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e4e7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_8 = (undefined4 *)0x72e4f4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_8 = (undefined4 *)0x72e4ff;
    FUN_00878dfb();
  }
  puStack_8 = (undefined4 *)(unaff_EDI + 0x9c);
  iVar2 = FUN_00413367();
  if (iVar2 == 0) {
    FUN_0087a1b0();
    *(BADSPACEBASE **)(unaff_EBP + 8) = register0x00000010;
    puStack_8 = (undefined4 *)(unaff_EDI + 0x90);
    FUN_00413367();
    puStack_18 = (undefined4 *)0x72e543;
    puStack_8 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
  }
  else {
    puStack_8 = (undefined4 *)(unaff_EDI + 0x9c);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    puStack_18 = (undefined4 *)(unaff_EDI + 0x90);
    piStack_1c = (int *)0x72e608;
    FUN_00413367();
    piStack_1c = *(int **)(unaff_EDI + 0xa4);
    puStack_20 = (undefined4 *)(unaff_EDI + 0x9c);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    puStack_8 = (undefined4 *)(unaff_EBP + -0x34);
    FUN_00679d22();
    puStack_8 = *(undefined4 **)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_18 = (undefined4 *)0x72e64e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    pcVar7 = VariantInit_exref;
  }
  puStack_8 = (undefined4 *)(unaff_EDI + 0x9c);
  iVar2 = FUN_00413367();
  if (iVar2 < 1) {
    puStack_8 = (undefined4 *)(unaff_EDI + 0x9c);
    iVar2 = FUN_00413367();
    if (iVar2 < 0) {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar9 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_8 = (undefined4 *)0x72e6a8;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar9);
  puStack_8 = (undefined4 *)0x72e6ae;
  (*pcVar7)();
  puStack_8 = &DAT_00980690;
  puStack_8 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_8 < 0) {
    FUN_00878dfb();
  }
  puStack_8 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  (*pcVar7)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00449749();
  puStack_18 = (undefined4 *)0x72e709;
  piStack_1c = (int *)FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_18;
  puStack_20 = (undefined4 *)0x72e715;
  FUN_00448a17();
  piStack_1c = (int *)0x3e;
  puStack_20 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = FUN_006629cf();
  if (iVar2 == 0) {
    FUN_0087a1b0();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_8;
    piStack_1c = (int *)FUN_00413367();
    puStack_18 = *(undefined4 **)(unaff_EBP + 8);
    puStack_20 = (undefined4 *)0x72e792;
    FUN_0087b818();
    FUN_00414edd();
  }
  else {
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    puStack_18 = (undefined4 *)(unaff_EDI + 0xc0);
    piStack_1c = (int *)0x72e7ce;
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    puVar4 = (undefined4 *)FUN_00679d22();
    puVar4 = (undefined4 *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_006629cf();
    puStack_18 = (undefined4 *)0x72e802;
    FUN_006629cf();
    piStack_1c = (int *)(unaff_EBP + -0x14);
    puStack_20 = (undefined4 *)0x72e810;
    puStack_18 = puVar4;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    pcVar7 = VariantInit_exref;
  }
  iVar2 = FUN_006629cf();
  if (iVar2 < 1) {
    iVar2 = FUN_006629cf();
    if (iVar2 < 0) {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar9 = *(IBinding **)(unaff_EBP + -0x28);
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar9);
  (*pcVar7)();
  puStack_18 = (undefined4 *)0x72e86a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  (*pcVar7)();
  puStack_18 = (undefined4 *)(unaff_EBP + -0x60);
  piStack_1c = (int *)0x72e88e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_18 = (undefined4 *)0x72e89a;
    FUN_00878dfb();
  }
  puStack_18 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_1c = (int *)0x72e8ae;
  piStack_1c = (int *)FUN_00449749();
  puStack_20 = (undefined4 *)0x72e8b7;
  FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_20;
  iStack_28 = 0x72e8c3;
  FUN_00448a17();
  iStack_28 = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_2c = 0x72e8d3;
  FUN_004115d9();
  iStack_2c = 0x72e8da;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_18 = (undefined4 *)0x72e8e7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_18 = (undefined4 *)0x72e8f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_18 = (undefined4 *)0x72e8ff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_18 = (undefined4 *)0x72e90a;
    FUN_00878dfb();
  }
  puStack_18 = (undefined4 *)0x72e914;
  iVar2 = FUN_00662a40();
  if (iVar2 == 0) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff0;
    puStack_18 = (undefined4 *)(unaff_EDI + 0xf0);
    piStack_1c = (int *)0x72e935;
    FUN_00413367();
    piStack_1c = (int *)0xa;
    puStack_20 = *(undefined4 **)(unaff_EBP + 8);
    iStack_28 = 0x72e940;
    puStack_18 = (undefined4 *)FUN_0087b818();
    piStack_1c = (int *)0x72e94e;
    FUN_00414edd();
  }
  else {
    puStack_18 = (undefined4 *)(unaff_EDI + 0xf0);
    piStack_1c = (int *)0x72e96b;
    uVar3 = FUN_00413367();
    piStack_1c = *(int **)(unaff_EDI + 0xf8);
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    puStack_20 = (undefined4 *)(unaff_EDI + 0xf0);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    puStack_18 = (undefined4 *)(unaff_EBP + -0x38);
    piStack_1c = (int *)0x72e992;
    puVar4 = (undefined4 *)FUN_00679d22();
    puVar4 = (undefined4 *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_18 = (undefined4 *)0x72e9a2;
    FUN_00662a40();
    puStack_18 = *(undefined4 **)(unaff_EBP + 8);
    piStack_1c = *(int **)(unaff_EBP + -0x1c);
    puStack_20 = (undefined4 *)0x72e9b0;
    iVar2 = FUN_00662a40();
    piStack_1c = (int *)(iVar2 + *(int *)(unaff_EBP + -0x3c));
    iStack_28 = 0x72e9be;
    puStack_20 = puVar4;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    pcVar7 = VariantInit_exref;
  }
  puStack_18 = (undefined4 *)0x72e9dd;
  iVar2 = FUN_00662a40();
  if (iVar2 < 1) {
    puStack_18 = (undefined4 *)0x72e9f0;
    iVar2 = FUN_00662a40();
    if (iVar2 < 0) {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar9 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar9 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_18 = (undefined4 *)0x72ea04;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar9);
  puStack_18 = (undefined4 *)0x72ea0a;
  (*pcVar7)();
  piStack_1c = (int *)(unaff_EBP + -0x50);
  puStack_18 = &DAT_00980690;
  puStack_20 = (undefined4 *)0x72ea18;
  puStack_18 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_18 < 0) {
    piStack_1c = (int *)0x72ea24;
    FUN_00878dfb();
  }
  puStack_18 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  piStack_1c = (int *)0x72ea2e;
  (*pcVar7)();
  puStack_20 = (undefined4 *)(unaff_EBP + -0x60);
  piStack_1c = &DAT_00980690;
  piStack_1c = (int *)FUN_00402e32();
  if ((int)piStack_1c < 0) {
    puStack_20 = (undefined4 *)0x72ea48;
    FUN_00878dfb();
  }
  piStack_1c = (int *)(unaff_EBP + -0x50);
  puStack_20 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00449749();
  iStack_28 = 0x72ea65;
  iStack_2c = FUN_00449713();
  *(int **)(unaff_EBP + 8) = &iStack_28;
  iStack_30 = 0x72ea71;
  FUN_00448a17();
  iStack_2c = 0x62;
  iStack_30 = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004115d9();
  FUN_00448e3a();
  piStack_1c = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_20 = (undefined4 *)0x72ea95;
  piStack_1c = (int *)FUN_00402bc3();
  if ((int)piStack_1c < 0) {
    puStack_20 = (undefined4 *)0x72eaa0;
    FUN_00878dfb();
  }
  piStack_1c = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_20 = (undefined4 *)0x72eaad;
  piStack_1c = (int *)FUN_00402bc3();
  if ((int)piStack_1c < 0) {
    puStack_20 = (undefined4 *)0x72eab8;
    FUN_00878dfb();
  }
  piStack_1c = *(int **)(unaff_EDI + 0x134);
  puStack_20 = (undefined4 *)(unaff_EDI + 300);
  iVar2 = FUN_00413367();
  if (iVar2 == 0) {
    piStack_1c = (int *)0x72ead8;
    FUN_0087a1b0();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_18;
    piStack_1c = *(int **)(unaff_EDI + 0x128);
    puStack_20 = (undefined4 *)(unaff_EDI + 0x120);
    iStack_2c = FUN_00413367();
    iStack_28 = *(int *)(unaff_EBP + 8);
    iStack_30 = 0x72eaf8;
    puStack_20 = (undefined4 *)FUN_0087b818();
    piStack_1c = (int *)0xffffffff;
    FUN_00414edd();
  }
  else {
    piStack_1c = *(int **)(unaff_EDI + 0x134);
    puStack_20 = (undefined4 *)(unaff_EDI + 300);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    iStack_28 = unaff_EDI + 0x120;
    iStack_2c = 0x72eb38;
    uVar3 = FUN_00413367();
    iStack_2c = *(undefined4 *)(unaff_EDI + 0x128);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    iStack_30 = unaff_EDI + 0x120;
    FUN_00413367();
    uVar3 = FUN_00413367(unaff_EDI + 300,*(undefined4 *)(unaff_EDI + 0x134));
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    piStack_1c = (int *)0x785;
    puStack_20 = (undefined4 *)(unaff_EBP + -0x34);
    piVar6 = (int *)FUN_00679d22();
    piStack_1c = *(int **)(unaff_EBP + 8);
    puStack_20 = *(undefined4 **)(unaff_EBP + -0x3c);
    iStack_28 = *piVar6;
    iStack_2c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_30 = 0x72eb8f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_1c = (int *)0x72eb9e;
    FUN_00414ebb();
    pcVar7 = VariantInit_exref;
  }
  piStack_1c = *(int **)(unaff_EDI + 0x134);
  puStack_20 = (undefined4 *)(unaff_EDI + 300);
  iVar2 = FUN_00413367();
  if (iVar2 < 1) {
    piStack_1c = *(int **)(unaff_EDI + 0x134);
    puStack_20 = (undefined4 *)(unaff_EDI + 300);
    iVar5 = FUN_00413367();
    iVar2 = *(int *)(unaff_EBP + -0x10);
    if (iVar5 < 0) {
      if (iVar2 == *(int *)(unaff_EBP + -0x2c)) goto LAB_0072ec3e;
      *(int *)(unaff_EBP + 8) = iVar2;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x2c);
      piStack_1c = (int *)0x72ec0f;
      FUN_0045e787();
      if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0072ec3e;
      piStack_1c = *(int **)(unaff_EBP + 8);
    }
    else {
      if (iVar2 == *(int *)(unaff_EBP + -0x20)) goto LAB_0072ec3e;
      *(int *)(unaff_EBP + 8) = iVar2;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x20);
      piStack_1c = (int *)0x72ec2f;
      FUN_0045e787();
      if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0072ec3e;
      piStack_1c = *(int **)(unaff_EBP + 8);
    }
  }
  else {
    if (*(int *)(unaff_EBP + -0x10) == *(int *)(unaff_EBP + -0x28)) goto LAB_0072ec3e;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x28);
    piStack_1c = (int *)0x72ebd4;
    FUN_0045e787();
    if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0072ec3e;
    piStack_1c = *(int **)(unaff_EBP + 8);
  }
  puStack_20 = (undefined4 *)0x72ec3e;
  (**(code **)(*piStack_1c + 8))();
LAB_0072ec3e:
  piStack_1c = (int *)(unaff_EBP + -0x50);
  puStack_20 = (undefined4 *)0x72ec44;
  (*pcVar7)();
  puStack_20 = &DAT_00980690;
  iStack_28 = 0x72ec52;
  puStack_20 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_20 < 0) {
    FUN_00878dfb();
  }
  puStack_20 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  (*pcVar7)();
  iStack_28 = unaff_EBP + -0x60;
  iStack_2c = 0x72ec76;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_28 = 0x72ec82;
    FUN_00878dfb();
  }
  iStack_28 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_2c = 0x72ec96;
  iStack_2c = FUN_00449749();
  iStack_30 = 0x72ec9f;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + 8) = &iStack_30;
  FUN_00448a17(uVar3);
  uVar8 = 0x74;
  uVar3 = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(0x4d,0x74);
  FUN_00448e3a(uVar3,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_28 = 0x72eccf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x72ecda;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_28 = 0x72ece7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x72ecf2;
    FUN_00878dfb();
  }
  iVar2 = FUN_004bf0d4();
  if (iVar2 == 0) {
    iVar2 = FUN_0072f360();
    *(undefined4 *)(unaff_EBP + 8) = 0x8c;
    if (iVar2 < 0x8d) {
      *(int *)(unaff_EBP + 8) = iVar2;
    }
    iStack_28 = unaff_EBP + -0x3c;
    iStack_2c = 0x72f02b;
    piVar6 = (int *)FUN_00679d22();
    iStack_28 = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_2c = unaff_EBP + -0x14;
    iStack_30 = 0x72f03e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_28 = unaff_EDI + 0x504;
    iStack_2c = 0x72f05f;
    iVar2 = FUN_00413367();
    if (iVar2 != 0) {
      iStack_28 = unaff_EDI + 0x504;
      iStack_2c = 0x72f077;
      iVar2 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + 8) = 0x8c;
      if (iVar2 < 0x8d) {
        *(int *)(unaff_EBP + 8) = iVar2;
      }
      iStack_28 = unaff_EBP + -0x3c;
      iStack_2c = 0x72f096;
      piVar6 = (int *)FUN_00679d22();
      iStack_28 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_2c = unaff_EBP + -0x14;
      iStack_30 = 0x72f0a9;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
    iStack_28 = 0x72f0c2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_28 = unaff_EBP + -0x60;
    iStack_2c = 0x72f0d0;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72f0dc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_28 = 0x72f0ea;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_28 = unaff_EBP + -0x78;
    iStack_2c = 0x72f0f8;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72f104;
      FUN_00878dfb();
    }
    iStack_28 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_2c = 0x72f118;
    iStack_2c = FUN_00449749();
    iStack_30 = 0x72f121;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_30;
    FUN_00448a17(uVar3);
    uVar8 = 0x86;
    uVar3 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_004115d9(0x4d,0x86);
    FUN_00448e3a(uVar3,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_28 = 0x72f154;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x72f15f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_28 = 0x72f16c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x72f177;
      FUN_00878dfb();
    }
    FUN_0072f3cc();
    iStack_28 = unaff_EBP + 8;
    iStack_2c = 0x72f196;
    piVar6 = (int *)FUN_00679d22();
    iStack_28 = *piVar6;
    iStack_2c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_30 = 0x72f1a7;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_28 = 0x72f1c2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_28 = unaff_EBP + -0x60;
    iStack_2c = 0x72f1d1;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72f1dd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_28 = 0x72f1e7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_28 = unaff_EBP + -0x78;
    iStack_2c = 0x72f1f1;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72f1fd;
      FUN_00878dfb();
    }
    iStack_28 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_2c = 0x72f211;
    iStack_2c = FUN_00449749();
    iStack_30 = 0x72f21a;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_30;
    FUN_00448a17(uVar3);
    uVar8 = 0x98;
    uVar3 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    FUN_004115d9(0x4d,0x98);
    FUN_00448e3a(uVar3,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_28 = 0x72f24d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x72f258;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
  }
  else {
    FUN_004c2648();
    iStack_28 = 0x72ed1d;
    iStack_28 = FUN_0054e7b3();
    iStack_28 = iStack_28 + 0x170;
    iStack_2c = 0x72ed2e;
    iStack_2c = FUN_00413367();
    iStack_30 = 0x72ed34;
    uVar3 = FUN_00682a20();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x16f);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar2 != 0) {
      FUN_0045e2eb();
      iStack_28 = 0x72ed62;
      iVar2 = FUN_0054e7b3();
      iStack_28 = iVar2 + 0x108;
      iStack_2c = 0x72ed76;
      FUN_0045f084();
      iStack_2c = *(undefined4 *)(iVar2 + 0x114);
      iStack_30 = iVar2 + 0x110;
      sVar1 = FUN_0045f084();
      *(int *)(unaff_EBP + 8) = (int)sVar1;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x177) != 0) {
      FUN_0045e2eb();
      iStack_28 = 0x72edbc;
      iVar2 = FUN_0054e7b3();
      iStack_28 = iVar2 + 0x108;
      iStack_2c = 0x72edd0;
      FUN_0045f084();
      iStack_2c = *(undefined4 *)(iVar2 + 0x114);
      iStack_30 = iVar2 + 0x110;
      sVar1 = FUN_0045f084();
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + (int)sVar1;
    }
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x18);
    if (iVar2 < 0x51) {
      iVar2 = 0x50;
    }
    iVar2 = iVar2 + *(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + 8) = iVar2;
    if (0x7a < iVar2) {
      *(undefined4 *)(unaff_EBP + 8) = 0x7b;
    }
    iStack_28 = unaff_EBP + -0x3c;
    iStack_2c = 0x72ee3e;
    piVar6 = (int *)FUN_00679d22();
    iStack_28 = *piVar6;
    iStack_2c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_30 = 0x72ee4f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_28 = 0x72ee6a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_28 = unaff_EBP + -0x60;
    iStack_2c = 0x72ee78;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72ee84;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_28 = 0x72ee8e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_28 = unaff_EBP + -0x78;
    iStack_2c = 0x72ee9c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72eea8;
      FUN_00878dfb();
    }
    iStack_28 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_2c = 0x72eebc;
    iStack_2c = FUN_00449749();
    iStack_30 = 0x72eec5;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x3c) = &iStack_30;
    FUN_00448a17(uVar3);
    uVar8 = 0x86;
    uVar3 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_004115d9(0x4d,0x86);
    FUN_00448e3a(uVar3,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_28 = 0x72eef8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x72ef03;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_28 = 0x72ef10;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x72ef1b;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 8) = 0x7b;
    if (iVar2 < 0x7c) {
      *(int *)(unaff_EBP + 8) = iVar2;
    }
    iStack_28 = unaff_EBP + -0x3c;
    iStack_2c = 0x72ef37;
    piVar6 = (int *)FUN_00679d22();
    iStack_28 = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_2c = unaff_EBP + -0x14;
    iStack_30 = 0x72ef4a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_28 = 0x72ef5f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_28 = unaff_EBP + -0x60;
    iStack_2c = 0x72ef6d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72ef79;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_28 = 0x72ef83;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_28 = unaff_EBP + -0x78;
    iStack_2c = 0x72ef91;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_28 = 0x72ef9d;
      FUN_00878dfb();
    }
    iStack_28 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_2c = 0x72efb1;
    iStack_2c = FUN_00449749();
    iStack_30 = 0x72efba;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_30;
    FUN_00448a17(uVar3);
    uVar8 = 0x98;
    uVar3 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_004115d9(0x4d,0x98);
    FUN_00448e3a(uVar3,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_28 = 0x72efed;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x72eff8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
  }
  iStack_28 = 0x72f265;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_28 = 0x72f270;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -100) != 0) {
    iStack_28 = 0x72f284;
    FUN_00449913();
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_28 = 0x72f2a4;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_28 = 0x72f2b5;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    iStack_28 = 0x72f2c6;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    iStack_28 = 0x72f2d7;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_28 = 0x72f2e8;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_28 = 0x72f2f9;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


