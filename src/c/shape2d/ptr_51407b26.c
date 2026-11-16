/* ptr_51407b26 - 0x51407b26 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int ptr_51407b26(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_514072cf();
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_51407a34();
  }
  return iVar1;
}


