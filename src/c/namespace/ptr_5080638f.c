/* ptr_5080638f - 0x5080638f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 ptr_5080638f(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    InterlockedDecrement(&DAT_5081e594);
  }
  else {
    InterlockedIncrement(&DAT_5081e594);
  }
  return 0;
}


