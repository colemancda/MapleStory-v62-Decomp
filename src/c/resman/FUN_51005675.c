/* FUN_51005675 - 0x51005675 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int * __fastcall FUN_51005675(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_51005828(iVar1,param_1,&DAT_51009238);
  }
  return local_8;
}


