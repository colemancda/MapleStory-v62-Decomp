/* FUN_50c0976f - 0x50c0976f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * __fastcall FUN_50c0976f(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_50c101d2(iVar1,param_1,&DAT_50c174c8);
  }
  return local_8;
}


