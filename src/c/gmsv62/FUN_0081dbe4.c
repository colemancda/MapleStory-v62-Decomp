/* FUN_0081dbe4 - 0x0081dbe4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081dbe4(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  FUN_00879bb8();
  FUN_0081e45c();
  FUN_0081f0e0();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  iStack_74 = 0x81dca6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_74 = unaff_EBP + -0x44;
  iStack_78 = 0x81dcb4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_74 = 0x81dcc0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_74 = 0x81dcca;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_74 = unaff_EBP + -0x34;
  puStack_80 = &DAT_00980690;
  iStack_78 = 0x81dcd8;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_74 = 0x81dce4;
    FUN_00878dfb();
    puStack_80 = extraout_ECX_00;
  }
  iStack_74 = 0;
  iStack_78 = unaff_EBP + -0x44;
  iStack_7c = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_80;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&puStack_80,0x8d6);
  iVar1 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_78 = 0x81dd30;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_74 = 0x81dd42;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_74 = 0x81dd53;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_74 = 0x81dd60;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_74 = 0x81dd6b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_74 = 0x81dd78;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_74 = 0x81dd83;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_74 = 0x81dd8f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_74 = 0x81dd9a;
    FUN_00878dfb();
  }
  iStack_74 = unaff_EBP + -0x10;
  iStack_78 = 0x81ddaa;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_74 = 0x81ddb5;
  FUN_007d3cdd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


