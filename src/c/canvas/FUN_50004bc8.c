/* FUN_50004bc8 - 0x50004bc8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_50004bc8(void *this,undefined4 param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x34) = param_1;
  (*DAT_50081dec)(param_1,0x18,(int)this + 0x38);
  if (*(short *)((int)this + 0x4a) == 0x20) {
    uVar1 = 2;
  }
  else {
    uVar1 = (uint)(*(short *)((int)this + 0x4a) == 0x10);
  }
  FUN_50004c13(this,uVar1,0,*(int *)((int)this + 0x3c),*(int *)((int)this + 0x40),
               *(int *)((int)this + 0x4c),*(undefined4 *)((int)this + 0x44));
  return;
}


