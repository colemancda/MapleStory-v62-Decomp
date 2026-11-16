/* FUN_50808ac2 - 0x50808ac2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


bool FUN_50808ac2(void)

{
  int *piVar1;
  int iVar2;
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
  iVar2 = FUN_5080905a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    local_14 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2 == 0;
}


