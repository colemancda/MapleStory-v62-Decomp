/* FUN_0044582d - 0x0044582d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0044582d(int param_1)

{
  int local_8;
  
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x434) = 1;
  *(undefined4 *)(param_1 + 0x430) = 1;
  FUN_00402f41(&local_8);
  if (local_8 != 0) {
    FUN_004030b1();
  }
  return;
}


