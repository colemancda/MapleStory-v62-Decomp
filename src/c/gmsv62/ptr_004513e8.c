/* ptr_004513e8 - 0x004513e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004513e8(void)

{
  int *piVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_ESI + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


