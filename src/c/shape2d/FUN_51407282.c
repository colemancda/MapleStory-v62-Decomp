/* FUN_51407282 - 0x51407282 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51407282(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_514072cf();
  }
  else {
    iVar1 = FUN_51406adc();
    if (-1 < iVar1) {
      FUN_51406c64();
    }
  }
  return 0;
}


