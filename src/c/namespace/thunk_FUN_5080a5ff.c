/* thunk_FUN_5080a5ff - 0x5080a5fa in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_5080a5ff(void)

{
  _DAT_5081eb58 = FUN_50803b07();
  if (_DAT_5081eb58 == (uint *)0x0) {
    _DAT_5081eb58 = (uint *)0x0;
  }
  else {
    *_DAT_5081eb58 = (uint)&PTR_LAB_50817760;
    _DAT_5081eb58[1] = (uint)DAT_5081e9dc;
    DAT_5081e9dc = _DAT_5081eb58;
    _DAT_5081eb58[2] = 0;
    _DAT_5081eb58[3] = 0;
    _DAT_5081eb58[5] = 0;
    *_DAT_5081eb58 = (uint)&PTR_FUN_508177c8;
  }
  return;
}


