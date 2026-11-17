/* FUN_006aa36c - 0x006aa36c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006aa36c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef658;
  extraout_ECX[-1] = &PTR_LAB_008ef60c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef608;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_0087a0b8(extraout_ECX + 0x167,4,3,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[0x166];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074d4c3();
  iVar2 = extraout_ECX[0x1f];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_00449913(0);
    extraout_ECX[0x1f] = 0;
  }
  iVar2 = extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    FUN_00449913(0);
    extraout_ECX[0x1d] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


