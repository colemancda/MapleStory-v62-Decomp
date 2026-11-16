/* ptr_51002283 - 0x51002283 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 ptr_51002283(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_510092e4);
  }
  else {
    InterlockedIncrement(&DAT_510092e4);
  }
  return 0;
}


