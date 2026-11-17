/* FUN_0085c95d - 0x0085c95d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0085c95d(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0085cc85(param_2);
  if (-1 < iVar2) {
    if (param_3 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x2c74) + 8);
    }
    else {
      if (param_3 != 1) {
        return 0;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x2c74) + 0xc);
    }
    puVar1 = (uint *)(iVar3 + iVar2 * 4);
    if ((*puVar1 == 0) == param_4) {
      *puVar1 = param_4;
      return 1;
    }
  }
  return 0;
}


