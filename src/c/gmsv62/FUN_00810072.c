/* FUN_00810072 - 0x00810072 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00810072(void)

{
  int *piVar1;
  int unaff_EBP;
  int *local_c;
  
  FUN_00879bb8();
  local_c = *(int **)(unaff_EBP + 8);
  FUN_0080ef0b();
  local_c = (int *)(unaff_EBP + 8);
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_c = *(int **)(unaff_EBP + 8);
  piVar1 = *(int **)(unaff_EBP + 8);
  *(int ***)(unaff_EBP + -0x10) = &local_c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  FUN_008105c7();
  local_c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


