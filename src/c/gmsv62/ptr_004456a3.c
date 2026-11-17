/* ptr_004456a3 - 0x004456a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004456a3(void)

{
  int unaff_EBX;
  int in_stack_00000020;
  
  FUN_00878e09();
  *(uint *)(unaff_EBX + 0x480) = (uint)(in_stack_00000020 == 0);
  return;
}


