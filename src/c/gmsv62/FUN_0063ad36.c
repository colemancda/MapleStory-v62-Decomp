/* FUN_0063ad36 - 0x0063ad36 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063ad36(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ed2b0;
  extraout_ECX[-1] = &PTR_LAB_008ed264;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed260;
  piVar1 = (int *)extraout_ECX[0x45];
  *(undefined4 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087a0b8(extraout_ECX + 0x41,4,4,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[0x40];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x3a,4,6,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[0x39];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = extraout_ECX[0x38];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x38] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x2f,8,3,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


