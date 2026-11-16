/* FUN_50c02d38 - 0x50c02d38 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c02d38(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_50c026fc();
  InterlockedDecrement(param_1 + 1);
  iVar2 = param_1[1];
  piVar1 = param_1 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[5] = 0;
  }
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_50c02ccd();
      FUN_50c02783(&DAT_50c21310,param_1);
    }
  }
  else if (iVar2 == 1) {
    InterlockedDecrement(&DAT_50c1ca34);
  }
  return iVar2;
}


