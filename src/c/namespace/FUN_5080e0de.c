/* FUN_5080e0de - 0x5080e0de in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_5080e0de(_onexit_t param_1)

{
  if (DAT_5081ebdc == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_5081ebdc,&DAT_5081ebd8);
  return;
}


