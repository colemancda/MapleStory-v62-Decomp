/* FUN_00676be3 - 0x00676be3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00676be3(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1c;
  int *piStack_18;
  int *local_14;
  
  FUN_00879bb8();
  local_14 = *(int **)(unaff_EBP + 8);
  piStack_18 = (int *)0x676bfb;
  FUN_0081622a();
  local_14 = (int *)(unaff_EBP + -0x18);
  piStack_18 = (int *)0x676c0a;
  FUN_00455c59();
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    local_14 = (int *)0x0;
    piStack_18 = (int *)0x676c1a;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  local_14 = (int *)(unaff_EBP + 8);
  piStack_18 = (int *)0x676c29;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_14 = *(int **)(unaff_EBP + 8);
  piStack_18 = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &local_14;
  if (piStack_18 != (int *)0x0) {
    uStack_1c = 0x676c45;
    (**(code **)(*piStack_18 + 4))();
  }
  piStack_18 = (int *)0x676c4c;
  FUN_00676c8d();
  local_14 = (int *)0xc3;
  piStack_18 = *(int **)(extraout_ECX + 0xb0);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_1c;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_00676f93();
  local_14 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_14 != (int *)0x0) {
    piStack_18 = (int *)0x676c7e;
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


