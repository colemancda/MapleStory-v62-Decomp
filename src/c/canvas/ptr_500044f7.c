/* ptr_500044f7 - 0x500044f7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_500044f7(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_5001da54);
  }
  else {
    InterlockedIncrement(&DAT_5001da54);
  }
  return 0;
}


