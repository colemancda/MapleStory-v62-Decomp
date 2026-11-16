/* FUN_500028fd - 0x500028fd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_500028fd(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_5001da80 = &DAT_500182d8;
    _DAT_5001da30 = &DAT_5001da40;
    _DAT_5001da40 = 0x54;
    _DAT_5001da74 = 0x300;
    FUN_500042ac((int *)&DAT_5001da40,0x50018248,param_1);
    (*DAT_50081c4c)(param_1);
  }
  else if (param_2 == 0) {
    FUN_50004415((int *)&DAT_5001da40);
  }
  return 1;
}


