/* FUN_004459fe - 0x004459fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004459fe(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_8 [4];
  
  FUN_00879c20(local_8,param_1,4);
  FUN_00879c20(param_1,param_2,4);
  FUN_00879c20(param_2,local_8,4);
  return;
}


