/* FUN_518141f2 - 0x518141f2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518141f2(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_51819b30;
  extraout_ECX[0x16] = &PTR_ptr_5180ddaf_51819b28;
  extraout_ECX[0x17] = &PTR_LAB_51819b2c;
  piVar1 = (int *)extraout_ECX[0x19];
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
    piVar1 = (int *)extraout_ECX[0x1b];
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      (**(code **)(*piVar1 + 0x38))(piVar1,unaff_EBP + -0x20,1,0,0);
    }
  }
  if (extraout_ECX[0x20] != 0) {
    iVar2 = extraout_ECX[0x1f];
    *(undefined1 *)(unaff_EBP + -4) = 9;
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (((iVar2 != 0) && (extraout_ECX[0x18] != 0)) && (extraout_ECX[0x1d] != 0)) {
      FUN_51804b19();
      FUN_518100db();
      FUN_5181428f();
      return;
    }
    *(undefined4 *)(unaff_EBP + -4) = 8;
  }
  iVar2 = extraout_ECX[0x1f];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 != 0) {
    FUN_51813012((int)(extraout_ECX + 0x1e));
    extraout_ECX[0x1f] = 0;
  }
  piVar1 = (int *)extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1c];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1b];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x19];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x18];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51814de6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180cb4a(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


