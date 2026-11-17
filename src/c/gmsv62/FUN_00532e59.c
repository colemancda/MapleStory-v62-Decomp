/* FUN_00532e59 - 0x00532e59 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00532e59(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int *piStack_a8;
  undefined1 *puStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  
  FUN_00879bb8();
  puStack_8c = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  uStack_90 = 0x532e74;
  FUN_0081622a();
  puStack_8c = (undefined4 *)(unaff_EBP + 8);
  uStack_90 = 0x532e80;
  FUN_00448dc6();
  puStack_8c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_90 = 0x532e93;
  FUN_00403191();
  puStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_90 = 0x532ea0;
  FUN_00403191();
  puStack_8c = (undefined4 *)0x0;
  uStack_90 = 0;
  iStack_94 = unaff_EBP + -0x78;
  iStack_98 = unaff_EBP + -0x68;
  puStack_a4 = (undefined1 *)&uStack_9c;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_9c;
  iStack_a0 = 0x1153;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_a8 = (int *)0x532ec4;
  FUN_00679e4e();
  iStack_a0 = unaff_EBP + -0x88;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_a4 = (undefined1 *)0x532ed4;
  FUN_00405a1d();
  puStack_a4 = (undefined1 *)0x532edb;
  FUN_00402660();
  puStack_a4 = (undefined1 *)0x532ee2;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_94 = 0x532eed;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    puStack_8c = (undefined4 *)(unaff_EBP + -0x24);
    uStack_90 = 0x532f03;
    puStack_8c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_8c < 0) && (puStack_8c != (undefined4 *)0x80004002)) {
      uStack_90 = 0x532f14;
      FUN_00878dfb();
    }
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_90 = 0x532f24;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x532f2f;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_90 = 0x532f3c;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x532f47;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_90 = 0x532f54;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x532f5f;
    FUN_00878dfb();
  }
  puStack_8c = &DAT_00980690;
  uStack_90 = 0x532f68;
  FUN_00403191();
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 == (int *)0x0) {
    puStack_8c = (undefined4 *)0x80004003;
    uStack_90 = 0x532f7d;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar2;
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_8c = *(undefined4 **)(unaff_EBP + -0x4c);
  iStack_a0 = 0;
  puStack_a4 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x28) = piVar2;
  piStack_a8 = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_b8 = 0x532fb1;
    iStack_b4 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_b0 = 0x532fbe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x532fc9;
    FUN_00878dfb();
  }
  iStack_b0 = 0;
  iStack_b4 = 1;
  iStack_b8 = 0;
  uStack_bc = 1;
  iStack_c0 = 0;
  iVar1 = *(int *)(unaff_EBP + -0x18);
  puStack_c4 = (undefined1 *)0x55;
  uStack_c8 = 0x14;
  uStack_cc = 0x532fe6;
  uStack_cc = thunk_FUN_0045e2eb();
  *(undefined1 **)(unaff_EBP + -0x28) = auStack_d0;
  FUN_0046fc23(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0048b97b();
  FUN_005558b0();
  FUN_0045e2eb();
  iStack_b0 = unaff_EBP + -0x20;
  iStack_b4 = 0x533026;
  FUN_0045a1d8();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_b0 = 0x533033;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x533040;
  FUN_00403191();
  iStack_b0 = unaff_EBP + -0x58;
  iStack_b8 = unaff_EBP + -0x28;
  iStack_b4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_bc = 0x533057;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_b4 = 0x533064;
  iStack_b4 = FUN_00449749();
  iStack_b8 = 0x53306d;
  uStack_bc = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_b8;
  iStack_c0 = 0x533079;
  FUN_00448a17();
  uStack_bc = 0x1a;
  iStack_c0 = 0x5d;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_c4 = (undefined1 *)0x533089;
  FUN_004115d9();
  puStack_c4 = (undefined1 *)0x533090;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x5330a5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b0 = 0x5330b0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_b0 = 0x5330bd;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b0 = 0x5330c8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_b0 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b4 = 0x5330e5;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_b0 = *puVar4;
  iStack_b4 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_b8 = 0x5330f8;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00414ebb();
  iStack_b0 = unaff_EBP + -0x10;
  iStack_b4 = 0x533112;
  FUN_007d4a9a();
  iStack_b0 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_b4 = 0x533128;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_b0 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_b4 = 0x533143;
  FUN_0045efbb();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00414ebb();
  iStack_b0 = 0x533158;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_b0 = 0x533165;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_b0 = 0x533172;
  FUN_00403191();
  iStack_b0 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_b4 = 0x533186;
  iStack_b4 = FUN_00449749();
  iStack_b8 = 0x53318f;
  uStack_bc = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_b8;
  iStack_c0 = 0x53319b;
  iStack_b8 = extraout_ECX_00;
  FUN_00448a17();
  uStack_bc = 0x4e;
  iStack_c0 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_c4 = (undefined1 *)0x5331ad;
  uStack_c8 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_c4;
  uStack_cc = 0x5331b9;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_c8 = 0x5331c5;
  FUN_0044974c();
  uStack_c8 = 0x5331cc;
  iStack_c0 = FUN_00448ebb();
  iStack_c0 = 0xf5 - iStack_c0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_c4 = (undefined1 *)0x5331e0;
  FUN_004115d9();
  puStack_c4 = (undefined1 *)0x5331e7;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_b0 = 0x5331f4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b0 = 0x5331ff;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_b0 = 0x53320c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b0 = 0x533217;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_b0 = 0x533224;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b0 = 0x53322f;
    FUN_00878dfb();
  }
  if (0 < *(int *)(iVar1 + 0x78)) {
    iStack_b0 = unaff_EBP + -0x28;
    iStack_b4 = 0x533244;
    puVar4 = (undefined4 *)FUN_007d4a9a();
    iStack_b0 = 0x533250;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar4);
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_b0 = 0x53325d;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    iStack_b0 = 0x533269;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iStack_b0 = unaff_EBP + -0x58;
    iStack_b4 = 0x533273;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_b0 = 0x53327f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_b0 = 0x533289;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_b0 = unaff_EBP + -0x48;
    iStack_b4 = 0x533293;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_b0 = 0x53329f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_0087a1b0();
    *(int ***)(unaff_EBP + -0x28) = &piStack_a8;
    iStack_b0 = 0x5332b4;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_b0 = unaff_EBP + -0x38;
    iStack_b4 = 0x5332be;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_b0 = 0x5332ca;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_0087a1b0();
    iStack_b0 = unaff_EBP + -0x48;
    iStack_b4 = 0x5332e8;
    iStack_b4 = FUN_00449749();
    iStack_b8 = *(int *)(unaff_EBP + -0x28);
    uStack_bc = *(undefined4 *)(iVar1 + 0x78);
    iStack_c0 = 0x5332f4;
    uStack_bc = FUN_0048b981();
    *(int **)(unaff_EBP + -0x28) = &iStack_b8;
    iStack_c0 = 0x533300;
    FUN_00448a17();
    uStack_bc = 0x60;
    iStack_c0 = unaff_EBP + -0x38;
    uStack_c8 = *(undefined4 *)(iVar1 + 0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_cc = 0x533313;
    puStack_c4 = (undefined1 *)&piStack_a8;
    uStack_c8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_c4;
    uStack_cc = 0x53331f;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_c8 = 0x53332b;
    FUN_0044974c();
    uStack_c8 = 0x533332;
    iStack_c0 = FUN_00448ebb();
    iStack_c0 = 0xf3 - iStack_c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_c4 = (undefined1 *)0x533346;
    FUN_004115d9();
    puStack_c4 = (undefined1 *)0x53334d;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_b0 = 0x53335a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b0 = 0x533365;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_b0 = 0x533372;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b0 = 0x53337d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_b0 = 0x53338a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b0 = 0x533395;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_b0 = 0x5333a6;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_b0 = 0x5333cf;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_b0 = 0x5333e0;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


