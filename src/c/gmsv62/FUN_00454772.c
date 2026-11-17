/* FUN_00454772 - 0x00454772 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454772(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008e90e0;
  extraout_ECX[-1] = &PTR_LAB_008e9094;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9090;
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  extraout_ECX[0xfa] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  piVar1 = (int *)extraout_ECX[0xf9];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0xf8];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0xf7];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0xf6];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0xf5];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045e5f5();
  iVar2 = extraout_ECX[0xf2];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 != 0) {
    FUN_0045e7f1(0);
    extraout_ECX[0xf2] = 0;
  }
  extraout_ECX[0x21] = &PTR_LAB_008e84a0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  _DAT_009784b4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


