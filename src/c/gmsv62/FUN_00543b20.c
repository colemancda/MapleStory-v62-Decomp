/* FUN_00543b20 - 0x00543b20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00543b20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_a0;
  int iStack_9c;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x194) = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_004ae046();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00495c26();
  (**(code **)(**(int **)(extraout_ECX + 0x6c) + 0x20))();
  iStack_9c = 0x543b9c;
  FUN_004ae221();
  *(undefined4 *)(extraout_ECX + 0x694) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x698) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 400) = 0;
  *(undefined4 *)(extraout_ECX + 0x690) = 0;
  puVar3 = (undefined4 *)FUN_004029b9();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_008e84a0;
    iStack_9c = 0x543bd4;
    _memset(puVar3,0,0xc);
    *puVar3 = &PTR_FUN_008e8ea8;
    puVar3[4] = 0x15e;
    puVar3[3] = 7;
  }
  *(undefined4 **)(unaff_EBP + -0x30) = puVar3;
  FUN_005462c2();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0x6b0) = 0xffffffff;
  piVar1 = (int *)(extraout_ECX + 0x6a8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(extraout_ECX + 0x6ac) = 0;
  FUN_00450550();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_9c = 0x543c54;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00403384();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
  } while (*(int *)(unaff_EBP + 8) < 0x28);
  FUN_00403191();
  *(int **)(unaff_EBP + 8) = &iStack_9c;
  puStack_a0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&iStack_9c);
  puStack_a0 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450708();
  puStack_a0 = (undefined4 *)0x543cb6;
  FUN_0044974c();
  puStack_a0 = (undefined4 *)0x543cbd;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0044f5f6();
  *(int **)(unaff_EBP + -0x2c) = &iStack_9c;
  puStack_a0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00679e4e(&iStack_9c);
  puStack_a0 = (undefined4 *)0x1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450708();
  puStack_a0 = (undefined4 *)0x543d25;
  FUN_0044974c();
  puStack_a0 = (undefined4 *)0x543d2c;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402fa6();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 2),
             *(IBinding **)*piVar1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0xc),
             *(IBinding **)(*piVar1 + 4));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 4),
             *(IBinding **)*piVar1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0x14),
             *(IBinding **)(*piVar1 + 4));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 6),
             *(IBinding **)*piVar1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0x1c),
             *(IBinding **)(*piVar1 + 4));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((undefined4 *)*piVar1 + 8),
             *(IBinding **)*piVar1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*piVar1 + 0x24),
             *(IBinding **)(*piVar1 + 4));
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puVar3 = &DAT_00980690;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
    puVar3 = extraout_ECX_00;
  }
  iStack_9c = unaff_EBP + -0x44;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_a0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_a0 = puVar3;
  FUN_00679e4e(&puStack_a0,0x1137);
  iVar2 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    uVar4 = FUN_0040cf4d();
    if (uVar4 <= *(uint *)(unaff_EBP + 8)) break;
    iStack_9c = 0x543ef3;
    uVar5 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uVar5 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00449713();
    iStack_9c = *(int *)(unaff_EBP + -0x24);
    puStack_a0 = (undefined4 *)0x543f1d;
    FUN_00434e21();
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff6c;
    iStack_9c = 0x543f33;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_9c = 0x543f43;
    FUN_0040263d();
    iStack_9c = 0x543f4a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00414ebb();
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00414ebb();
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  }
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x18);
  *(int **)(unaff_EBP + 8) = &iStack_9c;
  FUN_00450368();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_a0 = (undefined4 *)0x543fe7;
  FUN_004503f5();
  puStack_a0 = (undefined4 *)0x543fee;
  iVar2 = FUN_007e3c88();
  puStack_a0 = (undefined4 *)0x74;
  *(int *)(extraout_ECX + 0x6b0) = (iVar2 + -0x140) / 7 + -0xf;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar2 == 0) {
    puStack_a0 = (undefined4 *)0x0;
  }
  else {
    puStack_a0 = (undefined4 *)0x544020;
    puStack_a0 = (undefined4 *)FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0048b9e9();
  puStack_a0 = (undefined4 *)0x0;
  (**(code **)(**(int **)(extraout_ECX + 0x6a0) + 0x20))(extraout_ECX,3000,1,4,0x1e3,0,0x151);
  FUN_004ad003((*(int *)(extraout_ECX + 0x6b0) < 1) + 1 + *(int *)(extraout_ECX + 0x6b0));
  *(undefined4 *)(*(int *)(extraout_ECX + 0x6a0) + 0x34) = 0x140;
  FUN_0055853a(extraout_ECX + 0x68c);
  FUN_00545bd5();
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    FUN_004504e6(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


