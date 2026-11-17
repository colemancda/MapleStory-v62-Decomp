/* FUN_0060c526 - 0x0060c526 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060c526(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ecf70;
  extraout_ECX[-1] = &PTR_LAB_008ecf24;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ecf20;
  iVar1 = extraout_ECX[100];
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  if (iVar1 != 0) {
    FUN_00815de9();
    FUN_00611656();
  }
  if (extraout_ECX[0x2e] == 0) {
    *(undefined4 *)(DAT_00978368 + 0x2d08) = 0;
  }
  piVar2 = (int *)extraout_ECX[0x1c9];
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x1c8];
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x1c7];
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x1c6];
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x1c5];
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0087a0b8(extraout_ECX + 0x7b,8,3,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450463();
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
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00611656();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006117eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0061175c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005c027d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


