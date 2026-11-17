/* FUN_006d2aec - 0x006d2aec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d2aec(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *local_c;
  
  FUN_00879bb8();
  local_c = *(int **)(unaff_EBP + 8);
  FUN_0081622a();
  local_c = (int *)(unaff_EBP + 8);
  FUN_00448dc6();
  iVar1 = *(int *)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    local_c = *(int **)(unaff_EBP + 8);
    piVar2 = *(int **)(unaff_EBP + 8);
    *(int ***)(unaff_EBP + -0x10) = &local_c;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    FUN_006d4d4e();
    local_c = *(int **)(unaff_EBP + 8);
    piVar2 = *(int **)(unaff_EBP + 8);
    *(int ***)(unaff_EBP + -0x10) = &local_c;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    FUN_006d4ed2();
  }
  local_c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


