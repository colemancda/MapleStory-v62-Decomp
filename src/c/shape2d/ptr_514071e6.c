/* ptr_514071e6 - 0x514071e6 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 ptr_514071e6(void)

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


