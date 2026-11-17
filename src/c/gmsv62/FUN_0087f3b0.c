/* FUN_0087f3b0 - 0x0087f3b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087f3b0(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_0087a3a0(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}


