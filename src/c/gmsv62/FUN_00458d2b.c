/* FUN_00458d2b - 0x00458d2b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00458d2b(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00458d57(5,*(undefined4 *)(param_1 + 0x1b + param_2 * 8),
                       *(undefined4 *)(param_1 + 0x1f + param_2 * 8));
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3f7) + 4 + iVar1 * 8);
  }
  return uVar2;
}


