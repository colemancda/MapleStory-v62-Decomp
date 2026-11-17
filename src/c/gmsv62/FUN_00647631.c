/* FUN_00647631 - 0x00647631 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00647631(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int *piStack_1c;
  int *local_18;
  
  FUN_00879bb8();
  local_18 = *(int **)(unaff_EBP + 8);
  piStack_1c = (int *)0x64764a;
  FUN_0081622a();
  local_18 = (int *)(unaff_EBP + -0x18);
  piStack_1c = (int *)0x647659;
  iVar1 = FUN_00455c59();
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    local_18 = (int *)0x0;
    piStack_1c = (int *)0x64766c;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  local_18 = (int *)(unaff_EBP + 8);
  piStack_1c = (int *)0x64767b;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_18 = *(int **)(unaff_EBP + 8);
  piStack_1c = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &local_18;
  if (piStack_1c != (int *)0x0) {
    (**(code **)(*piStack_1c + 4))();
  }
  piStack_1c = (int *)0x64769e;
  FUN_00647709();
  local_18 = *(int **)(unaff_EBP + 8);
  piStack_1c = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &local_18;
  if (piStack_1c != (int *)0x0) {
    (**(code **)(*piStack_1c + 4))();
  }
  piStack_1c = (int *)0x6476bd;
  FUN_00647e19();
  local_18 = *(int **)(iVar1 + 0xad);
  piStack_1c = (int *)(iVar1 + 0xa5);
  piVar2 = (int *)FUN_00413367();
  piStack_1c = local_18;
  *(int ***)(unaff_EBP + -0x10) = &piStack_1c;
  local_18 = piVar2;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_00648506();
  local_18 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_18 != (int *)0x0) {
    piStack_1c = (int *)0x6476f9;
    (**(code **)(*local_18 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


