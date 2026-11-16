/* FUN_504055ff - 0x504055ff in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_504055ff(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)this + -4);
  }
  if (param_1 == -1) {
    param_1 = iVar1;
  }
  FUN_50405fbb(this,iVar1 + 1,2);
  memmove((void *)((param_1 + 1) * 0x5c + *(int *)this),(void *)(param_1 * 0x5c + *(int *)this),
          iVar1 * 0x5c + param_1 * -0x5c);
  return;
}


