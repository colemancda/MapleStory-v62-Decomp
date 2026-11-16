/* ptr_5140770d - 0x5140770d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 ptr_5140770d(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = 0xd;
      FUN_51407742();
    }
    uVar1 = 0;
  }
  return uVar1;
}


