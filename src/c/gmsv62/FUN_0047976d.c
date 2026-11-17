/* FUN_0047976d - 0x0047976d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0047976d(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x78) = param_2;
    FUN_008161f1(0);
  }
  return;
}


