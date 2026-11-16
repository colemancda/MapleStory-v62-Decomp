/* FUN_5080a780 - 0x5080a780 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080a780(void *this,int *param_1,IBinding *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x38);
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  FUN_508052b4(piVar1);
  *piVar1 = *param_1;
  FUN_5080a81b(piVar1);
  FUN_508052b4((undefined4 *)((int)this + 0x3c));
  *(undefined4 *)((int)this + 0x3c) = 0;
  FUN_5080b159((int)this + 0x18);
  FUN_5080a64c(*(void **)((int)this + 0x1c),param_3,param_2);
  iVar2 = FUN_508037a7((short *)((int)this + 0x28));
  if (iVar2 < 0) {
    FUN_5080dfed(iVar2);
  }
  if ((*(byte *)(*(int *)((int)this + 0x1c) + 8) & 0x40) == 0) {
    *(undefined4 *)((int)this + 0x40) = 0;
    iVar2 = (int)this + 0x5c;
  }
  else {
    iVar2 = *(int *)(*(int *)((int)this + 0x1c) + 0x10);
    *(int *)((int)this + 0x40) = iVar2;
    *(int *)((int)this + 0x44) = iVar2;
    *(int *)((int)this + 0x48) = *(int *)(*(int *)((int)this + 0x1c) + 0x14) + iVar2;
    iVar2 = (int)this + 0x54;
  }
  *(int *)((int)this + 0x4c) = iVar2;
  return;
}


