/* FUN_5180880c - 0x5180880c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined8 __fastcall FUN_5180880c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (*DAT_5181fa94)(*(undefined4 *)(param_1 + 0x10),&local_c);
  if (iVar1 == -1) {
    iVar2 = (*DAT_5181fad4)();
    if (iVar2 != 0) {
      local_8 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
    }
  }
  return CONCAT44(local_c,iVar1);
}


