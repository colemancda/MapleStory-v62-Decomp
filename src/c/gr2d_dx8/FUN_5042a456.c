/* FUN_5042a456 - 0x5042a456 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_5042a456(_onexit_t param_1)

{
  if (DAT_504390e0 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_504390e0,&DAT_504390dc);
  return;
}


