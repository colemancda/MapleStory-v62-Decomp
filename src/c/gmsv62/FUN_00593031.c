/* FUN_00593031 - 0x00593031 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00593031(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0xcc) + 0x140) == 0) {
    FUN_00566401(**(undefined4 **)(param_1 + 0xd8),param_2);
    FUN_0059305f();
  }
  return;
}


