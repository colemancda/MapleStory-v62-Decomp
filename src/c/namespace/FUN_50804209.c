/* FUN_50804209 - 0x50804209 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50804209(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + piVar2[-1] * 2;
    for (; piVar2 < piVar1; piVar2 = piVar2 + 2) {
      FUN_50808606(piVar2);
    }
    FUN_50803c7e(&DAT_5081e9e0,(undefined4 *)(*param_1 + -4));
    *param_1 = 0;
  }
  return;
}


