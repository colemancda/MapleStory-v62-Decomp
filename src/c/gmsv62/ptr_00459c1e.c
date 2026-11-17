/* ptr_00459c1e - 0x00459c1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00459c1e(void)

{
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  
  FUN_00459cb5();
  FUN_004751b2();
  *(undefined4 *)(unaff_EDI + 0x18) = 1;
  if (*(int *)(unaff_EDI + 0x500) == 9) {
    *(undefined4 *)(unaff_EDI + 0x4c4) = unaff_ESI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e742();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (*(int *)(unaff_EBP + -0x38) != unaff_EBX) {
    FUN_0045e794();
    *(int *)(unaff_EBP + -0x38) = unaff_EBX;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


