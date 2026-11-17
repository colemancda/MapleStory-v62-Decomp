/* FUN_00403925 - 0x00403925 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00403925(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  FUN_00402aba();
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = param_2;
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


