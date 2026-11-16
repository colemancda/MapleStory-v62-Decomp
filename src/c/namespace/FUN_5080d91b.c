/* FUN_5080d91b - 0x5080d91b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080d91b(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_5080dfed(0x80004003);
  }
  piVar1 = *(int **)((int)this + 0x20);
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1);
  if (iVar2 < 0) {
    FUN_5080dffb(iVar2,piVar1,&DAT_5081e4e0);
  }
  return;
}


