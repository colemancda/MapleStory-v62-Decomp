/* FUN_5180ef56 - 0x5180ef56 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __cdecl FUN_5180ef56(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  if (param_1 == 3) {
    iVar1 = 0;
  }
  else if (param_1 == 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = (param_1 != 0) + 2;
  }
  if (*(int *)(&DAT_518182e0 + (iVar1 + param_2 * 4) * 4) == -1) {
    FUN_51802c9b(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
  }
  return;
}


