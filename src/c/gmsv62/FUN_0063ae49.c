/* FUN_0063ae49 - 0x0063ae49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063ae49(void)

{
  int *piVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  int *piVar6;
  bool bVar7;
  undefined4 *puStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xc0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xe0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 200) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xd0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xd8) + 0x20))();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar3 = (undefined4 *)FUN_0042a39f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x108),
             (IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_004489f5();
  FUN_0040ee87();
  iVar2 = *(int *)(extraout_ECX + 0x108);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x108);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x14) = piVar6;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  iVar2 = *(int *)(unaff_EBP + -0x10);
  FUN_004489f5();
  FUN_0040ee87();
  iVar2 = *(int *)(iVar2 + 0x108);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x108);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x18) = piVar6;
  iVar2 = (**(code **)(iVar2 + 0xfc))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x108);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x108) == 0) {
    FUN_00878dfb();
  }
  iVar2 = (**(code **)(*(int *)*piVar6 + 0xb4))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00403191();
  iVar2 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x108);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x18) = piVar6;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (bVar7) {
    FUN_00878dfb();
  }
  puVar3 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0x11c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_004489f5();
  FUN_0040ee87();
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x11c);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x18) = piVar6;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  iVar2 = *(int *)(unaff_EBP + -0x10);
  FUN_004489f5();
  FUN_0040ee87();
  iVar2 = *(int *)(iVar2 + 0x11c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x11c);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x18) = piVar6;
  iVar2 = (**(code **)(iVar2 + 0xfc))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x11c);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x11c) == 0) {
    FUN_00878dfb();
  }
  iVar2 = (**(code **)(*(int *)*piVar6 + 0xb4))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  if (*piVar6 == 0) {
    FUN_00878dfb();
  }
  iVar2 = (**(code **)(*(int *)*piVar6 + 0xe0))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00403191();
  iVar2 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x11c);
  iVar2 = *piVar6;
  *(int **)(unaff_EBP + -0x18) = piVar6;
  iVar2 = (**(code **)(iVar2 + 0x90))();
  if (iVar2 < 0) {
    iStack_198 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_1a0 = 0x63b5ee;
    iStack_19c = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_198 = 0x63b5fb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b606;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63b612;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b61d;
    FUN_00878dfb();
  }
  iStack_198 = 0x63b62b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_198 = 0x63b638;
  FUN_00403191();
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00679e4e(&puStack_1a4,0xe05);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_19c = 0x63b684;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63b699;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63b6aa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_198 = 0x63b6b7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b6c2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_198 = 0x63b6cf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b6da;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63b6e6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b6f1;
    FUN_00878dfb();
  }
  iStack_198 = 0x63b6fa;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_198 = 0x63b707;
  FUN_00403191();
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00679e4e(&puStack_1a4,0xe06);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_19c = 0x63b74e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63b763;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63b774;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_198 = 0x63b781;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b78c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_198 = 0x63b799;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b7a4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63b7b0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b7bb;
    FUN_00878dfb();
  }
  iStack_198 = 0x63b7c4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_198 = 0x63b7d1;
  FUN_00403191();
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00679e4e(&puStack_1a4,0xe07);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_19c = 0x63b818;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63b82d;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63b83e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_198 = 0x63b84b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b856;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_198 = 0x63b863;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b86e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63b87a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b885;
    FUN_00878dfb();
  }
  iStack_198 = 0x63b88e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_198 = 0x63b89b;
  FUN_00403191();
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00679e4e(&puStack_1a4,0xe08);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_19c = 0x63b8e2;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63b8f7;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63b908;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_198 = 0x63b915;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b920;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_198 = 0x63b92d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b938;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63b944;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63b94f;
    FUN_00878dfb();
  }
  iStack_198 = 0x63b95b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_198 = unaff_EBP + -0x48;
  iStack_19c = 0x63b965;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63b971;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_198 = 0x63b97b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_198 = unaff_EBP + -0x38;
  puStack_1a4 = &DAT_00980690;
  iStack_19c = 0x63b985;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63b991;
    FUN_00878dfb();
    puStack_1a4 = extraout_ECX_00;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x48;
  iStack_1a0 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00679e4e(&puStack_1a4,0xe09);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_19c = 0x63b9db;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63b9f0;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63ba01;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_198 = 0x63ba0e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63ba19;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_198 = 0x63ba26;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63ba31;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63ba3d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63ba48;
    FUN_00878dfb();
  }
  iStack_198 = 0x63ba4e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_198 = unaff_EBP + -0x38;
  iStack_19c = 0x63ba58;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63ba64;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_198 = 0x63ba6e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_198 = unaff_EBP + -0x48;
  puVar3 = &DAT_00980690;
  iStack_19c = 0x63ba78;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63ba84;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_1a4 = puVar3;
  FUN_00679e4e(&puStack_1a4,0xe0a);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_19c = 0x63bace;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63bae3;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63baf4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  iStack_198 = 0x63bb01;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bb0c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_198 = 0x63bb19;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bb24;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63bb30;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bb3b;
    FUN_00878dfb();
  }
  iStack_198 = 0x63bb41;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_198 = unaff_EBP + -0x38;
  iStack_19c = 0x63bb4b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63bb57;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_198 = 0x63bb61;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_198 = unaff_EBP + -0x48;
  puVar3 = &DAT_00980690;
  iStack_19c = 0x63bb6b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63bb77;
    FUN_00878dfb();
    puVar3 = extraout_ECX_02;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  puStack_1a4 = puVar3;
  FUN_00679e4e(&puStack_1a4,0xe0b);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_19c = 0x63bbc1;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63bbd6;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63bbe7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_198 = 0x63bbf4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bbff;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_198 = 0x63bc0c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bc17;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63bc23;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bc2e;
    FUN_00878dfb();
  }
  iStack_198 = 0x63bc34;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_198 = unaff_EBP + -0x38;
  iStack_19c = 0x63bc3e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63bc4a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_198 = 0x63bc54;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_198 = unaff_EBP + -0x48;
  puVar3 = &DAT_00980690;
  iStack_19c = 0x63bc5e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63bc6a;
    FUN_00878dfb();
    puVar3 = extraout_ECX_03;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  puStack_1a4 = puVar3;
  FUN_00679e4e(&puStack_1a4,0xe0c);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iStack_19c = 0x63bcb4;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63bcc9;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63bcda;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iStack_198 = 0x63bce7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bcf2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_198 = 0x63bcff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bd0a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63bd16;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bd21;
    FUN_00878dfb();
  }
  iStack_198 = 0x63bd27;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_198 = unaff_EBP + -0x38;
  iStack_19c = 0x63bd31;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63bd3d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  iStack_198 = 0x63bd47;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_198 = unaff_EBP + -0x48;
  puVar3 = &DAT_00980690;
  iStack_19c = 0x63bd51;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63bd5d;
    FUN_00878dfb();
    puVar3 = extraout_ECX_04;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  puStack_1a4 = puVar3;
  FUN_00679e4e(&puStack_1a4,0xe0d);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  iStack_19c = 0x63bda7;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63bdbc;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_198 = 0x63bdcd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iStack_198 = 0x63bdda;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bde5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  iStack_198 = 0x63bdf2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63bdfd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63be09;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_198 = 0x63be14;
    FUN_00878dfb();
  }
  iStack_198 = 0x63be1a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_198 = unaff_EBP + -0x38;
  iStack_19c = 0x63be24;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63be30;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_198 = 0x63be3a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_198 = unaff_EBP + -0x48;
  puVar3 = &DAT_00980690;
  iStack_19c = 0x63be44;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_198 = 0x63be50;
    FUN_00878dfb();
    puVar3 = extraout_ECX_05;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x38;
  iStack_1a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  puStack_1a4 = puVar3;
  FUN_00679e4e(&puStack_1a4,0xe0e);
  iVar2 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_19c = 0x63be9a;
  uVar4 = FUN_004032b4();
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_198 = 0x63beaf;
  iVar5 = FUN_0041a581();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    iStack_198 = 0x63bec0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_198 = 0x63becd;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x63bed8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_198 = 0x63bee5;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x63bef0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_198 = 0x63befc;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x63bf07;
    FUN_00878dfb();
  }
  *(undefined4 *)(iVar2 + 0x78) = 0;
  piVar6 = (int *)(iVar2 + 200);
  *(undefined4 *)(unaff_EBP + -0x10) = 3;
  do {
    iStack_198 = 0x63bf22;
    (**(code **)(*(int *)(*piVar6 + 4) + 0x1c))();
    piVar6 = piVar6 + 2;
    piVar1 = (int *)(unaff_EBP + -0x10);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  FUN_0063c00e();
  FUN_0063c0b7();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


