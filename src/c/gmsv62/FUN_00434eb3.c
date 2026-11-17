/* FUN_00434eb3 - 0x00434eb3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00434eb3(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = FUN_00434f04(*param_2);
    for (iVar3 = *(int *)(*(int *)(param_1 + 4) + (uVar2 % *(uint *)(param_1 + 8)) * 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      cVar1 = FUN_00434f2c(*param_2);
      if (cVar1 != '\0') {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(iVar3 + 0xc);
        }
        return iVar3 + 0xc;
      }
    }
  }
  return 0;
}


