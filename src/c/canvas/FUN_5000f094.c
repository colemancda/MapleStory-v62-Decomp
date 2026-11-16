/* FUN_5000f094 - 0x5000f094 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_5000f094(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int _Numerator;
  div_t dVar3;
  
  iVar2 = *param_1;
  *(int *)this = iVar2;
  piVar1 = (int *)param_1[1];
  *(int **)((int)this + 4) = piVar1;
  iVar2 = abs(iVar2 - *piVar1);
  *(int *)((int)this + 8) = iVar2;
  iVar2 = abs(param_2 - *(int *)(*(int *)((int)this + 4) + 4));
  _Numerator = *(int *)((int)this + 8) / 2;
  *(int *)((int)this + 0xc) = iVar2;
  *(int *)((int)this + 0x10) = _Numerator;
  *(uint *)((int)this + 0x14) = ((*(int *)this <= **(int **)((int)this + 4)) - 1 & 0xfffffffe) + 1;
  dVar3 = div(_Numerator,iVar2);
  iVar2 = dVar3.quot;
  if (*(int *)((int)this + 0x14) < 1) {
    iVar2 = -iVar2;
  }
  *(int *)this = *(int *)this + iVar2;
  *(int *)((int)this + 0x10) = dVar3.rem;
  return;
}


