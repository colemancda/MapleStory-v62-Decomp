/* FUN_50011428 - 0x50011428 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_50011428(void *this,int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  param_2 = 0;
  do {
    if (uVar4 == 0) {
      return param_2;
    }
    uVar3 = param_4;
    if (uVar4 <= param_4) {
      uVar3 = uVar4;
    }
    uVar1 = (**(code **)(*param_1 + 0x14))(param_3,uVar3);
    if (uVar1 != 0) {
      uVar2 = (**(code **)(*(int *)this + 0x18))(param_3,uVar1);
      if (uVar1 != uVar2) {
        param_3 = 0x26;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&param_3,(ThrowInfo *)&DAT_50016da8);
      }
      if (uVar4 != 0xffffffff) {
        uVar4 = uVar4 - uVar1;
      }
      param_2 = param_2 + uVar1;
    }
  } while (uVar3 <= uVar1);
  return param_2;
}


