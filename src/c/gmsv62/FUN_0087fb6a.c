/* FUN_0087fb6a - 0x0087fb6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087fb6a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  
  sVar1 = FUN_00886c74(param_1,param_2);
  if (sVar1 == -1) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


