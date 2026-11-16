/* FUN_50008160 - 0x50008160 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50008160(uint param_1,uint param_2)

{
  if ((param_2 & 0xff000000) == 0xff000000) {
    param_1 = FUN_50004a0b(param_2);
  }
  else if ((param_2 & 0xff000000) != 0) {
    param_1 = FUN_50008086(param_1,param_2,0xff);
  }
  return param_1;
}


