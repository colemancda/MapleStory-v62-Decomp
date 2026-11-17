/* FUN_007a9222 - 0x007a9222 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a9222(void)

{
  uint uVar1;
  
  FUN_00429303();
  uVar1 = FUN_004f162d();
  if ((uVar1 != 0xc764ec0) && (uVar1 / 1000000 != 0xd1)) {
    return 0;
  }
  return 1;
}


