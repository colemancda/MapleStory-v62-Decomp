/* FUN_50410e65 - 0x50410e65 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_50410e65(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1 - param_2;
  if ((_DAT_5042e154 < fVar1 != (_DAT_5042e154 == fVar1)) &&
     (fVar1 < _DAT_5042e150 != (fVar1 == _DAT_5042e150))) {
    return 1;
  }
  return 0;
}


