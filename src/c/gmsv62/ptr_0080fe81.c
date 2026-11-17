/* ptr_0080fe81 - 0x0080fe81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0080fe81(void)

{
  int in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puStack_34;
  int iStack_30;
  int iStack_2c;
  
  *(undefined4 *)(in_EAX + 0x34) = 0x92;
  piVar1 = (int *)FUN_004029b9();
  *(int **)(unaff_EBP + -0x18) = piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (piVar1 != unaff_EBX) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_0048b9e9();
  (**(code **)(**(int **)(unaff_ESI + 0x5cc) + 0x20))();
  *(undefined4 *)(*(int *)(unaff_ESI + 0x5cc) + 0x34) = 0x5a;
  iStack_2c = 0x80feec;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_ESI + 0xb4),
             (IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  iStack_2c = 0x80ff22;
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
  puStack_34 = &DAT_00980690;
  iStack_2c = 0x80ff4c;
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
    puStack_34 = extraout_ECX;
  }
  iStack_2c = unaff_EBP + -0x80;
  iStack_30 = unaff_EBP + -0x90;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00679e4e(&puStack_34,0x4e9);
  iVar3 = unaff_EBP + -0xd0;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_2c = 0x80ffa8;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  iVar3 = FUN_00404b30();
  if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_ESI + 200) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0xc4) = 0xffffffff;
  *(int **)(unaff_ESI + 0xd4) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


