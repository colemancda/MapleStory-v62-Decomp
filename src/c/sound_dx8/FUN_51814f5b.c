/* FUN_51814f5b - 0x51814f5b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * __cdecl FUN_51814f5b(int *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_5181538d();
  if (iVar1 < 0) {
    FUN_51802c9b(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_5181a2e0);
  }
  FUN_51804af0(param_1,local_8);
  return local_8;
}


