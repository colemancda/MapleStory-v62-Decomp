/* FUN_00402adf - 0x00402adf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00402adf(undefined4 *param_1)

{
  int *piVar1;
  
  param_1 = (undefined4 *)*param_1;
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *param_1 = 0;
  }
  return;
}


