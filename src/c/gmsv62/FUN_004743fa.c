/* FUN_004743fa - 0x004743fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004743fa(int *param_1,int *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3;
  if (param_3 == 0) {
    uVar4 = 0xffffffff;
  }
  param_3 = 0;
  do {
    if (uVar4 == 0) {
      return param_3;
    }
    uVar3 = param_5;
    if (uVar4 <= param_5) {
      uVar3 = uVar4;
    }
    uVar1 = (**(code **)(*param_2 + 0x14))(param_4,uVar3);
    if (uVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_4,uVar1);
      if (uVar1 != uVar2) {
        param_4 = 0x26;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&param_4,&DAT_008f9b80);
      }
      if (uVar4 != 0xffffffff) {
        uVar4 = uVar4 - uVar1;
      }
      param_3 = param_3 + uVar1;
    }
  } while (uVar3 <= uVar1);
  return param_3;
}


