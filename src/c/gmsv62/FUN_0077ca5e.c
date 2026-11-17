/* FUN_0077ca5e - 0x0077ca5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077ca5e(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f154c;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x19,0x7c,2,&LAB_0077cb16);
  piVar1 = (int *)extraout_ECX[0x17];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x11,4,5,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0xc,4,5,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  piVar1 = (int *)extraout_ECX[9];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(extraout_ECX + 1,4,8,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


