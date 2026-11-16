/* FUN_50c0c9f1 - 0x50c0c9f1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0c9f1(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  FUN_50c026fc();
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x14) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


