/* FUN_00691d48 - 0x00691d48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00691d48(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_20;
  int *piStack_1c;
  int *local_18;
  
  FUN_00879bb8();
  local_18 = *(int **)(unaff_EBP + 8);
  piStack_1c = (int *)0x691d61;
  FUN_0081622a();
  local_18 = (int *)(unaff_EBP + -0x18);
  piStack_1c = (int *)0x691d70;
  FUN_00455c59();
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    local_18 = (int *)0x0;
    piStack_1c = (int *)0x691d83;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  local_18 = (int *)(unaff_EBP + 8);
  piStack_1c = (int *)0x691d92;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_18 = *(int **)(unaff_EBP + 8);
  piStack_1c = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &local_18;
  if (piStack_1c != (int *)0x0) {
    uStack_20 = 0x691dae;
    (**(code **)(*piStack_1c + 4))();
  }
  piStack_1c = (int *)0x691db5;
  FUN_00691e39();
  local_18 = *(int **)(unaff_EBP + 8);
  piStack_1c = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &local_18;
  if (piStack_1c != (int *)0x0) {
    uStack_20 = 0x691dcd;
    (**(code **)(*piStack_1c + 4))();
  }
  piStack_1c = (int *)0x691dd4;
  FUN_00692193();
  local_18 = (int *)0xbe;
  piStack_1c = *(int **)(extraout_ECX + 0xf4);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_0069249e();
  local_18 = (int *)0x1a2;
  piStack_1c = (int *)0x691e01;
  piStack_1c = (int *)FUN_0069349a();
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_0069249e();
  local_18 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_18 != (int *)0x0) {
    piStack_1c = (int *)0x691e29;
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


