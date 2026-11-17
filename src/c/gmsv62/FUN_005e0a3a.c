/* FUN_005e0a3a - 0x005e0a3a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005e0a3a(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00414d4e(*param_2);
    for (iVar3 = *(int *)(*(int *)(param_1 + 4) + (uVar1 % *(uint *)(param_1 + 8)) * 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = FUN_0045ec92(param_2);
      if (iVar2 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(iVar3 + 0xc);
        }
        return iVar3 + 0xc;
      }
    }
  }
  return 0;
}


