/* FUN_5180dfe5 - 0x5180dfe5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_5180dfe5(void *this,int param_1)

{
  int iVar1;
  
  if (((*(int *)((int)this + 0x6c) == 0) || (param_1 == 0)) &&
     ((*(int *)((int)this + 0x6c) != 0 || (param_1 != 0)))) {
    iVar1 = (*DAT_5181fadc)();
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x6c) = 0;
      *(int *)((int)this + 100) = *(int *)((int)this + 100) + (iVar1 - *(int *)((int)this + 0x68));
    }
    else {
      *(undefined4 *)((int)this + 0x6c) = 1;
    }
    *(int *)((int)this + 0x68) = iVar1;
  }
  return;
}


