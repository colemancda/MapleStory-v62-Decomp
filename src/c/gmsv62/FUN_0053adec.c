/* FUN_0053adec - 0x0053adec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053adec(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0) goto LAB_0053af48;
  iStack_28 = unaff_EBP + -0x10;
  piStack_24 = (int *)iVar2;
  FUN_004497f5();
  piStack_24 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piStack_24 == (int *)0x0) goto LAB_0053af48;
  if ((*(int *)(extraout_ECX + 0x274) == iVar2) && (*(int *)(unaff_EBP + 0x10) == 0)) {
    *(undefined4 *)(extraout_ECX + 0x278) = 0;
    *(undefined4 *)(extraout_ECX + 0x274) = 0;
LAB_0053ae5d:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if ((*(int *)(extraout_ECX + 0x27c) == iVar2) && (*(int *)(unaff_EBP + 0x10) == 0)) {
      *(undefined4 *)(extraout_ECX + 0x280) = 0;
      *(undefined4 *)(extraout_ECX + 0x27c) = 0;
      goto LAB_0053ae5d;
    }
    piStack_24 = (int *)0x0;
    *(int **)(unaff_EBP + 0x10) = &iStack_28;
    FUN_00679e4e(&iStack_28,0x959);
    iVar2 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar2);
    iStack_28 = FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_24 = (int *)FUN_00402bc3(unaff_EBP + -0x20);
    if ((int)piStack_24 < 0) {
      iStack_28 = 0x53aebb;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      *(undefined4 *)(extraout_ECX + 0x274) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x278) = *(undefined4 *)(unaff_EBP + 0xc);
    }
    piStack_24 = (int *)0x0;
    *(int **)(unaff_EBP + 0x10) = &iStack_28;
    FUN_00679e4e(&iStack_28,0x95a);
    iVar2 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar2);
    iStack_28 = FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_24 = (int *)FUN_00402bc3(unaff_EBP + -0x20);
    if ((int)piStack_24 < 0) {
      iStack_28 = 0x53af21;
      FUN_00878dfb();
    }
    if (iVar2 != 0) {
      *(undefined4 *)(extraout_ECX + 0x27c) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x280) = *(undefined4 *)(unaff_EBP + 0xc);
    }
    piStack_24 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_24 == (int *)0x0) goto LAB_0053af48;
  }
  iStack_28 = 0x53af48;
  (**(code **)(*piStack_24 + 8))();
LAB_0053af48:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


