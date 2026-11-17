/* FUN_0055779a - 0x0055779a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0055779a(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_00404960(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004035f5(uVar3);
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xc))
                      (*(int **)(unaff_EBP + -0x14),1,unaff_EBP + -0x3c,unaff_EBP + -0x1c);
    if (iVar4 != 0) break;
    FUN_00405a23(unaff_EBP + -0x10,unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(undefined4 **)(unaff_EBP + -0x10) == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined4 **)(unaff_EBP + -0x10);
    }
    uVar3 = FUN_0087bb75(uVar3,unaff_EBP + -0x20,10);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
    if (**(short **)(unaff_EBP + -0x20) == 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
      FUN_0055a65a(unaff_EBP + -0x28,unaff_EBP + -0x24);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


