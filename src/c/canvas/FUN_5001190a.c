/* FUN_5001190a - 0x5001190a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __thiscall FUN_5001190a(void *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_5001186e(this);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = FUN_500023f6();
    *(uint **)this = puVar2 + 1;
    *puVar2 = param_1;
    puVar4 = *(undefined4 **)this;
    puVar3 = puVar4 + param_1 * 9;
    for (; puVar4 < puVar3; puVar4 = puVar4 + 9) {
      FUN_50011d72(puVar4);
    }
    uVar1 = *(uint *)this;
  }
  return uVar1;
}


