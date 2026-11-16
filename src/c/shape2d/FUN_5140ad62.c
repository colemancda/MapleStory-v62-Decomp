/* FUN_5140ad62 - 0x5140ad62 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __cdecl FUN_5140ad62(_onexit_t param_1)

{
  if (DAT_51411b94 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_51411b94,&DAT_51411b90);
  return;
}


