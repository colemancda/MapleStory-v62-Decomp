/* FUN_007a9265 - 0x007a9265 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a9265(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_007b46c2();
  *puVar1 = param_1;
  puVar1[2] = param_2;
  puVar1[1] = param_3;
  return;
}


