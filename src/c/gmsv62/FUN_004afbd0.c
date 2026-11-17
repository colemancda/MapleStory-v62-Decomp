/* FUN_004afbd0 - 0x004afbd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004afbd0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  iStack_4c = 0x4afbeb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_4c = unaff_EBP + -0x38;
  iStack_50 = 0x4afbfa;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4c = 0x4afc06;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x4afc10;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_4c = unaff_EBP + -0x28;
  puStack_58 = &DAT_00980690;
  iStack_50 = 0x4afc1a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4c = 0x4afc26;
    FUN_00878dfb();
    puStack_58 = extraout_ECX;
  }
  iStack_4c = 0;
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = unaff_EBP + -0x28;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_58;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_58,0x4f6);
  iVar1 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x4afc72;
  iVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  if (iVar1 != 0) {
    iStack_4c = 0x4afc89;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_4c = 0x4afc9a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_4c = 0x4afca7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4c = 0x4afcb2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_4c = 0x4afcbf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4c = 0x4afcca;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_4c = 0x4afcd7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4c = 0x4afce2;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_4c = 0x4afd01;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


