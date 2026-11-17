/* FUN_007e6a79 - 0x007e6a79 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e6a79(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f2000;
  extraout_ECX[-1] = &PTR_LAB_008f1fb4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1fb0;
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  FUN_004497b5();
  FUN_00450514();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_004505d7();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0064961c();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_0087a0b8(extraout_ECX + 0x18e,8,7,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00609ca4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0074d4c3();
  piVar1 = (int *)extraout_ECX[0x49];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x48];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_007eeb72();
  iVar2 = extraout_ECX[0x45];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 != 0) {
    FUN_0045e7c2(0);
    extraout_ECX[0x45] = 0;
  }
  iVar2 = extraout_ECX[0x43];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x43] = 0;
  }
  iVar2 = extraout_ECX[0x41];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 != 0) {
    FUN_007eeab2(0);
    extraout_ECX[0x41] = 0;
  }
  piVar1 = (int *)extraout_ECX[0x3f];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x3e];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x3d];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x3c];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x3b];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_007eeae0();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


