/* FUN_006e487c - 0x006e487c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006e487c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xab0);
  do {
    if (*piVar2 != 0) {
      FUN_006e950a(iVar1);
      *piVar2 = 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 3);
  FUN_008162ff();
  return;
}


