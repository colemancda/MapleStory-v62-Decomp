/* FUN_50c0539d - 0x50c0539d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0539d(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_50c1084c(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_50c0569d();
  *(undefined4 *)(iVar1 + 4) = 1;
  *(uint *)(param_1 + 4) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  return;
}


