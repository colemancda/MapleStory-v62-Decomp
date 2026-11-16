/* FUN_51802286 - 0x51802286 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


bool __thiscall FUN_51802286(void *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = (*DAT_5181f9e4)();
    if (*(int *)((int)this + 4) == iVar1) {
      bVar2 = false;
    }
    else {
      iVar1 = (*DAT_5181fa1c)(*(undefined4 *)((int)this + 8),param_1);
      if (iVar1 != 0) {
        (*DAT_5181fc0c)(0x20);
      }
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}


