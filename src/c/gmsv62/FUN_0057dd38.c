/* FUN_0057dd38 - 0x0057dd38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057dd38(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ec1e8;
  extraout_ECX[-1] = &PTR_LAB_008ec19c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ec198;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e64d();
  if (extraout_ECX[0x47] != 0) {
    FUN_004030b1();
    extraout_ECX[0x47] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  piVar1 = (int *)extraout_ECX[0x33];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DAT_0097943c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004de580();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


