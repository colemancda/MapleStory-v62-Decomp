/* FUN_00574a8f - 0x00574a8f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00574a8f(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ebfa0;
  extraout_ECX[-1] = &PTR_LAB_008ebf54;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ebf50;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_0087a0b8(extraout_ECX + 0xdb0,4,0x17,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0087a0b8(extraout_ECX + 0xdaa,4,6,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087a0b8(extraout_ECX + 0xda8,4,2,FUN_0044973c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087a0b8(extraout_ECX + 0xd6c,4,0x3c,FUN_00411629);
  piVar1 = (int *)extraout_ECX[0xd6b];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0xd2f,4,0x3c,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0xcb7,8,0x3c,FUN_0044976a);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_00979414 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


