/* FUN_00413f52 - 0x00413f52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00413f52(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00413fab(param_2);
    for (iVar3 = *(int *)(*(int *)(param_1 + 4) + (uVar1 % *(uint *)(param_1 + 8)) * 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = _memcmp((void *)(iVar3 + 8),param_2,0xc);
      if (iVar2 == 0) {
        if (param_3 != 0) {
          FUN_0041283f(iVar3 + 0x14);
        }
        return iVar3 + 0x14;
      }
    }
  }
  return 0;
}


