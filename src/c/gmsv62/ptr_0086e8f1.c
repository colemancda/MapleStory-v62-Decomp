/* ptr_0086e8f1 - 0x0086e8f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0086e8f1(void)

{
  undefined4 uVar1;
  code *unaff_EBP;
  code *in_stack_00000034;
  int in_stack_0000003c;
  
  uVar1 = FUN_00875080(&DAT_0096e3e0,in_stack_0000003c + 0x2b10,0x34);
  FUN_0087d05a(&stack0x000001d4,0x104,uVar1);
  (*in_stack_00000034)();
  GetLastError();
  (*unaff_EBP)();
  (*unaff_EBP)();
  return;
}


