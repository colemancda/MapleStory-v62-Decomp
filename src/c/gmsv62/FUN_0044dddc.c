/* FUN_0044dddc - 0x0044dddc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0044dddc(int param_1)

{
  int iVar1;
  
  if ((param_1 / 1000000 == 1) && (iVar1 = (param_1 / 10000) % 100, 0x1d < iVar1)) {
    if (iVar1 < 0x22) {
      return iVar1;
    }
    if ((0x24 < iVar1) && (iVar1 < 0x32)) {
      return iVar1;
    }
  }
  return 0;
}


