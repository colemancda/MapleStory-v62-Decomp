/* FUN_00507198 - 0x00507198 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00507198(void)

{
  uint uVar1;
  
  uVar1 = FUN_0042452b();
  if (DAT_00978358 != 0) {
    *(uint *)(DAT_00978358 + 0x16fc) = uVar1 & 0xff;
    FUN_007b02be();
  }
  return;
}


