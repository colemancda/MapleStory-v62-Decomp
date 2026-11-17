/* FUN_004e80ba - 0x004e80ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e80ba(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004f1b56(0xffffffff);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}


