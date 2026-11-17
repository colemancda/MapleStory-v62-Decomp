/* FUN_0048f523 - 0x0048f523 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048f523(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0xa0) = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_004ae046();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00495c26();
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + 8) = 1;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x78;
  do {
    iStack_70 = unaff_EBP + -0x18;
    iStack_74 = 0x48f5b6;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_70 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_74 = unaff_EBP + -0x14;
    iStack_78 = 0x48f5c9;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    iStack_70 = 0x48f5de;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_70 = unaff_EBP + -0x40;
    iStack_74 = 0x48f5e8;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_70 = 0x48f5f4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_70 = 0x48f5fe;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_70 = unaff_EBP + -0x30;
    iStack_74 = 0x48f608;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_70 = 0x48f614;
      FUN_00878dfb();
    }
    iStack_70 = 0;
    iStack_74 = unaff_EBP + -0x40;
    iStack_78 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_7c = 0x48f62c;
    uVar3 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_7c;
    FUN_004033a1(uVar3);
    iVar1 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_74 = 0x48f65e;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    iStack_70 = 0x48f66d;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_70 = 0x48f67e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_70 = 0x48f68b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_70 = 0x48f696;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_70 = 0x48f6a3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_70 = 0x48f6ae;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_70 = 0x48f6bb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_70 = 0x48f6c6;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
  } while (*(int *)(unaff_EBP + 8) < 10);
  *(undefined4 *)(extraout_ECX + 0x9c) = 1;
  FUN_0048faa2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


