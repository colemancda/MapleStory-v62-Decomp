/* FUN_51401000 - 0x51401000 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_51401000(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_514115a0 = &DAT_51410110;
    _DAT_51411550 = &DAT_51411560;
    _DAT_51411560 = 0x54;
    _DAT_51411594 = 0x300;
    FUN_51402f21((int *)&DAT_51411560,0x51410050,param_1);
    (*DAT_5141173c)(param_1);
  }
  else if (param_2 == 0) {
    FUN_5140308a((int *)&DAT_51411560);
  }
  return 1;
}


