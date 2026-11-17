/* FUN_00865f61 - 0x00865f61 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00865f61(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = param_2;
  local_8 = 0xc65053f2;
  FUN_00865eb5(&param_2,param_2,4,&local_8);
  FUN_00865eb5(param_1,iVar1 + 4,param_2,&local_8);
  *(undefined1 *)(param_2 + param_1) = 0;
  return param_1;
}


