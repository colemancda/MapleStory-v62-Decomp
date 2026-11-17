/* FUN_0055e249 - 0x0055e249 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0055e249(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ebb70;
  extraout_ECX[-1] = &PTR_LAB_008ebb24;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ebb20;
  piVar1 = (int *)extraout_ECX[0x167];
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x166];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0x21] != 0) {
    FUN_00449913(0);
    extraout_ECX[0x21] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


