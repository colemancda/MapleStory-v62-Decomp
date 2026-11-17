/* ptr_0073733a - 0x0073733a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0073733a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  iVar1 = FUN_004029b9(unaff_EBX);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x20))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


