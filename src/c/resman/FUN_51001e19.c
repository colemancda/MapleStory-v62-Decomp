/* FUN_51001e19 - 0x51001e19 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_51001e19(void)

{
  _DAT_5100987c = FUN_51001acd();
  if (_DAT_5100987c == (uint *)0x0) {
    _DAT_5100987c = (uint *)0x0;
  }
  else {
    *_DAT_5100987c = (uint)&PTR_LAB_510061e0;
    _DAT_5100987c[1] = (uint)DAT_510097ec;
    DAT_510097ec = _DAT_5100987c;
    _DAT_5100987c[2] = 0;
    _DAT_5100987c[3] = 0;
    _DAT_5100987c[5] = 0;
    *_DAT_5100987c = (uint)&PTR_FUN_510061dc;
  }
  return;
}


