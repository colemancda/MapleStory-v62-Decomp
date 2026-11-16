/* thunk_FUN_51805603 - 0x518055fe in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_51805603(void)

{
  _DAT_5181ff00 = FUN_518019c0();
  if (_DAT_5181ff00 == (uint *)0x0) {
    _DAT_5181ff00 = (uint *)0x0;
  }
  else {
    *_DAT_5181ff00 = (uint)&PTR_LAB_5181812c;
    _DAT_5181ff00[1] = (uint)DAT_5181fdac;
    DAT_5181fdac = _DAT_5181ff00;
    _DAT_5181ff00[2] = 0;
    _DAT_5181ff00[3] = 0;
    _DAT_5181ff00[5] = 0;
    *_DAT_5181ff00 = (uint)&PTR_FUN_5181814c;
  }
  return;
}


