/* FUN_007614e0 - 0x007614e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007614e0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f11dc;
  extraout_ECX[-1] = &PTR_FUN_008f1190;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f118c;
  *(undefined4 *)(unaff_EBP + -4) = 0x1c;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00766e22();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00766e22();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0087a0b8(extraout_ECX + 0x1a6,4,3,FUN_00411629);
  piVar1 = (int *)extraout_ECX[0x1a5];
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0087a0b8(extraout_ECX + 0x191,4,3,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  iVar2 = extraout_ECX[0x183];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar2 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x183] = 0;
  }
  iVar2 = extraout_ECX[0x181];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar2 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x181] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0087a0b8(extraout_ECX + 0x17c,4,3,thunk_FUN_00445a30);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00766beb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00766bd5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00766bbf();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0087a0b8(extraout_ECX + 0x16e,8,3,thunk_FUN_00450463);
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
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  DAT_0097951c = 0;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


