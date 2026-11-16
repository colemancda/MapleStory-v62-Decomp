/* FUN_50c086b1 - 0x50c086b1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * __fastcall FUN_50c086b1(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_50c101d2(iVar1,param_1,&DAT_50c174a8);
  }
  return local_8;
}


