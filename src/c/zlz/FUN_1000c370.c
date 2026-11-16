/* FUN_1000c370 - 0x1000c370 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_1000c370(_onexit_t param_1)

{
  if (DAT_10017020 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_10017020,&DAT_1001701c);
  return;
}


