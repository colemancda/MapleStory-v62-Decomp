/* FUN_0054a573 - 0x0054a573 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0054a573(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  FUN_0081622a();
  FUN_00448dc6();
  iStack_ac = (int)*(short *)(*(int *)(extraout_ECX + 0xb4) + 0xc);
  uStack_9c._4_4_ = 1;
  uStack_9c._0_4_ = 0;
  uStack_a0 = 0x7b;
  uStack_a4 = 0x14;
  uStack_a8 = *(undefined4 *)(extraout_ECX + 0xac);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + 0x10);
  *(int *)(unaff_EBP + -0x24) = iStack_ac;
  *(int **)(unaff_EBP + -0x20) = &iStack_ac;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0046fc23(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048b97b();
  FUN_005558b0();
  FUN_0045a1d8();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_9c._4_4_ = 0x54a62e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00449749();
  uStack_9c._4_4_ = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
  uStack_9c._0_4_ = 0x54a650;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_9c._4_4_ = 0x16;
  uStack_9c._0_4_ = 0x5d;
  uStack_a0 = 0x54a660;
  FUN_004115d9();
  uStack_a0 = 0x54a667;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_00434e38();
  }
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00449749();
  uStack_9c._4_4_ = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
  uStack_9c._0_4_ = 0x54a735;
  FUN_00448a17();
  uStack_9c._4_4_ = 0x40;
  uStack_9c._0_4_ = 0xaf;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_a0 = 0x54a748;
  FUN_004115d9();
  uStack_a0 = 0x54a74f;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0xb4);
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00449749();
  uStack_9c._4_4_ = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
  uStack_9c._0_4_ = 0x54a802;
  FUN_00448a17();
  uStack_9c._4_4_ = 0x51;
  uStack_9c._0_4_ = 0xaf;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_a0 = 0x54a815;
  FUN_004115d9();
  uStack_a0 = 0x54a81c;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00449749();
  uStack_9c._4_4_ = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
  uStack_9c._0_4_ = 0x54a8bf;
  FUN_00448a17();
  uStack_9c._4_4_ = 100;
  uStack_9c._0_4_ = 0xaf;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_a0 = 0x54a8d2;
  FUN_004115d9();
  uStack_a0 = 0x54a8d9;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  puVar4 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_0054ae0d();
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  VariantInit((VARIANTARG *)(unaff_EBP + -100));
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00449749();
  uStack_9c._4_4_ = FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
  uStack_9c._0_4_ = 0x54a9ce;
  FUN_00448a17();
  uStack_9c._4_4_ = 0x73;
  uStack_9c._0_4_ = 0xaf;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_a0 = 0x54a9e1;
  FUN_004115d9();
  uStack_a0 = 0x54a9e8;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  puVar4 = (undefined4 *)FUN_0052b5f0();
  *(undefined4 *)(unaff_EBP + -0x74) = *puVar4;
  *(undefined4 *)(unaff_EBP + -0x70) = puVar4[1];
  *(undefined4 *)(unaff_EBP + -0x6c) = puVar4[2];
  *(undefined4 *)(unaff_EBP + -0x68) = puVar4[3];
  SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x74),(LPFILETIME)(unaff_EBP + -0x3c));
  (*DAT_0097b4b0)();
  uStack_9c._4_4_ = 0x54aa67;
  SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x84),(LPFILETIME)(unaff_EBP + -0x44));
  uVar1 = *(uint *)(unaff_EBP + -0x40);
  uVar2 = *(uint *)(unaff_EBP + -0x44);
  if ((*(uint *)(unaff_EBP + -0x38) <= uVar1) &&
     ((uVar1 != *(uint *)(unaff_EBP + -0x38) || (*(uint *)(unaff_EBP + -0x3c) < uVar2)))) {
    iVar3 = uVar2 - *(uint *)(unaff_EBP + -0x3c);
    uStack_9c._4_4_ =
         (uVar1 - *(int *)(unaff_EBP + -0x38)) - (uint)(uVar2 < *(uint *)(unaff_EBP + -0x3c));
    *(int *)(unaff_EBP + -0x30) = uStack_9c._4_4_;
    uStack_a0 = 0x54aa9b;
    uStack_9c._0_4_ = iVar3;
    uVar5 = __aulldiv();
    uStack_9c._4_4_ = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
    uStack_a0 = 0x54aaaa;
    uStack_9c._0_4_ = iVar3;
    uStack_9c = __aullrem();
    uStack_a0 = 0x54aab8;
    __aulldiv();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uStack_9c._4_4_ = 0x54aad5;
    puVar4 = (undefined4 *)FUN_00679d22();
    uStack_9c._4_4_ = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_9c._0_4_ = unaff_EBP + -0x18;
    uStack_a0 = 0x54aae9;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00414ebb();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    uStack_9c._4_4_ = 0x54ab0e;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    uStack_9c._4_4_ = 0x54ab2e;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_9c._4_4_ = 0x54ab4e;
    uStack_9c._4_4_ = FUN_00449749();
    uStack_9c._0_4_ = 0x54ab57;
    uStack_a0 = FUN_00449713();
    *(undefined8 **)(unaff_EBP + -0x30) = &uStack_9c;
    uStack_a4 = 0x54ab63;
    uStack_9c._0_4_ = extraout_ECX_00;
    FUN_00448a17();
    uStack_a0 = 0x2d;
    uStack_a4 = 0xaf;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_a8 = 0x54ab76;
    FUN_004115d9();
    uStack_a8 = 0x54ab7d;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


