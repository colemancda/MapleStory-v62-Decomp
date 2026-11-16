/* FUN_50c0aefe - 0x50c0aefe in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __thiscall FUN_50c0aefe(void *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x24) == 0) {
    iVar1 = FUN_50c0ba1d(*(void **)((int)this + 0x2c),param_1);
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  else {
    uVar2 = *(undefined4 *)(**(int **)((int)this + 0x28) + 4 + param_1 * 8);
  }
  return uVar2;
}


