/* FUN_008289d5 - 0x008289d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008289d5(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2f2c;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x13] = &PTR_FUN_008f2f30;
  FUN_0043549d();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xd;
  extraout_ECX[0xd] = &PTR_FUN_008f2f3c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00829aa1();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00829a43();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[7] = &PTR_FUN_008f2f38;
  FUN_008299f2();
  if (extraout_ECX[4] != 0) {
    FUN_004030b1();
    extraout_ECX[4] = 0;
  }
  piVar1 = (int *)extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[1];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DAT_00978130 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


