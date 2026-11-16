/* FUN_50801014 - 0x50801014 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50801014(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_5081e5c0 = &DAT_5081d158;
    _DAT_5081e570 = &DAT_5081e580;
    _DAT_5081e580 = 0x54;
    _DAT_5081e5b4 = 0x300;
    FUN_50806153((int *)&DAT_5081e580,0x5081d060,param_1);
    (*DAT_5081e75c)(param_1);
  }
  else if (param_2 == 0) {
    FUN_508062ad((int *)&DAT_5081e580);
  }
  return 1;
}


