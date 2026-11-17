/* FUN_006d2e81 - 0x006d2e81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006d2e81(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x74) < 1) {
    *(undefined4 *)(param_1 + 0x74) = 0x1e;
  }
  return;
}


