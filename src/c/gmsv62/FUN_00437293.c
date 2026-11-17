/* FUN_00437293 - 0x00437293 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00437293(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_c [8];
  
  FUN_00879c20(local_c,param_1,8);
  FUN_00879c20(param_1,param_2,8);
  FUN_00879c20(param_2,local_c,8);
  return;
}


