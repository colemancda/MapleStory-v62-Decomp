/* FUN_5040c648 - 0x5040c648 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


bool FUN_5040c648(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int *local_14;
  
  FUN_5042a430();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int ***)(unaff_EBP + -0x10) = &local_14;
  local_14 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  iVar2 = FUN_5040cc1a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    local_14 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2 == 0;
}


