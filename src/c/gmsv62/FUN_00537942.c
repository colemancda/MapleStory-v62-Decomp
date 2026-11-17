/* FUN_00537942 - 0x00537942 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00537942(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 / 1000000;
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) &&
     ((param_1 / 10000 != 0xcf && (param_1 / 10000 != 0xe9)))) {
    return 0;
  }
  return 1;
}


