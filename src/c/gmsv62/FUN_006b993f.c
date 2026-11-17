/* FUN_006b993f - 0x006b993f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b993f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef9b8;
  extraout_ECX[-1] = &PTR_LAB_008ef96c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef968;
  *(undefined4 *)(unaff_EBP + -4) = 0x19;
  FUN_00445a30();
  piVar1 = (int *)extraout_ECX[0x19a];
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0087a0b8(extraout_ECX + 0x193,4,7,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0087a0b8(extraout_ECX + 400,4,3,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[399];
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0045e663();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00609ca4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087a0b8(extraout_ECX + 0x175,8,4,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  iVar2 = extraout_ECX[0x163];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 != 0) {
    FUN_006bdd25(0);
    extraout_ECX[0x163] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_006bde4d();
  iVar2 = extraout_ECX[0x15f];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_006bdcf7(0);
    extraout_ECX[0x15f] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  DAT_0097bd20 = 0;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


