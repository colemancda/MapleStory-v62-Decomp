/* FUN_1000c040 - 0x1000c040 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_1000c040(void *this,int param_1)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c7f0;
  local_10 = ExceptionList;
  uVar1 = *(uint *)((int)this + 8);
  local_14 = &stack0xffffffd8;
  if ((uVar1 & 0x14) != 0) {
    local_18 = 5;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd8;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_18,(ThrowInfo *)&DAT_1000eff8);
  }
  if (((uVar1 & 4) == 0) && (param_1 != 0)) {
    ExceptionList = &local_10;
    *(uint *)((int)this + 8) = uVar1 | 8;
    local_8 = 0;
    (**(code **)(**(int **)((int)this + 4) + 0x10))(1);
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xfffffffd;
  }
  ExceptionList = local_10;
  return;
}


