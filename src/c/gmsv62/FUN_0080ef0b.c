/* FUN_0080ef0b - 0x0080ef0b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080ef0b(void)

{
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  int *piStack_18;
  int local_14;
  
  FUN_00879bb8();
  local_14 = *(int *)(unaff_EBP + 8);
  piStack_18 = (int *)0x80ef23;
  FUN_0081622a();
  local_14 = unaff_EBP + -0x18;
  piStack_18 = (int *)0x80ef32;
  FUN_00455c59();
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    local_14 = 0;
    piStack_18 = (int *)0x80ef42;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  local_14 = unaff_EBP + 8;
  piStack_18 = (int *)0x80ef51;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_14 = *(int *)(unaff_EBP + 8);
  piStack_18 = *(int **)(unaff_EBP + 8);
  *(int **)(unaff_EBP + -0x10) = &local_14;
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 4))();
  }
  piStack_18 = (int *)0x80ef74;
  (**(code **)(*extraout_ECX + 0x44))();
  piStack_18 = *(int **)(unaff_EBP + 8);
  piVar1 = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &piStack_18;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  FUN_0080efb3();
  piStack_18 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


