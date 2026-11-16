/* ptr_1000b2c0 - 0x1000b2c0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int __thiscall ptr_1000b2c0(int *param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = FUN_1000b870(param_1 + 0x14);
  uVar5 = param_3;
  if (param_3 == 0) {
    uVar5 = 0xffffffff;
  }
  param_3 = 0;
  do {
    if (uVar5 == 0) {
      return param_3;
    }
    uVar4 = 0x10000;
    if (uVar5 < 0x10001) {
      uVar4 = uVar5;
    }
    uVar2 = (**(code **)(*param_2 + 0x14))(puVar1,uVar4);
    if (uVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x18))(puVar1,uVar2);
      if (uVar2 != uVar3) {
        param_3 = 0x26;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&param_3,(ThrowInfo *)&DAT_1000eff8);
      }
      if (uVar5 != 0xffffffff) {
        uVar5 = uVar5 - uVar2;
      }
      param_3 = param_3 + uVar2;
    }
  } while (uVar4 <= uVar2);
  return param_3;
}


