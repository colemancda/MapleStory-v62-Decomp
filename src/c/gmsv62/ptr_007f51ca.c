/* ptr_007f51ca - 0x007f51ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_007f51ca(void)

{
  undefined4 uVar1;
  undefined2 *in_stack_00000018;
  
  if (in_stack_00000018 == (undefined2 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *in_stack_00000018 = 0;
    uVar1 = 0;
  }
  return uVar1;
}


