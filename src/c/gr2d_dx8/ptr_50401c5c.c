/* ptr_50401c5c - 0x50401c5c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50401c5c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_50438a3c);
  }
  else {
    InterlockedIncrement(&DAT_50438a3c);
  }
  return 0;
}


