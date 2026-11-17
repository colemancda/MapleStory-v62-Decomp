/* FUN_004a87de - 0x004a87de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a87de(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008e9cd0;
  extraout_ECX[-1] = &PTR_FUN_008e9c84;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9c80;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004a3086();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004a88c4();
  piVar1 = (int *)extraout_ECX[0x1c];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1b];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x19];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x18];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0047cf76();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b383d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


