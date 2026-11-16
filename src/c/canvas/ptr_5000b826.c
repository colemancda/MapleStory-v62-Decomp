/* ptr_5000b826 - 0x5000b826 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_5000b826(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || ((3 < param_2 && ((param_2 < 0x11 || (0x13 < param_2)))))) {
    uVar1 = 0x80070057;
  }
  else {
    DAT_50082010 = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


