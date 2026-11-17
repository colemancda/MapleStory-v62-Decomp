/* ptr_004e0bd9 - 0x004e0bd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004e0bd9(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 *puVar1;
  
  FUN_0060142b(0x83,unaff_EDI);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00457cda();
  FUN_00457d37();
  puVar1 = &stack0xfffffffc;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffffc;
  FUN_004e21db(&stack0xfffffffc);
  FUN_004dee9b(puVar1);
  FUN_00459cb5();
  FUN_004751b2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  if ((*(int *)(unaff_ESI + 0xbc) != unaff_EBX) || (*(int *)(DAT_00978368 + 0x3234) == unaff_EDI)) {
    FUN_004de7d7();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


