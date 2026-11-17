/* FUN_0087a28c - 0x0087a28c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


LPWSTR FUN_0087a28c(undefined4 param_1,LPWSTR param_2,undefined4 param_3)

{
  CHAR local_2c [40];
  
  FUN_0087b8a1(param_1,local_2c,param_3);
  MultiByteToWideChar(0,1,local_2c,-1,param_2,0x28);
  return param_2;
}


