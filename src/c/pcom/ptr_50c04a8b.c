/* ptr_50c04a8b - 0x50c04a8b in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 ptr_50c04a8b(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_50c1ca34);
  }
  else {
    InterlockedIncrement(&DAT_50c1ca34);
  }
  return 0;
}


