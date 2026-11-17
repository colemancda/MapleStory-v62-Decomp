/* FUN_00495f05 - 0x00495f05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00495f05(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 >> 1 < param_2) {
    for (uVar1 = *(uint *)(param_1 + 0x10); (uVar2 = uVar2 - 1, param_2 < uVar2 && (uVar1 != 0));
        uVar1 = *(int *)(uVar1 - 8) + 0x10U & -(uint)(*(int *)(uVar1 - 8) != 0)) {
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar1 = 0;
    if (param_2 != 0) {
      do {
        if (uVar2 == 0) {
          return;
        }
        uVar1 = uVar1 + 1;
        uVar2 = *(int *)(uVar2 - 0xc) + 0x10U & -(uint)(*(int *)(uVar2 - 0xc) != 0);
      } while (uVar1 < param_2);
    }
  }
  return;
}


