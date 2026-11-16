/* ptr_5140316c - 0x5140316c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 ptr_5140316c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_51411574);
  }
  else {
    InterlockedIncrement(&DAT_51411574);
  }
  return 0;
}


