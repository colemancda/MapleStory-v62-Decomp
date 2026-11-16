/* FUN_1000bf90 - 0x1000bf90 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_1000bf90(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c7e0;
  local_10 = ExceptionList;
  uVar1 = *(uint *)((int)this + 8);
  local_14 = &stack0xffffffd4;
  if ((uVar1 & 0x14) != 0) {
    local_18 = 5;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd4;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_18,(ThrowInfo *)&DAT_1000eff8);
  }
  ExceptionList = &local_10;
  *(uint *)((int)this + 8) = uVar1 | 2;
  local_8 = 0;
  if ((uVar1 & 0x14) != 0) {
    local_1c = 5;
    local_14 = &stack0xffffffd4;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1c,(ThrowInfo *)&DAT_1000eff8);
  }
  *(uint *)((int)this + 8) = uVar1 | 10;
  (**(code **)(**(int **)((int)this + 4) + 8))(param_1,param_2);
  ExceptionList = local_10;
  return;
}


