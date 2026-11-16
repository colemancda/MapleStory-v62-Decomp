/* FUN_51809434 - 0x51809434 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __thiscall FUN_51809434(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x18))(this,&local_8);
  if (iVar1 < 0) {
    FUN_5180e99e(iVar1,this,&DAT_5181f518);
  }
  FUN_51809252();
  return param_1;
}


