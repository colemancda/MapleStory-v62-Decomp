/* FUN_5100462d - 0x5100462d in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


short * __thiscall FUN_5100462d(void *this,short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_51005067(this,param_1);
  if (iVar1 < 0) {
    FUN_5100581a(iVar1);
  }
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 10);
  return this;
}


