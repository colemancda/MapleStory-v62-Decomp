/* FUN_00536ed9 - 0x00536ed9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00536ed9(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  
  FUN_00879bb8();
  puStack_8c = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  uStack_90 = 0x536ef4;
  FUN_0081622a();
  puStack_8c = (undefined4 *)(unaff_EBP + -0x10);
  uStack_90 = 0x536f00;
  FUN_00448dc6();
  puStack_8c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_90 = 0x536f13;
  FUN_00403191();
  puStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_90 = 0x536f20;
  FUN_00403191();
  puStack_8c = (undefined4 *)0x0;
  uStack_90 = 0;
  iStack_94 = unaff_EBP + -0x68;
  iStack_98 = unaff_EBP + -0x58;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_9c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_94 = 0x536f67;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    puStack_8c = (undefined4 *)(unaff_EBP + -0x24);
    uStack_90 = 0x536f7d;
    puStack_8c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_8c < 0) && (puStack_8c != (undefined4 *)0x80004002)) {
      uStack_90 = 0x536f8e;
      FUN_00878dfb();
    }
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_90 = 0x536f9e;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x536fa9;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_90 = 0x536fb6;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x536fc1;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_90 = 0x536fce;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    uStack_90 = 0x536fd9;
    FUN_00878dfb();
  }
  puStack_8c = &DAT_00980690;
  uStack_90 = 0x536fe2;
  FUN_00403191();
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 == (int *)0x0) {
    puStack_8c = (undefined4 *)0x80004003;
    uStack_90 = 0x536ff7;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *piVar2;
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_8c = *(undefined4 **)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x28) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_b8 = 0x53702b;
    iStack_b4 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_b0 = 0x537038;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x537043;
    FUN_00878dfb();
  }
  iStack_b0 = 0;
  iStack_b4 = 1;
  iStack_b8 = 0;
  uStack_bc = 1;
  iStack_c0 = 0;
  uStack_c4 = 0x7b;
  uStack_c8 = 0x16;
  uStack_cc = 0x537060;
  uStack_cc = thunk_FUN_0045e2eb();
  *(undefined1 **)(unaff_EBP + -0x28) = auStack_d0;
  FUN_0046fc23(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0048b97b();
  FUN_005558b0();
  FUN_0045e2eb();
  iStack_b0 = unaff_EBP + -0x20;
  iStack_b4 = 0x5370a0;
  FUN_0045a1d8();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_b0 = 0x5370ad;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x5370ba;
  FUN_00403191();
  iStack_b0 = unaff_EBP + -0x48;
  iStack_b8 = unaff_EBP + -0x28;
  iStack_b4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_bc = 0x5370d1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_b4 = 0x5370de;
  iStack_b4 = FUN_00449749();
  iStack_b8 = 0x5370e7;
  uStack_bc = FUN_00449713();
  *(int **)(unaff_EBP + -0x18) = &iStack_b8;
  iStack_c0 = 0x5370f3;
  FUN_00448a17();
  uStack_bc = 0x16;
  iStack_c0 = 0x5d;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_c4 = 0x537103;
  FUN_004115d9();
  uStack_c4 = 0x53710a;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x53711f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x53712a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_b0 = 0x537137;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x537142;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_b0 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b4 = 0x53715f;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_b0 = *puVar3;
  iStack_b4 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_b8 = 0x537172;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    iStack_b0 = 0x537189;
    FUN_00434e38();
  }
  iStack_b0 = unaff_EBP + -0x28;
  iStack_b4 = 0x53719a;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_b0 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_b4 = 0x5371b5;
  FUN_0045efbb();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    iStack_b0 = 0x5371c9;
    FUN_00434e38();
  }
  iStack_b0 = unaff_EBP + -0x14;
  iStack_b4 = 0x5371d5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_b0 = 0x5371e4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_b0 = 0x5371f1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_b0 = 0x5371fe;
  FUN_00403191();
  iStack_b0 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_b4 = 0x537212;
  iStack_b4 = FUN_00449749();
  iStack_b8 = 0x53721b;
  uStack_bc = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_b8;
  iStack_c0 = 0x537227;
  FUN_00448a17();
  uStack_bc = 0x87;
  iStack_c0 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_c4 = 0x53723c;
  uStack_c8 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
  uStack_cc = 0x537248;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_c8 = 0x537254;
  FUN_0044974c();
  uStack_c8 = 0x53725b;
  iStack_c0 = FUN_00448ebb();
  iStack_c0 = 0xf5 - iStack_c0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_c4 = 0x53726f;
  FUN_004115d9();
  uStack_c4 = 0x537276;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_b0 = 0x537283;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x53728e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_b0 = 0x53729b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x5372a6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_b0 = 0x5372b3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x5372be;
    FUN_00878dfb();
  }
  iStack_b0 = unaff_EBP + -0x28;
  iStack_b4 = 0x5372c9;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_b0 = 0x5372d5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_b0 = 0x5372e2;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  iStack_b0 = unaff_EBP + -0x28;
  iStack_b4 = 0x5372f2;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_b0 = *puVar3;
  iStack_b4 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_b8 = 0x537305;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  iStack_b0 = 0x537320;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_b0 = unaff_EBP + -0x48;
  iStack_b4 = 0x53732a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_b0 = 0x537336;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_b0 = 0x537340;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_b0 = unaff_EBP + -0x38;
  iStack_b4 = 0x53734a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_b0 = 0x537356;
    FUN_00878dfb();
  }
  iStack_b0 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_b4 = 0x53736a;
  iStack_b4 = FUN_00449749();
  iStack_b8 = 0x537373;
  uStack_bc = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_b8;
  iStack_c0 = 0x53737f;
  FUN_00448a17();
  uStack_bc = 0xa8;
  iStack_c0 = 0xa4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_c4 = 0x537395;
  FUN_004115d9();
  uStack_c4 = 0x53739c;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_b0 = 0x5373a9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x5373b4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_b0 = 0x5373c1;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x5373cc;
    FUN_00878dfb();
  }
  iStack_b0 = unaff_EBP + -0x28;
  iStack_b4 = 0x5373df;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_b0 = *puVar3;
  iStack_b4 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_b8 = 0x5373f2;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  iStack_b0 = 0x537407;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_b0 = unaff_EBP + -0x38;
  iStack_b4 = 0x537411;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_b0 = 0x53741d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_b0 = 0x537427;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_b0 = unaff_EBP + -0x48;
  iStack_b4 = 0x537431;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_b0 = 0x53743d;
    FUN_00878dfb();
  }
  iStack_b0 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_b4 = 0x537451;
  iStack_b4 = FUN_00449749();
  iStack_b8 = 0x53745a;
  uStack_bc = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_b8;
  iStack_c0 = 0x537466;
  FUN_00448a17();
  uStack_bc = 0xbc;
  iStack_c0 = 0xa4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_c4 = 0x53747c;
  FUN_004115d9();
  uStack_c4 = 0x537483;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_b0 = 0x537490;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x53749b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_b0 = 0x5374a8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_b0 = 0x5374b3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_b0 = 0x5374c4;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_b0 = 0x5374ed;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_b0 = 0x5374fe;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


