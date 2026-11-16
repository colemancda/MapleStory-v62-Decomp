/* FUN_51802d77 - 0x51802d77 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_51802d77(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_5181f8cc = &DAT_5181e190;
    _DAT_5181f878 = &DAT_5181f88c;
    _DAT_5181f88c = 0x54;
    _DAT_5181f8c0 = 0x300;
    FUN_518036a1((int *)&DAT_5181f88c,0x5181e138,param_1);
    (*DAT_5181fb2c)(param_1);
  }
  else if (param_2 == 0) {
    FUN_5180380a((int *)&DAT_5181f88c);
  }
  return 1;
}


