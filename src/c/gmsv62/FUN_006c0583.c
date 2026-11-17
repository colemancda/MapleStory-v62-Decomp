/* FUN_006c0583 - 0x006c0583 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c0583(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008efaf8;
  extraout_ECX[-1] = &PTR_FUN_008efaac;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008efaa8;
  piVar1 = (int *)extraout_ECX[0x16c];
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_006c1ed3();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e5df();
  DAT_009791a4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


