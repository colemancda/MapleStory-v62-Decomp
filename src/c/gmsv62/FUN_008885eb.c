/* FUN_008885eb - 0x008885eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008885eb(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 != 0) && (local_98.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}


