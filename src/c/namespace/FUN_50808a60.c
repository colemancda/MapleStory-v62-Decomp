/* FUN_50808a60 - 0x50808a60 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50808a60(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  int unaff_EBP;
  int *local_14;
  
  FUN_5080e090();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int ***)(unaff_EBP + -0x10) = &local_14;
  local_14 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  bVar2 = FUN_50808ac2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = extraout_var;
  if (piVar1 != (int *)0x0) {
    local_14 = piVar1;
    (**(code **)(*piVar1 + 8))();
    uVar3 = extraout_var_00;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return CONCAT31(uVar3,!bVar2);
}


