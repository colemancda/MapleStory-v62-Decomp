/* FUN_00730200 - 0x00730200 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00730200(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x570) == 0) && (*(int *)(param_1 + 0x5d4) == 0)) {
    piVar1 = (int *)(param_1 + 0x5d8);
    *piVar1 = *piVar1 + -0x1e;
    if ((*piVar1 < 0) && (*(int *)(param_1 + 0x5b4) != 0)) {
      FUN_00815de9();
      FUN_007330a4();
    }
  }
  return;
}


