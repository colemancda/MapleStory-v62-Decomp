/* FUN_00614a21 - 0x00614a21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00614a21(void)

{
  int iVar1;
  
  iVar1 = FUN_00429303();
  if (iVar1 != 0) {
    iVar1 = FUN_004f162d();
    return iVar1 == 0xc764ec0;
  }
  return false;
}


