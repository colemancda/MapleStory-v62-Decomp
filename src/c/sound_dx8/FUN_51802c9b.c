/* FUN_51802c9b - 0x51802c9b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_51802c9b(void *this,undefined4 param_1,int *param_2,char param_3)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(int **)((int)this + 8) = param_2;
  *(undefined ***)this = &PTR_FUN_51819f44;
  if ((param_2 != (int *)0x0) && (param_3 != '\0')) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return this;
}


