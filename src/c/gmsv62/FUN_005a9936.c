/* FUN_005a9936 - 0x005a9936 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005a9936(void)

{
  int iVar1;
  
  iVar1 = FUN_0043f6fe();
  if (iVar1 != 0x4c) {
    iVar1 = FUN_0043f6fe();
    if (iVar1 != 0x59) {
      return 0;
    }
  }
  return 1;
}


