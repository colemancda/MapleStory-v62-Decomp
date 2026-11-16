/* FUN_51001005 - 0x51001005 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_51001005(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_51009310 = &DAT_51008098;
    _DAT_510092c0 = &DAT_510092d0;
    _DAT_510092d0 = 0x54;
    _DAT_51009304 = 0x300;
    FUN_51002081((int *)&DAT_510092d0,0x51008040,param_1);
    (*DAT_5100956c)(param_1);
  }
  else if (param_2 == 0) {
    FUN_510021ea((int *)&DAT_510092d0);
  }
  return 1;
}


