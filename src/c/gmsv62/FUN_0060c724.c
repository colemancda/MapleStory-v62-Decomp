/* FUN_0060c724 - 0x0060c724 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060c724(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  undefined4 *puStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  
  FUN_00879bb8();
  iStack_98 = 0x60c745;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_98 = unaff_EBP + -0x38;
  iStack_9c = 0x60c754;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_98 = 0x60c760;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_98 = 0x60c76a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_98 = unaff_EBP + -0x48;
  puStack_a4 = &DAT_00980690;
  iStack_9c = 0x60c774;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_98 = 0x60c780;
    FUN_00878dfb();
    puStack_a4 = extraout_ECX_00;
  }
  iStack_98 = 0;
  iStack_9c = unaff_EBP + -0x38;
  iStack_a0 = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_a4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_9c = 0x60c7ce;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_98 = 0x60c7e0;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_98 = 0x60c7f1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_98 = 0x60c7fe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_98 = 0x60c809;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_98 = 0x60c816;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_98 = 0x60c821;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_98 = 0x60c82e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_98 = 0x60c839;
    FUN_00878dfb();
  }
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xffffffff;
  iStack_98 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x74) = 0xff000000;
  iStack_9c = 0x60c863;
  puVar3 = (undefined4 *)FUN_00679e4e();
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x7c) = *puVar3;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 2;
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0x100;
  *(undefined4 *)(unaff_EBP + -0x8c) = 2;
  *(undefined4 *)(unaff_EBP + -0x84) = 2;
  iStack_98 = 0x60c8bb;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_98 = 0x60c8e1;
  FUN_0045e196();
  iStack_98 = 0xf;
  iStack_9c = 0xe7;
  iStack_a0 = 0x15b;
  puStack_a4 = (undefined4 *)0xee;
  (**(code **)(**(int **)(extraout_ECX + 0x228) + 8))();
  FUN_008164fd();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1e0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1e8) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1c0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1c8) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1d0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1d8) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1f0) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x1f8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1f8) + 4) + 0x24))();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x200) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x200) + 4) + 0x24))();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x208) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x208) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x220) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x210) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x218) + 0x20))();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x230) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x230) + 0x34) = 200;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  iStack_238 = 0xab;
  iStack_23c = 0x101;
  iStack_240 = 0xa0;
  puStack_244 = (undefined4 *)0xef;
  *(undefined4 *)(*(int *)(extraout_ECX + 0x7c) + 0x34) = 0xfa;
  FUN_005c13f1();
  iStack_238 = unaff_EBP + -0x10;
  iStack_23c = 0x60d002;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_238 = 0x60d011;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x724),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_238 = 0x60d01e;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_238 = unaff_EBP + -0x10;
  iStack_23c = 0x60d028;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_238 = 0x60d037;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x728),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_238 = 0x60d044;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_238 = 0x60d050;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_238 = unaff_EBP + -0x48;
  iStack_23c = 0x60d05f;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_238 = 0x60d06b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_238 = 0x60d075;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_238 = unaff_EBP + -0x38;
  puVar3 = &DAT_00980690;
  iStack_23c = 0x60d07f;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_238 = 0x60d08d;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_238 = 0;
  iStack_23c = unaff_EBP + -0x48;
  iStack_240 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_244;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_244 = puVar3;
  FUN_00679e4e(&puStack_244,0x4e9);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_23c = 0x60d0d7;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_238 = 0x60d0e9;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_238 = 0x60d0fa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_238 = 0x60d107;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_238 = 0x60d112;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_238 = 0x60d11f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_238 = 0x60d12a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_238 = 0x60d137;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_238 = 0x60d142;
    FUN_00878dfb();
  }
  iStack_238 = 0;
  iStack_23c = 0x60d152;
  FUN_006118ad();
  *(undefined4 *)(extraout_ECX + 0x1b0) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b4) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


