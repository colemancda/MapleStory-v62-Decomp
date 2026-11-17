/* FUN_007053e6 - 0x007053e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007053e6(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x5fc) == 0) ||
     ((*(int *)(param_1 + 0x578) != 0 && (*(int *)(*(int *)(param_1 + 0x578) + -4) != 0)))) {
    if ((*(int *)(param_1 + 0x57c) == 0) || (*(int *)(param_1 + 0x5fc) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x57c) = uVar1;
    *(undefined4 *)(param_1 + 0x570) = uVar1;
    FUN_00815de9();
    FUN_00705381();
  }
  return;
}


