/* ptr_514076e8 - 0x514076e8 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 ptr_514076e8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((DAT_51411afc == 0) || (-1 < param_2 - DAT_51411afc)) {
    DAT_51411afc = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}


