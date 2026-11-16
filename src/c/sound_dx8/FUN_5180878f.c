/* FUN_5180878f - 0x5180878f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined8 __cdecl
FUN_5180878f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = param_3;
  iVar1 = (*DAT_5181fa98)(param_1,param_2,&local_8,param_4,param_2);
  if (iVar1 == -1) {
    iVar2 = (*DAT_5181fad4)();
    if (iVar2 != 0) {
      param_4 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_4,(ThrowInfo *)&DAT_5181b518);
    }
  }
  return CONCAT44(local_8,iVar1);
}


