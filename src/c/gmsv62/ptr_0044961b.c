/* ptr_0044961b - 0x0044961b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044961b(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


