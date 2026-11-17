/* FUN_006d1e5c - 0x006d1e5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d1e5c(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eff88;
  extraout_ECX[-1] = &PTR_FUN_008eff3c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eff38;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00470ed9();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087a0b8(extraout_ECX + 0x2c,0x20,3,FUN_006d1df3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  piVar1 = (int *)extraout_ECX[0x1f];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1e];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006d5f1b();
  DAT_0097bd60 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


