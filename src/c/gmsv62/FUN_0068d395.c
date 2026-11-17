/* FUN_0068d395 - 0x0068d395 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068d395(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x7c) = 2;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -100) = 0xff000000;
  *(undefined4 *)(unaff_EBP + -0x74) = 2;
  *(undefined4 *)(unaff_EBP + -0x70) = 2;
  FUN_00679e4e();
  FUN_00402f41();
  FUN_00402fa6();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e196();
  piVar4 = *(int **)(extraout_ECX + 0x19c);
  *(undefined4 *)(unaff_EBP + -0x50) = 0x100;
  (**(code **)(*piVar4 + 8))();
  FUN_008164fd();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x194) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x184) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x18c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x17c) + 0x20))();
  FUN_005c13f1();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x7c) + 0x34) = 0xed;
  iStack_134 = unaff_EBP + -0x10;
  iStack_138 = 0x68d6db;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_134 = 0x68d6ea;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1a0),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_134 = 0x68d6f7;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_134 = unaff_EBP + -0x10;
  iStack_138 = 0x68d702;
  piVar4 = (int *)FUN_007d4a9a();
  piVar4 = (int *)*piVar4;
  piVar1 = *(int **)(extraout_ECX + 0x1a4);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != piVar4) {
    *(int **)(extraout_ECX + 0x1a4) = piVar4;
    FUN_0045e787();
    if (piVar1 != (int *)0x0) {
      iStack_134 = 0x68d72b;
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_134 = 0x68d73c;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_134 = 0x68d748;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_134 = unaff_EBP + -0x48;
  iStack_138 = 0x68d756;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_134 = 0x68d762;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_134 = 0x68d76c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_134 = unaff_EBP + -0x38;
  puStack_140 = &DAT_00980690;
  iStack_138 = 0x68d77a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_134 = 0x68d788;
    FUN_00878dfb();
    puStack_140 = extraout_ECX_00;
  }
  iStack_134 = 0;
  iStack_138 = unaff_EBP + -0x48;
  iStack_13c = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_140;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_140,0x4e9);
  iVar2 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_138 = 0x68d7d2;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_134 = 0x68d7e4;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_134 = 0x68d7f5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_134 = 0x68d805;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_134 = 0x68d810;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_134 = 0x68d81d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_134 = 0x68d828;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_134 = 0x68d835;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_134 = 0x68d840;
    FUN_00878dfb();
  }
  iStack_134 = 0x68d84f;
  iVar2 = FUN_00455c59();
  iStack_134 = *(int *)(iVar2 + 4) + 0xa5;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_138 = 0x68d867;
  uVar5 = FUN_00413367();
  iVar2 = *(int *)(unaff_EBP + -0x24);
  *(undefined4 *)(extraout_ECX + 0x1c4) = uVar5;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    iStack_134 = 0x68d881;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


