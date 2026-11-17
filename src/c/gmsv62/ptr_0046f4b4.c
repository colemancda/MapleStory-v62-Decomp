/* ptr_0046f4b4 - 0x0046f4b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046f4b4(void)

{
  int *piVar1;
  int *unaff_EBX;
  int unaff_EBP;
  
  FUN_004030b1();
  *(int **)(unaff_EBP + 8) = unaff_EBX;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


