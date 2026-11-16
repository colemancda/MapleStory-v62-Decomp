/* FUN_508086a4 - 0x508086a4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_508086a4(void *this,int *param_1)

{
  int *piVar1;
  
  for (piVar1 = param_1; piVar1 < param_1 + 2; piVar1 = piVar1 + 2) {
    FUN_50808606(piVar1);
  }
  memmove(param_1,param_1 + 2,
          ((*(int *)(*(int *)this + -4) * 8 - (int)param_1) + -8 + *(int *)this >> 3) << 3);
  *(int *)(*(int *)this + -4) = *(int *)(*(int *)this + -4) + -1;
  return;
}


