/* FUN_004653c5 - 0x004653c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004653c5(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_2);
  FUN_0045eedf(param_1,param_2,sVar1);
  return param_1;
}


