/* FUN_00865f1d - 0x00865f1d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_00865f1d(int param_1,char *param_2)

{
  size_t local_c [2];
  
  local_c[0] = _strlen(param_2);
  local_c[1] = 0xc65053f2;
  FUN_00865e4d(param_1,local_c,4,local_c + 1);
  FUN_00865e4d(param_1 + 4,param_2,local_c[0],local_c + 1);
  return;
}


