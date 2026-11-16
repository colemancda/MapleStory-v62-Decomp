/* FUN_5140128f - 0x5140128f in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_5140128f(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_5140126a();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_514011ff();
      FUN_5140256c(&DAT_51411a90,param_1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_51411574);
  }
  return iVar2;
}


