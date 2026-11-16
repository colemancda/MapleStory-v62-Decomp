/* FUN_51802427 - 0x51802427 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51802427(void)

{
  DAT_5181ff08 = FUN_518019c0();
  if (DAT_5181ff08 == (uint *)0x0) {
    DAT_5181ff08 = (uint *)0x0;
  }
  else {
    *DAT_5181ff08 = (uint)&PTR_LAB_5181812c;
    DAT_5181ff08[1] = (uint)DAT_5181fdac;
    DAT_5181fdac = DAT_5181ff08;
    DAT_5181ff08[2] = 0;
    DAT_5181ff08[3] = 0;
    DAT_5181ff08[5] = 0;
    *DAT_5181ff08 = (uint)&PTR_FUN_51818128;
  }
  return;
}


