/* FUN_00732f96 - 0x00732f96 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00732f96(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044dddc(param_1);
  if ((((iVar1 != 0x2d) && (iVar1 != 0x2e)) && (iVar1 != 0x2f)) && (iVar1 != 0x31)) {
    return 0;
  }
  return 1;
}


