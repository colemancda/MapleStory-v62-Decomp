/* FUN_508012c6 - 0x508012c6 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508012c6(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_508012a1();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_50801236();
      FUN_50803c7e(&DAT_5081e9e0,param_1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_5081e594);
  }
  return iVar2;
}


