/* FUN_5100181b - 0x5100181b in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * __thiscall FUN_5100181b(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_510013e8();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_510061a8;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_5100619c;
  InterlockedIncrement(&DAT_510092e4);
  return this;
}


