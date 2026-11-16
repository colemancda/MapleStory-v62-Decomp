/* FUN_508122ab - 0x508122ab in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __fastcall FUN_508122ab(int param_1)

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


