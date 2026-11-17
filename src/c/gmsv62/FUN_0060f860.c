/* FUN_0060f860 - 0x0060f860 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0060f860(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  uVar1 = param_2;
  param_2 = *(int *)(*(int *)(param_1 + 0x230) + 0x38);
  iVar3 = 0xc4;
  do {
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1ac))) {
      local_10 = iVar3 + -0x27;
      local_14 = 7;
      local_c = 0xcd;
      local_8 = iVar3;
      iVar2 = (*DAT_0097b57c)(&local_14,uVar1,param_3);
      if (iVar2 != 0) {
        return param_2;
      }
    }
    param_2 = param_2 + 1;
    iVar3 = iVar3 + 0x28;
  } while (iVar3 < 0x18c);
  return -1;
}


