/* FUN_50c07dec - 0x50c07dec in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c07dec(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(int *)((int)this + 0x10) = param_1;
  }
  uVar1 = 0xffffffff;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = (uint)(*(int *)((int)this + 8) * *(int *)((int)this + 0x10)) >> 7;
  }
  *(uint *)((int)this + 0x14) = uVar1;
  return;
}


