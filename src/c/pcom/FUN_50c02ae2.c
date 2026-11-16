/* FUN_50c02ae2 - 0x50c02ae2 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50c02ae2(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_50c1ca60 = &DAT_50c17308;
    _DAT_50c1ca10 = &DAT_50c1ca20;
    _DAT_50c1ca20 = 0x54;
    _DAT_50c1ca54 = 0x300;
    FUN_50c04840((int *)&DAT_50c1ca20,0x50c17248,param_1);
    (*DAT_50c2108c)(param_1);
  }
  else if (param_2 == 0) {
    FUN_50c049a9((int *)&DAT_50c1ca20);
  }
  return 1;
}


