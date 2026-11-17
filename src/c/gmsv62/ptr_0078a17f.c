/* ptr_0078a17f - 0x0078a17f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078a17f(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != unaff_EBX) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  (**(code **)(**(int **)(unaff_ESI + 0x68) + 0x20))();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


