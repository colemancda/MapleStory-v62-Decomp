/* ptr_5040a473 - 0x5040a473 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_5040a473(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((((int)param_2 < 0) || (7 < (int)param_2)) || (((param_2 & 2) != 0 && ((param_2 & 1) != 0))))
  {
    uVar1 = 0x80070057;
  }
  else {
    *(uint *)(param_1 + 0x50) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


