/* FUN_00435151 - 0x00435151 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00435151(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0040294d(-(uint)(**(int **)(param_1 + 0x10) != 0) & **(int **)(param_1 + 0x10) - 0x10U);
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    **(undefined4 **)(param_1 + 0x10) = (*(undefined4 **)(param_1 + 0x10))[*(int *)(param_1 + 0xc)];
    *(undefined4 *)
     ((-(uint)(**(int **)(param_1 + 0x10) != 0) & **(int **)(param_1 + 0x10) - 0x10U) + 4) = 0;
    iVar2 = 0;
    do {
      iVar2 = FUN_0043ad50(iVar2);
    } while (iVar2 != 0);
  }
  return;
}


