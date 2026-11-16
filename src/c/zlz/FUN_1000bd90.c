/* FUN_1000bd90 - 0x1000bd90 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int __thiscall FUN_1000bd90(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000c7a8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_18 = (undefined4 *)FUN_1000ba40(DAT_10017010);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    *local_18 = &PTR_FUN_1000ee60;
  }
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  param_2 = 0;
  do {
    if (uVar4 == 0) break;
    uVar3 = 0x10000;
    if (uVar4 < 0x10001) {
      uVar3 = uVar4;
    }
    uVar1 = (**(code **)(*param_1 + 0x14))(local_18 + 1,uVar3);
    if (uVar1 != 0) {
      uVar2 = (**(code **)(*(int *)this + 0x18))(local_18 + 1,uVar1);
      if (uVar1 != uVar2) {
        param_2 = 0x26;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&param_2,(ThrowInfo *)&DAT_1000eff8);
      }
      if (uVar4 != 0xffffffff) {
        uVar4 = uVar4 - uVar1;
      }
      param_2 = param_2 + uVar1;
    }
  } while (uVar3 <= uVar1);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)*local_18)(1);
  }
  ExceptionList = pvStack_c;
  return param_2;
}


