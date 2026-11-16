/* FUN_50c0bb50 - 0x50c0bb50 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint __thiscall FUN_50c0bb50(void *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  FUN_50c040d2(this);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = FUN_50c025fb();
    *(uint **)this = puVar2 + 1;
    *puVar2 = param_1;
    uVar1 = *(uint *)this;
    uVar3 = param_1 * 8 + uVar1;
    for (; uVar1 < uVar3; uVar1 = uVar1 + 8) {
      FUN_50c0c914(uVar1);
    }
    uVar1 = *(uint *)this;
  }
  return uVar1;
}


