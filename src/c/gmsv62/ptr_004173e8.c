/* ptr_004173e8 - 0x004173e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004173e8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  FUN_00402aba();
  *param_3 = *(undefined4 *)(unaff_EDI + 0x14);
  *(undefined4 **)(unaff_EDI + 0x14) = param_3;
  piVar1 = unaff_ESI + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *unaff_ESI = 0;
  }
  return;
}


