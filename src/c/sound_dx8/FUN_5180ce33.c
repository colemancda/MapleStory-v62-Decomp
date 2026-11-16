/* FUN_5180ce33 - 0x5180ce33 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_5180ce33(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_51810efb(this,param_1);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_5180e990(iVar1);
    }
  }
  return this;
}


