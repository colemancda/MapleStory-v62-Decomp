/* FUN_00529b0c - 0x00529b0c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00529b0c(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eb460;
  extraout_ECX[-1] = &PTR_LAB_008eb414;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb410;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x25,4,0xc,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  piVar1 = (int *)extraout_ECX[0x20];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1c,4,4,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x17,4,5,FUN_004115cc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


