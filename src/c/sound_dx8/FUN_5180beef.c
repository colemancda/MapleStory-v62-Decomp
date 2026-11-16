/* FUN_5180beef - 0x5180beef in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5180beef(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_518017b5();
  iVar2 = *(int *)((int)this + 0x54);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  piVar1 = (int *)((int)this + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  return param_1;
}


