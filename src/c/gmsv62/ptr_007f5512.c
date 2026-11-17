/* ptr_007f5512 - 0x007f5512 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_007f5512(undefined4 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *param_2 = 0xd;
    uVar1 = 0;
  }
  return uVar1;
}


