/* FUN_5180e99e - 0x5180e99e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180e99e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)*param_2)(param_2,&DAT_5181f838,&param_2);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_3);
      (**(code **)(*param_2 + 8))(param_2);
      if (iVar1 == 0) {
        iVar1 = Ordinal_200(0,&local_8);
        if (iVar1 != 0) {
          local_8 = (int *)0x0;
        }
      }
    }
  }
  FUN_5180e9ff(param_1,local_8);
  return;
}


