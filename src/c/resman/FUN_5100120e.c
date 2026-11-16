/* FUN_5100120e - 0x5100120e in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int FUN_5100120e(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_510011e9();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x14))(1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_510092e4);
  }
  return iVar2;
}


