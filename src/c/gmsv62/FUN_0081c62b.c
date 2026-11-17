/* FUN_0081c62b - 0x0081c62b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0081c62b(void)

{
  int *piVar1;
  int *piVar2;
  int *unaff_EBX;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + 8);
  *piVar2 = (int)piVar1;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}


