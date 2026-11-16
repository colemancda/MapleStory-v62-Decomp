/* FUN_50c0edfb - 0x50c0edfb in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0edfb(void *this,undefined4 param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_50c101c4(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x1c))(*(int **)((int)this + 0x1c),param_1);
  if (iVar1 < 0) {
    FUN_50c061b4(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50c14eb0);
  }
  return;
}


