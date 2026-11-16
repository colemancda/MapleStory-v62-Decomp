/* FUN_5000a332 - 0x5000a332 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall
FUN_5000a332(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  *(undefined4 *)((int)this + 0x2010) = param_2;
  *(undefined4 *)((int)this + 0x2014) = param_3;
  *(uint *)((int)this + 0x200c) = param_1;
  *(undefined4 *)((int)this + 0x2018) = param_4;
  if (param_1 < 0x101) {
    *(void **)((int)this + 0x2004) = this;
    *(int *)((int)this + 0x2008) = (int)this + 0x1000;
  }
  else {
    *(undefined4 *)((int)this + 0x2000) = 1;
    puVar1 = FUN_500023f6();
    *(uint **)((int)this + 0x2004) = puVar1;
    puVar1 = FUN_500023f6();
    *(uint **)((int)this + 0x2008) = puVar1;
  }
  memset(*(void **)((int)this + 0x2004),0,param_1 << 4);
  memset(*(void **)((int)this + 0x2008),0,param_1 << 4);
  return;
}


