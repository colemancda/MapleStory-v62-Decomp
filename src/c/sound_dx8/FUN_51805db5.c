/* FUN_51805db5 - 0x51805db5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined8 __cdecl FUN_51805db5(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (*DAT_5181fa98)(param_1,0,&local_8,1,0);
  if (iVar1 == -1) {
    iVar2 = (*DAT_5181fad4)();
    if (iVar2 != 0) {
      param_1 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
  }
  return CONCAT44(local_8,iVar1);
}


