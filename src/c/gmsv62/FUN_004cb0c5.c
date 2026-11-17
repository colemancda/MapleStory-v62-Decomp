/* FUN_004cb0c5 - 0x004cb0c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb0c5(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 1.0;
  dVar1 = _DAT_008e9978;
  if (param_3 != 0) {
    dVar2 = _DAT_008ea340;
    dVar1 = _DAT_008e8ab8;
  }
  if (param_2 < param_1) {
    FUN_0087af44((((double)param_2 + dVar1) - (double)param_1) * _DAT_008ea338);
    __ftol();
    dVar2 = dVar2 * _DAT_008e8a98;
  }
  __ftol(dVar2);
  return;
}


