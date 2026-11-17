/* FUN_00576395 - 0x00576395 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00576395(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00576edb();
  if ((-1 < param_1 + iVar1 * -3) && (iVar1 = FUN_00576edb(), param_1 + iVar1 * -3 < 9)) {
    return 1;
  }
  return 0;
}


