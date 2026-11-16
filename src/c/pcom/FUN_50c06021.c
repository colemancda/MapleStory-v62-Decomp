/* FUN_50c06021 - 0x50c06021 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * __thiscall FUN_50c06021(void *this,int param_1,char param_2)

{
  uint *puVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  if ((param_2 == '\0') || (param_1 == 0)) {
    *(int *)this = param_1;
  }
  else {
    puVar1 = FUN_50c06063(param_1,*(uint *)(param_1 + -4));
    *(uint **)this = puVar1;
    if (puVar1 == (uint *)0x0) {
      FUN_50c101c4(0x8007000e);
    }
  }
  return this;
}


