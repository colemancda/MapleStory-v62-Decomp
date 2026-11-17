/* ptr_007b3b79 - 0x007b3b79 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool ptr_007b3b79(void)

{
  int iVar1;
  
  iVar1 = FUN_00413367(DAT_00978368 + 0x20b4,*(undefined4 *)(DAT_00978368 + 0x20bc));
  return iVar1 / 100 == 5;
}


