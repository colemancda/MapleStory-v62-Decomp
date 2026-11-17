/* FUN_004f5ef8 - 0x004f5ef8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined * FUN_004f5ef8(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_004f5e7e(param_1);
  if ((iVar1 < 1) || (6 < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_008ead3c + iVar1 * 4;
  }
  return puVar2;
}


