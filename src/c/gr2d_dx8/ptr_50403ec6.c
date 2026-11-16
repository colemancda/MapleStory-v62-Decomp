/* ptr_50403ec6 - 0x50403ec6 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50403ec6(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0x17) {
      uStack_4 = 0x10;
    }
    else if (*(int *)(param_1 + 0x2c) == 0x16) {
      uStack_4 = 0x20;
    }
    else {
      uStack_4 = 0;
    }
    *param_2 = uStack_4;
    uVar1 = 0;
  }
  return uVar1;
}


