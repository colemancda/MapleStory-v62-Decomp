/* FUN_508024ef - 0x508024ef in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_508024ef(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  FUN_508012a1();
  LVar3 = InterlockedDecrement((LONG *)(param_1 + 4));
  if (LVar3 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0;
  }
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar2 = 0;
  }
  return;
}


