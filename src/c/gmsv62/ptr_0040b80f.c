/* ptr_0040b80f - 0x0040b80f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0040b80f(int param_1)

{
  int *piVar1;
  int unaff_EBP;
  int *unaff_EDI;
  
  (**(code **)(param_1 + 8))();
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != unaff_EDI) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    FUN_00413059(unaff_EDI);
    *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


