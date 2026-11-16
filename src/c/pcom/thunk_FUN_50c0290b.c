/* thunk_FUN_50c0290b - 0x50c02906 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_50c0290b(void)

{
  _DAT_50c214e0 = FUN_50c025fb();
  if (_DAT_50c214e0 == (uint *)0x0) {
    _DAT_50c214e0 = (uint *)0x0;
  }
  else {
    *_DAT_50c214e0 = (uint)&PTR_LAB_50c130c4;
    _DAT_50c214e0[1] = (uint)DAT_50c2130c;
    DAT_50c2130c = _DAT_50c214e0;
    _DAT_50c214e0[2] = 0;
    _DAT_50c214e0[3] = 0;
    _DAT_50c214e0[5] = 0;
    *_DAT_50c214e0 = (uint)&PTR_FUN_50c130cc;
  }
  return;
}


