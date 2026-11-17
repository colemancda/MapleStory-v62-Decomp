/* FUN_005e4404 - 0x005e4404 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005e4404(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     ((int)((-(uint)(*(int *)(param_1 + 0x40) != 0) & 0xfffffe0c) + 1000) <=
      *(int *)(param_1 + 0x58))) {
    if ((*(int *)(param_1 + 0x40) != 0) || (param_2 != 0)) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (uVar2 != 0) {
      do {
        if (0 < *(short *)(uVar2 + 0xc)) break;
        iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 8);
        uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      } while (uVar2 != 0);
      if (uVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


