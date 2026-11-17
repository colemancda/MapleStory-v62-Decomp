/* FUN_00790008 - 0x00790008 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00790008(void)

{
  int iVar1;
  
  iVar1 = FUN_0043f79a();
  if (iVar1 != 0) {
    iVar1 = FUN_0043f6fe();
    if (-1 < iVar1) {
      iVar1 = FUN_0043f6fe();
      if (iVar1 == 0x15) {
        return 1;
      }
    }
  }
  return 0;
}


