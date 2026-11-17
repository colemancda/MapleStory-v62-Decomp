/* FUN_00524eae - 0x00524eae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00524eae(undefined4 *param_1)

{
  int *piVar1;
  
  param_1 = (undefined4 *)*param_1;
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = param_1 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *param_1 = 0;
    }
  }
  return;
}


