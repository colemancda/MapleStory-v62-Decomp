/* FUN_008642d3 - 0x008642d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008642d3(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_004cd642(0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


