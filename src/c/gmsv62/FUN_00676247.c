/* FUN_00676247 - 0x00676247 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00676247(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 *puStack_88;
  
  FUN_00879bb8();
  puStack_88 = &DAT_00980690;
  iStack_8c = 0x676267;
  FUN_00403191();
  puStack_88 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_8c = 0x676275;
  FUN_00403191();
  puStack_88 = (undefined4 *)0x0;
  iStack_8c = 0;
  iStack_90 = unaff_EBP + -100;
  iStack_94 = unaff_EBP + -0x54;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_98;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_90 = 0x6762c1;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_88 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_8c = 0x6762d3;
  puStack_88 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_88 < 0) && (puStack_88 != (undefined4 *)0x80004002)) {
    iStack_8c = 0x6762e4;
    FUN_00878dfb();
  }
  puStack_88 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8c = 0x6762f1;
  puStack_88 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    iStack_8c = 0x6762fc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_88 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_8c = 0x676309;
  puStack_88 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    iStack_8c = 0x676314;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_88 = (undefined4 *)(unaff_EBP + -100);
  iStack_8c = 0x676321;
  puStack_88 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    iStack_8c = 0x67632c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_88 = (undefined4 *)0xae5;
  iStack_8c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_90 = 0x676353;
  puStack_88 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_8c = 0x676360;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_88 = (undefined4 *)0x67636c;
  FUN_00402676();
  puStack_88 = (undefined4 *)0x578;
  iStack_8c = 0x67637d;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    puStack_88 = (undefined4 *)0x0;
  }
  else {
    puStack_88 = (undefined4 *)0x67638f;
    puStack_88 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_8c = 0x6763a0;
  FUN_00450382();
  puStack_88 = (undefined4 *)(unaff_EBP + -0x24);
  iStack_8c = 0;
  iStack_90 = 0xf;
  iStack_94 = 0x9a;
  uStack_98 = 2;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + 0x34) = 0xb4;
  iStack_dc = unaff_EBP + -0x10;
  iStack_e0 = 0x67649b;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_dc = 0x6764aa;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa0),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_dc = 0x6764b7;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_dc = 0x6764c3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_dc = unaff_EBP + -0x44;
  iStack_e0 = 0x6764d1;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_dc = 0x6764dd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_dc = 0x6764e7;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_dc = unaff_EBP + -0x34;
  puStack_e8 = &DAT_00980690;
  iStack_e0 = 0x6764f5;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_dc = 0x676503;
    FUN_00878dfb();
    puStack_e8 = extraout_ECX_00;
  }
  iStack_dc = 0;
  iStack_e0 = unaff_EBP + -0x44;
  iStack_e4 = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e(&puStack_e8,0x4e9);
  iVar2 = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_e0 = 0x67654d;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  iStack_dc = 0x67655f;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_dc = 0x676570;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_dc = 0x676580;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_dc = 0x67658b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_dc = 0x676598;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_dc = 0x6765a3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_dc = 0x6765b0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_dc = 0x6765bb;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xb4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


