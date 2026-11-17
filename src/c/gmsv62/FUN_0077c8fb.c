/* FUN_0077c8fb - 0x0077c8fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077c8fb(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1548;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_007825fd();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007825fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_007825fd();
  piVar1 = (int *)extraout_ECX[8];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[7];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(extraout_ECX + 1,4,6,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


