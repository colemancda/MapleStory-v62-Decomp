/* thunk_FUN_50002706 - 0x50002701 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_50002706(void)

{
  _DAT_500864f0 = FUN_500023f6();
  if (_DAT_500864f0 == (uint *)0x0) {
    _DAT_500864f0 = (uint *)0x0;
  }
  else {
    *_DAT_500864f0 = (uint)&PTR_LAB_500140ec;
    _DAT_500864f0[1] = (uint)DAT_50081ecc;
    DAT_50081ecc = _DAT_500864f0;
    _DAT_500864f0[2] = 0;
    _DAT_500864f0[3] = 0;
    _DAT_500864f0[5] = 0;
    *_DAT_500864f0 = (uint)&PTR_FUN_500140f4;
  }
  return;
}


