/* FUN_00649219 - 0x00649219 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00649219(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_ptr_0064687a_008ed368;
  extraout_ECX[-1] = &PTR_FUN_008ed31c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed318;
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  FUN_0074d4c3();
  piVar1 = (int *)extraout_ECX[0x40];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = extraout_ECX[0x3f];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar2 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x3f] = 0;
  }
  piVar1 = (int *)extraout_ECX[0x35];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x34];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x33];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_006496a7();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_006496a7();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_006496a7();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_006496a7();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_006496a7();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0064961c();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


