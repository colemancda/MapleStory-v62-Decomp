/* FUN_5180eecc - 0x5180eecc in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __cdecl FUN_5180eecc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = 3;
  if (param_1 == 3) {
    if (param_2 == 3) {
      iVar1 = 0;
    }
    else if (param_2 == 2) {
      iVar1 = 1;
    }
    else {
      iVar1 = (-(uint)(param_2 != 1) & 3) + 2;
    }
    goto LAB_5180ef22;
  }
  if ((param_1 == 2) || (param_1 == 0)) {
    if (param_2 == 3) goto LAB_5180ef22;
    if ((param_2 == 2) || (param_2 == 1)) {
      iVar1 = 4;
      goto LAB_5180ef22;
    }
  }
  iVar1 = 5;
LAB_5180ef22:
  if (*(int *)(&DAT_51818160 + (iVar1 + param_3 * 6) * 4) != -1) {
    return;
  }
  FUN_51802c9b(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
}


