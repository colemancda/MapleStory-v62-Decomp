/* FUN_006fd79c - 0x006fd79c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fd79c(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0640;
  extraout_ECX[-1] = &PTR_FUN_008f05f4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f05f0;
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x17c] = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087a0b8(extraout_ECX + 0x179,4,3,thunk_FUN_0064961c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0087a0b8(extraout_ECX + 0x176,4,3,thunk_FUN_0064961c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00705ddf();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087a0b8(extraout_ECX + 0x171,4,3,&LAB_00705b7f);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00426311();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450514();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x16b,4,4,FUN_0044973c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x167,4,4,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[0x166];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e5df();
  DAT_0097bdc0 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


