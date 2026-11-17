/* FUN_007a5449 - 0x007a5449 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a5449(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e2932(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_005e297d(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_005e29cf(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


