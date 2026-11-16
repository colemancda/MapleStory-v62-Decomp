/* FUN_51805b70 - 0x51805b70 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_51805b70(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  FUN_518022c9(this);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = FUN_518019c0();
    *(uint **)this = puVar2 + 1;
    *puVar2 = param_1;
    iVar1 = *(int *)this;
  }
  return iVar1;
}


