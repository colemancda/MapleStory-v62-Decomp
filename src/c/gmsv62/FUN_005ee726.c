/* FUN_005ee726 - 0x005ee726 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005ee726(int param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_0087a024(*param_2,5);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + (uVar1 % *(uint *)(param_1 + 8)) * 4);
    if (iVar2 != 0) {
      do {
        if (*(short *)(iVar2 + 8) == *param_2) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != 0);
    }
  }
  return 0;
}


