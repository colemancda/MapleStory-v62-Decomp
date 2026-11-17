/* FUN_004990a7 - 0x004990a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004990a7(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x38) + 1;
  if ((iVar1 < *(int *)(extraout_ECX + 0x3c)) || (*(int *)(extraout_ECX + 100) == 0)) {
    *(int *)(extraout_ECX + 0x38) = iVar1 % *(int *)(extraout_ECX + 0x3c);
    piStack_24 = (int *)0x4990d7;
    uVar2 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x44) = uVar2;
    piStack_24 = (int *)(unaff_EBP + -0x10);
    uStack_28 = 0x4990e5;
    FUN_00498bb6();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_24 = (int *)0x78;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_28;
    FUN_00679e4e(&uStack_28,0x474);
    iVar1 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004115d9(iVar1);
    FUN_00404e7f(iVar1);
    iVar1 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d(iVar1);
    uStack_28 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar2 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x40) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_24 = (int *)FUN_00402bc3(unaff_EBP + -0x28);
    if ((int)piStack_24 < 0) {
      uStack_28 = 0x499155;
      FUN_00878dfb();
    }
    piStack_24 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_24 != (int *)0x0) {
      uStack_28 = 0x499166;
      (**(code **)(*piStack_24 + 8))();
    }
    piStack_24 = (int *)0x49916d;
    FUN_004b3daf();
    piStack_24 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_24 != (int *)0x0) {
      uStack_28 = 0x49917e;
      (**(code **)(*piStack_24 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


