/* FUN_007588fb - 0x007588fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007588fb(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    puStack_5c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_60 = 0x758c09;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_5c = (undefined4 *)0x758c16;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    puStack_5c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_60 = 0x758c2f;
    puVar1 = (undefined4 *)FUN_00756efd();
    puStack_5c = (undefined4 *)0x758c39;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               (IBinding *)*puVar1);
    if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
      puStack_5c = (undefined4 *)0x758c46;
      (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
    }
    puStack_5c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_60 = 0x758c53;
    puVar1 = (undefined4 *)FUN_00756efd();
    puStack_5c = (undefined4 *)0x758c5d;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar1);
    if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
      puStack_5c = (undefined4 *)0x758c6a;
      (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
    }
    puStack_5c = (undefined4 *)0x758c76;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    puStack_5c = (undefined4 *)(unaff_EBP + -0x34);
    uStack_60 = 0x758c85;
    puVar1 = &DAT_00980690;
    iVar3 = FUN_00402e32();
    puStack_5c = puVar1;
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758c91;
      FUN_00878dfb();
      puStack_5c = extraout_ECX_00;
    }
    *(undefined4 ***)(unaff_EBP + 0x10) = &puStack_5c;
    uStack_60 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_64 = 0x758ca7;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_60 = 0x758cb3;
    FUN_0044974c();
    uStack_60 = 0x758cba;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_5c = (undefined4 *)0x758cca;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758cd5;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x758cdb;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    puStack_5c = (undefined4 *)(unaff_EBP + -0x34);
    uStack_60 = 0x758ce5;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758cf1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_5c = (undefined4 *)0x758d01;
    uStack_60 = FUN_00449713();
    *(undefined4 ***)(unaff_EBP + 0x10) = &puStack_5c;
    uStack_64 = 0x758d0d;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    uStack_60 = 0x758d19;
    FUN_0044974c();
    uStack_60 = 0x758d20;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_5c = (undefined4 *)0x758d30;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758d3b;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x758d41;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    puStack_5c = (undefined4 *)(unaff_EBP + -0x44);
    uStack_60 = 0x758d4b;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758d57;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_5c = (undefined4 *)0x758d61;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    puStack_5c = (undefined4 *)(unaff_EBP + -0x34);
    uStack_60 = 0x758d6b;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758d77;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_60 = 0x758d87;
    FUN_004031b7();
    puStack_5c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    uStack_60 = 0x758d9b;
    uStack_60 = FUN_00449749();
    uStack_64 = 0x758da4;
    uVar2 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_64;
    FUN_00448a17(uVar2);
    iVar3 = unaff_EBP + -0x54;
    iVar4 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00424e27(iVar4,iVar3);
    FUN_00425067(iVar4,iVar3);
    iVar3 = *(int *)(extraout_ECX + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iVar3 = ((iVar3 - *(int *)(unaff_EBP + 0x10)) - *(int *)(unaff_EBP + -0x1c)) / 2;
    FUN_004115d9(iVar3,uVar2);
    FUN_00448e3a(iVar3,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      puStack_5c = (undefined4 *)0x758e00;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_5c = (undefined4 *)0x758e0d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758e18;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_5c = (undefined4 *)0x758e25;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758e30;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_5c = (undefined4 *)0x758e3d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758e48;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x758e4e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    puStack_5c = (undefined4 *)(unaff_EBP + -0x34);
    uStack_60 = 0x758e58;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758e64;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_5c = (undefined4 *)0x758e6e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    puStack_5c = (undefined4 *)(unaff_EBP + -0x44);
    uStack_60 = 0x758e78;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758e84;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uStack_60 = 0x758e94;
    FUN_004031b7();
    puStack_5c = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uStack_60 = 0x758ea8;
    uStack_60 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_64;
    FUN_00448a17(*(undefined4 *)(unaff_EBP + 0xc));
    iVar3 = unaff_EBP + -0x54;
    iVar4 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00424e27(iVar4,iVar3);
    FUN_00425067(iVar4,iVar3);
    iVar3 = *(int *)(extraout_ECX + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iVar3 = ((iVar3 - *(int *)(unaff_EBP + 0x10)) - *(int *)(unaff_EBP + -0x1c)) / 2 +
            *(int *)(unaff_EBP + 0x10);
    FUN_004115d9(iVar3,uVar2);
    FUN_00448e3a(iVar3,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      puStack_5c = (undefined4 *)0x758f0a;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    puStack_5c = (undefined4 *)0x758f17;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758f22;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_5c = (undefined4 *)0x758f2f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758f3a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    puStack_5c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_60 = 0x75893b;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_5c = (undefined4 *)0x758948;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      puStack_5c = (undefined4 *)0x75895c;
      FUN_00434e38();
    }
    puStack_5c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_60 = 0x75896a;
    puVar1 = (undefined4 *)FUN_00756efd();
    puStack_5c = (undefined4 *)0x758974;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               (IBinding *)*puVar1);
    FUN_004497b5();
    puStack_5c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_60 = 0x758989;
    puVar1 = (undefined4 *)FUN_00756efd();
    puStack_5c = (undefined4 *)0x758993;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar1);
    FUN_004497b5();
    puStack_5c = (undefined4 *)0x7589a9;
    FUN_00403191();
    *(undefined4 ***)(unaff_EBP + 0x10) = &puStack_5c;
    uStack_60 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_64 = 0x7589bf;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_60 = 0x7589cb;
    FUN_0044974c();
    uStack_60 = 0x7589d2;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_5c = (undefined4 *)0x7589e2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x7589ed;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x7589f6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_5c = (undefined4 *)0x758a06;
    uStack_60 = FUN_00449713();
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_5c;
    uStack_64 = 0x758a12;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_60 = 0x758a1e;
    FUN_0044974c();
    uStack_60 = 0x758a25;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_5c = (undefined4 *)0x758a35;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758a40;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x758a49;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_5c = (undefined4 *)0x758a56;
    FUN_00403191();
    puStack_5c = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_60 = 0x758a65;
    FUN_004031b7();
    puStack_5c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_60 = 0x758a79;
    uStack_60 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_64;
    FUN_00448a17(*(undefined4 *)(unaff_EBP + 0xc));
    iVar3 = unaff_EBP + -0x44;
    iVar4 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424e27(iVar4,iVar3);
    FUN_00425067(iVar4,iVar3);
    iVar3 = *(int *)(extraout_ECX + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar3 = ((iVar3 - *(int *)(unaff_EBP + -0x1c)) - *(int *)(unaff_EBP + 0x10)) / 2;
    FUN_004115d9(iVar3,uVar2);
    FUN_00448e3a(iVar3,uVar2);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_5c = (undefined4 *)0x758ade;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758ae9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_5c = (undefined4 *)0x758af6;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758b01;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_5c = (undefined4 *)0x758b0e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758b19;
      FUN_00878dfb();
    }
    puStack_5c = (undefined4 *)0x758b22;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_5c = (undefined4 *)0x758b2f;
    FUN_00403191();
    puStack_5c = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_60 = 0x758b3f;
    FUN_004031b7();
    puStack_5c = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_60 = 0x758b53;
    uStack_60 = FUN_00449749();
    uStack_64 = 0x758b5c;
    uVar2 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_64;
    FUN_00448a17(uVar2);
    iVar3 = unaff_EBP + -0x54;
    iVar4 = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00424e27(iVar4,iVar3);
    FUN_00425067(iVar4,iVar3);
    iVar3 = *(int *)(extraout_ECX + 0xc);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar3 = ((iVar3 - *(int *)(unaff_EBP + -0x1c)) - *(int *)(unaff_EBP + 0x10)) / 2 +
            *(int *)(unaff_EBP + 0x10);
    FUN_004115d9(iVar3,uVar2);
    FUN_00448e3a(iVar3,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      puStack_5c = (undefined4 *)0x758bba;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_5c = (undefined4 *)0x758bc7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758bd2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_5c = (undefined4 *)0x758bdf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_5c = (undefined4 *)0x758bea;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  puStack_5c = (undefined4 *)0x758f47;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_5c = (undefined4 *)0x758f52;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    puStack_5c = (undefined4 *)0x758f63;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    puStack_5c = (undefined4 *)0x758f74;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


