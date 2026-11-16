/* FUN_1000c110 - 0x1000c110 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_1000c110(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000c800;
  local_10 = ExceptionList;
  uVar1 = *(uint *)((int)this + 8);
  local_14 = &stack0xffffffd8;
  ExceptionList = &local_10;
  *(uint *)((int)this + 8) = uVar1 | 2;
  local_8 = 0;
  if ((uVar1 & 0x14) != 0) {
    local_18 = 5;
    local_14 = &stack0xffffffd8;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_18,(ThrowInfo *)&DAT_1000eff8);
  }
  *(uint *)((int)this + 8) = uVar1 | 10;
  (**(code **)(**(int **)((int)this + 4) + 0x18))(param_1,param_2);
  ExceptionList = local_10;
  return;
}


