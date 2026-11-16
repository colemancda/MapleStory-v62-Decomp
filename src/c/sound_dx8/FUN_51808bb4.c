/* FUN_51808bb4 - 0x51808bb4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51808bb4(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = (*DAT_5181fa70)(*(int *)(param_1 + 0x18),0);
    if (iVar1 == 0) {
      local_8 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
    }
  }
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    iVar1 = (*DAT_5181fa90)(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      local_8 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
    }
  }
  return;
}


