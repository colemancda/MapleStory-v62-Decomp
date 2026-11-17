/* FUN_008618a2 - 0x008618a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_008618a2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_3;
  iVar2 = param_2;
  if (param_4 <= param_2) {
    param_2 = param_4;
    param_4 = iVar2;
  }
  if (param_3 < param_5) {
    param_3 = param_5;
    param_5 = iVar1;
  }
  uVar3 = 1;
  iVar2 = 0x1c;
  while( true ) {
    if ((*(int *)(param_1 + 0xa8) == 0) || (*(uint *)(*(int *)(param_1 + 0xa8) + -4) <= uVar3)) {
      return 0;
    }
    iVar1 = iVar2 + *(int *)(param_1 + 0xa8);
    if ((param_2 + -10 <= *(int *)(iVar1 + 0xc)) &&
       (((*(int *)(iVar1 + 0xc) <= param_4 + 10 && (param_5 <= *(int *)(iVar1 + 0x14))) &&
        (*(int *)(iVar1 + 0x10) <= param_3)))) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x1c;
  }
  return iVar1;
}


