/* FUN_0087a2f0 - 0x0087a2f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


LPWSTR FUN_0087a2f0(undefined4 param_1,undefined4 param_2,LPWSTR param_3,undefined4 param_4)

{
  CHAR local_54 [80];
  
  FUN_0087b8e6(param_1,param_2,local_54,param_4);
  MultiByteToWideChar(0,1,local_54,-1,param_3,0x50);
  return param_3;
}


