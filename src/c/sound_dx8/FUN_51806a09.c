/* FUN_51806a09 - 0x51806a09 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * __fastcall FUN_51806a09(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_5180e99e(iVar1,param_1,&DAT_5181f518);
  }
  return local_8;
}


