/* ptr_007738e8 - 0x007738e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007738e8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int extraout_ECX_00;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iStack_8 = 0x773908;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  iStack_8 = 0x773931;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  iStack_8 = 0x77395a;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00414f8b();
  FUN_00414f8b();
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  iStack_8 = 0x773994;
  FUN_00414edd();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_8 = 0x7739ac;
  iVar1 = FUN_00402e32();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  puVar4 = &DAT_00980690;
  iStack_8 = 0x7739d4;
  iVar1 = FUN_00402e32();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
    puVar4 = extraout_ECX;
  }
  iStack_8 = unaff_EBP + -0x5c;
  iStack_c = unaff_EBP + -0x4c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_10;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_10 = puVar4;
  FUN_00679e4e(&puStack_10,0x827);
  iVar1 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_8 = 0x773a27;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  iVar1 = FUN_00404b30();
  if ((iVar1 < (int)unaff_EBX) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  puStack_10 = &iStack_8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_8;
  iStack_c = 0x82d;
  iStack_8 = iVar1;
  FUN_00679e4e();
  iStack_c = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_10 = (undefined4 *)0x773ab4;
  FUN_0040263d();
  puStack_10 = (undefined4 *)0x773abb;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_8 = 0x773ac6;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  iVar1 = FUN_0041a581();
  if ((iVar1 < (int)unaff_EBX) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


