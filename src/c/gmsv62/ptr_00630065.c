/* ptr_00630065 - 0x00630065 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00630065(void)

{
  int in_EAX;
  undefined4 *in_stack_00000014;
  
  if (in_stack_00000014 != (undefined4 *)0x0) {
    *(undefined4 *)(in_EAX + 0xc) = *in_stack_00000014;
  }
  return;
}


