/* FUN_00551616 - 0x00551616 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00551616(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  piStack_50 = (int *)0x551634;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_50 = (int *)(unaff_EBP + -0x3c);
  iStack_54 = 0x551643;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_50 = (int *)0x55164f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_50 = (int *)0x551659;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_50 = (int *)(unaff_EBP + -0x2c);
  puStack_5c = &DAT_00980690;
  iStack_54 = 0x551663;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_50 = (int *)0x55166f;
    FUN_00878dfb();
    puStack_5c = extraout_ECX_00;
  }
  piStack_50 = (int *)0x0;
  iStack_54 = unaff_EBP + -0x3c;
  iStack_58 = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_5c,0x90c);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_54 = 0x5516bb;
  iVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  if (iVar1 != 0) {
    piStack_50 = (int *)0x5516d2;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_50 = (int *)0x5516e3;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_50 = (int *)0x5516f0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_50 = (int *)0x5516fb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_50 = (int *)0x551708;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_50 = (int *)0x551713;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_50 = (int *)0x551720;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_50 = (int *)0x55172b;
    FUN_00878dfb();
  }
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffb4;
  if (piStack_50 != (int *)0x0) {
    iStack_54 = 0x551743;
    (**(code **)(*piStack_50 + 4))();
  }
  piStack_50 = (int *)0x55174b;
  FUN_0055176a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_50 = (int *)0x55175c;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


