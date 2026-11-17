/* FUN_00819128 - 0x00819128 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00819128(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00819864(&param_1,0);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00819626();
    *puVar2 = param_1;
  }
  return;
}


