/* FUN_0047d0e2 - 0x0047d0e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0047d0e2(void)

{
  int *piVar1;
  char cVar2;
  int unaff_EBP;
  int *local_14;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int ***)(unaff_EBP + -0x10) = &local_14;
  local_14 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  cVar2 = FUN_0047e060();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    local_14 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return cVar2 == '\0';
}


