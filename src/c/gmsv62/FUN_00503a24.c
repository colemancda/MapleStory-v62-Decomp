/* FUN_00503a24 - 0x00503a24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00503a24(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004cdc34();
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  return;
}


