/* FUN_0070634b - 0x0070634b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0070634b(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + *(int *)(param_1 + 8);
    for (; piVar2 < piVar1; piVar2 = piVar2 + 1) {
      if (*piVar2 != 0) {
        return *piVar2;
      }
    }
  }
  return 0;
}


