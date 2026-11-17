/* FUN_004ad45a - 0x004ad45a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004ad45a(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (1 < *(int *)(param_1 + 0x3c)) {
    iVar1 = *(int *)(param_1 + 0x38);
    iVar2 = __ftol();
    *(int *)(param_1 + 0x38) = iVar2 + *(int *)(param_1 + 0x5c);
    FUN_004ad01d();
    FUN_004b3daf();
    if (*(int *)(param_1 + 0x38) != iVar1) {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))
                (*(undefined4 *)(param_1 + 0x14),0x130,*(int *)(param_1 + 0x38));
    }
  }
  return;
}


