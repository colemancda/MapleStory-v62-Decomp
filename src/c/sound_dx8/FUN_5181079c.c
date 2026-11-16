/* FUN_5181079c - 0x5181079c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_5181079c(void *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_518110e4();
  if (iVar1 < 0) {
    FUN_51802c9b(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_5181a2e0);
  }
  iVar1 = FUN_51811a25(param_1,&local_8);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_5180e990(iVar1);
  }
  return local_8;
}


