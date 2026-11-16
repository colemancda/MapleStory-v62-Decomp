/* ptr_50403f15 - 0x50403f15 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50403f15(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (uint *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = (uint)(*(int *)(param_1 + 0x370) * 100) >> 7;
    uVar1 = 0;
  }
  return uVar1;
}


