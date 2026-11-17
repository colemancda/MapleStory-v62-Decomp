/* FUN_0087a25a - 0x0087a25a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


LPWSTR FUN_0087a25a(undefined4 param_1,LPWSTR param_2,undefined4 param_3)

{
  CHAR local_18 [20];
  
  FUN_0087b818(param_1,local_18,param_3);
  MultiByteToWideChar(0,1,local_18,-1,param_2,0x14);
  return param_2;
}


