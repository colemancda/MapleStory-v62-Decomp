/* FUN_0078bf44 - 0x0078bf44 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0078bf44(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  if ((-1 < param_2) && (param_2 < 3)) {
    if (param_3 == 0) {
      if (param_2 + 1 < 3) {
        param_2 = (param_2 + 1) * 8;
        do {
          iVar2 = param_2 + *(int *)(param_1 + 0x1744);
          FUN_0079d8ab();
          FUN_0079d8c8();
          param_2 = param_2 + 8;
          *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(iVar2 + 4);
        } while (param_2 < 0x18);
      }
      FUN_0079d8c8();
    }
    else {
      local_8 = 2;
      if (param_2 < 2) {
        do {
          iVar2 = *(int *)(param_1 + 0x1744) + local_8 * 8;
          FUN_0079d8ab();
          FUN_0079d8c8();
          local_8 = local_8 + -1;
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + -4);
        } while (param_2 < local_8);
      }
      FUN_0079d5c0(param_3);
    }
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1744) + 4 + iVar2 * 8);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x8c) = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}


