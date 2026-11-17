/* ptr_00627a73 - 0x00627a73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00627a73(void)

{
  int *unaff_EBX;
  int unaff_EBP;
  undefined1 auStack_14 [4];
  
  *(undefined1 **)(unaff_EBP + 8) = auStack_14;
  FUN_00679d22(auStack_14,0xd6d);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


