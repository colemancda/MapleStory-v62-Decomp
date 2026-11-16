/* FUN_50c04fe5 - 0x50c04fe5 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * __thiscall FUN_50c04fe5(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_50c026fc();
  iVar2 = *(int *)((int)this + 0x2c);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  piVar1 = (int *)((int)this + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return param_1;
}


