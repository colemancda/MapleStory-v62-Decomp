/* FUN_0077ac9c - 0x0077ac9c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077ac9c(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f1500;
  extraout_ECX[-1] = &PTR_FUN_008f14b4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f14b0;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_006b0ec7(extraout_ECX + -2);
  if ((undefined4 *)extraout_ECX[0x205] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[0x205])(1);
  }
  if ((undefined4 *)extraout_ECX[0x206] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[0x206])(1);
  }
  if ((undefined4 *)extraout_ECX[0x207] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[0x207])(1);
  }
  if ((undefined4 *)extraout_ECX[0x208] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[0x208])(1);
  }
  if ((undefined4 *)extraout_ECX[0x20a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[0x20a])(1);
  }
  if ((DAT_0097bef0 != 0) && (FUN_00815de9(), DAT_0097bef0 != 0)) {
    (*(code *)**(undefined4 **)(DAT_0097bef0 + 8))(1);
  }
  if ((DAT_0097befc != 0) && (FUN_00815de9(), DAT_0097befc != 0)) {
    (*(code *)**(undefined4 **)(DAT_0097befc + 8))(1);
  }
  if ((DAT_0097bef8 != 0) && (FUN_00815de9(), DAT_0097bef8 != 0)) {
    (*(code *)**(undefined4 **)(DAT_0097bef8 + 8))(1);
  }
  piVar1 = (int *)extraout_ECX[0x20d];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x20c];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x20b];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0087a0b8(extraout_ECX + 0x1d9,8,2,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087a0b8(extraout_ECX + 0x1bb,8,0xf,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087a0b8(extraout_ECX + 0x1a3,8,0xc,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x197,8,6,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x17f,8,0xc,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x16d,8,9,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x161,8,6,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e5df();
  DAT_0097bef4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


