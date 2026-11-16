/* FUN_50012dbb - 0x50012dbb in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_50012dbb(_onexit_t param_1)

{
  if (DAT_50086510 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_50086510,&DAT_5008650c);
  return;
}


